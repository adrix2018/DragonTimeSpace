// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: quizdataConfig.proto

#include "quizdataConfig.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_quizdataConfig_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_quizdataConfig_t_quizdata_config_quizdataConfig_2eproto;
namespace pb {
class quizdataConfig_t_quizdata_configDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<quizdataConfig_t_quizdata_config> _instance;
} _quizdataConfig_t_quizdata_config_default_instance_;
class quizdataConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<quizdataConfig> _instance;
} _quizdataConfig_default_instance_;
}  // namespace pb
static void InitDefaultsscc_info_quizdataConfig_quizdataConfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_quizdataConfig_default_instance_;
    new (ptr) ::pb::quizdataConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::quizdataConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_quizdataConfig_quizdataConfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_quizdataConfig_quizdataConfig_2eproto}, {
      &scc_info_quizdataConfig_t_quizdata_config_quizdataConfig_2eproto.base,}};

static void InitDefaultsscc_info_quizdataConfig_t_quizdata_config_quizdataConfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_quizdataConfig_t_quizdata_config_default_instance_;
    new (ptr) ::pb::quizdataConfig_t_quizdata_config();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::quizdataConfig_t_quizdata_config::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_quizdataConfig_t_quizdata_config_quizdataConfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_quizdataConfig_t_quizdata_config_quizdataConfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_quizdataConfig_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_quizdataConfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_quizdataConfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_quizdataConfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, tbxid_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, id_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, content_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, type_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, answer1_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, answer2_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, answer3_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig_t_quizdata_config, answer4_),
  6,
  7,
  0,
  1,
  2,
  3,
  4,
  5,
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::quizdataConfig, datas_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(::pb::quizdataConfig_t_quizdata_config)},
  { 21, 27, sizeof(::pb::quizdataConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_quizdataConfig_t_quizdata_config_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_quizdataConfig_default_instance_),
};

const char descriptor_table_protodef_quizdataConfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024quizdataConfig.proto\022\002pb\"\337\001\n\016quizdataC"
  "onfig\0223\n\005datas\030\001 \003(\0132$.pb.quizdataConfig"
  ".t_quizdata_config\032\227\001\n\021t_quizdata_config"
  "\022\020\n\005tbxid\030\001 \002(\r:\0010\022\r\n\002id\030\002 \002(\r:\0010\022\017\n\007con"
  "tent\030\003 \002(\t\022\014\n\004type\030\004 \002(\t\022\017\n\007answer1\030\005 \002("
  "\t\022\017\n\007answer2\030\006 \002(\t\022\017\n\007answer3\030\007 \002(\t\022\017\n\007a"
  "nswer4\030\010 \002(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_quizdataConfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_quizdataConfig_2eproto_sccs[2] = {
  &scc_info_quizdataConfig_quizdataConfig_2eproto.base,
  &scc_info_quizdataConfig_t_quizdata_config_quizdataConfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_quizdataConfig_2eproto_once;
static bool descriptor_table_quizdataConfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_quizdataConfig_2eproto = {
  &descriptor_table_quizdataConfig_2eproto_initialized, descriptor_table_protodef_quizdataConfig_2eproto, "quizdataConfig.proto", 252,
  &descriptor_table_quizdataConfig_2eproto_once, descriptor_table_quizdataConfig_2eproto_sccs, descriptor_table_quizdataConfig_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_quizdataConfig_2eproto::offsets,
  file_level_metadata_quizdataConfig_2eproto, 2, file_level_enum_descriptors_quizdataConfig_2eproto, file_level_service_descriptors_quizdataConfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_quizdataConfig_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_quizdataConfig_2eproto)), true);
namespace pb {

// ===================================================================

void quizdataConfig_t_quizdata_config::InitAsDefaultInstance() {
}
class quizdataConfig_t_quizdata_config::_Internal {
 public:
  using HasBits = decltype(std::declval<quizdataConfig_t_quizdata_config>()._has_bits_);
  static void set_has_tbxid(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_content(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_answer1(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_answer2(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_answer3(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_answer4(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

quizdataConfig_t_quizdata_config::quizdataConfig_t_quizdata_config()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.quizdataConfig.t_quizdata_config)
}
quizdataConfig_t_quizdata_config::quizdataConfig_t_quizdata_config(const quizdataConfig_t_quizdata_config& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  content_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_content()) {
    content_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_type()) {
    type_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  answer1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_answer1()) {
    answer1_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.answer1_);
  }
  answer2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_answer2()) {
    answer2_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.answer2_);
  }
  answer3_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_answer3()) {
    answer3_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.answer3_);
  }
  answer4_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_answer4()) {
    answer4_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.answer4_);
  }
  ::memcpy(&tbxid_, &from.tbxid_,
    static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&tbxid_)) + sizeof(id_));
  // @@protoc_insertion_point(copy_constructor:pb.quizdataConfig.t_quizdata_config)
}

