#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: GetProtagonistObjectIndex_020100a8
extern "C" ARM int GetProtagonistObjectIndex_020100a8(GameState* gameState) {
    return gameState->protagonistObjectIndex_;
}
