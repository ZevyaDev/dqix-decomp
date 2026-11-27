#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include <GameState/GameState.h>
#include <Util/Random.h>
#include <std_library_functions.h>

struct ActionData_ov000_02154a04 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 8;
    unsigned int targetSide_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    char unknown_c_[8];
    unsigned int unknown_14_0_ : 28;
    unsigned int targetScope_17_4_ : 4;
    int unknown_18_;
    unsigned int unknown_1c_0_ : 14;
    unsigned int unknown_1d_6_ : 5;
    unsigned int unknown_1e_3_ : 13;
};
struct Enemy_ov000_02154a04_2 { char unknown_0_[0x17c]; unsigned char groupIndex_17c_; };

extern "C" void* FindActionData_02079e2c(char*, int);
extern "C" int CollectPartyCombatantIndices_ov000_0215e9fc(Random*, short*, int, int);
extern "C" short func_ov000_02154f30(Random*, short, int, short*);
extern "C" void func_ov000_02153d10(Random*, short*);
extern "C" void func_ov000_02153d78(Random*, short, short*);
extern "C" GameObject* GetEnemyByIndex_0200fea4(GameState*, int);
extern "C" int CollectEnemyGroupCombatantIndices_ov000_02153e78(Random*, short*, int, int, int);
extern "C" int CollectEnemyCombatantIndices_ov000_0215eb1c(Random*, short*, int, int);
extern "C" signed char func_ov000_0215fbe0(Random*, int);
extern short data_ov000_02182af4[8];

// USA: CollectEnemyActionTargets_ov000_02154a04
extern "C" ARM int CollectEnemyActionTargets_ov000_02154a04(Random* battle, int actorIndex, int actionId, short* targetIndices) {
    int count = 0;
    GameState::GetInstance();
    ActionData_ov000_02154a04* action = (ActionData_ov000_02154a04*)FindActionData_02079e2c((char*)GetActionTables_020797dc(), (short)actionId);
    if (!action) return 0;
    unsigned int targetSide = action->targetSide_9_0_;
    unsigned int targetScope = action->targetScope_17_4_;
    if (targetScope == 1) {
        targetIndices[count++] = actorIndex;
    } else if (targetSide == 1) {
        if (targetScope == 2 || targetScope == 5) {
            int partyCount = CollectPartyCombatantIndices_ov000_0215e9fc(battle, targetIndices, 8, 1);
            targetIndices[0] = func_ov000_02154f30(battle, (short)actorIndex, partyCount, targetIndices);
            count = 1;
        } else if (targetScope == 4) {
            count = CollectPartyCombatantIndices_ov000_0215e9fc(battle, targetIndices, 8, 1);
        } else if (targetScope == 3) {
            count = CollectPartyCombatantIndices_ov000_0215e9fc(battle, targetIndices, 8, 1);
        }
    } else if (targetSide == 2) {
        if (targetScope == 2) {
            short allyIndex = 0;
            func_ov000_02153d10(battle, &allyIndex);
            targetIndices[count++] = allyIndex;
        } else if (targetScope == 8) {
            short otherAllyIndex = 0;
            func_ov000_02153d78(battle, (short)actorIndex, &otherAllyIndex);
            targetIndices[count++] = otherAllyIndex;
        } else if (targetScope == 4) {
            GameObject* actor = GetEnemyByIndex_0200fea4(GameState::GetInstance(), (short)actorIndex);
            count = CollectEnemyGroupCombatantIndices_ov000_02153e78(battle, targetIndices, 8, ((Enemy_ov000_02154a04_2*)actor)->groupIndex_17c_, 1);
        } else if (targetScope == 3) {
            count = CollectEnemyCombatantIndices_ov000_0215eb1c(battle, targetIndices, 8, 1);
        }
    }
    short picks[8];
    unsigned short* source = (unsigned short*)data_ov000_02182af4;
    int remaining = 8;
    unsigned short* destination = (unsigned short*)picks;
    do { *destination = *source++; destination++; } while (--remaining);
    short* pickList = picks;
    int pickCount = func_ov000_0215fbe0(battle, (signed char)action->unknown_1d_6_);
    if (pickCount > 0) {
        for (int i = 0; i < pickCount; i++) pickList[i] = targetIndices[NextRandomMax(battle, count)];
        memset(targetIndices, 0, count * 2);
        memcpy(targetIndices, picks, pickCount * 2);
        count = pickCount;
    }
    return count;
}
