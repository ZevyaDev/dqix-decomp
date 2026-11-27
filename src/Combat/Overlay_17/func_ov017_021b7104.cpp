#if defined(jpn)
enum {Enum_ov017_021b7104_744=0xc8, Enum_ov017_021b7104_17408=0x4200, Enum_ov017_021b7104_194=0x12};
#else
enum {Enum_ov017_021b7104_744=0x2e8, Enum_ov017_021b7104_17408=0x4400, Enum_ov017_021b7104_194=0xc2};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);

struct BattleRequest_ov017_021b7104 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short battleId_4_;
    unsigned char unknown_6_[2];
    unsigned int scriptedBattleId_8_;
    unsigned char isRegularMapBoss_c_;
    unsigned char isLegacyMapBoss_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    short unknown_10_;
    unsigned char timeOfDayIndex_12_;
    unsigned char unknown_13_[1];
    unsigned int unknown_14_;
};

struct BattleManager_ov017_021b7104_2 {
    unsigned char unknown_0_[0x20];
    unsigned char unknown_20_;
    unsigned char timeOfDayIndex_21_;
    unsigned short unknown_22_;
    unsigned short battleId_24_;
    unsigned short unknown_26_;
    unsigned int scriptedBattleId_28_;
    unsigned char unknown_2c_[0x40 - 0x2c];
    unsigned char isRegularMapBoss_40_;
    unsigned char isLegacyMapBoss_41_;
    unsigned char unknown_42_;
    unsigned char unknown_43_[1];
    unsigned short unknown_44_;
    unsigned char unknown_46_;
    unsigned char unknown_47_[1];
    unsigned int unknown_48_;
    unsigned char unknown_4c_[0x51 - 0x4c];
    unsigned char unknown_51_;
};

// USA: ApplyBattleRequest_ov017_021b7104
extern "C" ARM void ApplyBattleRequest_ov017_021b7104(BattleManager_ov017_021b7104_2* battleManager, BattleRequest_ov017_021b7104* request) {
    GameState* gameState = GameState::GetInstance();
    GameResources* gameResources = GetGameResources();

    battleManager->unknown_22_ = request->unknown_1_;
    battleManager->battleId_24_ = request->battleId_4_;
    battleManager->unknown_26_ = request->unknown_2_;
    battleManager->unknown_20_ = request->unknown_0_;
    int protagonistIndex;
    if (request->unknown_0_ == 0) {
        protagonistIndex = -1;
    } else {
        protagonistIndex = GetProtagonistObjectIndex_020100a8(gameState);
    }
    battleManager->unknown_46_ = (unsigned char)protagonistIndex;
    battleManager->scriptedBattleId_28_ = request->scriptedBattleId_8_;
    battleManager->isLegacyMapBoss_41_ = request->isLegacyMapBoss_d_;
    battleManager->isRegularMapBoss_40_ = request->isRegularMapBoss_c_;
    battleManager->unknown_42_ = request->unknown_e_;
    battleManager->unknown_44_ = (unsigned short)request->unknown_10_;
    battleManager->unknown_51_ = request->unknown_f_;
    battleManager->unknown_48_ = request->unknown_14_;
    battleManager->timeOfDayIndex_21_ = request->timeOfDayIndex_12_;

    if (request->unknown_0_ != 0 && request->unknown_14_ == 0) {
        SetFlags00(gameResources, 0x800);
    }

    *((unsigned char*)gameResources + 0x4000 + Enum_ov017_021b7104_744) = 0;
    *(unsigned short*)((char*)gameResources + Enum_ov017_021b7104_17408 + Enum_ov017_021b7104_194) = 0;
}
