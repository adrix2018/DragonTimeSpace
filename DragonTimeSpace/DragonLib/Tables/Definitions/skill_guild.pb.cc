// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skill_guild.proto

#include "skill_guild.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_skill_5fguild_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_skill_guild_t_skill_guild_skill_5fguild_2eproto;
namespace pb {
class skill_guild_t_skill_guildDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<skill_guild_t_skill_guild> _instance;
} _skill_guild_t_skill_guild_default_instance_;
class skill_guildDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<skill_guild> _instance;
} _skill_guild_default_instance_;
}  // namespace pb
static void InitDefaultsscc_info_skill_guild_skill_5fguild_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_skill_guild_default_instance_;
    new (ptr) ::pb::skill_guild();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::skill_guild::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_skill_guild_skill_5fguild_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_skill_guild_skill_5fguild_2eproto}, {
      &scc_info_skill_guild_t_skill_guild_skill_5fguild_2eproto.base,}};

static void InitDefaultsscc_info_skill_guild_t_skill_guild_skill_5fguild_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_skill_guild_t_skill_guild_default_instance_;
    new (ptr) ::pb::skill_guild_t_skill_guild();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::skill_guild_t_skill_guild::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_skill_guild_t_skill_guild_skill_5fguild_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_skill_guild_t_skill_guild_skill_5fguild_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_skill_5fguild_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_skill_5fguild_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_skill_5fguild_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_skill_5fguild_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, tbxid_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, skillid_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, skillname_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, level_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, nextskillid_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, levelupcost_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, unlocklevel_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, desc_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, skillstaus_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild_t_skill_guild, skillicon_),
  5,
  6,
  0,
  7,
  8,
  1,
  9,
  2,
  3,
  4,
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::skill_guild, datas_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, sizeof(::pb::skill_guild_t_skill_guild)},
  { 25, 31, sizeof(::pb::skill_guild)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_skill_guild_t_skill_guild_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_skill_guild_default_instance_),
};

const char descriptor_table_protodef_skill_5fguild_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021skill_guild.proto\022\002pb\"\211\002\n\013skill_guild\022"
  ",\n\005datas\030\001 \003(\0132\035.pb.skill_guild.t_skill_"
  "guild\032\313\001\n\rt_skill_guild\022\020\n\005tbxid\030\001 \002(\r:\001"
  "0\022\022\n\007skillid\030\002 \002(\r:\0010\022\021\n\tskillname\030\003 \002(\t"
  "\022\r\n\005level\030\004 \002(\r\022\023\n\013nextskillid\030\005 \002(\r\022\023\n\013"
  "levelupcost\030\006 \002(\t\022\023\n\013unlocklevel\030\007 \002(\r\022\014"
  "\n\004desc\030\010 \002(\t\022\022\n\nskillstaus\030\t \002(\t\022\021\n\tskil"
  "licon\030\n \002(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_skill_5fguild_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_skill_5fguild_2eproto_sccs[2] = {
  &scc_info_skill_guild_skill_5fguild_2eproto.base,
  &scc_info_skill_guild_t_skill_guild_skill_5fguild_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_skill_5fguild_2eproto_once;
static bool descriptor_table_skill_5fguild_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_skill_5fguild_2eproto = {
  &descriptor_table_skill_5fguild_2eproto_initialized, descriptor_table_protodef_skill_5fguild_2eproto, "skill_guild.proto", 291,
  &descriptor_table_skill_5fguild_2eproto_once, descriptor_table_skill_5fguild_2eproto_sccs, descriptor_table_skill_5fguild_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_skill_5fguild_2eproto::offsets,
  file_level_metadata_skill_5fguild_2eproto, 2, file_level_enum_descriptors_skill_5fguild_2eproto, file_level_service_descriptors_skill_5fguild_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_skill_5fguild_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_skill_5fguild_2eproto)), true);
