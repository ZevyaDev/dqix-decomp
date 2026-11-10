#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetEnemyByIndex_0200fea4(GameState* gameState, int index);

// USA: CollectAllEnemyCombatantIndices_ov000_0215ec1c
extern "C" ARM int CollectAllEnemyCombatantIndices_ov000_0215ec1c(void* battle, short* indices, int maxCount) {
    int count = 0;
    int i;
    for (i = 0; i < 8; i++) {
        short combatantIndex = (short)(i + 0xc0);
        GameState* gameState = GameState::GetInstance();
        GameObject* enemy = GetEnemyByIndex_0200fea4(gameState, combatantIndex);
        if (enemy != NULL) {
            indices[count++] = combatantIndex;
            if (count == maxCount) return count;
        }
    }
    return count;
}