void quizdataConfig_t_quizdata_config::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_quizdataConfig_t_quizdata_config_quizdataConfig_2eproto.base);
  content_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  answer1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  answer2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  answer3_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  answer4_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&tbxid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&tbxid_)) + sizeof(id_));
}

quizdataConfig_t_quizdata_config::~quizdataConfig_t_quizdata_config() {
  // @@protoc_insertion_point(destructor:pb.quizdataConfig.t_quizdata_config)
  SharedDtor();
}

void quizdataConfig_t_quizdata_config::SharedDtor() {
  content_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  answer1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  answer2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  answer3_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  answer4_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void quizdataConfig_t_quizdata_config::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const quizdataConfig_t_quizdata_config& quizdataConfig_t_quizdata_config::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_quizdataConfig_t_quizdata_config_quizdataConfig_2eproto.base);
  return *internal_default_instance();
}


void quizdataConfig_t_quizdata_config::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.quizdataConfig.t_quizdata_config)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      content_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      type_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      answer1_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      answer2_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000010u) {
      answer3_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000020u) {
      answer4_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x000000c0u) {
    ::memset(&tbxid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&id_) -
        reinterpret_cast<char*>(&tbxid_)) + sizeof(id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* quizdataConfig_t_quizdata_config::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // required uint32 id = 2 [default = 0];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string content = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_content();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.quizdataConfig.t_quizdata_config.content");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.quizdataConfig.t_quizdata_config.type");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string answer1 = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_answer1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.quizdataConfig.t_quizdata_config.answer1");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string answer2 = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_answer2();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.quizdataConfig.t_quizdata_config.answer2");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string answer3 = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_answer3();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.quizdataConfig.t_quizdata_config.answer3");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string answer4 = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_answer4();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.quizdataConfig.t_quizdata_config.answer4");
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

::PROTOBUF_NAMESPACE_ID::uint8* quizdataConfig_t_quizdata_config::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.quizdataConfig.t_quizdata_config)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 tbxid = 1 [default = 0];
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_tbxid(), target);
  }

  // required uint32 id = 2 [default = 0];
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_id(), target);
  }

  // required string content = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_content().data(), static_cast<int>(this->_internal_content().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.quizdataConfig.t_quizdata_config.content");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_content(), target);
  }

  // required string type = 4;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.quizdataConfig.t_quizdata_config.type");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_type(), target);
  }

  // required string answer1 = 5;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_answer1().data(), static_cast<int>(this->_internal_answer1().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.quizdataConfig.t_quizdata_config.answer1");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_answer1(), target);
  }

  // required string answer2 = 6;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_answer2().data(), static_cast<int>(this->_internal_answer2().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.quizdataConfig.t_quizdata_config.answer2");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_answer2(), target);
  }

  // required string answer3 = 7;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_answer3().data(), static_cast<int>(this->_internal_answer3().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.quizdataConfig.t_quizdata_config.answer3");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_answer3(), target);
  }

  // required string answer4 = 8;
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_answer4().data(), static_cast<int>(this->_internal_answer4().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.quizdataConfig.t_quizdata_config.answer4");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_answer4(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.quizdataConfig.t_quizdata_config)
  return target;
}

size_t quizdataConfig_t_quizdata_config::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:pb.quizdataConfig.t_quizdata_config)
  size_t total_size = 0;

  if (_internal_has_content()) {
    // required string content = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_content());
  }

  if (_internal_has_type()) {
    // required string type = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  if (_internal_has_answer1()) {
    // required string answer1 = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_answer1());
  }

  if (_internal_has_answer2()) {
    // required string answer2 = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_answer2());
  }

  if (_internal_has_answer3()) {
    // required string answer3 = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_answer3());
  }

  if (_internal_has_answer4()) {
    // required string answer4 = 8;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_answer4());
  }

  if (_internal_has_tbxid()) {
    // required uint32 tbxid = 1 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tbxid());
  }

  if (_internal_has_id()) {
    // required uint32 id = 2 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());
  }

  return total_size;
}
size_t quizdataConfig_t_quizdata_config::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.quizdataConfig.t_quizdata_config)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x000000ff) ^ 0x000000ff) == 0) {  // All required fields are present.
    // required string content = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_content());

    // required string type = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());

    // required string answer1 = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_answer1());

    // required string answer2 = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_answer2());

    // required string answer3 = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_answer3());

    // required string answer4 = 8;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_answer4());

    // required uint32 tbxid = 1 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tbxid());

    // required uint32 id = 2 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());

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

void quizdataConfig_t_quizdata_config::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.quizdataConfig.t_quizdata_config)
  GOOGLE_DCHECK_NE(&from, this);
  const quizdataConfig_t_quizdata_config* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<quizdataConfig_t_quizdata_config>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.quizdataConfig.t_quizdata_config)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.quizdataConfig.t_quizdata_config)
    MergeFrom(*source);
  }
}

