// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: key.proto

#include "key.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_key_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_key_t_key_key_2eproto;
namespace pb {
class key_t_keyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<key_t_key> _instance;
} _key_t_key_default_instance_;
class keyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<key> _instance;
} _key_default_instance_;
}  // namespace pb
static void InitDefaultsscc_info_key_key_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_key_default_instance_;
    new (ptr) ::pb::key();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::key::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_key_key_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_key_key_2eproto}, {
      &scc_info_key_t_key_key_2eproto.base,}};

static void InitDefaultsscc_info_key_t_key_key_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_key_t_key_default_instance_;
    new (ptr) ::pb::key_t_key();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::key_t_key::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_key_t_key_key_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_key_t_key_key_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_key_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_key_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_key_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_key_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, tbxid_),
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, id_),
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, type_),
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, showname_),
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, funname_),
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, keycode_),
  PROTOBUF_FIELD_OFFSET(::pb::key_t_key, keytriggertype_),
  3,
  4,
  5,
  0,
  1,
  2,
  6,
  PROTOBUF_FIELD_OFFSET(::pb::key, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::pb::key, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::key, datas_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::pb::key_t_key)},
  { 19, 25, sizeof(::pb::key)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_key_t_key_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_key_default_instance_),
};

const char descriptor_table_protodef_key_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tkey.proto\022\002pb\"\250\001\n\003key\022\034\n\005datas\030\001 \003(\0132\r"
  ".pb.key.t_key\032\202\001\n\005t_key\022\020\n\005tbxid\030\001 \002(\r:\001"
  "0\022\r\n\002id\030\002 \002(\r:\0010\022\014\n\004type\030\003 \002(\r\022\020\n\010showna"
  "me\030\004 \002(\t\022\017\n\007funname\030\005 \002(\t\022\017\n\007keycode\030\006 \002"
  "(\t\022\026\n\016keytriggertype\030\007 \002(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_key_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_key_2eproto_sccs[2] = {
  &scc_info_key_key_2eproto.base,
  &scc_info_key_t_key_key_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_key_2eproto_once;
static bool descriptor_table_key_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_key_2eproto = {
  &descriptor_table_key_2eproto_initialized, descriptor_table_protodef_key_2eproto, "key.proto", 186,
  &descriptor_table_key_2eproto_once, descriptor_table_key_2eproto_sccs, descriptor_table_key_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_key_2eproto::offsets,
  file_level_metadata_key_2eproto, 2, file_level_enum_descriptors_key_2eproto, file_level_service_descriptors_key_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_key_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_key_2eproto)), true);
namespace pb {

// ===================================================================

void key_t_key::InitAsDefaultInstance() {
}
class key_t_key::_Internal {
 public:
  using HasBits = decltype(std::declval<key_t_key>()._has_bits_);
  static void set_has_tbxid(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_showname(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_funname(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_keycode(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_keytriggertype(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

key_t_key::key_t_key()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.key.t_key)
}
key_t_key::key_t_key(const key_t_key& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  showname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_showname()) {
    showname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.showname_);
  }
  funname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_funname()) {
    funname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.funname_);
  }
  keycode_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_keycode()) {
    keycode_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.keycode_);
  }
  ::memcpy(&tbxid_, &from.tbxid_,
    static_cast<size_t>(reinterpret_cast<char*>(&keytriggertype_) -
    reinterpret_cast<char*>(&tbxid_)) + sizeof(keytriggertype_));
  // @@protoc_insertion_point(copy_constructor:pb.key.t_key)
}

void key_t_key::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_key_t_key_key_2eproto.base);
  showname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  funname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  keycode_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&tbxid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&keytriggertype_) -
      reinterpret_cast<char*>(&tbxid_)) + sizeof(keytriggertype_));
}

key_t_key::~key_t_key() {
  // @@protoc_insertion_point(destructor:pb.key.t_key)
  SharedDtor();
}

void key_t_key::SharedDtor() {
  showname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  funname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  keycode_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void key_t_key::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const key_t_key& key_t_key::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_key_t_key_key_2eproto.base);
  return *internal_default_instance();
}


