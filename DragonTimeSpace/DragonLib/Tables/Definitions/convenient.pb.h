// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: convenient.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_convenient_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_convenient_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_convenient_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_convenient_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_convenient_2eproto;
namespace pb {
class convenient;
class convenientDefaultTypeInternal;
extern convenientDefaultTypeInternal _convenient_default_instance_;
class convenient_t_convenient_config;
class convenient_t_convenient_configDefaultTypeInternal;
extern convenient_t_convenient_configDefaultTypeInternal _convenient_t_convenient_config_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::convenient* Arena::CreateMaybeMessage<::pb::convenient>(Arena*);
template<> ::pb::convenient_t_convenient_config* Arena::CreateMaybeMessage<::pb::convenient_t_convenient_config>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class convenient_t_convenient_config :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.convenient.t_convenient_config) */ {
 public:
  convenient_t_convenient_config();
  virtual ~convenient_t_convenient_config();

  convenient_t_convenient_config(const convenient_t_convenient_config& from);
  convenient_t_convenient_config(convenient_t_convenient_config&& from) noexcept
    : convenient_t_convenient_config() {
    *this = ::std::move(from);
  }

  inline convenient_t_convenient_config& operator=(const convenient_t_convenient_config& from) {
    CopyFrom(from);
    return *this;
  }
  inline convenient_t_convenient_config& operator=(convenient_t_convenient_config&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const convenient_t_convenient_config& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const convenient_t_convenient_config* internal_default_instance() {
    return reinterpret_cast<const convenient_t_convenient_config*>(
               &_convenient_t_convenient_config_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(convenient_t_convenient_config& a, convenient_t_convenient_config& b) {
    a.Swap(&b);
  }
  inline void Swap(convenient_t_convenient_config* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline convenient_t_convenient_config* New() const final {
    return CreateMaybeMessage<convenient_t_convenient_config>(nullptr);
  }

  convenient_t_convenient_config* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<convenient_t_convenient_config>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const convenient_t_convenient_config& from);
  void MergeFrom(const convenient_t_convenient_config& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(convenient_t_convenient_config* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.convenient.t_convenient_config";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_convenient_2eproto);
    return ::descriptor_table_convenient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 3,
    kTbxidFieldNumber = 1,
    kIdFieldNumber = 2,
  };
  // required string content = 3;
  bool has_content() const;
  private:
  bool _internal_has_content() const;
  public:
  void clear_content();
  const std::string& content() const;
  void set_content(const std::string& value);
  void set_content(std::string&& value);
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  std::string* mutable_content();
  std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // required uint32 tbxid = 1 [default = 0];
  bool has_tbxid() const;
  private:
  bool _internal_has_tbxid() const;
  public:
  void clear_tbxid();
  ::PROTOBUF_NAMESPACE_ID::uint32 tbxid() const;
  void set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_tbxid() const;
  void _internal_set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 id = 2 [default = 0];
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:pb.convenient.t_convenient_config)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tbxid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  friend struct ::TableStruct_convenient_2eproto;
};
// -------------------------------------------------------------------

class convenient :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.convenient) */ {
 public:
  convenient();
  virtual ~convenient();

  convenient(const convenient& from);
  convenient(convenient&& from) noexcept
    : convenient() {
    *this = ::std::move(from);
  }

  inline convenient& operator=(const convenient& from) {
    CopyFrom(from);
    return *this;
  }
  inline convenient& operator=(convenient&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const convenient& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const convenient* internal_default_instance() {
    return reinterpret_cast<const convenient*>(
               &_convenient_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(convenient& a, convenient& b) {
    a.Swap(&b);
  }
  inline void Swap(convenient* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline convenient* New() const final {
    return CreateMaybeMessage<convenient>(nullptr);
  }

  convenient* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<convenient>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const convenient& from);
  void MergeFrom(const convenient& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(convenient* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.convenient";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_convenient_2eproto);
    return ::descriptor_table_convenient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef convenient_t_convenient_config t_convenient_config;

  // accessors -------------------------------------------------------

  enum : int {
    kDatasFieldNumber = 1,
  };
  // repeated .pb.convenient.t_convenient_config datas = 1;
  int datas_size() const;
  private:
  int _internal_datas_size() const;
  public:
  void clear_datas();
  ::pb::convenient_t_convenient_config* mutable_datas(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::convenient_t_convenient_config >*
      mutable_datas();
  private:
  const ::pb::convenient_t_convenient_config& _internal_datas(int index) const;
  ::pb::convenient_t_convenient_config* _internal_add_datas();
  public:
  const ::pb::convenient_t_convenient_config& datas(int index) const;
  ::pb::convenient_t_convenient_config* add_datas();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::convenient_t_convenient_config >&
      datas() const;

  // @@protoc_insertion_point(class_scope:pb.convenient)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::convenient_t_convenient_config > datas_;
  friend struct ::TableStruct_convenient_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// convenient_t_convenient_config

// required uint32 tbxid = 1 [default = 0];
inline bool convenient_t_convenient_config::_internal_has_tbxid() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool convenient_t_convenient_config::has_tbxid() const {
  return _internal_has_tbxid();
}
inline void convenient_t_convenient_config::clear_tbxid() {
  tbxid_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 convenient_t_convenient_config::_internal_tbxid() const {
  return tbxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 convenient_t_convenient_config::tbxid() const {
  // @@protoc_insertion_point(field_get:pb.convenient.t_convenient_config.tbxid)
  return _internal_tbxid();
}
inline void convenient_t_convenient_config::_internal_set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  tbxid_ = value;
}
inline void convenient_t_convenient_config::set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_tbxid(value);
  // @@protoc_insertion_point(field_set:pb.convenient.t_convenient_config.tbxid)
}

// required uint32 id = 2 [default = 0];
inline bool convenient_t_convenient_config::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool convenient_t_convenient_config::has_id() const {
  return _internal_has_id();
}
inline void convenient_t_convenient_config::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 convenient_t_convenient_config::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 convenient_t_convenient_config::id() const {
  // @@protoc_insertion_point(field_get:pb.convenient.t_convenient_config.id)
  return _internal_id();
}
inline void convenient_t_convenient_config::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  id_ = value;
}
inline void convenient_t_convenient_config::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:pb.convenient.t_convenient_config.id)
}

// required string content = 3;
inline bool convenient_t_convenient_config::_internal_has_content() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool convenient_t_convenient_config::has_content() const {
  return _internal_has_content();
}
inline void convenient_t_convenient_config::clear_content() {
  content_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& convenient_t_convenient_config::content() const {
  // @@protoc_insertion_point(field_get:pb.convenient.t_convenient_config.content)
  return _internal_content();
}
inline void convenient_t_convenient_config::set_content(const std::string& value) {
  _internal_set_content(value);
  // @@protoc_insertion_point(field_set:pb.convenient.t_convenient_config.content)
}
inline std::string* convenient_t_convenient_config::mutable_content() {
  // @@protoc_insertion_point(field_mutable:pb.convenient.t_convenient_config.content)
  return _internal_mutable_content();
}
inline const std::string& convenient_t_convenient_config::_internal_content() const {
  return content_.GetNoArena();
}
inline void convenient_t_convenient_config::_internal_set_content(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  content_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void convenient_t_convenient_config::set_content(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  content_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.convenient.t_convenient_config.content)
}
inline void convenient_t_convenient_config::set_content(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  content_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.convenient.t_convenient_config.content)
}
inline void convenient_t_convenient_config::set_content(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  content_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.convenient.t_convenient_config.content)
}
inline std::string* convenient_t_convenient_config::_internal_mutable_content() {
  _has_bits_[0] |= 0x00000001u;
  return content_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* convenient_t_convenient_config::release_content() {
  // @@protoc_insertion_point(field_release:pb.convenient.t_convenient_config.content)
  if (!_internal_has_content()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return content_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void convenient_t_convenient_config::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  content_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:pb.convenient.t_convenient_config.content)
}

// -------------------------------------------------------------------

// convenient

// repeated .pb.convenient.t_convenient_config datas = 1;
inline int convenient::_internal_datas_size() const {
  return datas_.size();
}
inline int convenient::datas_size() const {
  return _internal_datas_size();
}
inline void convenient::clear_datas() {
  datas_.Clear();
}
inline ::pb::convenient_t_convenient_config* convenient::mutable_datas(int index) {
  // @@protoc_insertion_point(field_mutable:pb.convenient.datas)
  return datas_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::convenient_t_convenient_config >*
convenient::mutable_datas() {
  // @@protoc_insertion_point(field_mutable_list:pb.convenient.datas)
  return &datas_;
}
inline const ::pb::convenient_t_convenient_config& convenient::_internal_datas(int index) const {
  return datas_.Get(index);
}
inline const ::pb::convenient_t_convenient_config& convenient::datas(int index) const {
  // @@protoc_insertion_point(field_get:pb.convenient.datas)
  return _internal_datas(index);
}
inline ::pb::convenient_t_convenient_config* convenient::_internal_add_datas() {
  return datas_.Add();
}
inline ::pb::convenient_t_convenient_config* convenient::add_datas() {
  // @@protoc_insertion_point(field_add:pb.convenient.datas)
  return _internal_add_datas();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::convenient_t_convenient_config >&
convenient::datas() const {
  // @@protoc_insertion_point(field_list:pb.convenient.datas)
  return datas_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_convenient_2eproto
