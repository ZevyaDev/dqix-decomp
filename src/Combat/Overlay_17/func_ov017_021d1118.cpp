#include <globaldefs.h>
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "GameState/BattleRecordSnapshot.h"
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_0202ae24 func_0202a9dc
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae24();
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);
extern "C" void* func_0202ae18(void);
extern "C" int GetLocalWirelessState_0202ba00(int* wireless);
extern "C" int AddElapsedPlayTime_020ac4f8(int isMultiplayerTimeIncluded);
extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" int GetAlchemyCount_020ac0b4(void* count);
extern "C" int GetDefeatedMonsterListCompletion_020a0870(BattleRecords_02061c04* records);
extern "C" int GetItemListCompletion_020a08a4(BattleRecords_02061c04* records);
extern "C" int GetWardrobeCompletion_020a08d8(BattleRecords_02061c04* records);
extern "C" int GetAlchenomiconCompletion_020a090c(BattleRecords_02061c04* records);

struct PlayerId_ov017_021d1118_8 { unsigned char bytes_0_[6]; };

struct BattleRecordsBody_ov017_021d1118_9 {
    unsigned char bytes_0_[14];
    unsigned char recipientIndex_e_0_ : 2;
    unsigned char unknown_e_2_ : 2;
    unsigned char unknown_e_4_ : 4;
    unsigned char section_f_0_ : 2;
    unsigned char length_f_2_ : 4;
    unsigned char isLast_f_6_ : 1;
    unsigned char unknown_f_7_ : 1;
};

struct Struct_ov017_021d1118 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    BattleRecordsBody_ov017_021d1118_9 unknown_4_;
};

struct RecordsSummary_ov017_021d1118_2 {
    unsigned int playTimeHours_0_0_ : 14;
    unsigned int alchemyCount_1_6_ : 17;
    unsigned int unknown_3_7_ : 1;
    unsigned int multiplayerTimeHours_4_0_ : 14;
    unsigned int unknown_5_6_ : 17;
    unsigned int unknown_7_7_ : 1;
    unsigned int playTimeMinutes_8_0_ : 7;
    unsigned int multiplayerTimeMinutes_8_7_ : 7;
    unsigned int defeatedMonsterListCompletion_9_6_ : 7;
    unsigned int itemListCompletion_a_5_ : 7;
    unsigned int unknown_b_4_ : 4;
    unsigned int unknown_c_0_ : 10;
    unsigned int unknown_d_2_ : 14;
    unsigned int wardrobeCompletion_f_0_ : 7;
    unsigned int unknown_f_7_ : 1;
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 14;
    unsigned int alchenomiconCompletion_12_7_ : 7;
    unsigned int unknown_13_6_ : 2;
    short unknown_14_;
    unsigned char gender_16_0_ : 1;
    unsigned char revocationCount_16_1_ : 4;
};

struct Struct_ov017_021d1118_3 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 19;
    signed int unknown_6_3_ : 11;
    unsigned int unknown_7_6_ : 2;
    char unknown_8_[0x7c - 8];
};

struct Struct_ov017_021d1118_4 {
#if defined(jpn)
    char unknown_0_[0x543c];
    Struct_ov017_021d1118_3 profile_569c_;
    char unknown_54b8_[0x72be - 0x54b8];
#else
    char unknown1_0_[0x569c];
    Struct_ov017_021d1118_3 profile_569c_;
    char unknown_5718_[0x74fe - 0x5718];
#endif
    PlayerId_ov017_021d1118_8 playerId_74fe_;
    PlayerId_ov017_021d1118_8 inline_ov017_021d1118() { return playerId_74fe_; }
};

struct Struct_ov017_021d1118_5 {
    char unknown_0_[0x186];
    unsigned char unknown_186_[0x49c - 0x186];
    unsigned char unknown_49c_0_ : 1;
#if defined(jpn)
    char unknown_49d_[0x8b8 - 0x49d];
#else
    char unknown1_49d_[0x950 - 0x49d];
#endif
    int unknown_950_;
};

struct Struct_ov017_021d1118_6 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    Struct_ov017_021d1118_5* unknown_150_;
};

struct Struct_ov017_021d1118_7 {
    char unknown_0_[0x100d];
    unsigned char unknown_100d_;
};

