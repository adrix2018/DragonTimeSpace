// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fetters_config.proto

#include "fetters_config.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_fetters_5fconfig_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_fetters_config_t_fetters_fetters_5fconfig_2eproto;
namespace pb {
class fetters_config_t_fettersDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<fetters_config_t_fetters> _instance;
} _fetters_config_t_fetters_default_instance_;
class fetters_configDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<fetters_config> _instance;
} _fetters_config_default_instance_;
}  // namespace pb
static void InitDefaultsscc_info_fetters_config_fetters_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_fetters_config_default_instance_;
    new (ptr) ::pb::fetters_config();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::fetters_config::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_fetters_config_fetters_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_fetters_config_fetters_5fconfig_2eproto}, {
      &scc_info_fetters_config_t_fetters_fetters_5fconfig_2eproto.base,}};

static void InitDefaultsscc_info_fetters_config_t_fetters_fetters_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_fetters_config_t_fetters_default_instance_;
    new (ptr) ::pb::fetters_config_t_fetters();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::fetters_config_t_fetters::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_fetters_config_t_fetters_fetters_5fconfig_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_fetters_config_t_fetters_fetters_5fconfig_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_fetters_5fconfig_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_fetters_5fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_fetters_5fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_fetters_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config_t_fetters, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config_t_fetters, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config_t_fetters, tbxid_),
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config_t_fetters, id_),
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config_t_fetters, valuetype_),
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config_t_fetters, addvalue_),
  2,
  3,
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::fetters_config, datas_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::pb::fetters_config_t_fetters)},
  { 13, 19, sizeof(::pb::fetters_config)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_fetters_config_t_fetters_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_fetters_config_default_instance_),
};

const char descriptor_table_protodef_fetters_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024fetters_config.proto\022\002pb\"\220\001\n\016fetters_c"
  "onfig\022+\n\005datas\030\001 \003(\0132\034.pb.fetters_config"
  ".t_fetters\032Q\n\tt_fetters\022\020\n\005tbxid\030\001 \002(\r:\001"
  "0\022\r\n\002id\030\002 \002(\r:\0010\022\021\n\tvaluetype\030\003 \002(\t\022\020\n\010a"
  "ddvalue\030\004 \002(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_fetters_5fconfig_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_fetters_5fconfig_2eproto_sccs[2] = {
  &scc_info_fetters_config_fetters_5fconfig_2eproto.base,
  &scc_info_fetters_config_t_fetters_fetters_5fconfig_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_fetters_5fconfig_2eproto_once;
static bool descriptor_table_fetters_5fconfig_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_fetters_5fconfig_2eproto = {
  &descriptor_table_fetters_5fconfig_2eproto_initialized, descriptor_table_protodef_fetters_5fconfig_2eproto, "fetters_config.proto", 173,
  &descriptor_table_fetters_5fconfig_2eproto_once, descriptor_table_fetters_5fconfig_2eproto_sccs, descriptor_table_fetters_5fconfig_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_fetters_5fconfig_2eproto::offsets,
  file_level_metadata_fetters_5fconfig_2eproto, 2, file_level_enum_descriptors_fetters_5fconfig_2eproto, file_level_service_descriptors_fetters_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_fetters_5fconfig_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_fetters_5fconfig_2eproto)), true);
namespace pb {

// ===================================================================

void fetters_config_t_fetters::InitAsDefaultInstance() {
}
class fetters_config_t_fetters::_Internal {
 public:
  using HasBits = decltype(std::declval<fetters_config_t_fetters>()._has_bits_);
  static void set_has_tbxid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_valuetype(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_addvalue(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

fetters_config_t_fetters::fetters_config_t_fetters()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.fetters_config.t_fetters)
}
fetters_config_t_fetters::fetters_config_t_fetters(const fetters_config_t_fetters& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  valuetype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_valuetype()) {
    valuetype_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.valuetype_);
  }
  addvalue_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_addvalue()) {
    addvalue_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.addvalue_);
  }
  ::memcpy(&tbxid_, &from.tbxid_,
    static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&tbxid_)) + sizeof(id_));
  // @@protoc_insertion_point(copy_constructor:pb.fetters_config.t_fetters)
}

void fetters_config_t_fetters::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_fetters_config_t_fetters_fetters_5fconfig_2eproto.base);
  valuetype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  addvalue_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&tbxid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&tbxid_)) + sizeof(id_));
}

fetters_config_t_fetters::~fetters_config_t_fetters() {
  // @@protoc_insertion_point(destructor:pb.fetters_config.t_fetters)
  SharedDtor();
}

