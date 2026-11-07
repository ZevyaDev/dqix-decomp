#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020d76b8;

struct Struct_ov000_021626a0_2 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 27;
    unsigned int unknown_13_3_ : 1;
    unsigned int unknown_13_4_ : 4;
};

struct Struct_ov000_021626a0 {
    char unknown_0_[0x148];
    struct Struct_ov000_021626a0_2* unknown_148_;
};

struct BattleScene_ov000_02160da0 {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    char* pBattle_29c_;
    unsigned char* unknown_2a0_;
    char unknown_2a4_[0xea4 - 0x2a4];
    struct Struct_020d76b8* unknown_ea4_;
};

extern "C" void* GetCurrentBattleAction_ov000_02160f20(void* battleScene);
extern "C" int CollectObjectIndicesBySelector_ov000_021820bc(void* battle, int action, int selector, int indices);
extern "C" struct Struct_ov000_021626a0* GetEnemyByIndex_0200fea4(GameState* gameState, int index);
extern "C" int func_02049ee8(unsigned char* arg0);
extern "C" void func_020d76b8(struct Struct_020d76b8* arg0, int arg1);
extern "C" void func_020d76d8(unsigned char* arg0, int arg1);
extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" int IsPartyMemberInBattle_020a35e0(unsigned char* battleSetup, unsigned char partyMemberIndex);

// USA: SetObjectsVisibleBySelector_ov000_021626a0
extern "C" ARM void SetObjectsVisibleBySelector_ov000_021626a0(BattleScene_ov000_02160da0* battleScene, int selector, int isVisible) {
    int indices[16];
    GameState* gameState;
    char* battle;
    int i;
    int memberIndex;
    int count;
    GameObject* object;
    int isShown;
    struct Struct_020d76b8* combatantSlots;
    void* action;
    struct Struct_ov000_021626a0* enemy;
    struct Struct_ov000_021626a0_2* enemyRecord;

    gameState = GameState::GetInstance();
    battle = battleScene->pBattle_29c_;
    combatantSlots = battleScene->unknown_ea4_;
    action = GetCurrentBattleAction_ov000_02160f20(battleScene);
    if (combatantSlots == NULL) {
        return;
    }
    count = CollectObjectIndicesBySelector_ov000_021820bc(battleScene->pBattle_29c_, (int)action, selector, (int)indices);
    for (i = 0; i < count; i++) {
        object = gameState->GetGameObjectByIndex(indices[i]);
        if (object == NULL) {
            continue;
        }
        isShown = isVisible;
        if (object->obj3D_.classFlags_0_ & 0x400) {
            enemy = GetEnemyByIndex_0200fea4(gameState, indices[i]);
            if (enemy != NULL) {
                enemyRecord = enemy->unknown_148_;
                if (func_02049ee8((unsigned char*)enemy) == 0 && enemyRecord->unknown_13_3_) {
                    isShown = 0;
                }
            }
        }
        if (isShown) {
            object->obj3D_.MakeVisible();
            func_020d76b8(combatantSlots, indices[i]);
        } else {
            object->obj3D_.MakeHidden();
            func_020d76d8((unsigned char*)combatantSlots, indices[i]);
        }
    }
    if (func_ov000_0215fc60(battle) == 0) {
        return;
    }
    for (memberIndex = 1; memberIndex < 4; memberIndex++) {
        object = gameState->GetGameObjectByIndex(memberIndex);
        if (object == NULL) {
            continue;
        }
        if (IsPartyMemberInBattle_020a35e0(battleScene->unknown_2a0_, memberIndex)) {
            object->obj3D_.MakeHidden();
            func_020d76d8((unsigned char*)combatantSlots, memberIndex);
        }
    }
}
