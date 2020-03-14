#pragma once

#include <Utils\Opcodes.h>
#include <Utils\Define.h>
#include <Network\Packet\Packet.h>
#include <Game\Guilde\Guilde.h>
#include <Game\Guilde\Dojo\Dojo.h>
#include <Game\Budokai\Budokai.h>
#include <Game\Friend\Friend.h>

#pragma pack(1)

//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_ENTER_CHAT_RES)
WORD				wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_DISCONNECT)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_DISCONNECTED_NFY)
WORD				wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_HEARTBEAT)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_SYSTEM_DISPLAY_TEXT)
WCHAR				wszGmCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
BYTE				byDisplayType;
WORD				wMessageLengthInUnicode;
WCHAR				wszMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_CHAT_MESSAGE_SAY)
HOBJECT				hSubject;
WCHAR				awchSenderCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_CHAT_MESSAGE_SHOUT)
HOBJECT				hSubject;
WCHAR				awchSenderCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
/*BEGIN_PROTOCOL(TU_CHAT_MESSAGE_FIND_PARTY)
BYTE				byChannelID;
HOBJECT				hSubject;
WCHAR				awchSenderCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()*/
//------------------------------------------------------------------
/*BEGIN_PROTOCOL(TU_CHAT_MESSAGE_TRADE)
BYTE				byChannelID;
HOBJECT				hSubject;
WCHAR				awchSenderCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()*/
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_CHAT_MESSAGE_WHISPER)
WCHAR				awchSenderCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_CHAT_MESSAGE_WHISPER_FAILED_NFY)
WCHAR				awchReceiverCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_CHAT_MESSAGE_PARTY)
HOBJECT				hSubject;
WCHAR				awchSenderCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
BYTE				byChattingType;		// eDBO_CHATTING_TYPE
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_CHAT_MESSAGE_GUILD)
WCHAR				wszSenderCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
BYTE				byChattingType;		// eDBO_CHATTING_TYPE
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_CREATED_NFY)
WCHAR						wszGuildName[MAX_SIZE_GUILD_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_INFO)
//	sDBO_GUILD_INFO				guildInfo;
DWORD            guildId;
WCHAR            wszName[16 + 1];
WORD            wAligniament;
DWORD            guildMaster;
DWORD            guildSecondMaster[4];
DWORD            dwGuildReputation;
DWORD            dwMaxGuildPointEver;
DWORD64            qwGuildFunctionFlag;
DBOTIME            timeToDisband;
sDBO_GUILD_MARK    sMark;
WORD            wAligniament2[2];
WCHAR            awchName[16 + 1];
WCHAR            awchNotice[257 + 1];
sDBO_DOGI_DATA  sDogi;
BYTE unk1[5];//complete size
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_INFO)
sDBO_GUILD_MEMBER_INFO		guildMemberInfo;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_DISBAND_RES)
WORD						wResultCode;
time_t						timeToDisband;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_BEING_DISBANDED_NFY)
time_t						timeToDisband;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_DISBAND_CANCEL_RES)
WORD						wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_DISBAND_CANCELED_NFY)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_DISBANDED_NFY)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_INVITED_NFY)
WCHAR						wszGuildName[MAX_SIZE_GUILD_NAME_IN_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_RESPONSE_INVITATION_RES)
WORD						wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_JOINED_NFY)
sDBO_GUILD_MEMBER_INFO		memberInfo;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_INVITATION_DECLINED_NFY)
WCHAR						wszTargetName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_INVITATION_EXPIRED_NFY)
WCHAR						wszTargetName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_LEAVE_RES)
WORD						wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_LEFT_NFY)
CHARACTERID					memberCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_KICK_OUT_RES)
WORD						wResultCode;
CHARACTERID					kickedOutMemberCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_KICKED_OUT_NFY)
CHARACTERID					memberCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_APPOINT_SECOND_MASTER_RES)
WORD						wResultCode;
CHARACTERID					secondMasterCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_SECOND_MASTER_APPOINTED_NFY)
CHARACTERID					memberCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_DISMISS_SECOND_MASTER_RES)
WORD						wResultCode;
CHARACTERID					secondMasterCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_SECOND_MASTER_DISMISSED_NFY)
CHARACTERID					memberCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_CHANGE_GUILD_MASTER_RES)
WORD						wResultCode;
CHARACTERID					newMasterCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_GUILD_MASTER_CHANGED_NFY)
CHARACTERID					memberCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_POSITION_CHANGED_NFY)
CHARACTERID					memberCharId;
TBLIDX						newMapNameTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_CLASS_CHANGED_NFY)
CHARACTERID					memberCharId;
BYTE						byNewClass;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_LEVEL_CHANGED_NFY)
CHARACTERID					memberCharId;
BYTE						byNewLevel;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_REPUTATION_CHANGED_NFY)
CHARACTERID					memberCharId;
DWORD						dwNewReputation;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_ONLINE_NFY)
CHARACTERID					memberCharId;
TBLIDX						newMapNameTblidx;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_MEMBER_OFFLINE_NFY)
CHARACTERID					memberCharId;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_CHAT_MESSAGE_PRIVATESHOP_BUSINESS)
WCHAR				awchSenderCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_FRIEND_ADD_RES)
WORD						wResultCode;
WCHAR						wchName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
CHARACTERID					targetID;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_FRIEND_DEL_RES)
WORD						wResultCode;
CHARACTERID					targetID;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_FRIEND_MOVE_RES)
WORD						wResultCode;
CHARACTERID					targetID;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_FRIEND_LIST_INFO)
BYTE						byCount;
sFRIEND_FULL_INFO			asInfo[MAX_COUNT_FRIEND + MAX_COUNT_FRIEND];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_FRIEND_BLACK_ADD_RES)
WORD						wResultCode;
WCHAR						wchName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
CHARACTERID					targetID;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_FRIEND_BLACK_DEL_RES)
WORD						wResultCode;
CHARACTERID					targetID;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_FRIEND_INFO)
sFRIEND_INFO				sInfo;
bool						bIsFirst;		// true : ó�� false : ���� 
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_FRIEND_INFO_CHANGE)
CHARACTERID					targetID;
// eFRIEND_CHANGE_TYPE
BYTE						byChangeType;
// NOT SURE => 1 : Online , 2 : Offline , 3 : Class , 4 : Level , 5 : Channel, 6 : PositionMapTblidx
DWORD						dwChangeValue;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_RANKBATTLE_RANK_LIST_RES)
WORD						wResultCode;
DWORD						dwPage;
BYTE						byCompareDay;

