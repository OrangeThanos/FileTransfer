// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protos/Files.proto
#ifndef GRPC_protos_2fFiles_2eproto__INCLUDED
#define GRPC_protos_2fFiles_2eproto__INCLUDED

#include "protos/Files.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class UserFileSystemInfo final {
 public:
  static constexpr char const* service_full_name() {
    return "UserFileSystemInfo";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SendFileInfo(::grpc::ClientContext* context, const ::Directory& request, ::Directory* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Directory>> AsyncSendFileInfo(::grpc::ClientContext* context, const ::Directory& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Directory>>(AsyncSendFileInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Directory>> PrepareAsyncSendFileInfo(::grpc::ClientContext* context, const ::Directory& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Directory>>(PrepareAsyncSendFileInfoRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void SendFileInfo(::grpc::ClientContext* context, const ::Directory* request, ::Directory* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendFileInfo(::grpc::ClientContext* context, const ::Directory* request, ::Directory* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Directory>* AsyncSendFileInfoRaw(::grpc::ClientContext* context, const ::Directory& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Directory>* PrepareAsyncSendFileInfoRaw(::grpc::ClientContext* context, const ::Directory& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status SendFileInfo(::grpc::ClientContext* context, const ::Directory& request, ::Directory* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Directory>> AsyncSendFileInfo(::grpc::ClientContext* context, const ::Directory& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Directory>>(AsyncSendFileInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Directory>> PrepareAsyncSendFileInfo(::grpc::ClientContext* context, const ::Directory& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Directory>>(PrepareAsyncSendFileInfoRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SendFileInfo(::grpc::ClientContext* context, const ::Directory* request, ::Directory* response, std::function<void(::grpc::Status)>) override;
      void SendFileInfo(::grpc::ClientContext* context, const ::Directory* request, ::Directory* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::Directory>* AsyncSendFileInfoRaw(::grpc::ClientContext* context, const ::Directory& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Directory>* PrepareAsyncSendFileInfoRaw(::grpc::ClientContext* context, const ::Directory& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendFileInfo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SendFileInfo(::grpc::ServerContext* context, const ::Directory* request, ::Directory* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SendFileInfo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendFileInfo(::grpc::ServerContext* /*context*/, const ::Directory* /*request*/, ::Directory* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendFileInfo(::grpc::ServerContext* context, ::Directory* request, ::grpc::ServerAsyncResponseWriter< ::Directory>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendFileInfo<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SendFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SendFileInfo() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::Directory, ::Directory>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::Directory* request, ::Directory* response) { return this->SendFileInfo(context, request, response); }));}
    void SetMessageAllocatorFor_SendFileInfo(
        ::grpc::MessageAllocator< ::Directory, ::Directory>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::Directory, ::Directory>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SendFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendFileInfo(::grpc::ServerContext* /*context*/, const ::Directory* /*request*/, ::Directory* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendFileInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::Directory* /*request*/, ::Directory* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SendFileInfo<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SendFileInfo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendFileInfo(::grpc::ServerContext* /*context*/, const ::Directory* /*request*/, ::Directory* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SendFileInfo() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendFileInfo(::grpc::ServerContext* /*context*/, const ::Directory* /*request*/, ::Directory* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendFileInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SendFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SendFileInfo() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SendFileInfo(context, request, response); }));
    }
    ~WithRawCallbackMethod_SendFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendFileInfo(::grpc::ServerContext* /*context*/, const ::Directory* /*request*/, ::Directory* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendFileInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendFileInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SendFileInfo() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::Directory, ::Directory>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::Directory, ::Directory>* streamer) {
                       return this->StreamedSendFileInfo(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SendFileInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendFileInfo(::grpc::ServerContext* /*context*/, const ::Directory* /*request*/, ::Directory* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendFileInfo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Directory,::Directory>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendFileInfo<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendFileInfo<Service > StreamedService;
};


#endif  // GRPC_protos_2fFiles_2eproto__INCLUDED
