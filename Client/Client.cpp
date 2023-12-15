
#include <boost/asio/bind_executor.hpp>
#include <boost/asio/co_spawn.hpp>
#include <boost/asio/experimental/parallel_group.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/stream_file.hpp>
#include <boost/asio/write.hpp>
#include <boost/asio/thread_pool.hpp>
#include <boost/asio/detached.hpp>
#include <boost/asio/this_coro.hpp>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>

#include <agrpc/asio_grpc.hpp>

#include <grpc++/grpc++.h>
#include <boost/asio/deadline_timer.hpp>

#include "protos/Files.grpc.pb.h"
#include "protos/User.grpc.pb.h"
#include "protos/Transfer.grpc.pb.h"
#include "FileSystem.hpp"

namespace asio = boost::asio;

template <auto PrepareAsync>
using AwaitableClientRPC = boost::asio::use_awaitable_t<>::as_default_on_t<agrpc::ClientRPC<PrepareAsync>>;

std::shared_ptr<grpc::Channel> Channel;
std::unique_ptr<UserFileSystemInfo::Stub> UserFileSystemInfoStub;

void wait(const boost::system::error_code& /*e*/)
{
}

asio::awaitable<void> make_fs_result(agrpc::GrpcContext &grpc_context, ::UserFileSystemInfo::Stub &stub);
asio::awaitable<void> make_pings(agrpc::GrpcContext &grpc_context, ::UserAuthorization::Stub &stub)
{
    using RPC = AwaitableClientRPC<&::UserAuthorization::Stub::PrepareAsyncPing>;

    while (true)
    {
        RPC rpc{grpc_context};
        rpc.context().set_deadline(std::chrono::system_clock::now() + std::chrono::seconds(5));

        RPC::Response response;
        RPC::Request request;

        const bool start_ok = co_await rpc.start(stub, response);
        const bool read_ok = co_await rpc.read_initial_metadata();
        const bool write_ok = co_await rpc.write(request);
        if (!start_ok || !read_ok || !write_ok)
        {
            std::cout << "Notgood\n";
            break;
        }
        const grpc::Status status = co_await rpc.finish();

        if (!status.ok())
        {
            std::cout << "Notgood\n";
            break;
        }
    }
    std::cout << "Don ping" << std::endl;
}

asio::awaitable<void> make_request(agrpc::GrpcContext &grpc_context, ::UserAuthorization::Stub &stub)
{
    using RPC = AwaitableClientRPC<&::UserAuthorization::Stub::PrepareAsyncConnect>;
    grpc::ClientContext client_context;
    client_context.set_deadline(std::chrono::system_clock::now() + std::chrono::seconds(5));
    RPC::Request request;
    FFilesystem fs;
    request.set_login("Login");
    request.set_password("Nice");
    RPC::Response response;
    const auto status = co_await RPC::request(grpc_context, stub, client_context, request, response);
    std::cout << response.login() << std::endl;

    asio::co_spawn(grpc_context, make_fs_result(grpc_context, *UserFileSystemInfoStub), boost::asio::detached);
    asio::co_spawn(grpc_context, make_pings(grpc_context, stub), boost::asio::detached);
    co_return;
}

asio::awaitable<void> make_fs_result(agrpc::GrpcContext &grpc_context, ::UserFileSystemInfo::Stub &stub)
{
    using RPC = AwaitableClientRPC<&::UserFileSystemInfo::Stub::PrepareAsyncSendFileInfo>;
    grpc::ClientContext client_context;
    client_context.set_deadline(std::chrono::system_clock::now() + std::chrono::seconds(5));
    RPC::Request request;
    FFilesystem fs;
    auto Files = fs.GetFiles();
    for (const auto &File : Files)
    {
        request.add_filepath(File);
    }
    RPC::Response response;
    const auto status = co_await RPC::request(grpc_context, stub, client_context, request, response);
    co_return;
}

int main()
{
    ::grpc::CompletionQueue cq;
    Channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
    ::grpc::ClientContext clientContext;
    std::unique_ptr<UserAuthorization::Stub> stub_ = UserAuthorization::NewStub(Channel);
    UserFileSystemInfoStub = ::UserFileSystemInfo::NewStub(Channel);

    agrpc::GrpcContext grpc_context;

    asio::co_spawn(grpc_context, make_request(grpc_context, *stub_), boost::asio::detached);
    grpc_context.run();
}