namespace pb {

// ===================================================================

void skill_guild_t_skill_guild::InitAsDefaultInstance() {
}
class skill_guild_t_skill_guild::_Internal {
 public:
  using HasBits = decltype(std::declval<skill_guild_t_skill_guild>()._has_bits_);
  static void set_has_tbxid(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_skillid(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_skillname(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_level(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_nextskillid(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_levelupcost(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_unlocklevel(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_desc(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_skillstaus(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_skillicon(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

skill_guild_t_skill_guild::skill_guild_t_skill_guild()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.skill_guild.t_skill_guild)
}
skill_guild_t_skill_guild::skill_guild_t_skill_guild(const skill_guild_t_skill_guild& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  skillname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_skillname()) {
    skillname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.skillname_);
  }
  levelupcost_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_levelupcost()) {
    levelupcost_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.levelupcost_);
  }
  desc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_desc()) {
    desc_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.desc_);
  }
  skillstaus_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_skillstaus()) {
    skillstaus_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.skillstaus_);
  }
  skillicon_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_skillicon()) {
    skillicon_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.skillicon_);
  }
  ::memcpy(&tbxid_, &from.tbxid_,
    static_cast<size_t>(reinterpret_cast<char*>(&unlocklevel_) -
    reinterpret_cast<char*>(&tbxid_)) + sizeof(unlocklevel_));
  // @@protoc_insertion_point(copy_constructor:pb.skill_guild.t_skill_guild)
}

void skill_guild_t_skill_guild::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_skill_guild_t_skill_guild_skill_5fguild_2eproto.base);
  skillname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  levelupcost_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  desc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  skillstaus_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  skillicon_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&tbxid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&unlocklevel_) -
      reinterpret_cast<char*>(&tbxid_)) + sizeof(unlocklevel_));
}

skill_guild_t_skill_guild::~skill_guild_t_skill_guild() {
  // @@protoc_insertion_point(destructor:pb.skill_guild.t_skill_guild)
  SharedDtor();
}

void skill_guild_t_skill_guild::SharedDtor() {
  skillname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  levelupcost_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  desc_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  skillstaus_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  skillicon_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void skill_guild_t_skill_guild::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const skill_guild_t_skill_guild& skill_guild_t_skill_guild::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_skill_guild_t_skill_guild_skill_5fguild_2eproto.base);
  return *internal_default_instance();
}


void skill_guild_t_skill_guild::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.skill_guild.t_skill_guild)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      skillname_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      levelupcost_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      desc_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      skillstaus_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000010u) {
      skillicon_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x000000e0u) {
    ::memset(&tbxid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&level_) -
        reinterpret_cast<char*>(&tbxid_)) + sizeof(level_));
  }
  if (cached_has_bits & 0x00000300u) {
    ::memset(&nextskillid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&unlocklevel_) -
        reinterpret_cast<char*>(&nextskillid_)) + sizeof(unlocklevel_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* skill_guild_t_skill_guild::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 tbxid = 1 [default = 0];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_tbxid(&has_bits);
          tbxid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 skillid = 2 [default = 0];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_skillid(&has_bits);
          skillid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string skillname = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_skillname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.skill_guild.t_skill_guild.skillname");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 level = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_level(&has_bits);
          level_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 nextskillid = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_nextskillid(&has_bits);
          nextskillid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string levelupcost = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_levelupcost();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.skill_guild.t_skill_guild.levelupcost");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 unlocklevel = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_unlocklevel(&has_bits);
          unlocklevel_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string desc = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_desc();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.skill_guild.t_skill_guild.desc");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string skillstaus = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_skillstaus();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.skill_guild.t_skill_guild.skillstaus");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string skillicon = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          auto str = _internal_mutable_skillicon();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.skill_guild.t_skill_guild.skillicon");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* skill_guild_t_skill_guild::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.skill_guild.t_skill_guild)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 tbxid = 1 [default = 0];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_tbxid(), target);
  }

  // required uint32 skillid = 2 [default = 0];
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_skillid(), target);
  }

  // required string skillname = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_skillname().data(), static_cast<int>(this->_internal_skillname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.skill_guild.t_skill_guild.skillname");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_skillname(), target);
  }

  // required uint32 level = 4;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_level(), target);
  }

  // required uint32 nextskillid = 5;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(5, this->_internal_nextskillid(), target);
  }

  // required string levelupcost = 6;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_levelupcost().data(), static_cast<int>(this->_internal_levelupcost().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.skill_guild.t_skill_guild.levelupcost");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_levelupcost(), target);
  }

  // required uint32 unlocklevel = 7;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(7, this->_internal_unlocklevel(), target);
  }

  // required string desc = 8;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_desc().data(), static_cast<int>(this->_internal_desc().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.skill_guild.t_skill_guild.desc");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_desc(), target);
  }

  // required string skillstaus = 9;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_skillstaus().data(), static_cast<int>(this->_internal_skillstaus().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.skill_guild.t_skill_guild.skillstaus");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_skillstaus(), target);
  }

  // required string skillicon = 10;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_skillicon().data(), static_cast<int>(this->_internal_skillicon().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.skill_guild.t_skill_guild.skillicon");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_skillicon(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.skill_guild.t_skill_guild)
  return target;
}

