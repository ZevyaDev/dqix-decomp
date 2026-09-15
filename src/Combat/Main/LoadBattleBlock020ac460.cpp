#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: func_020ac460
ARM int LoadBattleBlock020ac460(void* dst) {
    memset(dst, 0, 0x3c);
    memcpy(dst, (char*)GameState::GetInstance() + 0x104 + 0x7400, 0x3c);
    return 1;
}
