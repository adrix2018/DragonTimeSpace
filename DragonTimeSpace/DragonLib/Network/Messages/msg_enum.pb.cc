// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_enum.proto

#include "msg_enum.pb.h"

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
namespace msg {
class EntryIDTypeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EntryIDType> _instance;
} _EntryIDType_default_instance_;
class PositionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Position> _instance;
} _Position_default_instance_;
}  // namespace msg
static void InitDefaultsscc_info_EntryIDType_msg_5fenum_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::msg::_EntryIDType_default_instance_;
    new (ptr) ::msg::EntryIDType();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::msg::EntryIDType::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EntryIDType_msg_5fenum_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_EntryIDType_msg_5fenum_2eproto}, {}};

static void InitDefaultsscc_info_Position_msg_5fenum_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::msg::_Position_default_instance_;
    new (ptr) ::msg::Position();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::msg::Position::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Position_msg_5fenum_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Position_msg_5fenum_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_msg_5fenum_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_msg_5fenum_2eproto[21];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_msg_5fenum_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_msg_5fenum_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::msg::EntryIDType, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::msg::EntryIDType, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::msg::EntryIDType, id_),
  PROTOBUF_FIELD_OFFSET(::msg::EntryIDType, type_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::msg::Position, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::msg::Position, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::msg::Position, x_),
  PROTOBUF_FIELD_OFFSET(::msg::Position, y_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::msg::EntryIDType)},
  { 9, 16, sizeof(::msg::Position)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::msg::_EntryIDType_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::msg::_Position_default_instance_),
};

