// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: heropanel_maximum.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_heropanel_5fmaximum_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_heropanel_5fmaximum_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_heropanel_5fmaximum_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_heropanel_5fmaximum_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_heropanel_5fmaximum_2eproto;
namespace pb {
class heropanel_maximum;
class heropanel_maximumDefaultTypeInternal;
extern heropanel_maximumDefaultTypeInternal _heropanel_maximum_default_instance_;
class heropanel_maximum_t_heropanel_maximum;
class heropanel_maximum_t_heropanel_maximumDefaultTypeInternal;
extern heropanel_maximum_t_heropanel_maximumDefaultTypeInternal _heropanel_maximum_t_heropanel_maximum_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::heropanel_maximum* Arena::CreateMaybeMessage<::pb::heropanel_maximum>(Arena*);
template<> ::pb::heropanel_maximum_t_heropanel_maximum* Arena::CreateMaybeMessage<::pb::heropanel_maximum_t_heropanel_maximum>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class heropanel_maximum_t_heropanel_maximum :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.heropanel_maximum.t_heropanel_maximum) */ {
 public:
  heropanel_maximum_t_heropanel_maximum();
  virtual ~heropanel_maximum_t_heropanel_maximum();

  heropanel_maximum_t_heropanel_maximum(const heropanel_maximum_t_heropanel_maximum& from);
  heropanel_maximum_t_heropanel_maximum(heropanel_maximum_t_heropanel_maximum&& from) noexcept
    : heropanel_maximum_t_heropanel_maximum() {
    *this = ::std::move(from);
  }

  inline heropanel_maximum_t_heropanel_maximum& operator=(const heropanel_maximum_t_heropanel_maximum& from) {
    CopyFrom(from);
    return *this;
  }
  inline heropanel_maximum_t_heropanel_maximum& operator=(heropanel_maximum_t_heropanel_maximum&& from) noexcept {
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
  static const heropanel_maximum_t_heropanel_maximum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const heropanel_maximum_t_heropanel_maximum* internal_default_instance() {
    return reinterpret_cast<const heropanel_maximum_t_heropanel_maximum*>(
               &_heropanel_maximum_t_heropanel_maximum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(heropanel_maximum_t_heropanel_maximum& a, heropanel_maximum_t_heropanel_maximum& b) {
    a.Swap(&b);
  }
  inline void Swap(heropanel_maximum_t_heropanel_maximum* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline heropanel_maximum_t_heropanel_maximum* New() const final {
    return CreateMaybeMessage<heropanel_maximum_t_heropanel_maximum>(nullptr);
  }

  heropanel_maximum_t_heropanel_maximum* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<heropanel_maximum_t_heropanel_maximum>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const heropanel_maximum_t_heropanel_maximum& from);
  void MergeFrom(const heropanel_maximum_t_heropanel_maximum& from);
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
  void InternalSwap(heropanel_maximum_t_heropanel_maximum* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.heropanel_maximum.t_heropanel_maximum";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_heropanel_5fmaximum_2eproto);
    return ::descriptor_table_heropanel_5fmaximum_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTbxidFieldNumber = 1,
    kLevelFieldNumber = 2,
    kDamagelimitFieldNumber = 3,
    kPdefencelimitFieldNumber = 4,
    kMdefencelimitFieldNumber = 5,
    kLifelimitFieldNumber = 6,
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

  // required uint32 damagelimit = 3;
  bool has_damagelimit() const;
  private:
  bool _internal_has_damagelimit() const;
  public:
  void clear_damagelimit();
  ::PROTOBUF_NAMESPACE_ID::uint32 damagelimit() const;
  void set_damagelimit(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_damagelimit() const;
  void _internal_set_damagelimit(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 pdefencelimit = 4;
  bool has_pdefencelimit() const;
  private:
  bool _internal_has_pdefencelimit() const;
  public:
  void clear_pdefencelimit();
  ::PROTOBUF_NAMESPACE_ID::uint32 pdefencelimit() const;
  void set_pdefencelimit(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_pdefencelimit() const;
  void _internal_set_pdefencelimit(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 mdefencelimit = 5;
  bool has_mdefencelimit() const;
  private:
  bool _internal_has_mdefencelimit() const;
  public:
  void clear_mdefencelimit();
  ::PROTOBUF_NAMESPACE_ID::uint32 mdefencelimit() const;
  void set_mdefencelimit(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_mdefencelimit() const;
  void _internal_set_mdefencelimit(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 lifelimit = 6;
  bool has_lifelimit() const;
  private:
  bool _internal_has_lifelimit() const;
  public:
  void clear_lifelimit();
  ::PROTOBUF_NAMESPACE_ID::uint32 lifelimit() const;
  void set_lifelimit(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_lifelimit() const;
  void _internal_set_lifelimit(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:pb.heropanel_maximum.t_heropanel_maximum)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tbxid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 level_;
  ::PROTOBUF_NAMESPACE_ID::uint32 damagelimit_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pdefencelimit_;
  ::PROTOBUF_NAMESPACE_ID::uint32 mdefencelimit_;
  ::PROTOBUF_NAMESPACE_ID::uint32 lifelimit_;
  friend struct ::TableStruct_heropanel_5fmaximum_2eproto;
};
// -------------------------------------------------------------------

class heropanel_maximum :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.heropanel_maximum) */ {
 public:
  heropanel_maximum();
  virtual ~heropanel_maximum();

  heropanel_maximum(const heropanel_maximum& from);
  heropanel_maximum(heropanel_maximum&& from) noexcept
    : heropanel_maximum() {
    *this = ::std::move(from);
  }

  inline heropanel_maximum& operator=(const heropanel_maximum& from) {
    CopyFrom(from);
    return *this;
  }
  inline heropanel_maximum& operator=(heropanel_maximum&& from) noexcept {
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
  static const heropanel_maximum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const heropanel_maximum* internal_default_instance() {
    return reinterpret_cast<const heropanel_maximum*>(
               &_heropanel_maximum_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(heropanel_maximum& a, heropanel_maximum& b) {
    a.Swap(&b);
  }
  inline void Swap(heropanel_maximum* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline heropanel_maximum* New() const final {
    return CreateMaybeMessage<heropanel_maximum>(nullptr);
  }

  heropanel_maximum* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<heropanel_maximum>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const heropanel_maximum& from);
  void MergeFrom(const heropanel_maximum& from);
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
  void InternalSwap(heropanel_maximum* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.heropanel_maximum";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_heropanel_5fmaximum_2eproto);
    return ::descriptor_table_heropanel_5fmaximum_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef heropanel_maximum_t_heropanel_maximum t_heropanel_maximum;

  // accessors -------------------------------------------------------

  enum : int {
    kDatasFieldNumber = 1,
  };
  // repeated .pb.heropanel_maximum.t_heropanel_maximum datas = 1;
  int datas_size() const;
  private:
  int _internal_datas_size() const;
  public:
  void clear_datas();
  ::pb::heropanel_maximum_t_heropanel_maximum* mutable_datas(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::heropanel_maximum_t_heropanel_maximum >*
      mutable_datas();
  private:
  const ::pb::heropanel_maximum_t_heropanel_maximum& _internal_datas(int index) const;
  ::pb::heropanel_maximum_t_heropanel_maximum* _internal_add_datas();
  public:
  const ::pb::heropanel_maximum_t_heropanel_maximum& datas(int index) const;
  ::pb::heropanel_maximum_t_heropanel_maximum* add_datas();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::heropanel_maximum_t_heropanel_maximum >&
      datas() const;

  // @@protoc_insertion_point(class_scope:pb.heropanel_maximum)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::heropanel_maximum_t_heropanel_maximum > datas_;
  friend struct ::TableStruct_heropanel_5fmaximum_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// heropanel_maximum_t_heropanel_maximum

// required uint32 tbxid = 1 [default = 0];
inline bool heropanel_maximum_t_heropanel_maximum::_internal_has_tbxid() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool heropanel_maximum_t_heropanel_maximum::has_tbxid() const {
  return _internal_has_tbxid();
}
inline void heropanel_maximum_t_heropanel_maximum::clear_tbxid() {
  tbxid_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::_internal_tbxid() const {
  return tbxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::tbxid() const {
  // @@protoc_insertion_point(field_get:pb.heropanel_maximum.t_heropanel_maximum.tbxid)
  return _internal_tbxid();
}
inline void heropanel_maximum_t_heropanel_maximum::_internal_set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  tbxid_ = value;
}
inline void heropanel_maximum_t_heropanel_maximum::set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_tbxid(value);
  // @@protoc_insertion_point(field_set:pb.heropanel_maximum.t_heropanel_maximum.tbxid)
}

// required uint32 level = 2 [default = 0];
inline bool heropanel_maximum_t_heropanel_maximum::_internal_has_level() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool heropanel_maximum_t_heropanel_maximum::has_level() const {
  return _internal_has_level();
}
inline void heropanel_maximum_t_heropanel_maximum::clear_level() {
  level_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::_internal_level() const {
  return level_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::level() const {
  // @@protoc_insertion_point(field_get:pb.heropanel_maximum.t_heropanel_maximum.level)
  return _internal_level();
}
inline void heropanel_maximum_t_heropanel_maximum::_internal_set_level(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  level_ = value;
}
inline void heropanel_maximum_t_heropanel_maximum::set_level(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_level(value);
  // @@protoc_insertion_point(field_set:pb.heropanel_maximum.t_heropanel_maximum.level)
}

// required uint32 damagelimit = 3;
inline bool heropanel_maximum_t_heropanel_maximum::_internal_has_damagelimit() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool heropanel_maximum_t_heropanel_maximum::has_damagelimit() const {
  return _internal_has_damagelimit();
}
inline void heropanel_maximum_t_heropanel_maximum::clear_damagelimit() {
  damagelimit_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::_internal_damagelimit() const {
  return damagelimit_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::damagelimit() const {
  // @@protoc_insertion_point(field_get:pb.heropanel_maximum.t_heropanel_maximum.damagelimit)
  return _internal_damagelimit();
}
inline void heropanel_maximum_t_heropanel_maximum::_internal_set_damagelimit(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  damagelimit_ = value;
}
inline void heropanel_maximum_t_heropanel_maximum::set_damagelimit(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_damagelimit(value);
  // @@protoc_insertion_point(field_set:pb.heropanel_maximum.t_heropanel_maximum.damagelimit)
}

// required uint32 pdefencelimit = 4;
inline bool heropanel_maximum_t_heropanel_maximum::_internal_has_pdefencelimit() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool heropanel_maximum_t_heropanel_maximum::has_pdefencelimit() const {
  return _internal_has_pdefencelimit();
}
inline void heropanel_maximum_t_heropanel_maximum::clear_pdefencelimit() {
  pdefencelimit_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::_internal_pdefencelimit() const {
  return pdefencelimit_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::pdefencelimit() const {
  // @@protoc_insertion_point(field_get:pb.heropanel_maximum.t_heropanel_maximum.pdefencelimit)
  return _internal_pdefencelimit();
}
inline void heropanel_maximum_t_heropanel_maximum::_internal_set_pdefencelimit(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  pdefencelimit_ = value;
}
inline void heropanel_maximum_t_heropanel_maximum::set_pdefencelimit(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_pdefencelimit(value);
  // @@protoc_insertion_point(field_set:pb.heropanel_maximum.t_heropanel_maximum.pdefencelimit)
}

// required uint32 mdefencelimit = 5;
inline bool heropanel_maximum_t_heropanel_maximum::_internal_has_mdefencelimit() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool heropanel_maximum_t_heropanel_maximum::has_mdefencelimit() const {
  return _internal_has_mdefencelimit();
}
inline void heropanel_maximum_t_heropanel_maximum::clear_mdefencelimit() {
  mdefencelimit_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::_internal_mdefencelimit() const {
  return mdefencelimit_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::mdefencelimit() const {
  // @@protoc_insertion_point(field_get:pb.heropanel_maximum.t_heropanel_maximum.mdefencelimit)
  return _internal_mdefencelimit();
}
inline void heropanel_maximum_t_heropanel_maximum::_internal_set_mdefencelimit(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  mdefencelimit_ = value;
}
inline void heropanel_maximum_t_heropanel_maximum::set_mdefencelimit(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_mdefencelimit(value);
  // @@protoc_insertion_point(field_set:pb.heropanel_maximum.t_heropanel_maximum.mdefencelimit)
}

// required uint32 lifelimit = 6;
inline bool heropanel_maximum_t_heropanel_maximum::_internal_has_lifelimit() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool heropanel_maximum_t_heropanel_maximum::has_lifelimit() const {
  return _internal_has_lifelimit();
}
inline void heropanel_maximum_t_heropanel_maximum::clear_lifelimit() {
  lifelimit_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::_internal_lifelimit() const {
  return lifelimit_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 heropanel_maximum_t_heropanel_maximum::lifelimit() const {
  // @@protoc_insertion_point(field_get:pb.heropanel_maximum.t_heropanel_maximum.lifelimit)
  return _internal_lifelimit();
}
inline void heropanel_maximum_t_heropanel_maximum::_internal_set_lifelimit(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  lifelimit_ = value;
}
inline void heropanel_maximum_t_heropanel_maximum::set_lifelimit(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_lifelimit(value);
  // @@protoc_insertion_point(field_set:pb.heropanel_maximum.t_heropanel_maximum.lifelimit)
}

// -------------------------------------------------------------------

// heropanel_maximum

// repeated .pb.heropanel_maximum.t_heropanel_maximum datas = 1;
inline int heropanel_maximum::_internal_datas_size() const {
  return datas_.size();
}
inline int heropanel_maximum::datas_size() const {
  return _internal_datas_size();
}
inline void heropanel_maximum::clear_datas() {
  datas_.Clear();
}
inline ::pb::heropanel_maximum_t_heropanel_maximum* heropanel_maximum::mutable_datas(int index) {
  // @@protoc_insertion_point(field_mutable:pb.heropanel_maximum.datas)
  return datas_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::heropanel_maximum_t_heropanel_maximum >*
heropanel_maximum::mutable_datas() {
  // @@protoc_insertion_point(field_mutable_list:pb.heropanel_maximum.datas)
  return &datas_;
}
inline const ::pb::heropanel_maximum_t_heropanel_maximum& heropanel_maximum::_internal_datas(int index) const {
  return datas_.Get(index);
}
inline const ::pb::heropanel_maximum_t_heropanel_maximum& heropanel_maximum::datas(int index) const {
  // @@protoc_insertion_point(field_get:pb.heropanel_maximum.datas)
  return _internal_datas(index);
}
inline ::pb::heropanel_maximum_t_heropanel_maximum* heropanel_maximum::_internal_add_datas() {
  return datas_.Add();
}
inline ::pb::heropanel_maximum_t_heropanel_maximum* heropanel_maximum::add_datas() {
  // @@protoc_insertion_point(field_add:pb.heropanel_maximum.datas)
  return _internal_add_datas();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::heropanel_maximum_t_heropanel_maximum >&
heropanel_maximum::datas() const {
  // @@protoc_insertion_point(field_list:pb.heropanel_maximum.datas)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_heropanel_5fmaximum_2eproto