BYTE						byRankInfoCount;
WORD						wRankInfo;		// sRANKBATTLE_RANK_INFO []

//sVARIABLE_DATA				sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_RANKBATTLE_RANK_FIND_CHARACTER_RES)
WORD						wResultCode;
DWORD						dwPage;
BYTE						byCompareDay;

WCHAR						wszCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];

BYTE						byRankInfoCount;
WORD						wRankInfo;		// sRANKBATTLE_RANK_INFO asRankInfo []

//sVARIABLE_DATA				sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_RANKBATTLE_RANK_COMPARE_DAY_RES)
WORD						wResultCode;
DWORD						dwPage;
BYTE						byCompareDay;

bool						bIsFullList;	// true = wRankInfo ���� | false = wCompareInfo ����
BYTE						byInfoCount;
union
{
	WORD					wRankInfo;		// sRANKBATTLE_RANK_INFO asRankInfo []
	WORD					wCompareInfo;	// DWORD adwCompareRank []
};

//sVARIABLE_DATA				sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_REPUTATION_CHANGE_NFY)
DWORD						dwReputation;
DWORD						dwMaxGuildPointEver;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_FUNCTION_CHANGE_NFY)
DWORD64						qwGuildFunctionFlag;
BYTE						byNewFunc;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_CHANGE_NOTICE_NFY)
WCHAR						awchCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
WORD						wNoticeLengthInUnicode;
WCHAR						awchNotice[MAX_LENGTH_OF_GUILD_NOTICE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_CHANGE_NOTICE_RES)
WORD						wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_GUILD_GIVE_ZENNY_NFY)
CHARACTERID					charId;
DWORD						dwZenny;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_TMQ_RECORD_LIST_RES)
WORD						wResultCode;
TBLIDX						tmqTblidx;
BYTE						byDifficult;
BYTE						byTeamCount;
//sTIMEQUEST_TEAM_RANK_DATA	asTeam[DBO_TIMEQUEST_DEFAULT_TOTAL_RANK_COUNT];		// �뷮 ����
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_TMQ_MEMBER_LIST_RES)
WORD						wResultCode;
TBLIDX						tmqTblidx;
BYTE						byDifficult;
BYTE						byRank;
//sTIMEQUEST_TEAM_MEMBER_DATA	sTeam;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_BUDOKAI_NOTICE_NFY)
BYTE			byNoticeType;		// eBUDOKAI_NOTICE_TYPE

union
{
	// byNoticeType == BUDOKAI_NOTICE_SYSTEM ���
	TBLIDX		tblidxNotice;