const char descriptor_table_protodef_msg_5fenum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016msg_enum.proto\022\003msg\"\'\n\013EntryIDType\022\n\n\002"
  "id\030\001 \001(\004\022\014\n\004type\030\002 \001(\r\" \n\010Position\022\t\n\001x\030"
  "\001 \001(\002\022\t\n\001y\030\002 \001(\002*:\n\013MapDataType\022\025\n\021MAP_D"
  "ATATYPE_USER\020\000\022\024\n\020MAP_DATATYPE_NPC\020\001*S\n\021"
  "UserCharbaseState\022\017\n\013CHARBASE_OK\020\001\022\023\n\017CH"
  "ARBASE_FORBID\020\002\022\030\n\024CHARBASE_FORBID_NAME\020"
  "\004*\265\013\n\014LoginRetCode\022\030\n\024LOGIN_RETURN_UNKNO"
  "WN\020\000\022\035\n\031LOGIN_RETURN_VERSIONERROR\020\001\022\025\n\021L"
  "OGIN_RETURN_UUID\020\002\022\023\n\017LOGIN_RETURN_DB\020\003\022"
  "\036\n\032LOGIN_RETURN_PASSWORDERROR\020\004\022\037\n\033LOGIN"
  "_RETURN_CHANGEPASSWORD\020\005\022\030\n\024LOGIN_RETURN"
  "_IDINUSE\020\006\022\032\n\026LOGIN_RETURN_IDINCLOSE\020\007\022$"
  "\n LOGIN_RETURN_GATEWAYNOTAVAILABLE\020\010\022\030\n\024"
  "LOGIN_RETURN_USERMAX\020\t\022\035\n\031LOGIN_RETURN_A"
  "CCOUNTEXIST\020\n\022\037\n\033LOGIN_RETURN_ACCOUNTSUC"
  "CESS\020\013\022\037\n\033LOGIN_RETURN_CHARNAMEREPEAT\020\014\022"
  " \n\034LOGIN_RETURN_USERDATANOEXIST\020\r\022\037\n\033LOG"
  "IN_RETURN_USERNAMEREPEAT\020\016\022\030\n\024LOGIN_RETU"
  "RN_TIMEOUT\020\017\022\032\n\026LOGIN_RETURN_PAYFAILED\020\020"
  "\022\036\n\032LOGIN_RETURN_JPEG_PASSPORT\020\021\022\025\n\021LOGI"
  "N_RETURN_LOCK\020\022\022\033\n\027LOGIN_RETURN_WAITACTI"
  "VE\020\023\022 \n\034LOGIN_RETURN_NEWUSER_OLDZONE\020\024\022\033"
  "\n\027LOGIN_RETURN_UUID_ERROR\020\025\022\034\n\030LOGIN_RET"
  "URN_USER_TOZONE\020\026\022\035\n\031LOGIN_RETURN_CHANGE"
  "_LOGIN\020\027\022\035\n\031LOGIN_RETURN_MATRIX_ERROR\020\030\022"
  "\034\n\030LOGIN_RETURN_MATRIX_NEED\020\031\022\034\n\030LOGIN_R"
  "ETURN_MATRIX_LOCK\020\032\022\034\n\030LOGIN_RETURN_MATR"
  "IX_DOWN\020\033\022 \n\034LOGIN_RETURN_OLDUSER_NEWZON"
  "E\020\034\022\031\n\025LOGIN_RETURN_IMG_LOCK\020\035\022&\n\"LOGIN_"
  "RETURN_PASSPOD_PASSWORDERROR\020\036\022\035\n\031LOGIN_"
  "RETURN_PASSPOD_DOWN\020\037\022\025\n\021LOGIN_RETURN_BU"
  "SY\020 \022\027\n\023LOGIN_RETURN_FORBID\020!\022\032\n\026LOGIN_R"
  "ETURN_IMG_LOCK2\020\"\022\031\n\025LOGIN_RETURN_MAINTA"
  "IN\020#\022!\n\035LOGIN_RETURN_TDCODE_GEN_ERROR\020$\022"
  "\034\n\030LOGIN_RETURN_TDCODE_DOWN\020%\022\034\n\030LOGIN_R"
  "ETURN_TOKEN_ERROR\020&\022 \n\034LOGIN_RETURN_TOKE"
  "N_TOO_QUICK\020\'\022\036\n\032LOGIN_RETURN_TOKEN_TIME"
  "OUT\020(\022\031\n\025LOGIN_RETURN_SHOW_MSG\020)\022\034\n\030LOGI"
  "N_RETURN_USERINLOGIN\020*\022!\n\035LOGIN_RETURN_C"
  "HARNAME_INVALID\020+\022#\n\037LOGIN_RETURN_GATEWA"
  "Y_ID_INVALID\020,\022!\n\035LOGIN_RETURN_CHARNAME_"
  "LEN_ERR\020-\022\030\n\024LOGIN_RETURN_ROLEMAX\020.\022\034\n\030L"
  "OGIN_RETURN_ROLE_FORBID\020/*+\n\nOccupation\022"
  "\r\n\tOccu_Dema\020\001\022\016\n\nOccu_Yaohu\020\002*/\n\013QuestC"
  "rcRet\022\017\n\013CrcRet_Same\020\001\022\017\n\013CrcRet_Diff\020\002*"
  "\362\002\n\013ZonedefType\022\r\n\tZONE_NONE\020\000\022\020\n\014ZONE_P"
  "K_SAFE\020\001\022\026\n\022ZONE_ABSOLUTE_SAFE\020\002\022\017\n\013ZONE"
  "_RELIVE\020\004\022\017\n\013ZONE_NEWBIE\020\010\022\027\n\023ZONE_FOREI"
  "GN_RELIVE\020\020\022\016\n\nZONE_GUILD\020 \022\022\n\016ZONE_TRAN"
  "SPORT\020@\022\027\n\022ZONE_ENTER_COPYMAP\020\200\001\022\026\n\021ZONE"
  "_QUIT_COPYMAP\020\200\002\022\026\n\021ZONE_PVP_CAMP_RED\020\200\004"
  "\022\027\n\022ZONE_PVP_CAMP_BLUE\020\200\010\022\030\n\023ZONE_PVP_CO"
  "MMIT_RED\020\200\020\022\031\n\024ZONE_PVP_COMMIT_BLUE\020\200 \022\030"
  "\n\023ZONE_PVP_RELIVE_RED\020\200@\022\032\n\024ZONE_PVP_REL"
  "IVE_BLUE\020\200\200\001*\263\001\n\nReliveType\022\017\n\013RELIVE_NO"
  "NE\020\000\022\017\n\013RELIVE_HOME\020\001\022\021\n\rRELIVE_ORIGIN\020\002"
  "\022\020\n\014RELIVE_GUILD\020\003\022\021\n\rRELIVE_PKRAND\020\004\022\022\n"
  "\016RELIVE_COUNTRY\020\005\022\022\n\016RELIVE_NEAREST\020\006\022\021\n"
  "\rRELIVE_BATTLE\020\007\022\020\n\014RELIVE_SKILL\020\010*v\n\006PK"
  "Mode\022\017\n\013PKMode_None\020\000\022\020\n\014PKMode_Peace\020\001\022"
  "\023\n\017PKMode_Personal\020\002\022\020\n\014PKMode_Guild\020\003\022\017"
  "\n\013PKMode_Team\020\004\022\021\n\rPKMode_Normal\020\005*l\n\nQu"
  "estState\022\014\n\010UNACCEPT\020\000\022\t\n\005DOING\020\001\022\016\n\nACC"
  "EPTABLE\020c\022\014\n\010FINISHED\020d\022\021\n\rFINISHED_SAVE"
  "\020e\022\024\n\020FINISHED_NOTSAVE\020f*\216\001\n\013RefreshType"
  "\022\024\n\020RefreshType_None\020\000\022\026\n\022RefreshType_Da"
  "xSix\020\001\022\031\n\025RefreshType_MondaySix\020\002\022\035\n\031Ref"
  "reshType_MonthFirstSix\020\003\022\027\n\023RefreshType_"
  "DayMany\020\004*b\n\nMATCHFIGHT\022\016\n\nFIGHT_NONE\020\000\022"
  "\020\n\014FIGHT_RANKPK\020\001\022\021\n\rFIGHT_TILLDIE\020\002\022\020\n\014"
  "FIGHT_RANDOM\020\003\022\r\n\tFIGHT_MAX\020\004*\216\001\n\tStageT"
  "ype\022\016\n\nNone_Stage\020\000\022\t\n\005Match\020\001\022\t\n\005Login\020"
  "\002\022\013\n\007Prepare\020\003\022\014\n\010PreFight\020\004\022\r\n\tCountDow"
  "n\020\005\022\t\n\005Fight\020\006\022\013\n\007Speedup\020\007\022\n\n\006Finish\020\010\022"
  "\r\n\tMax_Stage\020\t*2\n\022MATCHFIGHTTEAMMODE\022\010\n\004"
  "SOLO\020\001\022\010\n\004TEAM\020\002\022\010\n\004BOTH\020\003*#\n\016MATCHFIGHT"
  "TEAM\022\010\n\004BLUE\020\001\022\007\n\003RED\020\002* \n\013FIGHTRESULT\022\007"
  "\n\003WIN\020\001\022\010\n\004LOSE\020\002*\201\001\n\010RISESTAR\022\024\n\020RISEST"
  "AR_SUCCESS\020\001\022\026\n\022RISESTAR_THISIDERR\020\002\022\026\n\022"
  "RISESTAR_BASEIDERR\020\003\022\027\n\023RISESTAR_MAXSTAR"
  "ERR\020\004\022\026\n\022RISESTAR_LOCKEDERR\020\005*%\n\003SEX\022\010\n\004"
  "NONE\020\001\022\010\n\004MALE\020\002\022\n\n\006FEMALE\020\003*.\n\010SELLTYPE"
  "\022\014\n\010SELLNONE\020\000\022\n\n\006OBJECT\020\001\022\010\n\004HERO\020\002*\251\001\n"
  "\022CreateRoleLookType\022$\n CREATE_ROLE_LOOK_"
  "TYPE_HAIR_COLOR\020\001\022$\n CREATE_ROLE_LOOK_TY"
  "PE_HAIR_STYLE\020\002\022$\n CREATE_ROLE_LOOK_TYPE"
  "_FACE_STYLE\020\003\022!\n\035CREATE_ROLE_LOOK_TYPE_A"
  "NTENNA\020\004*\271\002\n\027AnswerShareQuestRetCode\022\'\n#"
  "ANSWER_SHARE_QUEST_RET_CODE_SUCCESS\020\000\022)\n"
  "%ANSWER_SHARE_QUEST_RET_CODE_NOT_EXIST\020\001"
  "\022%\n!ANSWER_SHARE_QUEST_RET_CODE_LEVEL\020\002\022"
  "(\n$ANSWER_SHARE_QUEST_RET_CODE_PREQUEST\020"
  "\003\022%\n!ANSWER_SHARE_QUEST_RET_CODE_DOING\020\004"
  "\022+\n\'ANSWER_SHARE_QUEST_RET_CODE_DAILY_QU"
  "EST\020\005\022%\n!ANSWER_SHARE_QUEST_RET_CODE_OTH"
  "ER\020\006*\214\004\n\023ERechargeReturnCode\022!\n\035ERECHARG"
  "E_RETURN_CODE_SUCCESS\020\000\022&\n\"ERECHARGE_RET"
  "URN_CODE_SERVICE_LOST\020\001\022+\n\'ERECHARGE_RET"
  "URN_CODE_ACCOUNT_NOT_FOUND\020\002\022$\n ERECHARG"
  "E_RETURN_CODE_NOT_ENOUGH\020\003\022(\n$ERECHARGE_"
  "RETURN_CODE_CARD_NOT_FOUND\020\004\022+\n\'ERECHARG"
  "E_RETURN_CODE_CARD_CAN_NOT_USER\020\005\022,\n(ERE"
  "CHARGE_RETURN_CODE_CARD_CAN_USE_MULTY\020\006\022"
  "+\n\'ERECHARGE_RETURN_CODE_CARD_ERROR_NUMB"
  "ER\020\007\022)\n%ERECHARGE_RETURN_CODE_CARD_ERROR"
  "_PSWD\020\010\022(\n$ERECHARGE_RETURN_CODE_DATABAS"
  "E_ERROR\020\t\022\'\n#ERECHARGE_RETURN_CODE_IN_PR"
  "OCESSING\020\n\022\'\n#ERECHARGE_RETURN_CODE_UNKN"
  "OWN_ERROR\020\013"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_msg_5fenum_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_msg_5fenum_2eproto_sccs[2] = {
  &scc_info_EntryIDType_msg_5fenum_2eproto.base,
  &scc_info_Position_msg_5fenum_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_msg_5fenum_2eproto_once;
static bool descriptor_table_msg_5fenum_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_msg_5fenum_2eproto = {
  &descriptor_table_msg_5fenum_2eproto_initialized, descriptor_table_protodef_msg_5fenum_2eproto, "msg_enum.proto", 4331,
  &descriptor_table_msg_5fenum_2eproto_once, descriptor_table_msg_5fenum_2eproto_sccs, descriptor_table_msg_5fenum_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_msg_5fenum_2eproto::offsets,
  file_level_metadata_msg_5fenum_2eproto, 2, file_level_enum_descriptors_msg_5fenum_2eproto, file_level_service_descriptors_msg_5fenum_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_msg_5fenum_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_msg_5fenum_2eproto)), true);
