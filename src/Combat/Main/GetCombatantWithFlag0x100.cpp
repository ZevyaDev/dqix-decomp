#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: _Z25GetCombatantWithFlag0x100P9GameStatei
ARM GameObject* GetCombatantWithFlag0x100(GameState* battleStruct, int combatantId) {
    GameObject* combatant;
    if (combatantId < 0) {
        return 0;
    }
    if (combatantId >= 0xE9) {
        return 0;
    }
    combatant = battleStruct->objects_[combatantId];
    if (combatant == 0) {
        return 0;
    }
    if ((combatant->obj3D_.unknown_0_ & 0x100) == 0) {
        combatant = 0;
    }
    return combatant;
}
