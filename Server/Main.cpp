#include <iostream>
#include <optional>
#include <protos/Person.pb.h>
#include <protos/User.pb.h>
#include <protos/Files.grpc.pb.h>
#include <protos/Files.pb.h>

#include <boost/asio/bind_executor.hpp>
#include <boost/asio/co_spawn.hpp>
#include <boost/asio/experimental/parallel_group.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/stream_file.hpp>
#include <boost/asio/write.hpp>
#include <boost/asio/thread_pool.hpp>
#include <boost/asio/detached.hpp>
#include <boost/asio/experimental/channel.hpp>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>

#include <agrpc/asio_grpc.hpp>

#include "UserAuthorization.hh"
#include "protos/Transfer.grpc.pb.h"

namespace asio = boost::asio;

template <auto RequestRPC>
using AwaitableServerRPC = boost::asio::use_awaitable_t<>::as_default_on_t<agrpc::ServerRPC<RequestRPC>>;

inline constexpr asio::use_awaitable_t<::agrpc::GrpcExecutor> USE_AWAITABLE{};
using ConnectRPC = agrpc::ServerRPC<&::UserAuthorizationService::RequestConnect>;

std::map<std::string, std::string> UserMap;
std::map<std::string, ::FileTransferRequestInit> TransferMap;

asio::awaitable<void> UserAuthorization_Connect(ConnectRPC &ptr, ConnectRPC::Request &request)
{
    UserInfo response;

    agrpc::Alarm alarm{ptr.get_executor()};

    std::cout << ptr.context().peer() << ": " << request.login() << std::endl;
    response.set_login(request.login());
    UserMap.emplace(ptr.context().peer(), request.login());
    co_await ptr.finish(response, ::grpc::Status::OK, asio::use_awaitable);
    co_return;
}

using FileInfoRPC = agrpc::ServerRPC<&::UserFileSystemInfo::AsyncService::RequestSendFileInfo>;

asio::awaitable<void> FileSystem_Get(FileInfoRPC &ptr, FileInfoRPC::Request &request)
{
    Directory response;

    for (int Index = 0; Index < request.filepath_size(); Index++)
    {
        std::cout << request.filepath(Index) << std::endl;
        response.add_filepath(request.filepath(Index));
    }

    std::cout << ptr.context().peer() << std::endl;

    co_await ptr.finish(response, ::grpc::Status::OK, asio::use_awaitable);
    co_return;
};

using TransferLListenerRPC = AwaitableServerRPC<&::FIleTransfer::AsyncService::RequestFileTransferListener>;
asio::awaitable<void> FileTransfer_Listener(TransferLListenerRPC &ptr, TransferLListenerRPC::Request &)
{
    FileTransferRequestInit response;

    auto It = UserMap.find(ptr.context().peer());
    std::string CurrentUser = It->second;
    while (true)
    {
        for (const auto &Transfer : TransferMap)
        {
            if (Transfer.second.srcuser().login() == CurrentUser)
            {
                response = Transfer.second;
                co_await ptr.write(response);
            }
            if (Transfer.second.dstuser().login() == CurrentUser)
            {
                response = Transfer.second;
                co_await ptr.write(response);
            }
        }
    }
    co_await ptr.finish(::grpc::Status::OK);
};

using TransferUploadRPC = AwaitableServerRPC<&::FIleTransfer::AsyncService::RequestFileTransferProcessUpload>;
asio::awaitable<void> FileTransfer_Upload(TransferUploadRPC &ptr, TransferUploadRPC::Request &)
{
    FileTransferRequestInit response;

    auto It = UserMap.find(ptr.context().peer());
    std::string CurrentUser = It->second;
    while (true)
    {
        for (const auto &Transfer : TransferMap)
        {
            if (Transfer.second.srcuser().login() == CurrentUser)
            {
                response = Transfer.second;
                co_await ptr.write(response);
            }
            if (Transfer.second.dstuser().login() == CurrentUser)
            {
                response = Transfer.second;
                co_await ptr.write(response);
            }
        }
    }
    co_await ptr.finish(::grpc::Status::OK);
};

using TransferDownloadRPC = AwaitableServerRPC<&::FIleTransfer::AsyncService::RequestFileTransferProcessDownload>;
asio::awaitable<void> FileTransfer_Download(TransferDownloadRPC &ptr, TransferDownloadRPC::Request &)
{
    FileTransferRequestInit response;

    auto It = UserMap.find(ptr.context().peer());
    std::string CurrentUser = It->second;
    while (true)
    {
        for (const auto &Transfer : TransferMap)
        {
            if (Transfer.second.srcuser().login() == CurrentUser)
            {
                response = Transfer.second;
                co_await ptr.write(response);
            }
            if (Transfer.second.dstuser().login() == CurrentUser)
            {
                response = Transfer.second;
                co_await ptr.write(response);
            }
        }
    }
    co_await ptr.finish(::grpc::Status::OK);
};

using PingRPC = AwaitableServerRPC<&::UserAuthorization::AsyncService::RequestPing>;
asio::awaitable<void> UserAuthorization_Ping(PingRPC &rpc)
{
    if (!co_await rpc.send_initial_metadata())
    {
        co_return;
    }

    bool read_ok;
    do
    {
        PingRPC::Request request;
        // Read from the client stream until the client has signaled `writes_done`.
        read_ok = co_await rpc.read(request);
    } while (read_ok);

    PingRPC::Response response;
    co_await rpc.finish(response, grpc::Status::OK);
}

using Channel = asio::experimental::channel<void(boost::system::error_code, FileInfoRPC::Request)>;

int main()
{
    std::string server_address("0.0.0.0:50051");

    UserAuthorization::AsyncService service;
    UserFileSystemInfo::AsyncService service2;

    ::grpc::ServerBuilder builder;
    agrpc::GrpcContext grpc_context{builder.AddCompletionQueue()};

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    builder.RegisterService(&service2);

    std::unique_ptr<::grpc::Server> server = builder.BuildAndStart();

    asio::io_context io_context{1};
    std::optional guard{asio::require(io_context.get_executor(), asio::execution::outstanding_work_t::tracked)};

    try
    {
        agrpc::register_awaitable_rpc_handler<ConnectRPC>(
            grpc_context,
            service,
            UserAuthorization_Connect,
            asio::detached);
        agrpc::register_awaitable_rpc_handler<PingRPC>(
            grpc_context,
            service,
            UserAuthorization_Ping,
            asio::detached);

        agrpc::register_awaitable_rpc_handler<FileInfoRPC>(
            grpc_context,
            service2,
            FileSystem_Get,
            asio::detached);

        grpc_context.run();
    }
    catch (std::exception &Exc)
    {
        std::cout << Exc.what() << std::endl;
    }
}