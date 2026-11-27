#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: ClearGameObjects_0200fd58
extern "C" ARM void* ClearGameObjects_0200fd58(GameState* gameState) {
    return memset(gameState->objects_, 0, 0x3a4);
}
