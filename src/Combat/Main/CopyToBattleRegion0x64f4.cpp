#include <globaldefs.h>
#include "GameState/GameState.h"
#include "System/Memory.h"

// USA: func_020ac734
ARM int CopyToBattleRegion0x64f4(void* arg) {
    GameState* bs = GameState::GetInstance();
    VectorizedInvertedMemcpy(arg, (char*)bs + 0x64f4, 0xad6);
    return 1;
}
