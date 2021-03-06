// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dnaslot_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dnaslot_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_dnaslot_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_dnaslot_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dnaslot_5fconfig_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_dnaslot_5fconfig_2eproto;
namespace pb {
class dnaslot_config;
class dnaslot_configDefaultTypeInternal;
extern dnaslot_configDefaultTypeInternal _dnaslot_config_default_instance_;
class dnaslot_config_t_dnaslot_config;
class dnaslot_config_t_dnaslot_configDefaultTypeInternal;
extern dnaslot_config_t_dnaslot_configDefaultTypeInternal _dnaslot_config_t_dnaslot_config_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::dnaslot_config* Arena::CreateMaybeMessage<::pb::dnaslot_config>(Arena*);
template<> ::pb::dnaslot_config_t_dnaslot_config* Arena::CreateMaybeMessage<::pb::dnaslot_config_t_dnaslot_config>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class dnaslot_config_t_dnaslot_config :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.dnaslot_config.t_dnaslot_config) */ {
 public:
  dnaslot_config_t_dnaslot_config();
  virtual ~dnaslot_config_t_dnaslot_config();

  dnaslot_config_t_dnaslot_config(const dnaslot_config_t_dnaslot_config& from);
  dnaslot_config_t_dnaslot_config(dnaslot_config_t_dnaslot_config&& from) noexcept
    : dnaslot_config_t_dnaslot_config() {
    *this = ::std::move(from);
  }

  inline dnaslot_config_t_dnaslot_config& operator=(const dnaslot_config_t_dnaslot_config& from) {
    CopyFrom(from);
    return *this;
  }
  inline dnaslot_config_t_dnaslot_config& operator=(dnaslot_config_t_dnaslot_config&& from) noexcept {
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
  static const dnaslot_config_t_dnaslot_config& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const dnaslot_config_t_dnaslot_config* internal_default_instance() {
    return reinterpret_cast<const dnaslot_config_t_dnaslot_config*>(
               &_dnaslot_config_t_dnaslot_config_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(dnaslot_config_t_dnaslot_config& a, dnaslot_config_t_dnaslot_config& b) {
    a.Swap(&b);
  }
  inline void Swap(dnaslot_config_t_dnaslot_config* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline dnaslot_config_t_dnaslot_config* New() const final {
    return CreateMaybeMessage<dnaslot_config_t_dnaslot_config>(nullptr);
  }

  dnaslot_config_t_dnaslot_config* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<dnaslot_config_t_dnaslot_config>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const dnaslot_config_t_dnaslot_config& from);
  void MergeFrom(const dnaslot_config_t_dnaslot_config& from);
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
  void InternalSwap(dnaslot_config_t_dnaslot_config* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.dnaslot_config.t_dnaslot_config";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_dnaslot_5fconfig_2eproto);
    return ::descriptor_table_dnaslot_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTbxidFieldNumber = 1,
    kLevelFieldNumber = 2,
    kAttslotpage1FieldNumber = 3,
    kDefslotpage1FieldNumber = 4,
    kAttslotpage2FieldNumber = 5,
    kDefslotpage2FieldNumber = 6,
    kAttslotpage3FieldNumber = 7,
    kDefslotpage3FieldNumber = 8,
    kAttslotpage4FieldNumber = 9,
    kDefslotpage4FieldNumber = 10,
  };
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

  // required uint32 level = 2 [default = 0];
  bool has_level() const;
  private:
  bool _internal_has_level() const;
  public:
  void clear_level();
  ::PROTOBUF_NAMESPACE_ID::uint32 level() const;
  void set_level(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_level() const;
  void _internal_set_level(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 attslotpage1 = 3;
  bool has_attslotpage1() const;
  private:
  bool _internal_has_attslotpage1() const;
  public:
  void clear_attslotpage1();
  ::PROTOBUF_NAMESPACE_ID::uint32 attslotpage1() const;
  void set_attslotpage1(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_attslotpage1() const;
  void _internal_set_attslotpage1(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 defslotpage1 = 4;
  bool has_defslotpage1() const;
  private:
  bool _internal_has_defslotpage1() const;
  public:
  void clear_defslotpage1();
  ::PROTOBUF_NAMESPACE_ID::uint32 defslotpage1() const;
  void set_defslotpage1(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_defslotpage1() const;
  void _internal_set_defslotpage1(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 attslotpage2 = 5;
  bool has_attslotpage2() const;
  private:
  bool _internal_has_attslotpage2() const;
  public:
  void clear_attslotpage2();
  ::PROTOBUF_NAMESPACE_ID::uint32 attslotpage2() const;
  void set_attslotpage2(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_attslotpage2() const;
  void _internal_set_attslotpage2(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 defslotpage2 = 6;
  bool has_defslotpage2() const;
  private:
  bool _internal_has_defslotpage2() const;
  public:
  void clear_defslotpage2();
  ::PROTOBUF_NAMESPACE_ID::uint32 defslotpage2() const;
  void set_defslotpage2(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_defslotpage2() const;
  void _internal_set_defslotpage2(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 attslotpage3 = 7;
  bool has_attslotpage3() const;
  private:
  bool _internal_has_attslotpage3() const;
  public:
  void clear_attslotpage3();
  ::PROTOBUF_NAMESPACE_ID::uint32 attslotpage3() const;
  void set_attslotpage3(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_attslotpage3() const;
  void _internal_set_attslotpage3(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 defslotpage3 = 8;
  bool has_defslotpage3() const;
  private:
  bool _internal_has_defslotpage3() const;
  public:
  void clear_defslotpage3();
  ::PROTOBUF_NAMESPACE_ID::uint32 defslotpage3() const;
  void set_defslotpage3(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_defslotpage3() const;
  void _internal_set_defslotpage3(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 attslotpage4 = 9;
  bool has_attslotpage4() const;
  private:
  bool _internal_has_attslotpage4() const;
  public:
  void clear_attslotpage4();
  ::PROTOBUF_NAMESPACE_ID::uint32 attslotpage4() const;
  void set_attslotpage4(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_attslotpage4() const;
  void _internal_set_attslotpage4(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 defslotpage4 = 10;
  bool has_defslotpage4() const;
  private:
  bool _internal_has_defslotpage4() const;
  public:
  void clear_defslotpage4();
  ::PROTOBUF_NAMESPACE_ID::uint32 defslotpage4() const;
  void set_defslotpage4(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_defslotpage4() const;
  void _internal_set_defslotpage4(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:pb.dnaslot_config.t_dnaslot_config)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tbxid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 level_;
  ::PROTOBUF_NAMESPACE_ID::uint32 attslotpage1_;
  ::PROTOBUF_NAMESPACE_ID::uint32 defslotpage1_;
  ::PROTOBUF_NAMESPACE_ID::uint32 attslotpage2_;
  ::PROTOBUF_NAMESPACE_ID::uint32 defslotpage2_;
  ::PROTOBUF_NAMESPACE_ID::uint32 attslotpage3_;
  ::PROTOBUF_NAMESPACE_ID::uint32 defslotpage3_;
  ::PROTOBUF_NAMESPACE_ID::uint32 attslotpage4_;
  ::PROTOBUF_NAMESPACE_ID::uint32 defslotpage4_;
  friend struct ::TableStruct_dnaslot_5fconfig_2eproto;
};
// -------------------------------------------------------------------

class dnaslot_config :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.dnaslot_config) */ {
 public:
  dnaslot_config();
  virtual ~dnaslot_config();

  dnaslot_config(const dnaslot_config& from);
  dnaslot_config(dnaslot_config&& from) noexcept
    : dnaslot_config() {
    *this = ::std::move(from);
  }

  inline dnaslot_config& operator=(const dnaslot_config& from) {
    CopyFrom(from);
    return *this;
  }
  inline dnaslot_config& operator=(dnaslot_config&& from) noexcept {
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
  static const dnaslot_config& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const dnaslot_config* internal_default_instance() {
    return reinterpret_cast<const dnaslot_config*>(
               &_dnaslot_config_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(dnaslot_config& a, dnaslot_config& b) {
    a.Swap(&b);
  }
  inline void Swap(dnaslot_config* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline dnaslot_config* New() const final {
    return CreateMaybeMessage<dnaslot_config>(nullptr);
  }

  dnaslot_config* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<dnaslot_config>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const dnaslot_config& from);
  void MergeFrom(const dnaslot_config& from);
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
  void InternalSwap(dnaslot_config* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.dnaslot_config";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_dnaslot_5fconfig_2eproto);
    return ::descriptor_table_dnaslot_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef dnaslot_config_t_dnaslot_config t_dnaslot_config;

  // accessors -------------------------------------------------------

  enum : int {
    kDatasFieldNumber = 1,
  };
  // repeated .pb.dnaslot_config.t_dnaslot_config datas = 1;
  int datas_size() const;
  private:
  int _internal_datas_size() const;
  public:
  void clear_datas();
  ::pb::dnaslot_config_t_dnaslot_config* mutable_datas(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::dnaslot_config_t_dnaslot_config >*
      mutable_datas();
  private:
  const ::pb::dnaslot_config_t_dnaslot_config& _internal_datas(int index) const;
  ::pb::dnaslot_config_t_dnaslot_config* _internal_add_datas();
  public:
  const ::pb::dnaslot_config_t_dnaslot_config& datas(int index) const;
  ::pb::dnaslot_config_t_dnaslot_config* add_datas();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::dnaslot_config_t_dnaslot_config >&
      datas() const;

  // @@protoc_insertion_point(class_scope:pb.dnaslot_config)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::dnaslot_config_t_dnaslot_config > datas_;
  friend struct ::TableStruct_dnaslot_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// dnaslot_config_t_dnaslot_config

// required uint32 tbxid = 1 [default = 0];
inline bool dnaslot_config_t_dnaslot_config::_internal_has_tbxid() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_tbxid() const {
  return _internal_has_tbxid();
}
inline void dnaslot_config_t_dnaslot_config::clear_tbxid() {
  tbxid_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_tbxid() const {
  return tbxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::tbxid() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.tbxid)
  return _internal_tbxid();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  tbxid_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_tbxid(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.tbxid)
}

// required uint32 level = 2 [default = 0];
inline bool dnaslot_config_t_dnaslot_config::_internal_has_level() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_level() const {
  return _internal_has_level();
}
inline void dnaslot_config_t_dnaslot_config::clear_level() {
  level_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_level() const {
  return level_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::level() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.level)
  return _internal_level();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_level(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  level_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_level(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_level(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.level)
}

// required uint32 attslotpage1 = 3;
inline bool dnaslot_config_t_dnaslot_config::_internal_has_attslotpage1() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_attslotpage1() const {
  return _internal_has_attslotpage1();
}
inline void dnaslot_config_t_dnaslot_config::clear_attslotpage1() {
  attslotpage1_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_attslotpage1() const {
  return attslotpage1_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::attslotpage1() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.attslotpage1)
  return _internal_attslotpage1();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_attslotpage1(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  attslotpage1_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_attslotpage1(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_attslotpage1(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.attslotpage1)
}

// required uint32 defslotpage1 = 4;
inline bool dnaslot_config_t_dnaslot_config::_internal_has_defslotpage1() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_defslotpage1() const {
  return _internal_has_defslotpage1();
}
inline void dnaslot_config_t_dnaslot_config::clear_defslotpage1() {
  defslotpage1_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_defslotpage1() const {
  return defslotpage1_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::defslotpage1() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.defslotpage1)
  return _internal_defslotpage1();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_defslotpage1(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  defslotpage1_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_defslotpage1(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_defslotpage1(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.defslotpage1)
}

// required uint32 attslotpage2 = 5;
inline bool dnaslot_config_t_dnaslot_config::_internal_has_attslotpage2() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_attslotpage2() const {
  return _internal_has_attslotpage2();
}
inline void dnaslot_config_t_dnaslot_config::clear_attslotpage2() {
  attslotpage2_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_attslotpage2() const {
  return attslotpage2_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::attslotpage2() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.attslotpage2)
  return _internal_attslotpage2();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_attslotpage2(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  attslotpage2_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_attslotpage2(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_attslotpage2(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.attslotpage2)
}

// required uint32 defslotpage2 = 6;
inline bool dnaslot_config_t_dnaslot_config::_internal_has_defslotpage2() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_defslotpage2() const {
  return _internal_has_defslotpage2();
}
inline void dnaslot_config_t_dnaslot_config::clear_defslotpage2() {
  defslotpage2_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_defslotpage2() const {
  return defslotpage2_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::defslotpage2() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.defslotpage2)
  return _internal_defslotpage2();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_defslotpage2(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  defslotpage2_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_defslotpage2(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_defslotpage2(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.defslotpage2)
}

// required uint32 attslotpage3 = 7;
inline bool dnaslot_config_t_dnaslot_config::_internal_has_attslotpage3() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_attslotpage3() const {
  return _internal_has_attslotpage3();
}
inline void dnaslot_config_t_dnaslot_config::clear_attslotpage3() {
  attslotpage3_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_attslotpage3() const {
  return attslotpage3_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::attslotpage3() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.attslotpage3)
  return _internal_attslotpage3();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_attslotpage3(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000040u;
  attslotpage3_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_attslotpage3(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_attslotpage3(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.attslotpage3)
}

// required uint32 defslotpage3 = 8;
inline bool dnaslot_config_t_dnaslot_config::_internal_has_defslotpage3() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_defslotpage3() const {
  return _internal_has_defslotpage3();
}
inline void dnaslot_config_t_dnaslot_config::clear_defslotpage3() {
  defslotpage3_ = 0u;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_defslotpage3() const {
  return defslotpage3_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::defslotpage3() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.defslotpage3)
  return _internal_defslotpage3();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_defslotpage3(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000080u;
  defslotpage3_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_defslotpage3(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_defslotpage3(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.defslotpage3)
}

// required uint32 attslotpage4 = 9;
inline bool dnaslot_config_t_dnaslot_config::_internal_has_attslotpage4() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_attslotpage4() const {
  return _internal_has_attslotpage4();
}
inline void dnaslot_config_t_dnaslot_config::clear_attslotpage4() {
  attslotpage4_ = 0u;
  _has_bits_[0] &= ~0x00000100u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_attslotpage4() const {
  return attslotpage4_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::attslotpage4() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.attslotpage4)
  return _internal_attslotpage4();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_attslotpage4(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000100u;
  attslotpage4_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_attslotpage4(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_attslotpage4(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.attslotpage4)
}

// required uint32 defslotpage4 = 10;
inline bool dnaslot_config_t_dnaslot_config::_internal_has_defslotpage4() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool dnaslot_config_t_dnaslot_config::has_defslotpage4() const {
  return _internal_has_defslotpage4();
}
inline void dnaslot_config_t_dnaslot_config::clear_defslotpage4() {
  defslotpage4_ = 0u;
  _has_bits_[0] &= ~0x00000200u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::_internal_defslotpage4() const {
  return defslotpage4_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 dnaslot_config_t_dnaslot_config::defslotpage4() const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.t_dnaslot_config.defslotpage4)
  return _internal_defslotpage4();
}
inline void dnaslot_config_t_dnaslot_config::_internal_set_defslotpage4(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000200u;
  defslotpage4_ = value;
}
inline void dnaslot_config_t_dnaslot_config::set_defslotpage4(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_defslotpage4(value);
  // @@protoc_insertion_point(field_set:pb.dnaslot_config.t_dnaslot_config.defslotpage4)
}

// -------------------------------------------------------------------

// dnaslot_config

// repeated .pb.dnaslot_config.t_dnaslot_config datas = 1;
inline int dnaslot_config::_internal_datas_size() const {
  return datas_.size();
}
inline int dnaslot_config::datas_size() const {
  return _internal_datas_size();
}
inline void dnaslot_config::clear_datas() {
  datas_.Clear();
}
inline ::pb::dnaslot_config_t_dnaslot_config* dnaslot_config::mutable_datas(int index) {
  // @@protoc_insertion_point(field_mutable:pb.dnaslot_config.datas)
  return datas_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::dnaslot_config_t_dnaslot_config >*
dnaslot_config::mutable_datas() {
  // @@protoc_insertion_point(field_mutable_list:pb.dnaslot_config.datas)
  return &datas_;
}
inline const ::pb::dnaslot_config_t_dnaslot_config& dnaslot_config::_internal_datas(int index) const {
  return datas_.Get(index);
}
inline const ::pb::dnaslot_config_t_dnaslot_config& dnaslot_config::datas(int index) const {
  // @@protoc_insertion_point(field_get:pb.dnaslot_config.datas)
  return _internal_datas(index);
}
inline ::pb::dnaslot_config_t_dnaslot_config* dnaslot_config::_internal_add_datas() {
  return datas_.Add();
}
inline ::pb::dnaslot_config_t_dnaslot_config* dnaslot_config::add_datas() {
  // @@protoc_insertion_point(field_add:pb.dnaslot_config.datas)
  return _internal_add_datas();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::dnaslot_config_t_dnaslot_config >&
dnaslot_config::datas() const {
  // @@protoc_insertion_point(field_list:pb.dnaslot_config.datas)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_dnaslot_5fconfig_2eproto