namespace msg {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MapDataType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[0];
}
bool MapDataType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* UserCharbaseState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[1];
}
bool UserCharbaseState_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LoginRetCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[2];
}
bool LoginRetCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Occupation_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[3];
}
bool Occupation_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QuestCrcRet_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[4];
}
bool QuestCrcRet_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ZonedefType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[5];
}
bool ZonedefType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
    case 128:
    case 256:
    case 512:
    case 1024:
    case 2048:
    case 4096:
    case 8192:
    case 16384:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ReliveType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[6];
}
bool ReliveType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PKMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[7];
}
bool PKMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QuestState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[8];
}
bool QuestState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 99:
    case 100:
    case 101:
    case 102:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RefreshType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[9];
}
bool RefreshType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MATCHFIGHT_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[10];
}
bool MATCHFIGHT_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StageType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[11];
}
bool StageType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MATCHFIGHTTEAMMODE_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[12];
}
bool MATCHFIGHTTEAMMODE_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MATCHFIGHTTEAM_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[13];
}
bool MATCHFIGHTTEAM_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FIGHTRESULT_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[14];
}
bool FIGHTRESULT_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RISESTAR_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[15];
}
bool RISESTAR_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SEX_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[16];
}
bool SEX_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SELLTYPE_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[17];
}
bool SELLTYPE_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CreateRoleLookType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[18];
}
bool CreateRoleLookType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AnswerShareQuestRetCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[19];
}
bool AnswerShareQuestRetCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ERechargeReturnCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_msg_5fenum_2eproto);
  return file_level_enum_descriptors_msg_5fenum_2eproto[20];
}
bool ERechargeReturnCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void EntryIDType::InitAsDefaultInstance() {
}
class EntryIDType::_Internal {
 public:
  using HasBits = decltype(std::declval<EntryIDType>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

EntryIDType::EntryIDType()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:msg.EntryIDType)
}
EntryIDType::EntryIDType(const EntryIDType& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&id_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:msg.EntryIDType)
}

