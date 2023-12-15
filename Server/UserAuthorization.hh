#pragma once
#include <protos/User.grpc.pb.h>

class UserAuthorizationService : public ::UserAuthorization::AsyncService {
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::UserLogin* request, ::UserInfo* response) override;
public:
    int GGH;
};