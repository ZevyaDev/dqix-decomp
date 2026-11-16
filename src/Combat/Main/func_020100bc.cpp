#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_020100bc func_0200ff18
#endif

// USA: func_020100bc
extern "C" ARM void* func_020100bc(GameState* gameState) {
    return gameState->pCamera_3b0_;
}
