// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: treasure.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_treasure_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_treasure_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_treasure_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_treasure_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_treasure_2eproto;
namespace treasure {
class MSG_ReqChangeMapHuntTreasure_CS;
class MSG_ReqChangeMapHuntTreasure_CSDefaultTypeInternal;
extern MSG_ReqChangeMapHuntTreasure_CSDefaultTypeInternal _MSG_ReqChangeMapHuntTreasure_CS_default_instance_;
class MSG_RetChangeMapHuntTreasure_SC;
class MSG_RetChangeMapHuntTreasure_SCDefaultTypeInternal;
extern MSG_RetChangeMapHuntTreasure_SCDefaultTypeInternal _MSG_RetChangeMapHuntTreasure_SC_default_instance_;
class MSG_Ret_TreasurePos_SC;
class MSG_Ret_TreasurePos_SCDefaultTypeInternal;
extern MSG_Ret_TreasurePos_SCDefaultTypeInternal _MSG_Ret_TreasurePos_SC_default_instance_;
class PosData;
class PosDataDefaultTypeInternal;
extern PosDataDefaultTypeInternal _PosData_default_instance_;
}  // namespace treasure
PROTOBUF_NAMESPACE_OPEN
template<> ::treasure::MSG_ReqChangeMapHuntTreasure_CS* Arena::CreateMaybeMessage<::treasure::MSG_ReqChangeMapHuntTreasure_CS>(Arena*);
template<> ::treasure::MSG_RetChangeMapHuntTreasure_SC* Arena::CreateMaybeMessage<::treasure::MSG_RetChangeMapHuntTreasure_SC>(Arena*);
template<> ::treasure::MSG_Ret_TreasurePos_SC* Arena::CreateMaybeMessage<::treasure::MSG_Ret_TreasurePos_SC>(Arena*);
template<> ::treasure::PosData* Arena::CreateMaybeMessage<::treasure::PosData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace treasure {

// ===================================================================

class PosData :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:treasure.PosData) */ {
 public:
  PosData();
  virtual ~PosData();

  PosData(const PosData& from);
  PosData(PosData&& from) noexcept
    : PosData() {
    *this = ::std::move(from);
  }

