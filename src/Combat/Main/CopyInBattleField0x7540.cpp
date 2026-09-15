#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_020ac494
ARM int CopyInBattleField0x7540(void* src) {
    int* region = (int*)((char*)GameState::GetInstance() + 0x104);
    memcpy((char*)(region + 0x1d00) + 0x3c, src, 0xb0);
    return 1;
}
