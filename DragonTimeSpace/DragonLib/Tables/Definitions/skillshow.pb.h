// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skillshow.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_skillshow_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_skillshow_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_skillshow_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_skillshow_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_skillshow_2eproto;
namespace pb {
class skillshow;
class skillshowDefaultTypeInternal;
extern skillshowDefaultTypeInternal _skillshow_default_instance_;
class skillshow_t_skillshow;
class skillshow_t_skillshowDefaultTypeInternal;
extern skillshow_t_skillshowDefaultTypeInternal _skillshow_t_skillshow_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::skillshow* Arena::CreateMaybeMessage<::pb::skillshow>(Arena*);
template<> ::pb::skillshow_t_skillshow* Arena::CreateMaybeMessage<::pb::skillshow_t_skillshow>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class skillshow_t_skillshow :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.skillshow.t_skillshow) */ {
 public:
  skillshow_t_skillshow();
  virtual ~skillshow_t_skillshow();

  skillshow_t_skillshow(const skillshow_t_skillshow& from);
  skillshow_t_skillshow(skillshow_t_skillshow&& from) noexcept
    : skillshow_t_skillshow() {
    *this = ::std::move(from);
  }

  inline skillshow_t_skillshow& operator=(const skillshow_t_skillshow& from) {
    CopyFrom(from);
    return *this;
  }
  inline skillshow_t_skillshow& operator=(skillshow_t_skillshow&& from) noexcept {
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
  static const skillshow_t_skillshow& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const skillshow_t_skillshow* internal_default_instance() {
    return reinterpret_cast<const skillshow_t_skillshow*>(
               &_skillshow_t_skillshow_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(skillshow_t_skillshow& a, skillshow_t_skillshow& b) {
    a.Swap(&b);
  }
  inline void Swap(skillshow_t_skillshow* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline skillshow_t_skillshow* New() const final {
    return CreateMaybeMessage<skillshow_t_skillshow>(nullptr);
  }

  skillshow_t_skillshow* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<skillshow_t_skillshow>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const skillshow_t_skillshow& from);
  void MergeFrom(const skillshow_t_skillshow& from);
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
  void InternalSwap(skillshow_t_skillshow* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.skillshow.t_skillshow";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_skillshow_2eproto);
    return ::descriptor_table_skillshow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeronameFieldNumber = 3,
    kEvolutionFieldNumber = 4,
    kCoreskillFieldNumber = 5,
    kSkillFieldNumber = 6,
    kBreakskillFieldNumber = 7,
    kTbxidFieldNumber = 1,
    kIdFieldNumber = 2,
  };
  // required string heroname = 3;
  bool has_heroname() const;
  private:
  bool _internal_has_heroname() const;
  public:
  void clear_heroname();
  const std::string& heroname() const;
  void set_heroname(const std::string& value);
  void set_heroname(std::string&& value);
  void set_heroname(const char* value);
  void set_heroname(const char* value, size_t size);
  std::string* mutable_heroname();
  std::string* release_heroname();
  void set_allocated_heroname(std::string* heroname);
  private:
  const std::string& _internal_heroname() const;
  void _internal_set_heroname(const std::string& value);
  std::string* _internal_mutable_heroname();
  public:

  // required string evolution = 4;
  bool has_evolution() const;
  private:
  bool _internal_has_evolution() const;
  public:
  void clear_evolution();
  const std::string& evolution() const;
  void set_evolution(const std::string& value);
  void set_evolution(std::string&& value);
  void set_evolution(const char* value);
  void set_evolution(const char* value, size_t size);
  std::string* mutable_evolution();
  std::string* release_evolution();
  void set_allocated_evolution(std::string* evolution);
  private:
  const std::string& _internal_evolution() const;
  void _internal_set_evolution(const std::string& value);
  std::string* _internal_mutable_evolution();
  public:

  // required string coreskill = 5;
  bool has_coreskill() const;
  private:
  bool _internal_has_coreskill() const;
  public:
  void clear_coreskill();
  const std::string& coreskill() const;
  void set_coreskill(const std::string& value);
  void set_coreskill(std::string&& value);
  void set_coreskill(const char* value);
  void set_coreskill(const char* value, size_t size);
  std::string* mutable_coreskill();
  std::string* release_coreskill();
  void set_allocated_coreskill(std::string* coreskill);
  private:
  const std::string& _internal_coreskill() const;
  void _internal_set_coreskill(const std::string& value);
  std::string* _internal_mutable_coreskill();
  public:

  // required string skill = 6;
  bool has_skill() const;
  private:
  bool _internal_has_skill() const;
  public:
  void clear_skill();
  const std::string& skill() const;
  void set_skill(const std::string& value);
  void set_skill(std::string&& value);
  void set_skill(const char* value);
  void set_skill(const char* value, size_t size);
  std::string* mutable_skill();
  std::string* release_skill();
  void set_allocated_skill(std::string* skill);
  private:
  const std::string& _internal_skill() const;
  void _internal_set_skill(const std::string& value);
  std::string* _internal_mutable_skill();
  public:

  // required string breakskill = 7;
  bool has_breakskill() const;
  private:
  bool _internal_has_breakskill() const;
  public:
  void clear_breakskill();
  const std::string& breakskill() const;
  void set_breakskill(const std::string& value);
  void set_breakskill(std::string&& value);
  void set_breakskill(const char* value);
  void set_breakskill(const char* value, size_t size);
  std::string* mutable_breakskill();
  std::string* release_breakskill();
  void set_allocated_breakskill(std::string* breakskill);
  private:
  const std::string& _internal_breakskill() const;
  void _internal_set_breakskill(const std::string& value);
  std::string* _internal_mutable_breakskill();
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

  // @@protoc_insertion_point(class_scope:pb.skillshow.t_skillshow)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr heroname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr evolution_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr coreskill_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr skill_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr breakskill_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tbxid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  friend struct ::TableStruct_skillshow_2eproto;
};
// -------------------------------------------------------------------

class skillshow :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.skillshow) */ {
 public:
  skillshow();
  virtual ~skillshow();

  skillshow(const skillshow& from);
  skillshow(skillshow&& from) noexcept
    : skillshow() {
    *this = ::std::move(from);
  }

  inline skillshow& operator=(const skillshow& from) {
    CopyFrom(from);
    return *this;
  }
  inline skillshow& operator=(skillshow&& from) noexcept {
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
  static const skillshow& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const skillshow* internal_default_instance() {
    return reinterpret_cast<const skillshow*>(
               &_skillshow_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(skillshow& a, skillshow& b) {
    a.Swap(&b);
  }
  inline void Swap(skillshow* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline skillshow* New() const final {
    return CreateMaybeMessage<skillshow>(nullptr);
  }

  skillshow* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<skillshow>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const skillshow& from);
  void MergeFrom(const skillshow& from);
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
  void InternalSwap(skillshow* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.skillshow";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_skillshow_2eproto);
    return ::descriptor_table_skillshow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef skillshow_t_skillshow t_skillshow;

  // accessors -------------------------------------------------------

  enum : int {
    kDatasFieldNumber = 1,
  };
  // repeated .pb.skillshow.t_skillshow datas = 1;
  int datas_size() const;
  private:
  int _internal_datas_size() const;
  public:
  void clear_datas();
  ::pb::skillshow_t_skillshow* mutable_datas(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::skillshow_t_skillshow >*
      mutable_datas();
  private:
  const ::pb::skillshow_t_skillshow& _internal_datas(int index) const;
  ::pb::skillshow_t_skillshow* _internal_add_datas();
  public:
  const ::pb::skillshow_t_skillshow& datas(int index) const;
  ::pb::skillshow_t_skillshow* add_datas();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::skillshow_t_skillshow >&
      datas() const;

  // @@protoc_insertion_point(class_scope:pb.skillshow)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::skillshow_t_skillshow > datas_;
  friend struct ::TableStruct_skillshow_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// skillshow_t_skillshow

// required uint32 tbxid = 1 [default = 0];
inline bool skillshow_t_skillshow::_internal_has_tbxid() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool skillshow_t_skillshow::has_tbxid() const {
  return _internal_has_tbxid();
}
inline void skillshow_t_skillshow::clear_tbxid() {
  tbxid_ = 0u;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 skillshow_t_skillshow::_internal_tbxid() const {
  return tbxid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 skillshow_t_skillshow::tbxid() const {
  // @@protoc_insertion_point(field_get:pb.skillshow.t_skillshow.tbxid)
  return _internal_tbxid();
}
inline void skillshow_t_skillshow::_internal_set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000020u;
  tbxid_ = value;
}
inline void skillshow_t_skillshow::set_tbxid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_tbxid(value);
  // @@protoc_insertion_point(field_set:pb.skillshow.t_skillshow.tbxid)
}

// required uint32 id = 2 [default = 0];
inline bool skillshow_t_skillshow::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool skillshow_t_skillshow::has_id() const {
  return _internal_has_id();
}
inline void skillshow_t_skillshow::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 skillshow_t_skillshow::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 skillshow_t_skillshow::id() const {
  // @@protoc_insertion_point(field_get:pb.skillshow.t_skillshow.id)
  return _internal_id();
}
inline void skillshow_t_skillshow::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000040u;
  id_ = value;
}
inline void skillshow_t_skillshow::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:pb.skillshow.t_skillshow.id)
}

// required string heroname = 3;
inline bool skillshow_t_skillshow::_internal_has_heroname() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool skillshow_t_skillshow::has_heroname() const {
  return _internal_has_heroname();
}
inline void skillshow_t_skillshow::clear_heroname() {
  heroname_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& skillshow_t_skillshow::heroname() const {
  // @@protoc_insertion_point(field_get:pb.skillshow.t_skillshow.heroname)
  return _internal_heroname();
}
inline void skillshow_t_skillshow::set_heroname(const std::string& value) {
  _internal_set_heroname(value);
  // @@protoc_insertion_point(field_set:pb.skillshow.t_skillshow.heroname)
}
inline std::string* skillshow_t_skillshow::mutable_heroname() {
  // @@protoc_insertion_point(field_mutable:pb.skillshow.t_skillshow.heroname)
  return _internal_mutable_heroname();
}
inline const std::string& skillshow_t_skillshow::_internal_heroname() const {
  return heroname_.GetNoArena();
}
inline void skillshow_t_skillshow::_internal_set_heroname(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  heroname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void skillshow_t_skillshow::set_heroname(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  heroname_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.skillshow.t_skillshow.heroname)
}
inline void skillshow_t_skillshow::set_heroname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  heroname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.skillshow.t_skillshow.heroname)
}
inline void skillshow_t_skillshow::set_heroname(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  heroname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.skillshow.t_skillshow.heroname)
}
inline std::string* skillshow_t_skillshow::_internal_mutable_heroname() {
  _has_bits_[0] |= 0x00000001u;
  return heroname_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* skillshow_t_skillshow::release_heroname() {
  // @@protoc_insertion_point(field_release:pb.skillshow.t_skillshow.heroname)
  if (!_internal_has_heroname()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return heroname_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void skillshow_t_skillshow::set_allocated_heroname(std::string* heroname) {
  if (heroname != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  heroname_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), heroname);
  // @@protoc_insertion_point(field_set_allocated:pb.skillshow.t_skillshow.heroname)
}

// required string evolution = 4;
inline bool skillshow_t_skillshow::_internal_has_evolution() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool skillshow_t_skillshow::has_evolution() const {
  return _internal_has_evolution();
}
inline void skillshow_t_skillshow::clear_evolution() {
  evolution_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& skillshow_t_skillshow::evolution() const {
  // @@protoc_insertion_point(field_get:pb.skillshow.t_skillshow.evolution)
  return _internal_evolution();
}
inline void skillshow_t_skillshow::set_evolution(const std::string& value) {
  _internal_set_evolution(value);
  // @@protoc_insertion_point(field_set:pb.skillshow.t_skillshow.evolution)
}
inline std::string* skillshow_t_skillshow::mutable_evolution() {
  // @@protoc_insertion_point(field_mutable:pb.skillshow.t_skillshow.evolution)
  return _internal_mutable_evolution();
}
inline const std::string& skillshow_t_skillshow::_internal_evolution() const {
  return evolution_.GetNoArena();
}
inline void skillshow_t_skillshow::_internal_set_evolution(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  evolution_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void skillshow_t_skillshow::set_evolution(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  evolution_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.skillshow.t_skillshow.evolution)
}
inline void skillshow_t_skillshow::set_evolution(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  evolution_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.skillshow.t_skillshow.evolution)
}
inline void skillshow_t_skillshow::set_evolution(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  evolution_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.skillshow.t_skillshow.evolution)
}
inline std::string* skillshow_t_skillshow::_internal_mutable_evolution() {
  _has_bits_[0] |= 0x00000002u;
  return evolution_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* skillshow_t_skillshow::release_evolution() {
  // @@protoc_insertion_point(field_release:pb.skillshow.t_skillshow.evolution)
  if (!_internal_has_evolution()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return evolution_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void skillshow_t_skillshow::set_allocated_evolution(std::string* evolution) {
  if (evolution != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  evolution_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), evolution);
  // @@protoc_insertion_point(field_set_allocated:pb.skillshow.t_skillshow.evolution)
}

// required string coreskill = 5;
inline bool skillshow_t_skillshow::_internal_has_coreskill() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool skillshow_t_skillshow::has_coreskill() const {
  return _internal_has_coreskill();
}
inline void skillshow_t_skillshow::clear_coreskill() {
  coreskill_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& skillshow_t_skillshow::coreskill() const {
  // @@protoc_insertion_point(field_get:pb.skillshow.t_skillshow.coreskill)
  return _internal_coreskill();
}
inline void skillshow_t_skillshow::set_coreskill(const std::string& value) {
  _internal_set_coreskill(value);
  // @@protoc_insertion_point(field_set:pb.skillshow.t_skillshow.coreskill)
}
inline std::string* skillshow_t_skillshow::mutable_coreskill() {
  // @@protoc_insertion_point(field_mutable:pb.skillshow.t_skillshow.coreskill)
  return _internal_mutable_coreskill();
}
inline const std::string& skillshow_t_skillshow::_internal_coreskill() const {
  return coreskill_.GetNoArena();
}
inline void skillshow_t_skillshow::_internal_set_coreskill(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  coreskill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void skillshow_t_skillshow::set_coreskill(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  coreskill_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.skillshow.t_skillshow.coreskill)
}
inline void skillshow_t_skillshow::set_coreskill(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  coreskill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.skillshow.t_skillshow.coreskill)
}
inline void skillshow_t_skillshow::set_coreskill(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  coreskill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.skillshow.t_skillshow.coreskill)
}
inline std::string* skillshow_t_skillshow::_internal_mutable_coreskill() {
  _has_bits_[0] |= 0x00000004u;
  return coreskill_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* skillshow_t_skillshow::release_coreskill() {
  // @@protoc_insertion_point(field_release:pb.skillshow.t_skillshow.coreskill)
  if (!_internal_has_coreskill()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return coreskill_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void skillshow_t_skillshow::set_allocated_coreskill(std::string* coreskill) {
  if (coreskill != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  coreskill_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), coreskill);
  // @@protoc_insertion_point(field_set_allocated:pb.skillshow.t_skillshow.coreskill)
}

// required string skill = 6;
inline bool skillshow_t_skillshow::_internal_has_skill() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool skillshow_t_skillshow::has_skill() const {
  return _internal_has_skill();
}
inline void skillshow_t_skillshow::clear_skill() {
  skill_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& skillshow_t_skillshow::skill() const {
  // @@protoc_insertion_point(field_get:pb.skillshow.t_skillshow.skill)
  return _internal_skill();
}
inline void skillshow_t_skillshow::set_skill(const std::string& value) {
  _internal_set_skill(value);
  // @@protoc_insertion_point(field_set:pb.skillshow.t_skillshow.skill)
}
inline std::string* skillshow_t_skillshow::mutable_skill() {
  // @@protoc_insertion_point(field_mutable:pb.skillshow.t_skillshow.skill)
  return _internal_mutable_skill();
}
inline const std::string& skillshow_t_skillshow::_internal_skill() const {
  return skill_.GetNoArena();
}
inline void skillshow_t_skillshow::_internal_set_skill(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  skill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void skillshow_t_skillshow::set_skill(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  skill_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.skillshow.t_skillshow.skill)
}
inline void skillshow_t_skillshow::set_skill(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  skill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.skillshow.t_skillshow.skill)
}
inline void skillshow_t_skillshow::set_skill(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  skill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.skillshow.t_skillshow.skill)
}
inline std::string* skillshow_t_skillshow::_internal_mutable_skill() {
  _has_bits_[0] |= 0x00000008u;
  return skill_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* skillshow_t_skillshow::release_skill() {
  // @@protoc_insertion_point(field_release:pb.skillshow.t_skillshow.skill)
  if (!_internal_has_skill()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return skill_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void skillshow_t_skillshow::set_allocated_skill(std::string* skill) {
  if (skill != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  skill_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), skill);
  // @@protoc_insertion_point(field_set_allocated:pb.skillshow.t_skillshow.skill)
}

// required string breakskill = 7;
inline bool skillshow_t_skillshow::_internal_has_breakskill() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool skillshow_t_skillshow::has_breakskill() const {
  return _internal_has_breakskill();
}
inline void skillshow_t_skillshow::clear_breakskill() {
  breakskill_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000010u;
}
inline const std::string& skillshow_t_skillshow::breakskill() const {
  // @@protoc_insertion_point(field_get:pb.skillshow.t_skillshow.breakskill)
  return _internal_breakskill();
}
inline void skillshow_t_skillshow::set_breakskill(const std::string& value) {
  _internal_set_breakskill(value);
  // @@protoc_insertion_point(field_set:pb.skillshow.t_skillshow.breakskill)
}
inline std::string* skillshow_t_skillshow::mutable_breakskill() {
  // @@protoc_insertion_point(field_mutable:pb.skillshow.t_skillshow.breakskill)
  return _internal_mutable_breakskill();
}
inline const std::string& skillshow_t_skillshow::_internal_breakskill() const {
  return breakskill_.GetNoArena();
}
inline void skillshow_t_skillshow::_internal_set_breakskill(const std::string& value) {
  _has_bits_[0] |= 0x00000010u;
  breakskill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void skillshow_t_skillshow::set_breakskill(std::string&& value) {
  _has_bits_[0] |= 0x00000010u;
  breakskill_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.skillshow.t_skillshow.breakskill)
}
inline void skillshow_t_skillshow::set_breakskill(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000010u;
  breakskill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.skillshow.t_skillshow.breakskill)
}
inline void skillshow_t_skillshow::set_breakskill(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000010u;
  breakskill_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.skillshow.t_skillshow.breakskill)
}
inline std::string* skillshow_t_skillshow::_internal_mutable_breakskill() {
  _has_bits_[0] |= 0x00000010u;
  return breakskill_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* skillshow_t_skillshow::release_breakskill() {
  // @@protoc_insertion_point(field_release:pb.skillshow.t_skillshow.breakskill)
  if (!_internal_has_breakskill()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000010u;
  return breakskill_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void skillshow_t_skillshow::set_allocated_breakskill(std::string* breakskill) {
  if (breakskill != nullptr) {
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  breakskill_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), breakskill);
  // @@protoc_insertion_point(field_set_allocated:pb.skillshow.t_skillshow.breakskill)
}

// -------------------------------------------------------------------

// skillshow

// repeated .pb.skillshow.t_skillshow datas = 1;
inline int skillshow::_internal_datas_size() const {
  return datas_.size();
}
inline int skillshow::datas_size() const {
  return _internal_datas_size();
}
inline void skillshow::clear_datas() {
  datas_.Clear();
}
inline ::pb::skillshow_t_skillshow* skillshow::mutable_datas(int index) {
  // @@protoc_insertion_point(field_mutable:pb.skillshow.datas)
  return datas_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::skillshow_t_skillshow >*
skillshow::mutable_datas() {
  // @@protoc_insertion_point(field_mutable_list:pb.skillshow.datas)
  return &datas_;
}
inline const ::pb::skillshow_t_skillshow& skillshow::_internal_datas(int index) const {
  return datas_.Get(index);
}
inline const ::pb::skillshow_t_skillshow& skillshow::datas(int index) const {
  // @@protoc_insertion_point(field_get:pb.skillshow.datas)
  return _internal_datas(index);
}
inline ::pb::skillshow_t_skillshow* skillshow::_internal_add_datas() {
  return datas_.Add();
}
inline ::pb::skillshow_t_skillshow* skillshow::add_datas() {
  // @@protoc_insertion_point(field_add:pb.skillshow.datas)
  return _internal_add_datas();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::skillshow_t_skillshow >&
skillshow::datas() const {
  // @@protoc_insertion_point(field_list:pb.skillshow.datas)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_skillshow_2eproto
