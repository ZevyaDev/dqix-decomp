#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_02026b7c
ARM void MarkActiveCombatantSlots02026b7c(unsigned char* obj) {
    GameState* bs = GameState::GetInstance();
    int i;
    obj += 0x96;
    for (i = 0; i < 4; i++) {
        if (bs->GetGameObjectByIndex(i)) {
            obj[0xa00] |= (1 << i);
        }
    }
}
