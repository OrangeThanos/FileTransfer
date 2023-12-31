// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protos/Transfer.proto
#ifndef GRPC_protos_2fTransfer_2eproto__INCLUDED
#define GRPC_protos_2fTransfer_2eproto__INCLUDED

#include "protos/Transfer.pb.h"

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

class FIleTransfer final {
 public:
  static constexpr char const* service_full_name() {
    return "FIleTransfer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>> FileTransferProcess(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>>(FileTransferProcessRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>> AsyncFileTransferProcess(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>>(AsyncFileTransferProcessRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>> PrepareAsyncFileTransferProcess(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>>(PrepareAsyncFileTransferProcessRaw(context, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::FileTransferProgress>> FIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::FileTransferProgress>>(FIleTransferProgressRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::FileTransferProgress>> AsyncFIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::FileTransferProgress>>(AsyncFIleTransferProgressRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::FileTransferProgress>> PrepareAsyncFIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::FileTransferProgress>>(PrepareAsyncFIleTransferProgressRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void FileTransferProcess(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::FileTransferPart,::google::protobuf::Empty>* reactor) = 0;
      virtual void FIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit* request, ::grpc::ClientReadReactor< ::FileTransferProgress>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>* FileTransferProcessRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>* AsyncFileTransferProcessRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::FileTransferPart, ::google::protobuf::Empty>* PrepareAsyncFileTransferProcessRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::FileTransferProgress>* FIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::FileTransferProgress>* AsyncFIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::FileTransferProgress>* PrepareAsyncFIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>> FileTransferProcess(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>>(FileTransferProcessRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>> AsyncFileTransferProcess(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>>(AsyncFileTransferProcessRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>> PrepareAsyncFileTransferProcess(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>>(PrepareAsyncFileTransferProcessRaw(context, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::FileTransferProgress>> FIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::FileTransferProgress>>(FIleTransferProgressRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::FileTransferProgress>> AsyncFIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::FileTransferProgress>>(AsyncFIleTransferProgressRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::FileTransferProgress>> PrepareAsyncFIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::FileTransferProgress>>(PrepareAsyncFIleTransferProgressRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void FileTransferProcess(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::FileTransferPart,::google::protobuf::Empty>* reactor) override;
      void FIleTransferProgress(::grpc::ClientContext* context, const ::FileTransferRequestInit* request, ::grpc::ClientReadReactor< ::FileTransferProgress>* reactor) override;
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
    ::grpc::ClientReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>* FileTransferProcessRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>* AsyncFileTransferProcessRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::FileTransferPart, ::google::protobuf::Empty>* PrepareAsyncFileTransferProcessRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::FileTransferProgress>* FIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request) override;
    ::grpc::ClientAsyncReader< ::FileTransferProgress>* AsyncFIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::FileTransferProgress>* PrepareAsyncFIleTransferProgressRaw(::grpc::ClientContext* context, const ::FileTransferRequestInit& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_FileTransferProcess_;
    const ::grpc::internal::RpcMethod rpcmethod_FIleTransferProgress_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status FileTransferProcess(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::protobuf::Empty, ::FileTransferPart>* stream);
    virtual ::grpc::Status FIleTransferProgress(::grpc::ServerContext* context, const ::FileTransferRequestInit* request, ::grpc::ServerWriter< ::FileTransferProgress>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_FileTransferProcess : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_FileTransferProcess() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_FileTransferProcess() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FileTransferProcess(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::google::protobuf::Empty, ::FileTransferPart>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFileTransferProcess(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::google::protobuf::Empty, ::FileTransferPart>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_FIleTransferProgress : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_FIleTransferProgress() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_FIleTransferProgress() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FIleTransferProgress(::grpc::ServerContext* /*context*/, const ::FileTransferRequestInit* /*request*/, ::grpc::ServerWriter< ::FileTransferProgress>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFIleTransferProgress(::grpc::ServerContext* context, ::FileTransferRequestInit* request, ::grpc::ServerAsyncWriter< ::FileTransferProgress>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_FileTransferProcess<WithAsyncMethod_FIleTransferProgress<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_FileTransferProcess : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_FileTransferProcess() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::FileTransferPart, ::google::protobuf::Empty>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->FileTransferProcess(context); }));
    }
    ~WithCallbackMethod_FileTransferProcess() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FileTransferProcess(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::google::protobuf::Empty, ::FileTransferPart>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::FileTransferPart, ::google::protobuf::Empty>* FileTransferProcess(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_FIleTransferProgress : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_FIleTransferProgress() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::FileTransferRequestInit, ::FileTransferProgress>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::FileTransferRequestInit* request) { return this->FIleTransferProgress(context, request); }));
    }
    ~WithCallbackMethod_FIleTransferProgress() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FIleTransferProgress(::grpc::ServerContext* /*context*/, const ::FileTransferRequestInit* /*request*/, ::grpc::ServerWriter< ::FileTransferProgress>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::FileTransferProgress>* FIleTransferProgress(
      ::grpc::CallbackServerContext* /*context*/, const ::FileTransferRequestInit* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_FileTransferProcess<WithCallbackMethod_FIleTransferProgress<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_FileTransferProcess : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_FileTransferProcess() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_FileTransferProcess() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FileTransferProcess(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::google::protobuf::Empty, ::FileTransferPart>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_FIleTransferProgress : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_FIleTransferProgress() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_FIleTransferProgress() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FIleTransferProgress(::grpc::ServerContext* /*context*/, const ::FileTransferRequestInit* /*request*/, ::grpc::ServerWriter< ::FileTransferProgress>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_FileTransferProcess : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_FileTransferProcess() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_FileTransferProcess() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FileTransferProcess(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::google::protobuf::Empty, ::FileTransferPart>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFileTransferProcess(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_FIleTransferProgress : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_FIleTransferProgress() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_FIleTransferProgress() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FIleTransferProgress(::grpc::ServerContext* /*context*/, const ::FileTransferRequestInit* /*request*/, ::grpc::ServerWriter< ::FileTransferProgress>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFIleTransferProgress(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_FileTransferProcess : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_FileTransferProcess() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->FileTransferProcess(context); }));
    }
    ~WithRawCallbackMethod_FileTransferProcess() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FileTransferProcess(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::google::protobuf::Empty, ::FileTransferPart>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* FileTransferProcess(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_FIleTransferProgress : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_FIleTransferProgress() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->FIleTransferProgress(context, request); }));
    }
    ~WithRawCallbackMethod_FIleTransferProgress() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FIleTransferProgress(::grpc::ServerContext* /*context*/, const ::FileTransferRequestInit* /*request*/, ::grpc::ServerWriter< ::FileTransferProgress>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* FIleTransferProgress(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_FIleTransferProgress : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_FIleTransferProgress() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::FileTransferRequestInit, ::FileTransferProgress>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::FileTransferRequestInit, ::FileTransferProgress>* streamer) {
                       return this->StreamedFIleTransferProgress(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_FIleTransferProgress() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status FIleTransferProgress(::grpc::ServerContext* /*context*/, const ::FileTransferRequestInit* /*request*/, ::grpc::ServerWriter< ::FileTransferProgress>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedFIleTransferProgress(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::FileTransferRequestInit,::FileTransferProgress>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_FIleTransferProgress<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_FIleTransferProgress<Service > StreamedService;
};


#endif  // GRPC_protos_2fTransfer_2eproto__INCLUDED