void key_t_key::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.key.t_key)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      showname_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      funname_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      keycode_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x00000078u) {
    ::memset(&tbxid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&keytriggertype_) -
        reinterpret_cast<char*>(&tbxid_)) + sizeof(keytriggertype_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* key_t_key::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // required uint32 type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_type(&has_bits);
          type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string showname = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_showname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.key.t_key.showname");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string funname = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_funname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.key.t_key.funname");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string keycode = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_keycode();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.key.t_key.keycode");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 keytriggertype = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_keytriggertype(&has_bits);
          keytriggertype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* key_t_key::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.key.t_key)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 tbxid = 1 [default = 0];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_tbxid(), target);
  }

  // required uint32 id = 2 [default = 0];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_id(), target);
  }

  // required uint32 type = 3;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_type(), target);
  }

  // required string showname = 4;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_showname().data(), static_cast<int>(this->_internal_showname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.key.t_key.showname");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_showname(), target);
  }

  // required string funname = 5;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_funname().data(), static_cast<int>(this->_internal_funname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.key.t_key.funname");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_funname(), target);
  }

  // required string keycode = 6;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_keycode().data(), static_cast<int>(this->_internal_keycode().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "pb.key.t_key.keycode");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_keycode(), target);
  }

  // required uint32 keytriggertype = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(7, this->_internal_keytriggertype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.key.t_key)
  return target;
}

size_t key_t_key::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:pb.key.t_key)
  size_t total_size = 0;

  if (_internal_has_showname()) {
    // required string showname = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_showname());
  }

  if (_internal_has_funname()) {
    // required string funname = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_funname());
  }

  if (_internal_has_keycode()) {
    // required string keycode = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_keycode());
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

  if (_internal_has_type()) {
    // required uint32 type = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_type());
  }

  if (_internal_has_keytriggertype()) {
    // required uint32 keytriggertype = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_keytriggertype());
  }

  return total_size;
}
size_t key_t_key::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.key.t_key)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000007f) ^ 0x0000007f) == 0) {  // All required fields are present.
    // required string showname = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_showname());

    // required string funname = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_funname());

    // required string keycode = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_keycode());

    // required uint32 tbxid = 1 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_tbxid());

    // required uint32 id = 2 [default = 0];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());

    // required uint32 type = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_type());

    // required uint32 keytriggertype = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_keytriggertype());

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

void key_t_key::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.key.t_key)
  GOOGLE_DCHECK_NE(&from, this);
  const key_t_key* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<key_t_key>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.key.t_key)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.key.t_key)
    MergeFrom(*source);
  }
}

void key_t_key::MergeFrom(const key_t_key& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.key.t_key)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      showname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.showname_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      funname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.funname_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      keycode_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.keycode_);
    }
    if (cached_has_bits & 0x00000008u) {
      tbxid_ = from.tbxid_;
    }
    if (cached_has_bits & 0x00000010u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000020u) {
      type_ = from.type_;
    }
    if (cached_has_bits & 0x00000040u) {
      keytriggertype_ = from.keytriggertype_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void key_t_key::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.key.t_key)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void key_t_key::CopyFrom(const key_t_key& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.key.t_key)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool key_t_key::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;
  return true;
}

void key_t_key::InternalSwap(key_t_key* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  showname_.Swap(&other->showname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  funname_.Swap(&other->funname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  keycode_.Swap(&other->keycode_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(tbxid_, other->tbxid_);
  swap(id_, other->id_);
  swap(type_, other->type_);
  swap(keytriggertype_, other->keytriggertype_);
}

::PROTOBUF_NAMESPACE_ID::Metadata key_t_key::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void key::InitAsDefaultInstance() {
}
class key::_Internal {
 public:
  using HasBits = decltype(std::declval<key>()._has_bits_);
};

key::key()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.key)
}
key::key(const key& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      datas_(from.datas_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:pb.key)
}

void key::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_key_key_2eproto.base);
}

key::~key() {
  // @@protoc_insertion_point(destructor:pb.key)
  SharedDtor();
}

void key::SharedDtor() {
}

void key::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const key& key::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_key_key_2eproto.base);
  return *internal_default_instance();
}


void key::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.key)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  datas_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* key::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .pb.key.t_key datas = 1;
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

::PROTOBUF_NAMESPACE_ID::uint8* key::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.key)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .pb.key.t_key datas = 1;
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
  // @@protoc_insertion_point(serialize_to_array_end:pb.key)
  return target;
}

size_t key::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.key)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .pb.key.t_key datas = 1;
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

void key::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.key)
  GOOGLE_DCHECK_NE(&from, this);
  const key* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<key>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.key)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.key)
    MergeFrom(*source);
  }
}

void key::MergeFrom(const key& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.key)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  datas_.MergeFrom(from.datas_);
}

void key::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.key)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void key::CopyFrom(const key& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.key)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool key::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(datas_)) return false;
  return true;
}

void key::InternalSwap(key* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  datas_.InternalSwap(&other->datas_);
}

::PROTOBUF_NAMESPACE_ID::Metadata key::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::pb::key_t_key* Arena::CreateMaybeMessage< ::pb::key_t_key >(Arena* arena) {
  return Arena::CreateInternal< ::pb::key_t_key >(arena);
}
template<> PROTOBUF_NOINLINE ::pb::key* Arena::CreateMaybeMessage< ::pb::key >(Arena* arena) {
  return Arena::CreateInternal< ::pb::key >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