// USA: SendBattleRecords_ov017_021d1118
extern "C" ARM void SendBattleRecords_ov017_021d1118(int recipientIndex, int sectionMask, bool arg2, unsigned char arg3) {
    GameState* gameState;
    void* packetQueue;
    BattleRecordsBody_ov017_021d1118_9* body;
    unsigned char* chunk;
    Struct_ov017_021d1118_7* wireless;
    int wirelessState;
    int playerCount;
    int isMultiplayerTimeIncluded;
    int gender;
    int revocationCount;
    Struct_ov017_021d1118_6* protagonist;
    Struct_ov017_021d1118_5* memberData;
    int summaryBytesLeft;
    int profileBytesLeft;
    Struct_ov017_021d1118_3* profile;
    gameState = GameState::GetInstance();
    packetQueue = func_0202ae24();
    Struct_ov017_021d1118 packet;
    body = &packet.unknown_4_;
    packet.unknown_0_ = 0x1a;
    body->unknown_e_2_ = arg3;
    body->unknown_f_7_ = arg2;
    body->recipientIndex_e_0_ = recipientIndex;
    profile = &((Struct_ov017_021d1118_4*)gameState)->profile_569c_;
    if (sectionMask & 4) {
        body->section_f_0_ = 2;
        body->length_f_2_ = 6;
        PlayerId_ov017_021d1118_8 playerId = ((Struct_ov017_021d1118_4*)gameState)->inline_ov017_021d1118();
        memcpy(body->bytes_0_, &playerId, body->length_f_2_);
        QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
    }
    if (sectionMask & 1) {
        wireless = (Struct_ov017_021d1118_7*)func_0202ae18();
        wirelessState = GetLocalWirelessState_0202ba00((int*)wireless);
        playerCount = wireless->unknown_100d_;
        isMultiplayerTimeIncluded = 0;
        if ((wirelessState == 5 && playerCount > 1) || wirelessState == 6) isMultiplayerTimeIncluded = 1;
        AddElapsedPlayTime_020ac4f8(isMultiplayerTimeIncluded);
        BattleRecords_02061c04 records;
        GetBattleRecords_020ac4c0(&records);
        unsigned int alchemyCount = 0;
        GetAlchemyCount_020ac0b4(&alchemyCount);
        gender = 0;
        revocationCount = 0;
        protagonist = (Struct_ov017_021d1118_6*)gameState->GetProtagonist();
        if (protagonist) {
            memberData = protagonist->unknown_150_;
            gender = memberData->unknown_49c_0_;
            revocationCount = memberData->unknown_186_[memberData->unknown_950_];
        }
        RecordsSummary_ov017_021d1118_2 summary;
        VectorizedMemset(&summary, 0, sizeof(summary));
        summary.playTimeHours_0_0_ = records.playTimes_0_.playTime_0_.hours_0_;
        summary.playTimeMinutes_8_0_ = records.playTimes_0_.playTime_0_.minutes_2_;
        summary.multiplayerTimeHours_4_0_ = records.playTimes_0_.multiplayerTime_4_.hours_0_;
        summary.multiplayerTimeMinutes_8_7_ = records.playTimes_0_.multiplayerTime_4_.minutes_2_;
        summary.unknown_5_6_ = records.unknown_8_0_;
        summary.alchemyCount_1_6_ = alchemyCount;
        summary.unknown_c_0_ = records.unknown_10_0_;
        summary.unknown_10_0_ = records.unknown_b_0_;
        summary.unknown_d_2_ = records.unknown_d_6_;
        summary.unknown_11_1_ = records.unknown_11_1_;
        summary.defeatedMonsterListCompletion_9_6_ = (unsigned char)GetDefeatedMonsterListCompletion_020a0870(&records);
        summary.itemListCompletion_a_5_ = (unsigned char)GetItemListCompletion_020a08a4(&records);
        summary.wardrobeCompletion_f_0_ = (unsigned char)GetWardrobeCompletion_020a08d8(&records);
        summary.alchenomiconCompletion_12_7_ = (unsigned char)GetAlchenomiconCompletion_020a090c(&records);
        summary.unknown_14_ = profile->unknown_6_3_;
        summary.gender_16_0_ = gender;
        summary.revocationCount_16_1_ = revocationCount;
        body->section_f_0_ = 0;
        body->isLast_f_6_ = 0;
        chunk = (unsigned char*)&summary;
        for (summaryBytesLeft = sizeof(summary); summaryBytesLeft > 0; chunk += 14, summaryBytesLeft -= 14) {
            if (summaryBytesLeft > 14) {
                body->length_f_2_ = 14;
            } else {
                body->length_f_2_ = summaryBytesLeft;
                if (!(sectionMask & 2)) body->isLast_f_6_ = 1;
            }
            memcpy(body->bytes_0_, chunk, body->length_f_2_);
            QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
        }
    }
    if (sectionMask & 2) {
        body->section_f_0_ = 1;
        chunk = (unsigned char*)profile;
        for (profileBytesLeft = sizeof(*profile); profileBytesLeft > 0; chunk += 14, profileBytesLeft -= 14) {
            if (profileBytesLeft > 14) {
                body->length_f_2_ = 14;
            } else {
                body->length_f_2_ = profileBytesLeft;
                body->isLast_f_6_ = 1;
            }
            memcpy(body->bytes_0_, chunk, body->length_f_2_);
            QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
        }
    }
}
