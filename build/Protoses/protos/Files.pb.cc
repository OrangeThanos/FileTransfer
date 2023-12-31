// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/Files.proto

#include "protos/Files.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR File::File(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.creationdate_)*/nullptr
  , /*decltype(_impl_.filesize_)*/uint64_t{0u}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FileDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FileDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FileDefaultTypeInternal() {}
  union {
    File _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FileDefaultTypeInternal _File_default_instance_;
PROTOBUF_CONSTEXPR Directory::Directory(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.filepath_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct DirectoryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DirectoryDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DirectoryDefaultTypeInternal() {}
  union {
    Directory _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DirectoryDefaultTypeInternal _Directory_default_instance_;
PROTOBUF_CONSTEXPR ClientFileSystem::ClientFileSystem(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.user_)*/nullptr
  , /*decltype(_impl_.rootdirectory_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ClientFileSystemDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ClientFileSystemDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ClientFileSystemDefaultTypeInternal() {}
  union {
    ClientFileSystem _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ClientFileSystemDefaultTypeInternal _ClientFileSystem_default_instance_;
static ::_pb::Metadata file_level_metadata_protos_2fFiles_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_protos_2fFiles_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_protos_2fFiles_2eproto = nullptr;

const uint32_t TableStruct_protos_2fFiles_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::File, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::File, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::File, _impl_.filesize_),
  PROTOBUF_FIELD_OFFSET(::File, _impl_.creationdate_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Directory, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Directory, _impl_.filepath_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ClientFileSystem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ClientFileSystem, _impl_.user_),
  PROTOBUF_FIELD_OFFSET(::ClientFileSystem, _impl_.rootdirectory_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::File)},
  { 9, -1, -1, sizeof(::Directory)},
  { 16, -1, -1, sizeof(::ClientFileSystem)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_File_default_instance_._instance,
  &::_Directory_default_instance_._instance,
  &::_ClientFileSystem_default_instance_._instance,
};

const char descriptor_table_protodef_protos_2fFiles_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022protos/Files.proto\032\037google/protobuf/ti"
  "mestamp.proto\032\021protos/User.proto\"X\n\004File"
  "\022\014\n\004Name\030\001 \001(\t\022\020\n\010FileSize\030\002 \001(\004\0220\n\014Crea"
  "tionDate\030\003 \001(\0132\032.google.protobuf.Timesta"
  "mp\"\035\n\tDirectory\022\020\n\010FilePath\030\001 \003(\t\"N\n\020Cli"
  "entFileSystem\022\027\n\004user\030\001 \001(\0132\t.UserInfo\022!"
  "\n\rRootDirectory\030\002 \001(\0132\n.Directory2>\n\022Use"
  "rFileSystemInfo\022(\n\014SendFileInfo\022\n.Direct"
  "ory\032\n.Directory\"\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_protos_2fFiles_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
  &::descriptor_table_protos_2fUser_2eproto,
};
static ::_pbi::once_flag descriptor_table_protos_2fFiles_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fFiles_2eproto = {
    false, false, 345, descriptor_table_protodef_protos_2fFiles_2eproto,
    "protos/Files.proto",
    &descriptor_table_protos_2fFiles_2eproto_once, descriptor_table_protos_2fFiles_2eproto_deps, 2, 3,
    schemas, file_default_instances, TableStruct_protos_2fFiles_2eproto::offsets,
    file_level_metadata_protos_2fFiles_2eproto, file_level_enum_descriptors_protos_2fFiles_2eproto,
    file_level_service_descriptors_protos_2fFiles_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fFiles_2eproto_getter() {
  return &descriptor_table_protos_2fFiles_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fFiles_2eproto(&descriptor_table_protos_2fFiles_2eproto);

// ===================================================================

class File::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& creationdate(const File* msg);
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
File::_Internal::creationdate(const File* msg) {
  return *msg->_impl_.creationdate_;
}
void File::clear_creationdate() {
  if (GetArenaForAllocation() == nullptr && _impl_.creationdate_ != nullptr) {
    delete _impl_.creationdate_;
  }
  _impl_.creationdate_ = nullptr;
}
File::File(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:File)
}
File::File(const File& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  File* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.creationdate_){nullptr}
    , decltype(_impl_.filesize_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_creationdate()) {
    _this->_impl_.creationdate_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from._impl_.creationdate_);
  }
  _this->_impl_.filesize_ = from._impl_.filesize_;
  // @@protoc_insertion_point(copy_constructor:File)
}

inline void File::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.creationdate_){nullptr}
    , decltype(_impl_.filesize_){uint64_t{0u}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

File::~File() {
  // @@protoc_insertion_point(destructor:File)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void File::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  if (this != internal_default_instance()) delete _impl_.creationdate_;
}

void File::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void File::Clear() {
// @@protoc_insertion_point(message_clear_start:File)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.creationdate_ != nullptr) {
    delete _impl_.creationdate_;
  }
  _impl_.creationdate_ = nullptr;
  _impl_.filesize_ = uint64_t{0u};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* File::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string Name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "File.Name"));
        } else
          goto handle_unusual;
        continue;
      // uint64 FileSize = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.filesize_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp CreationDate = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_creationdate(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* File::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:File)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string Name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "File.Name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // uint64 FileSize = 2;
  if (this->_internal_filesize() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_filesize(), target);
  }

  // .google.protobuf.Timestamp CreationDate = 3;
  if (this->_internal_has_creationdate()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::creationdate(this),
        _Internal::creationdate(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:File)
  return target;
}

size_t File::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:File)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string Name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .google.protobuf.Timestamp CreationDate = 3;
  if (this->_internal_has_creationdate()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.creationdate_);
  }

  // uint64 FileSize = 2;
  if (this->_internal_filesize() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_filesize());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData File::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    File::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*File::GetClassData() const { return &_class_data_; }


void File::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<File*>(&to_msg);
  auto& from = static_cast<const File&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:File)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_has_creationdate()) {
    _this->_internal_mutable_creationdate()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(
        from._internal_creationdate());
  }
  if (from._internal_filesize() != 0) {
    _this->_internal_set_filesize(from._internal_filesize());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void File::CopyFrom(const File& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool File::IsInitialized() const {
  return true;
}

void File::InternalSwap(File* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(File, _impl_.filesize_)
      + sizeof(File::_impl_.filesize_)
      - PROTOBUF_FIELD_OFFSET(File, _impl_.creationdate_)>(
          reinterpret_cast<char*>(&_impl_.creationdate_),
          reinterpret_cast<char*>(&other->_impl_.creationdate_));
}

::PROTOBUF_NAMESPACE_ID::Metadata File::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fFiles_2eproto_getter, &descriptor_table_protos_2fFiles_2eproto_once,
      file_level_metadata_protos_2fFiles_2eproto[0]);
}

// ===================================================================

class Directory::_Internal {
 public:
};

Directory::Directory(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Directory)
}
Directory::Directory(const Directory& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Directory* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.filepath_){from._impl_.filepath_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Directory)
}

inline void Directory::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.filepath_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Directory::~Directory() {
  // @@protoc_insertion_point(destructor:Directory)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Directory::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.filepath_.~RepeatedPtrField();
}

void Directory::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Directory::Clear() {
// @@protoc_insertion_point(message_clear_start:Directory)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.filepath_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Directory::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated string FilePath = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_filepath();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Directory.FilePath"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Directory::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Directory)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string FilePath = 1;
  for (int i = 0, n = this->_internal_filepath_size(); i < n; i++) {
    const auto& s = this->_internal_filepath(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Directory.FilePath");
    target = stream->WriteString(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Directory)
  return target;
}

size_t Directory::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Directory)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string FilePath = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.filepath_.size());
  for (int i = 0, n = _impl_.filepath_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.filepath_.Get(i));
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Directory::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Directory::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Directory::GetClassData() const { return &_class_data_; }


void Directory::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Directory*>(&to_msg);
  auto& from = static_cast<const Directory&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Directory)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.filepath_.MergeFrom(from._impl_.filepath_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Directory::CopyFrom(const Directory& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Directory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Directory::IsInitialized() const {
  return true;
}

void Directory::InternalSwap(Directory* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.filepath_.InternalSwap(&other->_impl_.filepath_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Directory::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fFiles_2eproto_getter, &descriptor_table_protos_2fFiles_2eproto_once,
      file_level_metadata_protos_2fFiles_2eproto[1]);
}

// ===================================================================

class ClientFileSystem::_Internal {
 public:
  static const ::UserInfo& user(const ClientFileSystem* msg);
  static const ::Directory& rootdirectory(const ClientFileSystem* msg);
};

const ::UserInfo&
ClientFileSystem::_Internal::user(const ClientFileSystem* msg) {
  return *msg->_impl_.user_;
}
const ::Directory&
ClientFileSystem::_Internal::rootdirectory(const ClientFileSystem* msg) {
  return *msg->_impl_.rootdirectory_;
}
void ClientFileSystem::clear_user() {
  if (GetArenaForAllocation() == nullptr && _impl_.user_ != nullptr) {
    delete _impl_.user_;
  }
  _impl_.user_ = nullptr;
}
ClientFileSystem::ClientFileSystem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:ClientFileSystem)
}
ClientFileSystem::ClientFileSystem(const ClientFileSystem& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ClientFileSystem* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.user_){nullptr}
    , decltype(_impl_.rootdirectory_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_user()) {
    _this->_impl_.user_ = new ::UserInfo(*from._impl_.user_);
  }
  if (from._internal_has_rootdirectory()) {
    _this->_impl_.rootdirectory_ = new ::Directory(*from._impl_.rootdirectory_);
  }
  // @@protoc_insertion_point(copy_constructor:ClientFileSystem)
}

inline void ClientFileSystem::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.user_){nullptr}
    , decltype(_impl_.rootdirectory_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ClientFileSystem::~ClientFileSystem() {
  // @@protoc_insertion_point(destructor:ClientFileSystem)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ClientFileSystem::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.user_;
  if (this != internal_default_instance()) delete _impl_.rootdirectory_;
}

void ClientFileSystem::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ClientFileSystem::Clear() {
// @@protoc_insertion_point(message_clear_start:ClientFileSystem)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.user_ != nullptr) {
    delete _impl_.user_;
  }
  _impl_.user_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.rootdirectory_ != nullptr) {
    delete _impl_.rootdirectory_;
  }
  _impl_.rootdirectory_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ClientFileSystem::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .UserInfo user = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_user(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .Directory RootDirectory = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_rootdirectory(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ClientFileSystem::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ClientFileSystem)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .UserInfo user = 1;
  if (this->_internal_has_user()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::user(this),
        _Internal::user(this).GetCachedSize(), target, stream);
  }

  // .Directory RootDirectory = 2;
  if (this->_internal_has_rootdirectory()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::rootdirectory(this),
        _Internal::rootdirectory(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClientFileSystem)
  return target;
}

size_t ClientFileSystem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ClientFileSystem)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .UserInfo user = 1;
  if (this->_internal_has_user()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.user_);
  }

  // .Directory RootDirectory = 2;
  if (this->_internal_has_rootdirectory()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.rootdirectory_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ClientFileSystem::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ClientFileSystem::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ClientFileSystem::GetClassData() const { return &_class_data_; }


void ClientFileSystem::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ClientFileSystem*>(&to_msg);
  auto& from = static_cast<const ClientFileSystem&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:ClientFileSystem)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_user()) {
    _this->_internal_mutable_user()->::UserInfo::MergeFrom(
        from._internal_user());
  }
  if (from._internal_has_rootdirectory()) {
    _this->_internal_mutable_rootdirectory()->::Directory::MergeFrom(
        from._internal_rootdirectory());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ClientFileSystem::CopyFrom(const ClientFileSystem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ClientFileSystem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientFileSystem::IsInitialized() const {
  return true;
}

void ClientFileSystem::InternalSwap(ClientFileSystem* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ClientFileSystem, _impl_.rootdirectory_)
      + sizeof(ClientFileSystem::_impl_.rootdirectory_)
      - PROTOBUF_FIELD_OFFSET(ClientFileSystem, _impl_.user_)>(
          reinterpret_cast<char*>(&_impl_.user_),
          reinterpret_cast<char*>(&other->_impl_.user_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ClientFileSystem::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fFiles_2eproto_getter, &descriptor_table_protos_2fFiles_2eproto_once,
      file_level_metadata_protos_2fFiles_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::File*
Arena::CreateMaybeMessage< ::File >(Arena* arena) {
  return Arena::CreateMessageInternal< ::File >(arena);
}
template<> PROTOBUF_NOINLINE ::Directory*
Arena::CreateMaybeMessage< ::Directory >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Directory >(arena);
}
template<> PROTOBUF_NOINLINE ::ClientFileSystem*
Arena::CreateMaybeMessage< ::ClientFileSystem >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ClientFileSystem >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