void fetters_config_t_fetters::SharedDtor() {
  valuetype_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  addvalue_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void fetters_config_t_fetters::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const fetters_config_t_fetters& fetters_config_t_fetters::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_fetters_config_t_fetters_fetters_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void fetters_config_t_fetters::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.fetters_config.t_fetters)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      valuetype_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      addvalue_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&tbxid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&id_) -
        reinterpret_cast<char*>(&tbxid_)) + sizeof(id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* fetters_config_t_fetters::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // required string valuetype = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_valuetype();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.fetters_config.t_fetters.valuetype");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string addvalue = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_addvalue();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.fetters_config.t_fetters.addvalue");
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

::PROTOBUF_NAMESPACE_ID::uint8* fetters_config_t_fetters::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.fetters_config.t_fetters)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 tbxid = 1 [default = 0];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_tbxid(), target);
  }

  // required uint32 id = 2 [default = 0];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_id(), target);
  }

  // required string valuetype = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_valuetype().data(), static_cast<int>(this->_internal_valuetype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.fetters_config.t_fetters.valuetype");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_valuetype(), target);
  }

  // required string addvalue = 4;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_addvalue().data(), static_cast<int>(this->_internal_addvalue().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.fetters_config.t_fetters.addvalue");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_addvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.fetters_config.t_fetters)
  return target;
}

size_t fetters_config_t_fetters::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:pb.fetters_config.t_fetters)
  size_t total_size = 0;

  if (_internal_has_valuetype()) {
    // required string valuetype = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_valuetype());
  }

  if (_internal_has_addvalue()) {
    // required string addvalue = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_addvalue());
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
size_t fetters_config_t_fetters::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.fetters_config.t_fetters)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required string valuetype = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_valuetype());

    // required string addvalue = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_addvalue());

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

void fetters_config_t_fetters::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.fetters_config.t_fetters)
  GOOGLE_DCHECK_NE(&from, this);
  const fetters_config_t_fetters* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<fetters_config_t_fetters>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.fetters_config.t_fetters)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.fetters_config.t_fetters)
    MergeFrom(*source);
  }
}

void fetters_config_t_fetters::MergeFrom(const fetters_config_t_fetters& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.fetters_config.t_fetters)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      valuetype_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.valuetype_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      addvalue_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.addvalue_);
    }
    if (cached_has_bits & 0x00000004u) {
      tbxid_ = from.tbxid_;
    }
    if (cached_has_bits & 0x00000008u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void fetters_config_t_fetters::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.fetters_config.t_fetters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void fetters_config_t_fetters::CopyFrom(const fetters_config_t_fetters& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.fetters_config.t_fetters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool fetters_config_t_fetters::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  return true;
}

void fetters_config_t_fetters::InternalSwap(fetters_config_t_fetters* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  valuetype_.Swap(&other->valuetype_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  addvalue_.Swap(&other->addvalue_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(tbxid_, other->tbxid_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata fetters_config_t_fetters::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void fetters_config::InitAsDefaultInstance() {
}
class fetters_config::_Internal {
 public:
  using HasBits = decltype(std::declval<fetters_config>()._has_bits_);
};

fetters_config::fetters_config()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.fetters_config)
}
fetters_config::fetters_config(const fetters_config& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      datas_(from.datas_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:pb.fetters_config)
}

void fetters_config::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_fetters_config_fetters_5fconfig_2eproto.base);
}

fetters_config::~fetters_config() {
  // @@protoc_insertion_point(destructor:pb.fetters_config)
  SharedDtor();
}

void fetters_config::SharedDtor() {
}

void fetters_config::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const fetters_config& fetters_config::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_fetters_config_fetters_5fconfig_2eproto.base);
  return *internal_default_instance();
}


void fetters_config::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.fetters_config)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  datas_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* fetters_config::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .pb.fetters_config.t_fetters datas = 1;
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

::PROTOBUF_NAMESPACE_ID::uint8* fetters_config::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.fetters_config)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .pb.fetters_config.t_fetters datas = 1;
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
  // @@protoc_insertion_point(serialize_to_array_end:pb.fetters_config)
  return target;
}

size_t fetters_config::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.fetters_config)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .pb.fetters_config.t_fetters datas = 1;
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

void fetters_config::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.fetters_config)
  GOOGLE_DCHECK_NE(&from, this);
  const fetters_config* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<fetters_config>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.fetters_config)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.fetters_config)
    MergeFrom(*source);
  }
}

void fetters_config::MergeFrom(const fetters_config& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.fetters_config)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  datas_.MergeFrom(from.datas_);
}

void fetters_config::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.fetters_config)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void fetters_config::CopyFrom(const fetters_config& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.fetters_config)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool fetters_config::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(datas_)) return false;
  return true;
}

void fetters_config::InternalSwap(fetters_config* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  datas_.InternalSwap(&other->datas_);
}

::PROTOBUF_NAMESPACE_ID::Metadata fetters_config::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::pb::fetters_config_t_fetters* Arena::CreateMaybeMessage< ::pb::fetters_config_t_fetters >(Arena* arena) {
  return Arena::CreateInternal< ::pb::fetters_config_t_fetters >(arena);
}
template<> PROTOBUF_NOINLINE ::pb::fetters_config* Arena::CreateMaybeMessage< ::pb::fetters_config >(Arena* arena) {
  return Arena::CreateInternal< ::pb::fetters_config >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
