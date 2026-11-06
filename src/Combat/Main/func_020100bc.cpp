#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

// USA: GetCamera_020100bc
extern "C" ARM void* GetCamera_020100bc(GameState* gameState) {
    return gameState->pCamera_3b0_;
}
