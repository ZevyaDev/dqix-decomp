#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_0200fd48
ARM void ClearCombatantSlot(GameState* battleStruct, int id) {
    battleStruct->objects_[id] = NULL;
}
