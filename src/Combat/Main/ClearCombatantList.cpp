#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_0200fd58
ARM void* ClearCombatantList(GameState* battleStruct) {
    return memset(battleStruct->objects_, 0, 0x3a4);
}
