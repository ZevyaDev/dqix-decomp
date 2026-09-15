#include <globaldefs.h>
#include "GameState/GameState.h"

void* GetPtrField0x2a04(GameState*);
void SetField0x158(void*, int);

// USA: func_ov023_021f50fc
ARM void SetFieldForListedCombatants021f50fc(void) {
    GameState* battleStruct = GameState::GetInstance();
    unsigned char* list = (unsigned char*)GetPtrField0x2a04(battleStruct);
    for (int i = 0; i < list[0xf7c]; i++) {
        unsigned char* p = list + i;
        GameObject* combatant = GetCombatantWithFlag0x100(battleStruct, p[0xf78]);
        if (combatant != 0) {
            SetField0x158(combatant, 2);
        }
    }
}
