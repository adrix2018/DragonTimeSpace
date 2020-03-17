// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: copymapEvent.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_copymapEvent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_copymapEvent_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_copymapEvent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_copymapEvent_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_copymapEvent_2eproto;
namespace pb {
class copymapEvent;
class copymapEventDefaultTypeInternal;
extern copymapEventDefaultTypeInternal _copymapEvent_default_instance_;
class copymapEvent_t_copymap_event;
class copymapEvent_t_copymap_eventDefaultTypeInternal;
extern copymapEvent_t_copymap_eventDefaultTypeInternal _copymapEvent_t_copymap_event_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::copymapEvent* Arena::CreateMaybeMessage<::pb::copymapEvent>(Arena*);
template<> ::pb::copymapEvent_t_copymap_event* Arena::CreateMaybeMessage<::pb::copymapEvent_t_copymap_event>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class copymapEvent_t_copymap_event :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.copymapEvent.t_copymap_event) */ {
 public:
  copymapEvent_t_copymap_event();
  virtual ~copymapEvent_t_copymap_event();

  copymapEvent_t_copymap_event(const copymapEvent_t_copymap_event& from);
  copymapEvent_t_copymap_event(copymapEvent_t_copymap_event&& from) noexcept
    : copymapEvent_t_copymap_event() {
    *this = ::std::move(from);
  }

  inline copymapEvent_t_copymap_event& operator=(const copymapEvent_t_copymap_event& from) {
    CopyFrom(from);
    return *this;
  }
  inline copymapEvent_t_copymap_event& operator=(copymapEvent_t_copymap_event&& from) noexcept {
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
  static const copymapEvent_t_copymap_event& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const copymapEvent_t_copymap_event* internal_default_instance() {
    return reinterpret_cast<const copymapEvent_t_copymap_event*>(
               &_copymapEvent_t_copymap_event_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(copymapEvent_t_copymap_event& a, copymapEvent_t_copymap_event& b) {
    a.Swap(&b);
  }
  inline void Swap(copymapEvent_t_copymap_event* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline copymapEvent_t_copymap_event* New() const final {
    return CreateMaybeMessage<copymapEvent_t_copymap_event>(nullptr);
  }

  copymapEvent_t_copymap_event* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<copymapEvent_t_copymap_event>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const copymapEvent_t_copymap_event& from);
  void MergeFrom(const copymapEvent_t_copymap_event& from);
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
  void InternalSwap(copymapEvent_t_copymap_event* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.copymapEvent.t_copymap_event";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_copymapEvent_2eproto);
    return ::descriptor_table_copymapEvent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 3,
    kDescFieldNumber = 7,
    kTbxidFieldNumber = 1,
    kIdFieldNumber = 2,
    kTypeFieldNumber = 4,
    kLasttimeFieldNumber = 5,
    kPreparetimeFieldNumber = 6,
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

  // required string desc = 7;
  bool has_desc() const;
  private:
  bool _internal_has_desc() const;
  public:
  void clear_desc();
  const std::string& desc() const;
  void set_desc(const std::string& value);
  void set_desc(std::string&& value);
  void set_desc(const char* value);
  void set_desc(const char* value, size_t size);
  std::string* mutable_desc();
  std::string* release_desc();
  void set_allocated_desc(std::string* desc);
  private:
  const std::string& _internal_desc() const;
  void _internal_set_desc(const std::string& value);
  std::string* _internal_mutable_desc();
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

  // required uint32 type = 4;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_type() const;
  void _internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 lasttime = 5;
  bool has_lasttime() const;
  private:
  bool _internal_has_lasttime() const;
  public:
  void clear_lasttime();
  ::PROTOBUF_NAMESPACE_ID::uint32 lasttime() const;
  void set_lasttime(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_lasttime() const;
  void _internal_set_lasttime(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 preparetime = 6;
  bool has_preparetime() const;
  private:
  bool _internal_has_preparetime() const;
  public:
  void clear_preparetime();
  ::PROTOBUF_NAMESPACE_ID::uint32 preparetime() const;
  void set_preparetime(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_preparetime() const;
  void _internal_set_preparetime(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:pb.copymapEvent.t_copymap_event)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr desc_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tbxid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 type_;
  ::PROTOBUF_NAMESPACE_ID::uint32 lasttime_;
  ::PROTOBUF_NAMESPACE_ID::uint32 preparetime_;
  friend struct ::TableStruct_copymapEvent_2eproto;
};
// -------------------------------------------------------------------

class copymapEvent :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.copymapEvent) */ {
 public:
  copymapEvent();
  virtual ~copymapEvent();

  copymapEvent(const copymapEvent& from);
  copymapEvent(copymapEvent&& from) noexcept
    : copymapEvent() {
    *this = ::std::move(from);
  }

  inline copymapEvent& operator=(const copymapEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline copymapEvent& operator=(copymapEvent&& from) noexcept {
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
  static const copymapEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const copymapEvent* internal_default_instance() {
    return reinterpret_cast<const copymapEvent*>(
               &_copymapEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(copymapEvent& a, copymapEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(copymapEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline copymapEvent* New() const final {
    return CreateMaybeMessage<copymapEvent>(nullptr);
  }

  copymapEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<copymapEvent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const copymapEvent& from);
  void MergeFrom(const copymapEvent& from);
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
  void InternalSwap(copymapEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.copymapEvent";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_copymapEvent_2eproto);
    return ::descriptor_table_copymapEvent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef copymapEvent_t_copymap_event t_copymap_event;

  // accessors -------------------------------------------------------

  enum : int {
    kDatasFieldNumber = 1,
  };
  // repeated .pb.copymapEvent.t_copymap_event datas = 1;
  int datas_size() const;
  private:
  int _internal_datas_size() const;
  public:
  void clear_datas();
  ::pb::copymapEvent_t_copymap_event* mutable_datas(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::copymapEvent_t_copymap_event >*
      mutable_datas();
  private:
  const ::pb::copymapEvent_t_copymap_event& _internal_datas(int index) const;
  ::pb::copymapEvent_t_copymap_event* _internal_add_datas();
  public:
  const ::pb::copymapEvent_t_copymap_event& datas(int index) const;
  ::pb::copymapEvent_t_copymap_event* add_datas();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::copymapEvent_t_copymap_event >&
      datas() const;

  // @@protoc_insertion_point(class_scope:pb.copymapEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::copymapEvent_t_copymap_event > datas_;
  friend struct ::TableStruct_copymapEvent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// copymapEvent_t_copymap_event

// required uint32 tbxid = 1 [default = 0];
inline bool copymapEvent_t_copymap_event::_internal_has_tbxid() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool copymapEvent_t_copymap_event::has_tbxid() const {
  return _internal_has_tbxid();
}
inline void copymapEvent_t_copymap_event::clear_tbxid() {
  tbxid_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::_internal_tbxid() const {
  return tbxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::tbxid() const {
  // @@protoc_insertion_point(field_get:pb.copymapEvent.t_copymap_event.tbxid)
  return _internal_tbxid();
}
inline void copymapEvent_t_copymap_event::_internal_set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  tbxid_ = value;
}
inline void copymapEvent_t_copymap_event::set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_tbxid(value);
  // @@protoc_insertion_point(field_set:pb.copymapEvent.t_copymap_event.tbxid)
}

// required uint32 id = 2 [default = 0];
inline bool copymapEvent_t_copymap_event::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool copymapEvent_t_copymap_event::has_id() const {
  return _internal_has_id();
}
inline void copymapEvent_t_copymap_event::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::id() const {
  // @@protoc_insertion_point(field_get:pb.copymapEvent.t_copymap_event.id)
  return _internal_id();
}
inline void copymapEvent_t_copymap_event::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  id_ = value;
}
inline void copymapEvent_t_copymap_event::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:pb.copymapEvent.t_copymap_event.id)
}

// required string name = 3;
inline bool copymapEvent_t_copymap_event::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool copymapEvent_t_copymap_event::has_name() const {
  return _internal_has_name();
}
inline void copymapEvent_t_copymap_event::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& copymapEvent_t_copymap_event::name() const {
  // @@protoc_insertion_point(field_get:pb.copymapEvent.t_copymap_event.name)
  return _internal_name();
}
inline void copymapEvent_t_copymap_event::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:pb.copymapEvent.t_copymap_event.name)
}
inline std::string* copymapEvent_t_copymap_event::mutable_name() {
  // @@protoc_insertion_point(field_mutable:pb.copymapEvent.t_copymap_event.name)
  return _internal_mutable_name();
}
inline const std::string& copymapEvent_t_copymap_event::_internal_name() const {
  return name_.GetNoArena();
}
inline void copymapEvent_t_copymap_event::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void copymapEvent_t_copymap_event::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.copymapEvent.t_copymap_event.name)
}
inline void copymapEvent_t_copymap_event::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.copymapEvent.t_copymap_event.name)
}
inline void copymapEvent_t_copymap_event::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.copymapEvent.t_copymap_event.name)
}
inline std::string* copymapEvent_t_copymap_event::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* copymapEvent_t_copymap_event::release_name() {
  // @@protoc_insertion_point(field_release:pb.copymapEvent.t_copymap_event.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void copymapEvent_t_copymap_event::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:pb.copymapEvent.t_copymap_event.name)
}

// required uint32 type = 4;
inline bool copymapEvent_t_copymap_event::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool copymapEvent_t_copymap_event::has_type() const {
  return _internal_has_type();
}
inline void copymapEvent_t_copymap_event::clear_type() {
  type_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::_internal_type() const {
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::type() const {
  // @@protoc_insertion_point(field_get:pb.copymapEvent.t_copymap_event.type)
  return _internal_type();
}
inline void copymapEvent_t_copymap_event::_internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  type_ = value;
}
inline void copymapEvent_t_copymap_event::set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:pb.copymapEvent.t_copymap_event.type)
}

// required uint32 lasttime = 5;
inline bool copymapEvent_t_copymap_event::_internal_has_lasttime() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool copymapEvent_t_copymap_event::has_lasttime() const {
  return _internal_has_lasttime();
}
inline void copymapEvent_t_copymap_event::clear_lasttime() {
  lasttime_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::_internal_lasttime() const {
  return lasttime_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::lasttime() const {
  // @@protoc_insertion_point(field_get:pb.copymapEvent.t_copymap_event.lasttime)
  return _internal_lasttime();
}
inline void copymapEvent_t_copymap_event::_internal_set_lasttime(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  lasttime_ = value;
}
inline void copymapEvent_t_copymap_event::set_lasttime(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_lasttime(value);
  // @@protoc_insertion_point(field_set:pb.copymapEvent.t_copymap_event.lasttime)
}

// required uint32 preparetime = 6;
inline bool copymapEvent_t_copymap_event::_internal_has_preparetime() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool copymapEvent_t_copymap_event::has_preparetime() const {
  return _internal_has_preparetime();
}
inline void copymapEvent_t_copymap_event::clear_preparetime() {
  preparetime_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::_internal_preparetime() const {
  return preparetime_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 copymapEvent_t_copymap_event::preparetime() const {
  // @@protoc_insertion_point(field_get:pb.copymapEvent.t_copymap_event.preparetime)
  return _internal_preparetime();
}
inline void copymapEvent_t_copymap_event::_internal_set_preparetime(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000040u;
  preparetime_ = value;
}
inline void copymapEvent_t_copymap_event::set_preparetime(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_preparetime(value);
  // @@protoc_insertion_point(field_set:pb.copymapEvent.t_copymap_event.preparetime)
}

// required string desc = 7;
inline bool copymapEvent_t_copymap_event::_internal_has_desc() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool copymapEvent_t_copymap_event::has_desc() const {
  return _internal_has_desc();
}
inline void copymapEvent_t_copymap_event::clear_desc() {
  desc_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& copymapEvent_t_copymap_event::desc() const {
  // @@protoc_insertion_point(field_get:pb.copymapEvent.t_copymap_event.desc)
  return _internal_desc();
}
inline void copymapEvent_t_copymap_event::set_desc(const std::string& value) {
  _internal_set_desc(value);
  // @@protoc_insertion_point(field_set:pb.copymapEvent.t_copymap_event.desc)
}
inline std::string* copymapEvent_t_copymap_event::mutable_desc() {
  // @@protoc_insertion_point(field_mutable:pb.copymapEvent.t_copymap_event.desc)
  return _internal_mutable_desc();
}
inline const std::string& copymapEvent_t_copymap_event::_internal_desc() const {
  return desc_.GetNoArena();
}
inline void copymapEvent_t_copymap_event::_internal_set_desc(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  desc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void copymapEvent_t_copymap_event::set_desc(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  desc_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.copymapEvent.t_copymap_event.desc)
}
inline void copymapEvent_t_copymap_event::set_desc(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  desc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.copymapEvent.t_copymap_event.desc)
}
inline void copymapEvent_t_copymap_event::set_desc(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  desc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.copymapEvent.t_copymap_event.desc)
}
inline std::string* copymapEvent_t_copymap_event::_internal_mutable_desc() {
  _has_bits_[0] |= 0x00000002u;
  return desc_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* copymapEvent_t_copymap_event::release_desc() {
  // @@protoc_insertion_point(field_release:pb.copymapEvent.t_copymap_event.desc)
  if (!_internal_has_desc()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return desc_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void copymapEvent_t_copymap_event::set_allocated_desc(std::string* desc) {
  if (desc != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  desc_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), desc);
  // @@protoc_insertion_point(field_set_allocated:pb.copymapEvent.t_copymap_event.desc)
}

// -------------------------------------------------------------------

// copymapEvent

// repeated .pb.copymapEvent.t_copymap_event datas = 1;
inline int copymapEvent::_internal_datas_size() const {
  return datas_.size();
}
inline int copymapEvent::datas_size() const {
  return _internal_datas_size();
}
inline void copymapEvent::clear_datas() {
  datas_.Clear();
}
inline ::pb::copymapEvent_t_copymap_event* copymapEvent::mutable_datas(int index) {
  // @@protoc_insertion_point(field_mutable:pb.copymapEvent.datas)
  return datas_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::copymapEvent_t_copymap_event >*
copymapEvent::mutable_datas() {
  // @@protoc_insertion_point(field_mutable_list:pb.copymapEvent.datas)
  return &datas_;
}
inline const ::pb::copymapEvent_t_copymap_event& copymapEvent::_internal_datas(int index) const {
  return datas_.Get(index);
}
inline const ::pb::copymapEvent_t_copymap_event& copymapEvent::datas(int index) const {
  // @@protoc_insertion_point(field_get:pb.copymapEvent.datas)
  return _internal_datas(index);
}
inline ::pb::copymapEvent_t_copymap_event* copymapEvent::_internal_add_datas() {
  return datas_.Add();
}
inline ::pb::copymapEvent_t_copymap_event* copymapEvent::add_datas() {
  // @@protoc_insertion_point(field_add:pb.copymapEvent.datas)
  return _internal_add_datas();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::copymapEvent_t_copymap_event >&
copymapEvent::datas() const {
  // @@protoc_insertion_point(field_list:pb.copymapEvent.datas)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_copymapEvent_2eproto