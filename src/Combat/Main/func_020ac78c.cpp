#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "GameState/GameState.h"

// USA: ReadTreasureMapCount_020ac78c
extern "C" ARM int ReadTreasureMapCount_020ac78c(void* count) {
#if defined(jpn)
    VectorizedInvertedMemcpy((char*)GameState::GetInstance() + 0x62b4, count, 1);
#else
    VectorizedInvertedMemcpy((char*)GameState::GetInstance() + 0x64f4, count, 1);
#endif
    return 1;
}
