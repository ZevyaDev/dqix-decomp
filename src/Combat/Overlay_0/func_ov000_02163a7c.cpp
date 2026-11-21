#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int CollectPartyCombatantIndices_ov000_0215e9fc(int battle, short* indices, int maxCount, int filterFlags);
extern "C" int CollectAllEnemyCombatantIndices_ov000_0215ec1c(int battle, short* indices, int maxCount, int arg3);
struct Struct_02049f50;
extern "C" void func_02049f50(struct Struct_02049f50* arg0, int arg1, int arg2);

struct BattleScene_ov000_02163a7c {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    int battle_29c_;
};

// USA: SetCombatantsOpaque_ov000_02163a7c
extern "C" ARM void SetCombatantsOpaque_ov000_02163a7c(struct BattleScene_ov000_02163a7c* battleScene) {
    GameState* gameState = GameState::GetInstance();
    short indices[16];
    int count = 0;
    count = count + CollectPartyCombatantIndices_ov000_0215e9fc(battleScene->battle_29c_, indices, 0x10, count);
    count = count + CollectAllEnemyCombatantIndices_ov000_0215ec1c(battleScene->battle_29c_, indices + count, 0x10 - count, 0);
    short* indexEntry = indices;
    for (int i = 0; i < count; indexEntry++, i++) {
        GameObject* combatant = gameState->GetCombatantByIndex(*indexEntry);
        if (combatant) {
            func_02049f50((struct Struct_02049f50*)combatant, 0x1f, 0);
        }
    }
}