size_t skill_guild_t_skill_guild::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:pb.skill_guild.t_skill_guild)
  size_t total_size = 0;

  if (_internal_has_skillname()) {
    // required string skillname = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_skillname());
  }

  if (_internal_has_levelupcost()) {
    // required string levelupcost = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_levelupcost());
  }

  if (_internal_has_desc()) {
    // required string desc = 8;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_desc());
  }

  if (_internal_has_skillstaus()) {
    // required string skillstaus = 9;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_skillstaus());
  }

  if (_internal_has_skillicon()) {
    // required string skillicon = 10;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_skillicon());
  }

  if (_internal_has_tbxid()) {
    // required uint32 tbxid = 1 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tbxid());
  }

  if (_internal_has_skillid()) {
    // required uint32 skillid = 2 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_skillid());
  }

  if (_internal_has_level()) {
    // required uint32 level = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_level());
  }

  if (_internal_has_nextskillid()) {
    // required uint32 nextskillid = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_nextskillid());
  }

  if (_internal_has_unlocklevel()) {
    // required uint32 unlocklevel = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_unlocklevel());
  }

  return total_size;
}
size_t skill_guild_t_skill_guild::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.skill_guild.t_skill_guild)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x000003ff) ^ 0x000003ff) == 0) {  // All required fields are present.
    // required string skillname = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_skillname());

    // required string levelupcost = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_levelupcost());

    // required string desc = 8;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_desc());

    // required string skillstaus = 9;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_skillstaus());

    // required string skillicon = 10;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_skillicon());

    // required uint32 tbxid = 1 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tbxid());

    // required uint32 skillid = 2 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_skillid());

    // required uint32 level = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_level());

    // required uint32 nextskillid = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_nextskillid());

    // required uint32 unlocklevel = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_unlocklevel());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void skill_guild_t_skill_guild::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.skill_guild.t_skill_guild)
  GOOGLE_DCHECK_NE(&from, this);
  const skill_guild_t_skill_guild* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<skill_guild_t_skill_guild>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.skill_guild.t_skill_guild)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.skill_guild.t_skill_guild)
    MergeFrom(*source);
  }
}