void EntryIDType::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&id_)) + sizeof(type_));
}

EntryIDType::~EntryIDType() {
  // @@protoc_insertion_point(destructor:msg.EntryIDType)
  SharedDtor();
}

void EntryIDType::SharedDtor() {
}

void EntryIDType::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EntryIDType& EntryIDType::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EntryIDType_msg_5fenum_2eproto.base);
  return *internal_default_instance();
}


void EntryIDType::Clear() {
// @@protoc_insertion_point(message_clear_start:msg.EntryIDType)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&id_)) + sizeof(type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* EntryIDType::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional uint64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_type(&has_bits);
          type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* EntryIDType::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg.EntryIDType)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
  }

  // optional uint32 type = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg.EntryIDType)
  return target;
}

size_t EntryIDType::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:msg.EntryIDType)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint64 id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_id());
    }

    // optional uint32 type = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_type());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EntryIDType::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg.EntryIDType)
  GOOGLE_DCHECK_NE(&from, this);
  const EntryIDType* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EntryIDType>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg.EntryIDType)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg.EntryIDType)
    MergeFrom(*source);
  }
}

void EntryIDType::MergeFrom(const EntryIDType& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg.EntryIDType)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void EntryIDType::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg.EntryIDType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntryIDType::CopyFrom(const EntryIDType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg.EntryIDType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntryIDType::IsInitialized() const {
  return true;
}

void EntryIDType::InternalSwap(EntryIDType* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(id_, other->id_);
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata EntryIDType::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Position::InitAsDefaultInstance() {
}
class Position::_Internal {
 public:
  using HasBits = decltype(std::declval<Position>()._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Position::Position()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:msg.Position)
}
Position::Position(const Position& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:msg.Position)
}

void Position::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
}