void quizdataConfig_t_quizdata_config::MergeFrom(const quizdataConfig_t_quizdata_config& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.quizdataConfig.t_quizdata_config)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      content_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.content_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      type_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.type_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      answer1_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.answer1_);
    }
    if (cached_has_bits & 0x00000008u) {
      _has_bits_[0] |= 0x00000008u;
      answer2_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.answer2_);
    }
    if (cached_has_bits & 0x00000010u) {
      _has_bits_[0] |= 0x00000010u;
      answer3_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.answer3_);
    }
    if (cached_has_bits & 0x00000020u) {
      _has_bits_[0] |= 0x00000020u;
      answer4_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.answer4_);
    }
    if (cached_has_bits & 0x00000040u) {
      tbxid_ = from.tbxid_;
    }
    if (cached_has_bits & 0x00000080u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void quizdataConfig_t_quizdata_config::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.quizdataConfig.t_quizdata_config)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void quizdataConfig_t_quizdata_config::CopyFrom(const quizdataConfig_t_quizdata_config& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.quizdataConfig.t_quizdata_config)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool quizdataConfig_t_quizdata_config::IsInitialized() const {
  if ((_has_bits_[0] & 0x000000ff) != 0x000000ff) return false;
  return true;
}

void quizdataConfig_t_quizdata_config::InternalSwap(quizdataConfig_t_quizdata_config* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  content_.Swap(&other->content_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  type_.Swap(&other->type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  answer1_.Swap(&other->answer1_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  answer2_.Swap(&other->answer2_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  answer3_.Swap(&other->answer3_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  answer4_.Swap(&other->answer4_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(tbxid_, other->tbxid_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata quizdataConfig_t_quizdata_config::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void quizdataConfig::InitAsDefaultInstance() {
}
class quizdataConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<quizdataConfig>()._has_bits_);
};

quizdataConfig::quizdataConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.quizdataConfig)
}
quizdataConfig::quizdataConfig(const quizdataConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      datas_(from.datas_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:pb.quizdataConfig)
}

void quizdataConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_quizdataConfig_quizdataConfig_2eproto.base);
}

quizdataConfig::~quizdataConfig() {
  // @@protoc_insertion_point(destructor:pb.quizdataConfig)
  SharedDtor();
}

void quizdataConfig::SharedDtor() {
}

void quizdataConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const quizdataConfig& quizdataConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_quizdataConfig_quizdataConfig_2eproto.base);
  return *internal_default_instance();
}


void quizdataConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.quizdataConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  datas_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* quizdataConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .pb.quizdataConfig.t_quizdata_config datas = 1;
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

::PROTOBUF_NAMESPACE_ID::uint8* quizdataConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.quizdataConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .pb.quizdataConfig.t_quizdata_config datas = 1;
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
  // @@protoc_insertion_point(serialize_to_array_end:pb.quizdataConfig)
  return target;
}

size_t quizdataConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.quizdataConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .pb.quizdataConfig.t_quizdata_config datas = 1;
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

void quizdataConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.quizdataConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const quizdataConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<quizdataConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.quizdataConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.quizdataConfig)
    MergeFrom(*source);
  }
}

void quizdataConfig::MergeFrom(const quizdataConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.quizdataConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  datas_.MergeFrom(from.datas_);
}

void quizdataConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.quizdataConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void quizdataConfig::CopyFrom(const quizdataConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.quizdataConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool quizdataConfig::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(datas_)) return false;
  return true;
}

void quizdataConfig::InternalSwap(quizdataConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  datas_.InternalSwap(&other->datas_);
}

::PROTOBUF_NAMESPACE_ID::Metadata quizdataConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::pb::quizdataConfig_t_quizdata_config* Arena::CreateMaybeMessage< ::pb::quizdataConfig_t_quizdata_config >(Arena* arena) {
  return Arena::CreateInternal< ::pb::quizdataConfig_t_quizdata_config >(arena);
}
template<> PROTOBUF_NOINLINE ::pb::quizdataConfig* Arena::CreateMaybeMessage< ::pb::quizdataConfig >(Arena* arena) {
  return Arena::CreateInternal< ::pb::quizdataConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
