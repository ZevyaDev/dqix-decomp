#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: ClearGameObjectByIndex_0200fd48
extern "C" ARM void ClearGameObjectByIndex_0200fd48(GameState* gameState, int index) {
    gameState->objects_[index] = NULL;
}
