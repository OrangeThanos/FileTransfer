#include <protos/User.pb.h>

#include "UserAuthorization.hh"

::grpc::Status UserAuthorizationService::Connect(::grpc::ServerContext *context, const ::UserLogin *request, ::UserInfo *response)
{
    (void)context;
    response->set_login(request->login());
    std::cout<<request->login()<<" "<<context->peer()<<std::endl;
    

    return ::grpc::Status::OK;
}