Position::~Position() {
  // @@protoc_insertion_point(destructor:msg.Position)
  SharedDtor();
}

void Position::SharedDtor() {
}

void Position::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Position& Position::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Position_msg_5fenum_2eproto.base);
  return *internal_default_instance();
}


void Position::Clear() {
// @@protoc_insertion_point(message_clear_start:msg.Position)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&y_) -
        reinterpret_cast<char*>(&x_)) + sizeof(y_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Position::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          _Internal::set_has_x(&has_bits);
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          _Internal::set_has_y(&has_bits);
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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

::PROTOBUF_NAMESPACE_ID::uint8* Position::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg.Position)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional float x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // optional float y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg.Position)
  return target;
}

size_t Position::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:msg.Position)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional float x = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 4;
    }

    // optional float y = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 4;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Position::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg.Position)
  GOOGLE_DCHECK_NE(&from, this);
  const Position* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Position>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg.Position)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg.Position)
    MergeFrom(*source);
  }
}

void Position::MergeFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg.Position)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      x_ = from.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_ = from.y_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Position::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Position::CopyFrom(const Position& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg.Position)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Position::IsInitialized() const {
  return true;
}

void Position::InternalSwap(Position* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(x_, other->x_);
  swap(y_, other->y_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Position::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::msg::EntryIDType* Arena::CreateMaybeMessage< ::msg::EntryIDType >(Arena* arena) {
  return Arena::CreateInternal< ::msg::EntryIDType >(arena);
}
template<> PROTOBUF_NOINLINE ::msg::Position* Arena::CreateMaybeMessage< ::msg::Position >(Arena* arena) {
  return Arena::CreateInternal< ::msg::Position >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>