void skill_guild_t_skill_guild::MergeFrom(const skill_guild_t_skill_guild& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.skill_guild.t_skill_guild)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      skillname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.skillname_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      levelupcost_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.levelupcost_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      desc_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.desc_);
    }
    if (cached_has_bits & 0x00000008u) {
      _has_bits_[0] |= 0x00000008u;
      skillstaus_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.skillstaus_);
    }
    if (cached_has_bits & 0x00000010u) {
      _has_bits_[0] |= 0x00000010u;
      skillicon_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.skillicon_);
    }
    if (cached_has_bits & 0x00000020u) {
      tbxid_ = from.tbxid_;
    }
    if (cached_has_bits & 0x00000040u) {
      skillid_ = from.skillid_;
    }
    if (cached_has_bits & 0x00000080u) {
      level_ = from.level_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000300u) {
    if (cached_has_bits & 0x00000100u) {
      nextskillid_ = from.nextskillid_;
    }
    if (cached_has_bits & 0x00000200u) {
      unlocklevel_ = from.unlocklevel_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void skill_guild_t_skill_guild::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.skill_guild.t_skill_guild)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void skill_guild_t_skill_guild::CopyFrom(const skill_guild_t_skill_guild& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.skill_guild.t_skill_guild)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool skill_guild_t_skill_guild::IsInitialized() const {
  if ((_has_bits_[0] & 0x000003ff) != 0x000003ff) return false;
  return true;
}

void skill_guild_t_skill_guild::InternalSwap(skill_guild_t_skill_guild* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  skillname_.Swap(&other->skillname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  levelupcost_.Swap(&other->levelupcost_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  desc_.Swap(&other->desc_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  skillstaus_.Swap(&other->skillstaus_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  skillicon_.Swap(&other->skillicon_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(tbxid_, other->tbxid_);
  swap(skillid_, other->skillid_);
  swap(level_, other->level_);
  swap(nextskillid_, other->nextskillid_);
  swap(unlocklevel_, other->unlocklevel_);
}

::PROTOBUF_NAMESPACE_ID::Metadata skill_guild_t_skill_guild::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void skill_guild::InitAsDefaultInstance() {
}
class skill_guild::_Internal {
 public:
  using HasBits = decltype(std::declval<skill_guild>()._has_bits_);
};

skill_guild::skill_guild()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.skill_guild)
}
skill_guild::skill_guild(const skill_guild& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      datas_(from.datas_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:pb.skill_guild)
}

void skill_guild::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_skill_guild_skill_5fguild_2eproto.base);
}

skill_guild::~skill_guild() {
  // @@protoc_insertion_point(destructor:pb.skill_guild)
  SharedDtor();
}

void skill_guild::SharedDtor() {
}

void skill_guild::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const skill_guild& skill_guild::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_skill_guild_skill_5fguild_2eproto.base);
  return *internal_default_instance();
}


void skill_guild::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.skill_guild)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  datas_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* skill_guild::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .pb.skill_guild.t_skill_guild datas = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_datas(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* skill_guild::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.skill_guild)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .pb.skill_guild.t_skill_guild datas = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_datas_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_datas(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.skill_guild)
  return target;
}

size_t skill_guild::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.skill_guild)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .pb.skill_guild.t_skill_guild datas = 1;
  total_size += 1UL * this->_internal_datas_size();
  for (const auto& msg : this->datas_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void skill_guild::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.skill_guild)
  GOOGLE_DCHECK_NE(&from, this);
  const skill_guild* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<skill_guild>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.skill_guild)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.skill_guild)
    MergeFrom(*source);
  }
}

void skill_guild::MergeFrom(const skill_guild& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.skill_guild)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  datas_.MergeFrom(from.datas_);
}

void skill_guild::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.skill_guild)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void skill_guild::CopyFrom(const skill_guild& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.skill_guild)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool skill_guild::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(datas_)) return false;
  return true;
}

void skill_guild::InternalSwap(skill_guild* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  datas_.InternalSwap(&other->datas_);
}

::PROTOBUF_NAMESPACE_ID::Metadata skill_guild::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::pb::skill_guild_t_skill_guild* Arena::CreateMaybeMessage< ::pb::skill_guild_t_skill_guild >(Arena* arena) {
  return Arena::CreateInternal< ::pb::skill_guild_t_skill_guild >(arena);
}
template<> PROTOBUF_NOINLINE ::pb::skill_guild* Arena::CreateMaybeMessage< ::pb::skill_guild >(Arena* arena) {
  return Arena::CreateInternal< ::pb::skill_guild >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>