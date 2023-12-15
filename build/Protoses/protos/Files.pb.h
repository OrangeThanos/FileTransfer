// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/Files.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fFiles_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fFiles_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
#include "protos/User.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fFiles_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fFiles_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protos_2fFiles_2eproto;
class ClientFileSystem;
struct ClientFileSystemDefaultTypeInternal;
extern ClientFileSystemDefaultTypeInternal _ClientFileSystem_default_instance_;
class Directory;
struct DirectoryDefaultTypeInternal;
extern DirectoryDefaultTypeInternal _Directory_default_instance_;
class File;
struct FileDefaultTypeInternal;
extern FileDefaultTypeInternal _File_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ClientFileSystem* Arena::CreateMaybeMessage<::ClientFileSystem>(Arena*);
template<> ::Directory* Arena::CreateMaybeMessage<::Directory>(Arena*);
template<> ::File* Arena::CreateMaybeMessage<::File>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class File final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:File) */ {
 public:
  inline File() : File(nullptr) {}
  ~File() override;
  explicit PROTOBUF_CONSTEXPR File(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  File(const File& from);
  File(File&& from) noexcept
    : File() {
    *this = ::std::move(from);
  }

  inline File& operator=(const File& from) {
    CopyFrom(from);
    return *this;
  }
  inline File& operator=(File&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const File& default_instance() {
    return *internal_default_instance();
  }
  static inline const File* internal_default_instance() {
    return reinterpret_cast<const File*>(
               &_File_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(File& a, File& b) {
    a.Swap(&b);
  }
  inline void Swap(File* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(File* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  File* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<File>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const File& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const File& from) {
    File::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(File* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "File";
  }
  protected:
  explicit File(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kCreationDateFieldNumber = 3,
    kFileSizeFieldNumber = 2,
  };
  // string Name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .google.protobuf.Timestamp CreationDate = 3;
  bool has_creationdate() const;
  private:
  bool _internal_has_creationdate() const;
  public:
  void clear_creationdate();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& creationdate() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_creationdate();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_creationdate();
  void set_allocated_creationdate(::PROTOBUF_NAMESPACE_ID::Timestamp* creationdate);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_creationdate() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_creationdate();
  public:
  void unsafe_arena_set_allocated_creationdate(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* creationdate);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_creationdate();

  // uint64 FileSize = 2;
  void clear_filesize();
  uint64_t filesize() const;
  void set_filesize(uint64_t value);
  private:
  uint64_t _internal_filesize() const;
  void _internal_set_filesize(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:File)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* creationdate_;
    uint64_t filesize_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fFiles_2eproto;
};
// -------------------------------------------------------------------

class Directory final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Directory) */ {
 public:
  inline Directory() : Directory(nullptr) {}
  ~Directory() override;
  explicit PROTOBUF_CONSTEXPR Directory(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Directory(const Directory& from);
  Directory(Directory&& from) noexcept
    : Directory() {
    *this = ::std::move(from);
  }

  inline Directory& operator=(const Directory& from) {
    CopyFrom(from);
    return *this;
  }
  inline Directory& operator=(Directory&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Directory& default_instance() {
    return *internal_default_instance();
  }
  static inline const Directory* internal_default_instance() {
    return reinterpret_cast<const Directory*>(
               &_Directory_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Directory& a, Directory& b) {
    a.Swap(&b);
  }
  inline void Swap(Directory* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Directory* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Directory* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Directory>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Directory& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Directory& from) {
    Directory::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Directory* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Directory";
  }
  protected:
  explicit Directory(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFilePathFieldNumber = 1,
  };
  // repeated string FilePath = 1;
  int filepath_size() const;
  private:
  int _internal_filepath_size() const;
  public:
  void clear_filepath();
  const std::string& filepath(int index) const;
  std::string* mutable_filepath(int index);
  void set_filepath(int index, const std::string& value);
  void set_filepath(int index, std::string&& value);
  void set_filepath(int index, const char* value);
  void set_filepath(int index, const char* value, size_t size);
  std::string* add_filepath();
  void add_filepath(const std::string& value);
  void add_filepath(std::string&& value);
  void add_filepath(const char* value);
  void add_filepath(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& filepath() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_filepath();
  private:
  const std::string& _internal_filepath(int index) const;
  std::string* _internal_add_filepath();
  public:

  // @@protoc_insertion_point(class_scope:Directory)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> filepath_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fFiles_2eproto;
};
// -------------------------------------------------------------------

class ClientFileSystem final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ClientFileSystem) */ {
 public:
  inline ClientFileSystem() : ClientFileSystem(nullptr) {}
  ~ClientFileSystem() override;
  explicit PROTOBUF_CONSTEXPR ClientFileSystem(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ClientFileSystem(const ClientFileSystem& from);
  ClientFileSystem(ClientFileSystem&& from) noexcept
    : ClientFileSystem() {
    *this = ::std::move(from);
  }

  inline ClientFileSystem& operator=(const ClientFileSystem& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientFileSystem& operator=(ClientFileSystem&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ClientFileSystem& default_instance() {
    return *internal_default_instance();
  }
  static inline const ClientFileSystem* internal_default_instance() {
    return reinterpret_cast<const ClientFileSystem*>(
               &_ClientFileSystem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ClientFileSystem& a, ClientFileSystem& b) {
    a.Swap(&b);
  }
  inline void Swap(ClientFileSystem* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ClientFileSystem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ClientFileSystem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ClientFileSystem>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ClientFileSystem& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ClientFileSystem& from) {
    ClientFileSystem::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ClientFileSystem* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ClientFileSystem";
  }
  protected:
  explicit ClientFileSystem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserFieldNumber = 1,
    kRootDirectoryFieldNumber = 2,
  };
  // .UserInfo user = 1;
  bool has_user() const;
  private:
  bool _internal_has_user() const;
  public:
  void clear_user();
  const ::UserInfo& user() const;
  PROTOBUF_NODISCARD ::UserInfo* release_user();
  ::UserInfo* mutable_user();
  void set_allocated_user(::UserInfo* user);
  private:
  const ::UserInfo& _internal_user() const;
  ::UserInfo* _internal_mutable_user();
  public:
  void unsafe_arena_set_allocated_user(
      ::UserInfo* user);
  ::UserInfo* unsafe_arena_release_user();

  // .Directory RootDirectory = 2;
  bool has_rootdirectory() const;
  private:
  bool _internal_has_rootdirectory() const;
  public:
  void clear_rootdirectory();
  const ::Directory& rootdirectory() const;
  PROTOBUF_NODISCARD ::Directory* release_rootdirectory();
  ::Directory* mutable_rootdirectory();
  void set_allocated_rootdirectory(::Directory* rootdirectory);
  private:
  const ::Directory& _internal_rootdirectory() const;
  ::Directory* _internal_mutable_rootdirectory();
  public:
  void unsafe_arena_set_allocated_rootdirectory(
      ::Directory* rootdirectory);
  ::Directory* unsafe_arena_release_rootdirectory();

  // @@protoc_insertion_point(class_scope:ClientFileSystem)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::UserInfo* user_;
    ::Directory* rootdirectory_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fFiles_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// File

// string Name = 1;
inline void File::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& File::name() const {
  // @@protoc_insertion_point(field_get:File.Name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void File::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:File.Name)
}
inline std::string* File::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:File.Name)
  return _s;
}
inline const std::string& File::_internal_name() const {
  return _impl_.name_.Get();
}
inline void File::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* File::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* File::release_name() {
  // @@protoc_insertion_point(field_release:File.Name)
  return _impl_.name_.Release();
}
inline void File::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:File.Name)
}

// uint64 FileSize = 2;
inline void File::clear_filesize() {
  _impl_.filesize_ = uint64_t{0u};
}
inline uint64_t File::_internal_filesize() const {
  return _impl_.filesize_;
}
inline uint64_t File::filesize() const {
  // @@protoc_insertion_point(field_get:File.FileSize)
  return _internal_filesize();
}
inline void File::_internal_set_filesize(uint64_t value) {
  
  _impl_.filesize_ = value;
}
inline void File::set_filesize(uint64_t value) {
  _internal_set_filesize(value);
  // @@protoc_insertion_point(field_set:File.FileSize)
}

// .google.protobuf.Timestamp CreationDate = 3;
inline bool File::_internal_has_creationdate() const {
  return this != internal_default_instance() && _impl_.creationdate_ != nullptr;
}
inline bool File::has_creationdate() const {
  return _internal_has_creationdate();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& File::_internal_creationdate() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.creationdate_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& File::creationdate() const {
  // @@protoc_insertion_point(field_get:File.CreationDate)
  return _internal_creationdate();
}
inline void File::unsafe_arena_set_allocated_creationdate(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* creationdate) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.creationdate_);
  }
  _impl_.creationdate_ = creationdate;
  if (creationdate) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:File.CreationDate)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* File::release_creationdate() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.creationdate_;
  _impl_.creationdate_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* File::unsafe_arena_release_creationdate() {
  // @@protoc_insertion_point(field_release:File.CreationDate)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.creationdate_;
  _impl_.creationdate_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* File::_internal_mutable_creationdate() {
  
  if (_impl_.creationdate_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.creationdate_ = p;
  }
  return _impl_.creationdate_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* File::mutable_creationdate() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_creationdate();
  // @@protoc_insertion_point(field_mutable:File.CreationDate)
  return _msg;
}
inline void File::set_allocated_creationdate(::PROTOBUF_NAMESPACE_ID::Timestamp* creationdate) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.creationdate_);
  }
  if (creationdate) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(creationdate));
    if (message_arena != submessage_arena) {
      creationdate = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, creationdate, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.creationdate_ = creationdate;
  // @@protoc_insertion_point(field_set_allocated:File.CreationDate)
}

// -------------------------------------------------------------------

// Directory

// repeated string FilePath = 1;
inline int Directory::_internal_filepath_size() const {
  return _impl_.filepath_.size();
}
inline int Directory::filepath_size() const {
  return _internal_filepath_size();
}
inline void Directory::clear_filepath() {
  _impl_.filepath_.Clear();
}
inline std::string* Directory::add_filepath() {
  std::string* _s = _internal_add_filepath();
  // @@protoc_insertion_point(field_add_mutable:Directory.FilePath)
  return _s;
}
inline const std::string& Directory::_internal_filepath(int index) const {
  return _impl_.filepath_.Get(index);
}
inline const std::string& Directory::filepath(int index) const {
  // @@protoc_insertion_point(field_get:Directory.FilePath)
  return _internal_filepath(index);
}
inline std::string* Directory::mutable_filepath(int index) {
  // @@protoc_insertion_point(field_mutable:Directory.FilePath)
  return _impl_.filepath_.Mutable(index);
}
inline void Directory::set_filepath(int index, const std::string& value) {
  _impl_.filepath_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:Directory.FilePath)
}
inline void Directory::set_filepath(int index, std::string&& value) {
  _impl_.filepath_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:Directory.FilePath)
}
inline void Directory::set_filepath(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.filepath_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Directory.FilePath)
}
inline void Directory::set_filepath(int index, const char* value, size_t size) {
  _impl_.filepath_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Directory.FilePath)
}
inline std::string* Directory::_internal_add_filepath() {
  return _impl_.filepath_.Add();
}
inline void Directory::add_filepath(const std::string& value) {
  _impl_.filepath_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Directory.FilePath)
}
inline void Directory::add_filepath(std::string&& value) {
  _impl_.filepath_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:Directory.FilePath)
}
inline void Directory::add_filepath(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.filepath_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Directory.FilePath)
}
inline void Directory::add_filepath(const char* value, size_t size) {
  _impl_.filepath_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Directory.FilePath)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Directory::filepath() const {
  // @@protoc_insertion_point(field_list:Directory.FilePath)
  return _impl_.filepath_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Directory::mutable_filepath() {
  // @@protoc_insertion_point(field_mutable_list:Directory.FilePath)
  return &_impl_.filepath_;
}

// -------------------------------------------------------------------

// ClientFileSystem

// .UserInfo user = 1;
inline bool ClientFileSystem::_internal_has_user() const {
  return this != internal_default_instance() && _impl_.user_ != nullptr;
}
inline bool ClientFileSystem::has_user() const {
  return _internal_has_user();
}
inline const ::UserInfo& ClientFileSystem::_internal_user() const {
  const ::UserInfo* p = _impl_.user_;
  return p != nullptr ? *p : reinterpret_cast<const ::UserInfo&>(
      ::_UserInfo_default_instance_);
}
inline const ::UserInfo& ClientFileSystem::user() const {
  // @@protoc_insertion_point(field_get:ClientFileSystem.user)
  return _internal_user();
}
inline void ClientFileSystem::unsafe_arena_set_allocated_user(
    ::UserInfo* user) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.user_);
  }
  _impl_.user_ = user;
  if (user) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ClientFileSystem.user)
}
inline ::UserInfo* ClientFileSystem::release_user() {
  
  ::UserInfo* temp = _impl_.user_;
  _impl_.user_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::UserInfo* ClientFileSystem::unsafe_arena_release_user() {
  // @@protoc_insertion_point(field_release:ClientFileSystem.user)
  
  ::UserInfo* temp = _impl_.user_;
  _impl_.user_ = nullptr;
  return temp;
}
inline ::UserInfo* ClientFileSystem::_internal_mutable_user() {
  
  if (_impl_.user_ == nullptr) {
    auto* p = CreateMaybeMessage<::UserInfo>(GetArenaForAllocation());
    _impl_.user_ = p;
  }
  return _impl_.user_;
}
inline ::UserInfo* ClientFileSystem::mutable_user() {
  ::UserInfo* _msg = _internal_mutable_user();
  // @@protoc_insertion_point(field_mutable:ClientFileSystem.user)
  return _msg;
}
inline void ClientFileSystem::set_allocated_user(::UserInfo* user) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.user_);
  }
  if (user) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(user));
    if (message_arena != submessage_arena) {
      user = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, user, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.user_ = user;
  // @@protoc_insertion_point(field_set_allocated:ClientFileSystem.user)
}

