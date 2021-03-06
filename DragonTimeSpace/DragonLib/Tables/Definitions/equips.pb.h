// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: equips.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_equips_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_equips_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_equips_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_equips_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_equips_2eproto;
namespace pb {
class equips;
class equipsDefaultTypeInternal;
extern equipsDefaultTypeInternal _equips_default_instance_;
class equips_t_equips_config;
class equips_t_equips_configDefaultTypeInternal;
extern equips_t_equips_configDefaultTypeInternal _equips_t_equips_config_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::equips* Arena::CreateMaybeMessage<::pb::equips>(Arena*);
template<> ::pb::equips_t_equips_config* Arena::CreateMaybeMessage<::pb::equips_t_equips_config>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class equips_t_equips_config :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.equips.t_equips_config) */ {
 public:
  equips_t_equips_config();
  virtual ~equips_t_equips_config();

  equips_t_equips_config(const equips_t_equips_config& from);
  equips_t_equips_config(equips_t_equips_config&& from) noexcept
    : equips_t_equips_config() {
    *this = ::std::move(from);
  }

  inline equips_t_equips_config& operator=(const equips_t_equips_config& from) {
    CopyFrom(from);
    return *this;
  }
  inline equips_t_equips_config& operator=(equips_t_equips_config&& from) noexcept {
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
  static const equips_t_equips_config& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const equips_t_equips_config* internal_default_instance() {
    return reinterpret_cast<const equips_t_equips_config*>(
               &_equips_t_equips_config_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(equips_t_equips_config& a, equips_t_equips_config& b) {
    a.Swap(&b);
  }
  inline void Swap(equips_t_equips_config* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline equips_t_equips_config* New() const final {
    return CreateMaybeMessage<equips_t_equips_config>(nullptr);
  }

  equips_t_equips_config* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<equips_t_equips_config>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const equips_t_equips_config& from);
  void MergeFrom(const equips_t_equips_config& from);
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
  void InternalSwap(equips_t_equips_config* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.equips.t_equips_config";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_equips_2eproto);
    return ::descriptor_table_equips_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 3,
    kTbxidFieldNumber = 1,
    kIdFieldNumber = 2,
    kCareerFieldNumber = 4,
    kBasicPropFieldNumber = 5,
    kProp1FieldNumber = 6,
    kProp2FieldNumber = 7,
    kSuffix1FieldNumber = 8,
    kSuffix2FieldNumber = 9,
    kSuffix3FieldNumber = 10,
    kSuffix4FieldNumber = 11,
    kFixedPropFieldNumber = 12,
  };
  // required string name = 3;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
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

  // required uint32 career = 4;
  bool has_career() const;
  private:
  bool _internal_has_career() const;
  public:
  void clear_career();
  ::PROTOBUF_NAMESPACE_ID::uint32 career() const;
  void set_career(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_career() const;
  void _internal_set_career(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 basic_prop = 5;
  bool has_basic_prop() const;
  private:
  bool _internal_has_basic_prop() const;
  public:
  void clear_basic_prop();
  ::PROTOBUF_NAMESPACE_ID::uint32 basic_prop() const;
  void set_basic_prop(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_basic_prop() const;
  void _internal_set_basic_prop(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 prop_1 = 6;
  bool has_prop_1() const;
  private:
  bool _internal_has_prop_1() const;
  public:
  void clear_prop_1();
  ::PROTOBUF_NAMESPACE_ID::uint32 prop_1() const;
  void set_prop_1(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_prop_1() const;
  void _internal_set_prop_1(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 prop_2 = 7;
  bool has_prop_2() const;
  private:
  bool _internal_has_prop_2() const;
  public:
  void clear_prop_2();
  ::PROTOBUF_NAMESPACE_ID::uint32 prop_2() const;
  void set_prop_2(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_prop_2() const;
  void _internal_set_prop_2(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 suffix_1 = 8;
  bool has_suffix_1() const;
  private:
  bool _internal_has_suffix_1() const;
  public:
  void clear_suffix_1();
  ::PROTOBUF_NAMESPACE_ID::uint32 suffix_1() const;
  void set_suffix_1(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_suffix_1() const;
  void _internal_set_suffix_1(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 suffix_2 = 9;
  bool has_suffix_2() const;
  private:
  bool _internal_has_suffix_2() const;
  public:
  void clear_suffix_2();
  ::PROTOBUF_NAMESPACE_ID::uint32 suffix_2() const;
  void set_suffix_2(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_suffix_2() const;
  void _internal_set_suffix_2(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 suffix_3 = 10;
  bool has_suffix_3() const;
  private:
  bool _internal_has_suffix_3() const;
  public:
  void clear_suffix_3();
  ::PROTOBUF_NAMESPACE_ID::uint32 suffix_3() const;
  void set_suffix_3(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_suffix_3() const;
  void _internal_set_suffix_3(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 suffix_4 = 11;
  bool has_suffix_4() const;
  private:
  bool _internal_has_suffix_4() const;
  public:
  void clear_suffix_4();
  ::PROTOBUF_NAMESPACE_ID::uint32 suffix_4() const;
  void set_suffix_4(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_suffix_4() const;
  void _internal_set_suffix_4(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 fixed_prop = 12;
  bool has_fixed_prop() const;
  private:
  bool _internal_has_fixed_prop() const;
  public:
  void clear_fixed_prop();
  ::PROTOBUF_NAMESPACE_ID::uint32 fixed_prop() const;
  void set_fixed_prop(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_fixed_prop() const;
  void _internal_set_fixed_prop(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:pb.equips.t_equips_config)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tbxid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 career_;
  ::PROTOBUF_NAMESPACE_ID::uint32 basic_prop_;
  ::PROTOBUF_NAMESPACE_ID::uint32 prop_1_;
  ::PROTOBUF_NAMESPACE_ID::uint32 prop_2_;
  ::PROTOBUF_NAMESPACE_ID::uint32 suffix_1_;
  ::PROTOBUF_NAMESPACE_ID::uint32 suffix_2_;
  ::PROTOBUF_NAMESPACE_ID::uint32 suffix_3_;
  ::PROTOBUF_NAMESPACE_ID::uint32 suffix_4_;
  ::PROTOBUF_NAMESPACE_ID::uint32 fixed_prop_;
  friend struct ::TableStruct_equips_2eproto;
};
// -------------------------------------------------------------------

class equips :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.equips) */ {
 public:
  equips();
  virtual ~equips();

  equips(const equips& from);
  equips(equips&& from) noexcept
    : equips() {
    *this = ::std::move(from);
  }

  inline equips& operator=(const equips& from) {
    CopyFrom(from);
    return *this;
  }
  inline equips& operator=(equips&& from) noexcept {
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
  static const equips& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const equips* internal_default_instance() {
    return reinterpret_cast<const equips*>(
               &_equips_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(equips& a, equips& b) {
    a.Swap(&b);
  }
  inline void Swap(equips* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline equips* New() const final {
    return CreateMaybeMessage<equips>(nullptr);
  }

  equips* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<equips>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const equips& from);
  void MergeFrom(const equips& from);
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
  void InternalSwap(equips* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.equips";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_equips_2eproto);
    return ::descriptor_table_equips_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef equips_t_equips_config t_equips_config;

  // accessors -------------------------------------------------------

  enum : int {
    kDatasFieldNumber = 1,
  };
  // repeated .pb.equips.t_equips_config datas = 1;
  int datas_size() const;
  private:
  int _internal_datas_size() const;
  public:
  void clear_datas();
  ::pb::equips_t_equips_config* mutable_datas(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::equips_t_equips_config >*
      mutable_datas();
  private:
  const ::pb::equips_t_equips_config& _internal_datas(int index) const;
  ::pb::equips_t_equips_config* _internal_add_datas();
  public:
  const ::pb::equips_t_equips_config& datas(int index) const;
  ::pb::equips_t_equips_config* add_datas();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::equips_t_equips_config >&
      datas() const;

  // @@protoc_insertion_point(class_scope:pb.equips)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::equips_t_equips_config > datas_;
  friend struct ::TableStruct_equips_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// equips_t_equips_config

// required uint32 tbxid = 1 [default = 0];
inline bool equips_t_equips_config::_internal_has_tbxid() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_tbxid() const {
  return _internal_has_tbxid();
}
inline void equips_t_equips_config::clear_tbxid() {
  tbxid_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_tbxid() const {
  return tbxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::tbxid() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.tbxid)
  return _internal_tbxid();
}
inline void equips_t_equips_config::_internal_set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  tbxid_ = value;
}
inline void equips_t_equips_config::set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_tbxid(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.tbxid)
}

// required uint32 id = 2 [default = 0];
inline bool equips_t_equips_config::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_id() const {
  return _internal_has_id();
}
inline void equips_t_equips_config::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::id() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.id)
  return _internal_id();
}
inline void equips_t_equips_config::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  id_ = value;
}
inline void equips_t_equips_config::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.id)
}

// required string name = 3;
inline bool equips_t_equips_config::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_name() const {
  return _internal_has_name();
}
inline void equips_t_equips_config::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& equips_t_equips_config::name() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.name)
  return _internal_name();
}
inline void equips_t_equips_config::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.name)
}
inline std::string* equips_t_equips_config::mutable_name() {
  // @@protoc_insertion_point(field_mutable:pb.equips.t_equips_config.name)
  return _internal_mutable_name();
}
inline const std::string& equips_t_equips_config::_internal_name() const {
  return name_.GetNoArena();
}
inline void equips_t_equips_config::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void equips_t_equips_config::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.equips.t_equips_config.name)
}
inline void equips_t_equips_config::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.equips.t_equips_config.name)
}
inline void equips_t_equips_config::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.equips.t_equips_config.name)
}
inline std::string* equips_t_equips_config::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* equips_t_equips_config::release_name() {
  // @@protoc_insertion_point(field_release:pb.equips.t_equips_config.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void equips_t_equips_config::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:pb.equips.t_equips_config.name)
}

// required uint32 career = 4;
inline bool equips_t_equips_config::_internal_has_career() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_career() const {
  return _internal_has_career();
}
inline void equips_t_equips_config::clear_career() {
  career_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_career() const {
  return career_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::career() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.career)
  return _internal_career();
}
inline void equips_t_equips_config::_internal_set_career(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  career_ = value;
}
inline void equips_t_equips_config::set_career(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_career(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.career)
}

// required uint32 basic_prop = 5;
inline bool equips_t_equips_config::_internal_has_basic_prop() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_basic_prop() const {
  return _internal_has_basic_prop();
}
inline void equips_t_equips_config::clear_basic_prop() {
  basic_prop_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_basic_prop() const {
  return basic_prop_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::basic_prop() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.basic_prop)
  return _internal_basic_prop();
}
inline void equips_t_equips_config::_internal_set_basic_prop(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  basic_prop_ = value;
}
inline void equips_t_equips_config::set_basic_prop(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_basic_prop(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.basic_prop)
}

// required uint32 prop_1 = 6;
inline bool equips_t_equips_config::_internal_has_prop_1() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_prop_1() const {
  return _internal_has_prop_1();
}
inline void equips_t_equips_config::clear_prop_1() {
  prop_1_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_prop_1() const {
  return prop_1_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::prop_1() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.prop_1)
  return _internal_prop_1();
}
inline void equips_t_equips_config::_internal_set_prop_1(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  prop_1_ = value;
}
inline void equips_t_equips_config::set_prop_1(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_prop_1(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.prop_1)
}

// required uint32 prop_2 = 7;
inline bool equips_t_equips_config::_internal_has_prop_2() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_prop_2() const {
  return _internal_has_prop_2();
}
inline void equips_t_equips_config::clear_prop_2() {
  prop_2_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_prop_2() const {
  return prop_2_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::prop_2() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.prop_2)
  return _internal_prop_2();
}
inline void equips_t_equips_config::_internal_set_prop_2(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000040u;
  prop_2_ = value;
}
inline void equips_t_equips_config::set_prop_2(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_prop_2(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.prop_2)
}

// required uint32 suffix_1 = 8;
inline bool equips_t_equips_config::_internal_has_suffix_1() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_suffix_1() const {
  return _internal_has_suffix_1();
}
inline void equips_t_equips_config::clear_suffix_1() {
  suffix_1_ = 0u;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_suffix_1() const {
  return suffix_1_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::suffix_1() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.suffix_1)
  return _internal_suffix_1();
}
inline void equips_t_equips_config::_internal_set_suffix_1(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000080u;
  suffix_1_ = value;
}
inline void equips_t_equips_config::set_suffix_1(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_suffix_1(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.suffix_1)
}

// required uint32 suffix_2 = 9;
inline bool equips_t_equips_config::_internal_has_suffix_2() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_suffix_2() const {
  return _internal_has_suffix_2();
}
inline void equips_t_equips_config::clear_suffix_2() {
  suffix_2_ = 0u;
  _has_bits_[0] &= ~0x00000100u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_suffix_2() const {
  return suffix_2_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::suffix_2() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.suffix_2)
  return _internal_suffix_2();
}
inline void equips_t_equips_config::_internal_set_suffix_2(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000100u;
  suffix_2_ = value;
}
inline void equips_t_equips_config::set_suffix_2(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_suffix_2(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.suffix_2)
}

// required uint32 suffix_3 = 10;
inline bool equips_t_equips_config::_internal_has_suffix_3() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_suffix_3() const {
  return _internal_has_suffix_3();
}
inline void equips_t_equips_config::clear_suffix_3() {
  suffix_3_ = 0u;
  _has_bits_[0] &= ~0x00000200u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_suffix_3() const {
  return suffix_3_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::suffix_3() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.suffix_3)
  return _internal_suffix_3();
}
inline void equips_t_equips_config::_internal_set_suffix_3(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000200u;
  suffix_3_ = value;
}
inline void equips_t_equips_config::set_suffix_3(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_suffix_3(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.suffix_3)
}

// required uint32 suffix_4 = 11;
inline bool equips_t_equips_config::_internal_has_suffix_4() const {
  bool value = (_has_bits_[0] & 0x00000400u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_suffix_4() const {
  return _internal_has_suffix_4();
}
inline void equips_t_equips_config::clear_suffix_4() {
  suffix_4_ = 0u;
  _has_bits_[0] &= ~0x00000400u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_suffix_4() const {
  return suffix_4_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::suffix_4() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.suffix_4)
  return _internal_suffix_4();
}
inline void equips_t_equips_config::_internal_set_suffix_4(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000400u;
  suffix_4_ = value;
}
inline void equips_t_equips_config::set_suffix_4(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_suffix_4(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.suffix_4)
}

// required uint32 fixed_prop = 12;
inline bool equips_t_equips_config::_internal_has_fixed_prop() const {
  bool value = (_has_bits_[0] & 0x00000800u) != 0;
  return value;
}
inline bool equips_t_equips_config::has_fixed_prop() const {
  return _internal_has_fixed_prop();
}
inline void equips_t_equips_config::clear_fixed_prop() {
  fixed_prop_ = 0u;
  _has_bits_[0] &= ~0x00000800u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::_internal_fixed_prop() const {
  return fixed_prop_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 equips_t_equips_config::fixed_prop() const {
  // @@protoc_insertion_point(field_get:pb.equips.t_equips_config.fixed_prop)
  return _internal_fixed_prop();
}
inline void equips_t_equips_config::_internal_set_fixed_prop(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000800u;
  fixed_prop_ = value;
}
inline void equips_t_equips_config::set_fixed_prop(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_fixed_prop(value);
  // @@protoc_insertion_point(field_set:pb.equips.t_equips_config.fixed_prop)
}

// -------------------------------------------------------------------

// equips

// repeated .pb.equips.t_equips_config datas = 1;
inline int equips::_internal_datas_size() const {
  return datas_.size();
}
inline int equips::datas_size() const {
  return _internal_datas_size();
}
inline void equips::clear_datas() {
  datas_.Clear();
}
inline ::pb::equips_t_equips_config* equips::mutable_datas(int index) {
  // @@protoc_insertion_point(field_mutable:pb.equips.datas)
  return datas_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::equips_t_equips_config >*
equips::mutable_datas() {
  // @@protoc_insertion_point(field_mutable_list:pb.equips.datas)
  return &datas_;
}
inline const ::pb::equips_t_equips_config& equips::_internal_datas(int index) const {
  return datas_.Get(index);
}
inline const ::pb::equips_t_equips_config& equips::datas(int index) const {
  // @@protoc_insertion_point(field_get:pb.equips.datas)
  return _internal_datas(index);
}
inline ::pb::equips_t_equips_config* equips::_internal_add_datas() {
  return datas_.Add();
}
inline ::pb::equips_t_equips_config* equips::add_datas() {
  // @@protoc_insertion_point(field_add:pb.equips.datas)
  return _internal_add_datas();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::equips_t_equips_config >&
equips::datas() const {
  // @@protoc_insertion_point(field_list:pb.equips.datas)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_equips_2eproto
