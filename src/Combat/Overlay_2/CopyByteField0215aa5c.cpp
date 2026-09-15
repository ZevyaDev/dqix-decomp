#include <globaldefs.h>
#include "GameState/GameState.h"

int GetCombatSignedByteAt0x2c8d02039730(void* unused, int index);

// USA: func_ov002_0215aa5c
ARM void CopyByteField0215aa5c(char* base) {
    GameObject* combatant = GameState::GetInstance()->GetProtagonist();
    if (!combatant) return;
    for (int i = 0; i < 7; i++) {
        signed char value = (signed char)GetCombatSignedByteAt0x2c8d02039730(combatant, i);
        *(signed char*)(base + i + 0x1000 + 0xc7c) = value;
    }
}
