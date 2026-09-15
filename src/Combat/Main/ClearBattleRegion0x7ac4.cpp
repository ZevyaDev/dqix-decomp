#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: func_020ac0dc
ARM int ClearBattleRegion0x7ac4() {
    GameState* bs = GameState::GetInstance();
    memset((char*)bs + 0x7ac4, 0, 0x3ae);
    return 1;
}
