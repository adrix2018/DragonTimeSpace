// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: summonpetLevelUp.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_summonpetLevelUp_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_summonpetLevelUp_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_summonpetLevelUp_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_summonpetLevelUp_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_summonpetLevelUp_2eproto;
namespace pb {
class summonpetLevelUp;
class summonpetLevelUpDefaultTypeInternal;
extern summonpetLevelUpDefaultTypeInternal _summonpetLevelUp_default_instance_;
class summonpetLevelUp_t_summonpet_lv_config;
class summonpetLevelUp_t_summonpet_lv_configDefaultTypeInternal;
extern summonpetLevelUp_t_summonpet_lv_configDefaultTypeInternal _summonpetLevelUp_t_summonpet_lv_config_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::summonpetLevelUp* Arena::CreateMaybeMessage<::pb::summonpetLevelUp>(Arena*);
template<> ::pb::summonpetLevelUp_t_summonpet_lv_config* Arena::CreateMaybeMessage<::pb::summonpetLevelUp_t_summonpet_lv_config>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class summonpetLevelUp_t_summonpet_lv_config :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.summonpetLevelUp.t_summonpet_lv_config) */ {
 public:
  summonpetLevelUp_t_summonpet_lv_config();
  virtual ~summonpetLevelUp_t_summonpet_lv_config();

  summonpetLevelUp_t_summonpet_lv_config(const summonpetLevelUp_t_summonpet_lv_config& from);
  summonpetLevelUp_t_summonpet_lv_config(summonpetLevelUp_t_summonpet_lv_config&& from) noexcept
    : summonpetLevelUp_t_summonpet_lv_config() {
    *this = ::std::move(from);
  }

  inline summonpetLevelUp_t_summonpet_lv_config& operator=(const summonpetLevelUp_t_summonpet_lv_config& from) {
    CopyFrom(from);
    return *this;
  }
  inline summonpetLevelUp_t_summonpet_lv_config& operator=(summonpetLevelUp_t_summonpet_lv_config&& from) noexcept {
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
  static const summonpetLevelUp_t_summonpet_lv_config& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const summonpetLevelUp_t_summonpet_lv_config* internal_default_instance() {
    return reinterpret_cast<const summonpetLevelUp_t_summonpet_lv_config*>(
               &_summonpetLevelUp_t_summonpet_lv_config_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(summonpetLevelUp_t_summonpet_lv_config& a, summonpetLevelUp_t_summonpet_lv_config& b) {
    a.Swap(&b);
  }
  inline void Swap(summonpetLevelUp_t_summonpet_lv_config* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline summonpetLevelUp_t_summonpet_lv_config* New() const final {
    return CreateMaybeMessage<summonpetLevelUp_t_summonpet_lv_config>(nullptr);
  }

  summonpetLevelUp_t_summonpet_lv_config* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<summonpetLevelUp_t_summonpet_lv_config>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const summonpetLevelUp_t_summonpet_lv_config& from);
  void MergeFrom(const summonpetLevelUp_t_summonpet_lv_config& from);
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
  void InternalSwap(summonpetLevelUp_t_summonpet_lv_config* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.summonpetLevelUp.t_summonpet_lv_config";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_summonpetLevelUp_2eproto);
    return ::descriptor_table_summonpetLevelUp_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTbxidFieldNumber = 1,
    kIdFieldNumber = 2,
    kLevelupexpFieldNumber = 3,
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

  // required uint32 levelupexp = 3;
  bool has_levelupexp() const;
  private:
  bool _internal_has_levelupexp() const;
  public:
  void clear_levelupexp();
  ::PROTOBUF_NAMESPACE_ID::uint32 levelupexp() const;
  void set_levelupexp(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_levelupexp() const;
  void _internal_set_levelupexp(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:pb.summonpetLevelUp.t_summonpet_lv_config)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tbxid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 levelupexp_;
  friend struct ::TableStruct_summonpetLevelUp_2eproto;
};
// -------------------------------------------------------------------

class summonpetLevelUp :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.summonpetLevelUp) */ {
 public:
  summonpetLevelUp();
  virtual ~summonpetLevelUp();

  summonpetLevelUp(const summonpetLevelUp& from);
  summonpetLevelUp(summonpetLevelUp&& from) noexcept
    : summonpetLevelUp() {
    *this = ::std::move(from);
  }

  inline summonpetLevelUp& operator=(const summonpetLevelUp& from) {
    CopyFrom(from);
    return *this;
  }
  inline summonpetLevelUp& operator=(summonpetLevelUp&& from) noexcept {
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
  static const summonpetLevelUp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const summonpetLevelUp* internal_default_instance() {
    return reinterpret_cast<const summonpetLevelUp*>(
               &_summonpetLevelUp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(summonpetLevelUp& a, summonpetLevelUp& b) {
    a.Swap(&b);
  }
  inline void Swap(summonpetLevelUp* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline summonpetLevelUp* New() const final {
    return CreateMaybeMessage<summonpetLevelUp>(nullptr);
  }

  summonpetLevelUp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<summonpetLevelUp>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const summonpetLevelUp& from);
  void MergeFrom(const summonpetLevelUp& from);
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
  void InternalSwap(summonpetLevelUp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.summonpetLevelUp";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_summonpetLevelUp_2eproto);
    return ::descriptor_table_summonpetLevelUp_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef summonpetLevelUp_t_summonpet_lv_config t_summonpet_lv_config;

  // accessors -------------------------------------------------------

  enum : int {
    kDatasFieldNumber = 1,
  };
  // repeated .pb.summonpetLevelUp.t_summonpet_lv_config datas = 1;
  int datas_size() const;
  private:
  int _internal_datas_size() const;
  public:
  void clear_datas();
  ::pb::summonpetLevelUp_t_summonpet_lv_config* mutable_datas(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::summonpetLevelUp_t_summonpet_lv_config >*
      mutable_datas();
  private:
  const ::pb::summonpetLevelUp_t_summonpet_lv_config& _internal_datas(int index) const;
  ::pb::summonpetLevelUp_t_summonpet_lv_config* _internal_add_datas();
  public:
  const ::pb::summonpetLevelUp_t_summonpet_lv_config& datas(int index) const;
  ::pb::summonpetLevelUp_t_summonpet_lv_config* add_datas();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::summonpetLevelUp_t_summonpet_lv_config >&
      datas() const;

  // @@protoc_insertion_point(class_scope:pb.summonpetLevelUp)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::summonpetLevelUp_t_summonpet_lv_config > datas_;
  friend struct ::TableStruct_summonpetLevelUp_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// summonpetLevelUp_t_summonpet_lv_config

// required uint32 tbxid = 1 [default = 0];
inline bool summonpetLevelUp_t_summonpet_lv_config::_internal_has_tbxid() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool summonpetLevelUp_t_summonpet_lv_config::has_tbxid() const {
  return _internal_has_tbxid();
}
inline void summonpetLevelUp_t_summonpet_lv_config::clear_tbxid() {
  tbxid_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 summonpetLevelUp_t_summonpet_lv_config::_internal_tbxid() const {
  return tbxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 summonpetLevelUp_t_summonpet_lv_config::tbxid() const {
  // @@protoc_insertion_point(field_get:pb.summonpetLevelUp.t_summonpet_lv_config.tbxid)
  return _internal_tbxid();
}
inline void summonpetLevelUp_t_summonpet_lv_config::_internal_set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  tbxid_ = value;
}
inline void summonpetLevelUp_t_summonpet_lv_config::set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_tbxid(value);
  // @@protoc_insertion_point(field_set:pb.summonpetLevelUp.t_summonpet_lv_config.tbxid)
}

// required uint32 id = 2 [default = 0];
inline bool summonpetLevelUp_t_summonpet_lv_config::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool summonpetLevelUp_t_summonpet_lv_config::has_id() const {
  return _internal_has_id();
}
inline void summonpetLevelUp_t_summonpet_lv_config::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 summonpetLevelUp_t_summonpet_lv_config::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 summonpetLevelUp_t_summonpet_lv_config::id() const {
  // @@protoc_insertion_point(field_get:pb.summonpetLevelUp.t_summonpet_lv_config.id)
  return _internal_id();
}
inline void summonpetLevelUp_t_summonpet_lv_config::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  id_ = value;
}
inline void summonpetLevelUp_t_summonpet_lv_config::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:pb.summonpetLevelUp.t_summonpet_lv_config.id)
}

// required uint32 levelupexp = 3;
inline bool summonpetLevelUp_t_summonpet_lv_config::_internal_has_levelupexp() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool summonpetLevelUp_t_summonpet_lv_config::has_levelupexp() const {
  return _internal_has_levelupexp();
}
inline void summonpetLevelUp_t_summonpet_lv_config::clear_levelupexp() {
  levelupexp_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 summonpetLevelUp_t_summonpet_lv_config::_internal_levelupexp() const {
  return levelupexp_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 summonpetLevelUp_t_summonpet_lv_config::levelupexp() const {
  // @@protoc_insertion_point(field_get:pb.summonpetLevelUp.t_summonpet_lv_config.levelupexp)
  return _internal_levelupexp();
}
inline void summonpetLevelUp_t_summonpet_lv_config::_internal_set_levelupexp(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  levelupexp_ = value;
}
inline void summonpetLevelUp_t_summonpet_lv_config::set_levelupexp(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_levelupexp(value);
  // @@protoc_insertion_point(field_set:pb.summonpetLevelUp.t_summonpet_lv_config.levelupexp)
}

// -------------------------------------------------------------------

// summonpetLevelUp

// repeated .pb.summonpetLevelUp.t_summonpet_lv_config datas = 1;
inline int summonpetLevelUp::_internal_datas_size() const {
  return datas_.size();
}
inline int summonpetLevelUp::datas_size() const {
  return _internal_datas_size();
}
inline void summonpetLevelUp::clear_datas() {
  datas_.Clear();
}
inline ::pb::summonpetLevelUp_t_summonpet_lv_config* summonpetLevelUp::mutable_datas(int index) {
  // @@protoc_insertion_point(field_mutable:pb.summonpetLevelUp.datas)
  return datas_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::summonpetLevelUp_t_summonpet_lv_config >*
summonpetLevelUp::mutable_datas() {
  // @@protoc_insertion_point(field_mutable_list:pb.summonpetLevelUp.datas)
  return &datas_;
}
inline const ::pb::summonpetLevelUp_t_summonpet_lv_config& summonpetLevelUp::_internal_datas(int index) const {
  return datas_.Get(index);
}
inline const ::pb::summonpetLevelUp_t_summonpet_lv_config& summonpetLevelUp::datas(int index) const {
  // @@protoc_insertion_point(field_get:pb.summonpetLevelUp.datas)
  return _internal_datas(index);
}
inline ::pb::summonpetLevelUp_t_summonpet_lv_config* summonpetLevelUp::_internal_add_datas() {
  return datas_.Add();
}
inline ::pb::summonpetLevelUp_t_summonpet_lv_config* summonpetLevelUp::add_datas() {
  // @@protoc_insertion_point(field_add:pb.summonpetLevelUp.datas)
  return _internal_add_datas();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::summonpetLevelUp_t_summonpet_lv_config >&
summonpetLevelUp::datas() const {
  // @@protoc_insertion_point(field_list:pb.summonpetLevelUp.datas)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_summonpetLevelUp_2eproto