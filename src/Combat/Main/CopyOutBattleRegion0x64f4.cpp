#include <globaldefs.h>
#include "System/Memory.h"
#include "GameState/GameState.h"

// USA: func_020ac760
ARM int CopyOutBattleRegion0x64f4(void* dst) {
    VectorizedInvertedMemcpy((char*)GameState::GetInstance() + 0x64f4, dst, 0xad6);
    return 1;
}
