#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: ClearAlchemyRecipeEntries_020ac0dc
extern "C" ARM int ClearAlchemyRecipeEntries_020ac0dc() {
    GameState* gameState = GameState::GetInstance();
#if defined(jpn)
    memset((char*)gameState + 0x7884, 0, 0x3ae);
#else
    memset((char*)gameState + 0x7ac4, 0, 0x3ae);
#endif
    return 1;
}