// .Directory RootDirectory = 2;
inline bool ClientFileSystem::_internal_has_rootdirectory() const {
  return this != internal_default_instance() && _impl_.rootdirectory_ != nullptr;
}
inline bool ClientFileSystem::has_rootdirectory() const {
  return _internal_has_rootdirectory();
}
inline void ClientFileSystem::clear_rootdirectory() {
  if (GetArenaForAllocation() == nullptr && _impl_.rootdirectory_ != nullptr) {
    delete _impl_.rootdirectory_;
  }
  _impl_.rootdirectory_ = nullptr;
}
inline const ::Directory& ClientFileSystem::_internal_rootdirectory() const {
  const ::Directory* p = _impl_.rootdirectory_;
  return p != nullptr ? *p : reinterpret_cast<const ::Directory&>(
      ::_Directory_default_instance_);
}
inline const ::Directory& ClientFileSystem::rootdirectory() const {
  // @@protoc_insertion_point(field_get:ClientFileSystem.RootDirectory)
  return _internal_rootdirectory();
}
inline void ClientFileSystem::unsafe_arena_set_allocated_rootdirectory(
    ::Directory* rootdirectory) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.rootdirectory_);
  }
  _impl_.rootdirectory_ = rootdirectory;
  if (rootdirectory) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ClientFileSystem.RootDirectory)
}
inline ::Directory* ClientFileSystem::release_rootdirectory() {
  
  ::Directory* temp = _impl_.rootdirectory_;
  _impl_.rootdirectory_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::Directory* ClientFileSystem::unsafe_arena_release_rootdirectory() {
  // @@protoc_insertion_point(field_release:ClientFileSystem.RootDirectory)
  
  ::Directory* temp = _impl_.rootdirectory_;
  _impl_.rootdirectory_ = nullptr;
  return temp;
}
inline ::Directory* ClientFileSystem::_internal_mutable_rootdirectory() {
  
  if (_impl_.rootdirectory_ == nullptr) {
    auto* p = CreateMaybeMessage<::Directory>(GetArenaForAllocation());
    _impl_.rootdirectory_ = p;
  }
  return _impl_.rootdirectory_;
}
inline ::Directory* ClientFileSystem::mutable_rootdirectory() {
  ::Directory* _msg = _internal_mutable_rootdirectory();
  // @@protoc_insertion_point(field_mutable:ClientFileSystem.RootDirectory)
  return _msg;
}
inline void ClientFileSystem::set_allocated_rootdirectory(::Directory* rootdirectory) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.rootdirectory_;
  }
  if (rootdirectory) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(rootdirectory);
    if (message_arena != submessage_arena) {
      rootdirectory = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, rootdirectory, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.rootdirectory_ = rootdirectory;
  // @@protoc_insertion_point(field_set_allocated:ClientFileSystem.RootDirectory)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fFiles_2eproto