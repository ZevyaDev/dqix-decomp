#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_ov017_021a2738
ARM GameObject* FindCombatantByField2_021a2738(void* unused, int value) {
    if (value < 0) return NULL;
    GameState* bs = GameState::GetInstance();
    int i;
    for (i = 0; i < 0xc; i++) {
        GameObject* combatant = bs->GetGameObjectByIndex(i + 7);
        if (combatant) {
            if (value == *(short*)((char*)combatant + 0x2)) return combatant;
        }
    }
    return NULL;
}
