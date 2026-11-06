#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: GetZoneEntry_0200fd0c
extern "C" ARM void* GetZoneEntry_0200fd0c(GameState* gameState) {
    return (char*)gameState + 0x3f8;
}