	// byNoticeType == BUDOKAI_NOTICE_GM ���
	struct sGM_NOTICE
	{
		BYTE		byNoticeLength;
		WCHAR		wszNotice[BUDOKAI_MAX_NOTICE_LENGTH + 1];
	};
	sGM_NOTICE	sGmNotice;
};
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_BUDOKAI_TOURNAMENT_INDIVIDUAL_LIST_RES)
WORD									wResultCode;
WORD									wEntryTeam;			// sBUDOKAI_TOURNAMENT_ENTRY_TEAM_INFO_VAR	asEntryTeam[BUDOKAI_MAJOR_MATCH_PLAYER_NUMBER];
BYTE									byMatchDataCount;
WORD									wMatchData;			// sBUDOKAI_TOURNAMENT_MATCH_DATA aMatchData[BUDOKAI_MAJOR_MATCH_PLAYER_NUMBER * 2 - 1];
//sVARIABLE_DATA							sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_BUDOKAI_TOURNAMENT_INDIVIDUAL_INFO_RES)
WORD										wResultCode;
TEAMTYPE									awTeamType[2];		// sBUDOKAI_TOURNAMENT_INDIVIDUAL_ENTRY_DATA_VAR asEntryData[2];
//sVARIABLE_DATA								sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_BUDOKAI_TOURNAMENT_TEAM_LIST_RES)
WORD									wResultCode;
WORD									wEntryTeam;			// sBUDOKAI_TOURNAMENT_ENTRY_TEAM_INFO_VAR	asEntryTeam[BUDOKAI_MAJOR_MATCH_TEAM_NUMBER];
BYTE									byMatchDataCount;
WORD									wMatchData;			// sBUDOKAI_TOURNAMENT_MATCH_DATA aMatchData[BUDOKAI_MAJOR_MATCH_TEAM_NUMBER * 2 - 1];
//sVARIABLE_DATA							sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_BUDOKAI_TOURNAMENT_TEAM_INFO_RES)
WORD								wResultCode;
TEAMTYPE							awTeamType[2];			//	sBUDOKAI_TOURNAMENT_TEAM_ENTRY_DATA_VAR	asEntryData[2];
//sVARIABLE_DATA						sData;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_PETITION_CHAT_START_REQ)
DWORD				petitionID;
bool				bNeedSatisfactionRate;
ACCOUNTID			gmAccountID;
WCHAR				awchGMCharName_Consult[MAX_SIZE_CHAR_NAME_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_PETITION_CHAT_GM_SAY_REQ)
ACCOUNTID			gmAccountID;
WORD				wMessageLengthInUnicode;
WCHAR				awchMessage[MAX_LENGTH_OF_CHAT_MESSAGE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_PETITION_CHAT_USER_SAY_RES)
WORD				wResultCode;
//ACCOUNTID			gmAccountID;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_PETITION_CHAT_GM_END_NFY)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_PETITION_USER_INSERT_RES)
WORD				wResultCode;
DWORD			petitionID;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_PETITION_CONTENT_MODIFY_RES)
WORD				wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
//BEGIN_PROTOCOL( TU_PETITION_SATISFACTION_RES )
//	WORD				wResultCode;
//END_PROTOCOL()
////----------------------------------------------------------------
BEGIN_PROTOCOL(TU_PETITION_USER_CANCEL_RES)
WORD				wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_PETITION_FINISH_NFY)
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_CREATED_NFY)
sDBO_DOJO_DATA		sDojoData;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_DESTROYED_NFY)
TBLIDX				dojoTblidx;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_BRIEF_NFY)
sDBO_DOJO_BRIEF		sDojoData;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_NFY)			// ��帮���� �ۿ� ������ �԰ų� ������ �ʿ��� ���� �϶� �ٽ� �˷��ش�.
WCHAR				wszName[MAX_SIZE_GUILD_NAME_IN_UNICODE + 1]; // ��û����
END_PROTOCOL()
//------------------------------------------------------------------	
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_INFORM_NFY)
TBLIDX						dojoTblidx;
BYTE						byState;	// ������Ż�� ����
DOJOTIME					tmNextStepTime;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_REJECT_NFY)   // ��û�ߴ� ������ ����������
END_PROTOCOL()
//------------------------------------------------------------------	
BEGIN_PROTOCOL(TU_DOJO_BUDOKAI_SEED_ADD_RES)
WORD				wResultCode;
TBLIDX				dojoTblidx;
WCHAR				wszCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];// ����� character
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_DOJO_BUDOKAI_SEED_DEL_RES)
WORD				wResultCode;
WCHAR				wszCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];// ������ character
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_POINT_NFY)
sDOJO_SCRAMBLE_POINT sData;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_SHIEFT_SEAL_STATE_NFY)
TBLIDX								dojoTblidx;
TBLIDX								objectTblidx;
GUILDID								guildId;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_NOTICE_CHANGE_RES)
WORD						wResultCode;
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_DOJO_NOTICE_CHANGE_NFY)
TBLIDX						dojoTblidx;
WCHAR						awchCharName[MAX_SIZE_CHAR_NAME_UNICODE + 1];
WORD						wNoticeLengthInUnicode;
WCHAR						awchNotice[MAX_LENGTH_OF_GUILD_NOTICE_UNICODE + 1];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_RECEIVE_NFY)
TBLIDX								dojoTblidx;
GUILDID								guildId;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_RECEIVE_INFO_NFY)
TBLIDX								dojoTblidx;
GUILDID								defGuildId;
GUILDID								attGuildId;
WCHAR								wszDefGuildName[MAX_SIZE_GUILD_NAME_IN_UNICODE + 1];
WCHAR								wszAttGuildName[MAX_SIZE_GUILD_NAME_IN_UNICODE + 1];
sDBO_GUILD_MARK						sDefMark;
sDBO_GUILD_MARK						sAttMark;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_REWARD_NFY)
DWORD						dwAddGuildReputation;
TBLIDX						itemTblidx;
BYTE						byCount;
END_PROTOCOL()
//------------------------------------------------------------------ 
BEGIN_PROTOCOL(TU_DOJO_SCRAMBLE_RESULT_NFY)
GUILDID						winGuildId;
END_PROTOCOL()
//------------------------------------------------------------------ 
/*BEGIN_PROTOCOL(TU_HLS_SLOT_MACHINE_INFO_RES)
WORD		ResultCode;
BYTE		BiginCount;
BYTE		TotalCount;
WORD        MachineID[4];//Unique ID for WagguMachine if repeat same id Game Crash
BYTE        Price[4];// How Much Coin Need To Play
DWORD       unk[4];//Set 1 to make machine visible
DWORD       ItemRankMachine1[10];//Items for Machine 1
DWORD       ItemRankMachine2[10];//Items for Machine 2
DWORD       ItemRankMachine3[10];//Items for Machine 3
DWORD       ItemRankMachine4[10];//Items for Machine 4
WORD		CoinType[4];// 0 Waggu 1 Event
WORD		BallsMachine1;//How much Balls Machine have at Momet
WORD		BallsMachine2;//How much Balls Machine have at Momet
WORD		BallsMachine3;//How much Balls Machine have at Momet
WORD		BallsMachine4;//How much Balls Machine have at Momet
WORD		MaxBallsMachine1;// Max Balls in The Machine
WORD		MaxBallsMachine2;// Max Balls in The Machine
WORD		MaxBallsMachine3;// Max Balls in The Machine
WORD		MaxBallsMachine4;// Max Balls in The Machine
END_PROTOCOL()*/
//------------------------------------------------------------------
/*BEGIN_PROTOCOL(TU_HLS_SLOT_MACHINE_EXTRACT_RES)
WORD        ResultCode;
BYTE        MachineID;
BYTE        unk[3];
DWORD       RewardWPPoint;
BYTE        unk2[8];
DWORD       ItemID[10];
BYTE        ByItemCount;
BYTE        unk3[9];
BYTE        WagguCost;
BYTE        unk4[9];
BYTE        PlayNumber;//recive how much coins machine run at sime time
END_PROTOCOL()*/
//------------------------------------------------------------------
/*BEGIN_PROTOCOL(TU_HLS_SLOT_MACHINE_WINNER_INFO_RES)
WORD            ResultCode;
BYTE            MachineID;
BYTE            BiginCount;
BYTE            TotalCount;
WCHAR			WinnerCharName3[16 + 1];
WCHAR			WinnerCharName2[16 + 1];
WCHAR			WinnerCharName1[16 + 1];
WORD            TryToGetRank3;
WORD            TryToGetRank2;
WORD            TryToGetRank1;
DBOTIME			RewardTimeRank3;
DBOTIME			RewardTimeRank2;
DBOTIME         RewardTimeRank1;
DWORD           WinnerCount3;
DWORD           UNK11;
DWORD           WinnerCount2;
DWORD           UNK13;
DWORD           WinnerCount1;
DWORD           UNK15;
BYTE            UNK16;
BYTE            UNK17;
BYTE            UNK18;
END_PROTOCOL()*/
//------------------------------------------------------------------
/*BEGIN_PROTOCOL(TU_BROADCASTING_SYSTEM_NFY)
BYTE            Count;
WCHAR			awchSenderCharName[16 + 1];
WORD            ALLIGNIAMENT;
DWORD           ItemID;
BYTE            Grade;
BYTE            unk[203];
END_PROTOCOL()*/
//------------------------------------------------------------------
/*BEGIN_PROTOCOL(TU_WAGUWAGUCOIN_UPDATE_INFO)
WORD   WagguCoin;
END_PROTOCOL()
BEGIN_PROTOCOL(TU_EVENTCOIN_UPDATE_INFO)
WORD   EventCoin;
END_PROTOCOL()*/
#pragma pack()