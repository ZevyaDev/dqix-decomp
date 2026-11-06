#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: SetCamera_020100c4
extern "C" ARM void SetCamera_020100c4(GameState* gameState, int camera) {
    *(int*)((char*)gameState + 0x3b0) = camera;
}
