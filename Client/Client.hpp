#include <memory>
#include <grpc++/grpc++.h>
#include "BaseHandler.hpp"

class Client : public BaseHandler
{
public:
    explicit Client(std::shared_ptr<::grpc::Channel> channel, ::grpc::ClientContext* InContext) 
        : stub_(UserAuthorization::NewStub(channel))
        , context(InContext)
    {
    }

    int Handle() override {
        return 0;
    }

    static void StaticLoginCallback(BaseHandler* pHandler, UserData* pUserData) {
        (void)pHandler;
        (void)pUserData;
        std::cout<<reinterpret_cast<UserInfo*>(pUserData->pUserData)->login()<<std::endl;
    }

    void LogIn(::grpc::CompletionQueue* cq)
    {
        UserLogin request;
        request.set_login("stan");
        request.set_password("haslo");

        // Context for the client. It could be used to convey extra information to
        // the server and/or tweak certain RPC behaviors.

        // Storage for the status of the RPC upon completion.
        ::grpc::Status status;

        std::unique_ptr<::grpc::ClientAsyncResponseReader<::UserInfo>> rpc(
            stub_->AsyncConnect(context, request, cq));

        UserInfo *Info = new UserInfo;
        auto user = new UserData;
        user->pHandler = StaticLoginCallback;
        user->pUserData = Info; 
        user->pThis = this;
        rpc->Finish(Info, &user->status, (void *)user);
    }

private:
    std::unique_ptr<UserAuthorization::Stub> stub_;
    ::grpc::ClientContext* context;
};
