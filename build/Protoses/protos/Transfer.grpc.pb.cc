// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protos/Transfer.proto

#include "protos/Transfer.pb.h"
#include "protos/Transfer.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* FIleTransfer_method_names[] = {
  "/FIleTransfer/FileTransferProcess",
  "/FIleTransfer/FIleTransferProgress",
};

std::unique_ptr< FIleTransfer::Stub> FIleTransfer::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FIleTransfer::Stub> stub(new FIleTransfer::Stub(channel, options));
  return stub;
}

FIleTransfer::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_FileTransferProcess_(FIleTransfer_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_FIleTransferProgress_(FIleTransfer_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>* FIleTransfer::Stub::FileTransferProcessRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::FileTransferPart, ::google::protobuf::Empty>::Create(channel_.get(), rpcmethod_FileTransferProcess_, context);
}

void FIleTransfer::Stub::async::FileTransferProcess(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::FileTransferPart,::google::protobuf::Empty>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::FileTransferPart,::google::protobuf::Empty>::Create(stub_->channel_.get(), stub_->rpcmethod_FileTransferProcess_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>* FIleTransfer::Stub::AsyncFileTransferProcessRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::FileTransferPart, ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_FileTransferProcess_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>* FIleTransfer::Stub::PrepareAsyncFileTransferProcessRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::FileTransferPart, ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_FileTransferProcess_, context, false, nullptr);
}

::grpc::ClientReader< ::FileTransferProgress>* FIleTransfer::Stub::FIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request) {
  return ::grpc::internal::ClientReaderFactory< ::FileTransferProgress>::Create(channel_.get(), rpcmethod_FIleTransferProgress_, context, request);
}

void FIleTransfer::Stub::async::FIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit* request, ::grpc::ClientReadReactor< ::FileTransferProgress>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::FileTransferProgress>::Create(stub_->channel_.get(), stub_->rpcmethod_FIleTransferProgress_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::FileTransferProgress>* FIleTransfer::Stub::AsyncFIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::FileTransferProgress>::Create(channel_.get(), cq, rpcmethod_FIleTransferProgress_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::FileTransferProgress>* FIleTransfer::Stub::PrepareAsyncFIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::FileTransferProgress>::Create(channel_.get(), cq, rpcmethod_FIleTransferProgress_, context, request, false, nullptr);
}

FIleTransfer::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FIleTransfer_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< FIleTransfer::Service, ::FileTransferPart, ::google::protobuf::Empty>(
          [](FIleTransfer::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::google::protobuf::Empty,
             ::FileTransferPart>* stream) {
               return service->FileTransferProcess(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FIleTransfer_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< FIleTransfer::Service, ::FileTransferRequestInit, ::FileTransferProgress>(
          [](FIleTransfer::Service* service,
             ::grpc::ServerContext* ctx,
             const ::FileTransferRequestInit* req,
             ::grpc::ServerWriter<::FileTransferProgress>* writer) {
               return service->FIleTransferProgress(ctx, req, writer);
             }, this)));
}

FIleTransfer::Service::~Service() {
}

::grpc::Status FIleTransfer::Service::FileTransferProcess(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::protobuf::Empty, ::FileTransferPart>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FIleTransfer::Service::FIleTransferProgress(::grpc::ServerContext* context, const ::FileTransferRequestInit* request, ::grpc::ServerWriter< ::FileTransferProgress>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

