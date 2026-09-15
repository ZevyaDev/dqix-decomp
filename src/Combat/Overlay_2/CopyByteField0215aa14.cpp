#include <globaldefs.h>
#include "GameState/GameState.h"

void SetCombatByteAt0x2c8d0203970c(void* unused, int index, int value);

struct Sub0215aa14 { char pad[0x7c]; signed char val; };

// USA: func_ov002_0215aa14
ARM void CopyByteField0215aa14(char* base) {
    GameObject* combatant = GameState::GetInstance()->GetProtagonist();
    if (!combatant) return;
    for (int i = 0; i < 7; i++) {
        struct Sub0215aa14* sub = (struct Sub0215aa14*)(base + i + 0x1c00);
        SetCombatByteAt0x2c8d0203970c(combatant, i, sub->val);
    }
}
