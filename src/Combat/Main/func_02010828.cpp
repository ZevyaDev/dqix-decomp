#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: GetParty_02010828
extern "C" ARM void* GetParty_02010828(GameState* gameState) {
#if defined(jpn)
    return (char*)gameState + 0x27a4;
#else
    return (char*)gameState + 0x2a04;
#endif
}
