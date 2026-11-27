#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: SetProtagonistObjectIndex_020100a0
extern "C" ARM void SetProtagonistObjectIndex_020100a0(GameState* gameState, int protagonistObjectIndex) {
    gameState->protagonistObjectIndex_ = protagonistObjectIndex;
}