  inline PosData& operator=(const PosData& from) {
    CopyFrom(from);
    return *this;
  }
  inline PosData& operator=(PosData&& from) noexcept {
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
  static const PosData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PosData* internal_default_instance() {
    return reinterpret_cast<const PosData*>(
               &_PosData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PosData& a, PosData& b) {
    a.Swap(&b);
  }
  inline void Swap(PosData* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PosData* New() const final {
    return CreateMaybeMessage<PosData>(nullptr);
  }

  PosData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PosData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PosData& from);
  void MergeFrom(const PosData& from);
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
  void InternalSwap(PosData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "treasure.PosData";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_treasure_2eproto);
    return ::descriptor_table_treasure_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPosxFieldNumber = 1,
    kPosyFieldNumber = 2,
    kMapidFieldNumber = 3,
  };
  // optional uint32 posx = 1;
  bool has_posx() const;
  private:
  bool _internal_has_posx() const;
  public:
  void clear_posx();
  ::PROTOBUF_NAMESPACE_ID::uint32 posx() const;
  void set_posx(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_posx() const;
  void _internal_set_posx(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional uint32 posy = 2;
  bool has_posy() const;
  private:
  bool _internal_has_posy() const;
  public:
  void clear_posy();
  ::PROTOBUF_NAMESPACE_ID::uint32 posy() const;
  void set_posy(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_posy() const;
  void _internal_set_posy(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional uint32 mapid = 3;
  bool has_mapid() const;
  private:
  bool _internal_has_mapid() const;
  public:
  void clear_mapid();
  ::PROTOBUF_NAMESPACE_ID::uint32 mapid() const;
  void set_mapid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_mapid() const;
  void _internal_set_mapid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:treasure.PosData)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 posx_;
  ::PROTOBUF_NAMESPACE_ID::uint32 posy_;
  ::PROTOBUF_NAMESPACE_ID::uint32 mapid_;
  friend struct ::TableStruct_treasure_2eproto;
};
// -------------------------------------------------------------------

class MSG_Ret_TreasurePos_SC :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:treasure.MSG_Ret_TreasurePos_SC) */ {
 public:
  MSG_Ret_TreasurePos_SC();
  virtual ~MSG_Ret_TreasurePos_SC();

  MSG_Ret_TreasurePos_SC(const MSG_Ret_TreasurePos_SC& from);
  MSG_Ret_TreasurePos_SC(MSG_Ret_TreasurePos_SC&& from) noexcept
    : MSG_Ret_TreasurePos_SC() {
    *this = ::std::move(from);
  }

  inline MSG_Ret_TreasurePos_SC& operator=(const MSG_Ret_TreasurePos_SC& from) {
    CopyFrom(from);
    return *this;
  }
  inline MSG_Ret_TreasurePos_SC& operator=(MSG_Ret_TreasurePos_SC&& from) noexcept {
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
  static const MSG_Ret_TreasurePos_SC& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MSG_Ret_TreasurePos_SC* internal_default_instance() {
    return reinterpret_cast<const MSG_Ret_TreasurePos_SC*>(
               &_MSG_Ret_TreasurePos_SC_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MSG_Ret_TreasurePos_SC& a, MSG_Ret_TreasurePos_SC& b) {
    a.Swap(&b);
  }
  inline void Swap(MSG_Ret_TreasurePos_SC* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MSG_Ret_TreasurePos_SC* New() const final {
    return CreateMaybeMessage<MSG_Ret_TreasurePos_SC>(nullptr);
  }

  MSG_Ret_TreasurePos_SC* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MSG_Ret_TreasurePos_SC>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MSG_Ret_TreasurePos_SC& from);
  void MergeFrom(const MSG_Ret_TreasurePos_SC& from);
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
  void InternalSwap(MSG_Ret_TreasurePos_SC* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "treasure.MSG_Ret_TreasurePos_SC";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_treasure_2eproto);
    return ::descriptor_table_treasure_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPosdataFieldNumber = 1,
  };
  // optional .treasure.PosData posdata = 1;
  bool has_posdata() const;
  private:
  bool _internal_has_posdata() const;
  public:
  void clear_posdata();
  const ::treasure::PosData& posdata() const;
  ::treasure::PosData* release_posdata();
  ::treasure::PosData* mutable_posdata();
  void set_allocated_posdata(::treasure::PosData* posdata);
  private:
  const ::treasure::PosData& _internal_posdata() const;
  ::treasure::PosData* _internal_mutable_posdata();
  public:

  // @@protoc_insertion_point(class_scope:treasure.MSG_Ret_TreasurePos_SC)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::treasure::PosData* posdata_;
  friend struct ::TableStruct_treasure_2eproto;
};
// -------------------------------------------------------------------

class MSG_ReqChangeMapHuntTreasure_CS :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:treasure.MSG_ReqChangeMapHuntTreasure_CS) */ {
 public:
  MSG_ReqChangeMapHuntTreasure_CS();
  virtual ~MSG_ReqChangeMapHuntTreasure_CS();

  MSG_ReqChangeMapHuntTreasure_CS(const MSG_ReqChangeMapHuntTreasure_CS& from);
  MSG_ReqChangeMapHuntTreasure_CS(MSG_ReqChangeMapHuntTreasure_CS&& from) noexcept
    : MSG_ReqChangeMapHuntTreasure_CS() {
    *this = ::std::move(from);
  }

  inline MSG_ReqChangeMapHuntTreasure_CS& operator=(const MSG_ReqChangeMapHuntTreasure_CS& from) {
    CopyFrom(from);
    return *this;
  }
  inline MSG_ReqChangeMapHuntTreasure_CS& operator=(MSG_ReqChangeMapHuntTreasure_CS&& from) noexcept {
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
  static const MSG_ReqChangeMapHuntTreasure_CS& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MSG_ReqChangeMapHuntTreasure_CS* internal_default_instance() {
    return reinterpret_cast<const MSG_ReqChangeMapHuntTreasure_CS*>(
               &_MSG_ReqChangeMapHuntTreasure_CS_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MSG_ReqChangeMapHuntTreasure_CS& a, MSG_ReqChangeMapHuntTreasure_CS& b) {
    a.Swap(&b);
  }
  inline void Swap(MSG_ReqChangeMapHuntTreasure_CS* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MSG_ReqChangeMapHuntTreasure_CS* New() const final {
    return CreateMaybeMessage<MSG_ReqChangeMapHuntTreasure_CS>(nullptr);
  }

  MSG_ReqChangeMapHuntTreasure_CS* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MSG_ReqChangeMapHuntTreasure_CS>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MSG_ReqChangeMapHuntTreasure_CS& from);
  void MergeFrom(const MSG_ReqChangeMapHuntTreasure_CS& from);
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
  void InternalSwap(MSG_ReqChangeMapHuntTreasure_CS* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "treasure.MSG_ReqChangeMapHuntTreasure_CS";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_treasure_2eproto);
    return ::descriptor_table_treasure_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPosdataFieldNumber = 1,
  };
  // optional .treasure.PosData posdata = 1;
  bool has_posdata() const;
  private:
  bool _internal_has_posdata() const;
  public:
  void clear_posdata();
  const ::treasure::PosData& posdata() const;
  ::treasure::PosData* release_posdata();
  ::treasure::PosData* mutable_posdata();
  void set_allocated_posdata(::treasure::PosData* posdata);
  private:
  const ::treasure::PosData& _internal_posdata() const;
  ::treasure::PosData* _internal_mutable_posdata();
  public:

  // @@protoc_insertion_point(class_scope:treasure.MSG_ReqChangeMapHuntTreasure_CS)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::treasure::PosData* posdata_;
  friend struct ::TableStruct_treasure_2eproto;
};
// -------------------------------------------------------------------

class MSG_RetChangeMapHuntTreasure_SC :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:treasure.MSG_RetChangeMapHuntTreasure_SC) */ {
 public:
  MSG_RetChangeMapHuntTreasure_SC();
  virtual ~MSG_RetChangeMapHuntTreasure_SC();

  MSG_RetChangeMapHuntTreasure_SC(const MSG_RetChangeMapHuntTreasure_SC& from);
  MSG_RetChangeMapHuntTreasure_SC(MSG_RetChangeMapHuntTreasure_SC&& from) noexcept
    : MSG_RetChangeMapHuntTreasure_SC() {
    *this = ::std::move(from);
  }

  inline MSG_RetChangeMapHuntTreasure_SC& operator=(const MSG_RetChangeMapHuntTreasure_SC& from) {
    CopyFrom(from);
    return *this;
  }
  inline MSG_RetChangeMapHuntTreasure_SC& operator=(MSG_RetChangeMapHuntTreasure_SC&& from) noexcept {
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
  static const MSG_RetChangeMapHuntTreasure_SC& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MSG_RetChangeMapHuntTreasure_SC* internal_default_instance() {
    return reinterpret_cast<const MSG_RetChangeMapHuntTreasure_SC*>(
               &_MSG_RetChangeMapHuntTreasure_SC_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(MSG_RetChangeMapHuntTreasure_SC& a, MSG_RetChangeMapHuntTreasure_SC& b) {
    a.Swap(&b);
  }
  inline void Swap(MSG_RetChangeMapHuntTreasure_SC* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MSG_RetChangeMapHuntTreasure_SC* New() const final {
    return CreateMaybeMessage<MSG_RetChangeMapHuntTreasure_SC>(nullptr);
  }

  MSG_RetChangeMapHuntTreasure_SC* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MSG_RetChangeMapHuntTreasure_SC>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MSG_RetChangeMapHuntTreasure_SC& from);
  void MergeFrom(const MSG_RetChangeMapHuntTreasure_SC& from);
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
  void InternalSwap(MSG_RetChangeMapHuntTreasure_SC* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "treasure.MSG_RetChangeMapHuntTreasure_SC";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_treasure_2eproto);
    return ::descriptor_table_treasure_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRetcodeFieldNumber = 1,
  };
  // optional uint32 retcode = 1;
  bool has_retcode() const;
  private:
  bool _internal_has_retcode() const;
  public:
  void clear_retcode();
  ::PROTOBUF_NAMESPACE_ID::uint32 retcode() const;
  void set_retcode(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_retcode() const;
  void _internal_set_retcode(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:treasure.MSG_RetChangeMapHuntTreasure_SC)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 retcode_;
  friend struct ::TableStruct_treasure_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PosData

// optional uint32 posx = 1;
inline bool PosData::_internal_has_posx() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PosData::has_posx() const {
  return _internal_has_posx();
}
inline void PosData::clear_posx() {
  posx_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PosData::_internal_posx() const {
  return posx_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PosData::posx() const {
  // @@protoc_insertion_point(field_get:treasure.PosData.posx)
  return _internal_posx();
}
inline void PosData::_internal_set_posx(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  posx_ = value;
}
inline void PosData::set_posx(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_posx(value);
  // @@protoc_insertion_point(field_set:treasure.PosData.posx)
}

// optional uint32 posy = 2;
inline bool PosData::_internal_has_posy() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool PosData::has_posy() const {
  return _internal_has_posy();
}
inline void PosData::clear_posy() {
  posy_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PosData::_internal_posy() const {
  return posy_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PosData::posy() const {
  // @@protoc_insertion_point(field_get:treasure.PosData.posy)
  return _internal_posy();
}
inline void PosData::_internal_set_posy(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  posy_ = value;
}
inline void PosData::set_posy(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_posy(value);
  // @@protoc_insertion_point(field_set:treasure.PosData.posy)
}

// optional uint32 mapid = 3;
inline bool PosData::_internal_has_mapid() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool PosData::has_mapid() const {
  return _internal_has_mapid();
}
inline void PosData::clear_mapid() {
  mapid_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PosData::_internal_mapid() const {
  return mapid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PosData::mapid() const {
  // @@protoc_insertion_point(field_get:treasure.PosData.mapid)
  return _internal_mapid();
}
inline void PosData::_internal_set_mapid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  mapid_ = value;
}
inline void PosData::set_mapid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_mapid(value);
  // @@protoc_insertion_point(field_set:treasure.PosData.mapid)
}

// -------------------------------------------------------------------

// MSG_Ret_TreasurePos_SC

// optional .treasure.PosData posdata = 1;
inline bool MSG_Ret_TreasurePos_SC::_internal_has_posdata() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || posdata_ != nullptr);
  return value;
}
inline bool MSG_Ret_TreasurePos_SC::has_posdata() const {
  return _internal_has_posdata();
}
inline void MSG_Ret_TreasurePos_SC::clear_posdata() {
  if (posdata_ != nullptr) posdata_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::treasure::PosData& MSG_Ret_TreasurePos_SC::_internal_posdata() const {
  const ::treasure::PosData* p = posdata_;
  return p != nullptr ? *p : *reinterpret_cast<const ::treasure::PosData*>(
      &::treasure::_PosData_default_instance_);
}
inline const ::treasure::PosData& MSG_Ret_TreasurePos_SC::posdata() const {
  // @@protoc_insertion_point(field_get:treasure.MSG_Ret_TreasurePos_SC.posdata)
  return _internal_posdata();
}
inline ::treasure::PosData* MSG_Ret_TreasurePos_SC::release_posdata() {
  // @@protoc_insertion_point(field_release:treasure.MSG_Ret_TreasurePos_SC.posdata)
  _has_bits_[0] &= ~0x00000001u;
  ::treasure::PosData* temp = posdata_;
  posdata_ = nullptr;
  return temp;
}
inline ::treasure::PosData* MSG_Ret_TreasurePos_SC::_internal_mutable_posdata() {
  _has_bits_[0] |= 0x00000001u;
  if (posdata_ == nullptr) {
    auto* p = CreateMaybeMessage<::treasure::PosData>(GetArenaNoVirtual());
    posdata_ = p;
  }
  return posdata_;
}
inline ::treasure::PosData* MSG_Ret_TreasurePos_SC::mutable_posdata() {
  // @@protoc_insertion_point(field_mutable:treasure.MSG_Ret_TreasurePos_SC.posdata)
  return _internal_mutable_posdata();
}
inline void MSG_Ret_TreasurePos_SC::set_allocated_posdata(::treasure::PosData* posdata) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete posdata_;
  }
  if (posdata) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      posdata = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, posdata, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  posdata_ = posdata;
  // @@protoc_insertion_point(field_set_allocated:treasure.MSG_Ret_TreasurePos_SC.posdata)
}

// -------------------------------------------------------------------

// MSG_ReqChangeMapHuntTreasure_CS

// optional .treasure.PosData posdata = 1;
inline bool MSG_ReqChangeMapHuntTreasure_CS::_internal_has_posdata() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || posdata_ != nullptr);
  return value;
}
inline bool MSG_ReqChangeMapHuntTreasure_CS::has_posdata() const {
  return _internal_has_posdata();
}
inline void MSG_ReqChangeMapHuntTreasure_CS::clear_posdata() {
  if (posdata_ != nullptr) posdata_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::treasure::PosData& MSG_ReqChangeMapHuntTreasure_CS::_internal_posdata() const {
  const ::treasure::PosData* p = posdata_;
  return p != nullptr ? *p : *reinterpret_cast<const ::treasure::PosData*>(
      &::treasure::_PosData_default_instance_);
}
inline const ::treasure::PosData& MSG_ReqChangeMapHuntTreasure_CS::posdata() const {
  // @@protoc_insertion_point(field_get:treasure.MSG_ReqChangeMapHuntTreasure_CS.posdata)
  return _internal_posdata();
}
inline ::treasure::PosData* MSG_ReqChangeMapHuntTreasure_CS::release_posdata() {
  // @@protoc_insertion_point(field_release:treasure.MSG_ReqChangeMapHuntTreasure_CS.posdata)
  _has_bits_[0] &= ~0x00000001u;
  ::treasure::PosData* temp = posdata_;
  posdata_ = nullptr;
  return temp;
}
inline ::treasure::PosData* MSG_ReqChangeMapHuntTreasure_CS::_internal_mutable_posdata() {
  _has_bits_[0] |= 0x00000001u;
  if (posdata_ == nullptr) {
    auto* p = CreateMaybeMessage<::treasure::PosData>(GetArenaNoVirtual());
    posdata_ = p;
  }
  return posdata_;
}
inline ::treasure::PosData* MSG_ReqChangeMapHuntTreasure_CS::mutable_posdata() {
  // @@protoc_insertion_point(field_mutable:treasure.MSG_ReqChangeMapHuntTreasure_CS.posdata)
  return _internal_mutable_posdata();
}
inline void MSG_ReqChangeMapHuntTreasure_CS::set_allocated_posdata(::treasure::PosData* posdata) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete posdata_;
  }
  if (posdata) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      posdata = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, posdata, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  posdata_ = posdata;
  // @@protoc_insertion_point(field_set_allocated:treasure.MSG_ReqChangeMapHuntTreasure_CS.posdata)
}

// -------------------------------------------------------------------

// MSG_RetChangeMapHuntTreasure_SC

// optional uint32 retcode = 1;
inline bool MSG_RetChangeMapHuntTreasure_SC::_internal_has_retcode() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool MSG_RetChangeMapHuntTreasure_SC::has_retcode() const {
  return _internal_has_retcode();
}
inline void MSG_RetChangeMapHuntTreasure_SC::clear_retcode() {
  retcode_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 MSG_RetChangeMapHuntTreasure_SC::_internal_retcode() const {
  return retcode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 MSG_RetChangeMapHuntTreasure_SC::retcode() const {
  // @@protoc_insertion_point(field_get:treasure.MSG_RetChangeMapHuntTreasure_SC.retcode)
  return _internal_retcode();
}
inline void MSG_RetChangeMapHuntTreasure_SC::_internal_set_retcode(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  retcode_ = value;
}
inline void MSG_RetChangeMapHuntTreasure_SC::set_retcode(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_retcode(value);
  // @@protoc_insertion_point(field_set:treasure.MSG_RetChangeMapHuntTreasure_SC.retcode)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace treasure

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_treasure_2eproto