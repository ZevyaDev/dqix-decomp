#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: GetOwnPartyLeaderObjectIndex_020100b0
extern "C" ARM unsigned char GetOwnPartyLeaderObjectIndex_020100b0(GameState* gameState) {
#if defined(jpn)
    return gameState->unknownObjectIndex_397c_;
#else
    return gameState->unknownObjectIndex_397c_;
#endif
}
