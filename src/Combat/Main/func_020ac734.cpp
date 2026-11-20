#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Memory.h"

// USA: SetTreasureMaps_020ac734
extern "C" ARM int SetTreasureMaps_020ac734(void* treasureMaps) {
    GameState* gameState = GameState::GetInstance();
#if defined(jpn)
    VectorizedInvertedMemcpy(treasureMaps, (char*)gameState + 0x62b4, 0xad6);
#else
    VectorizedInvertedMemcpy(treasureMaps, (char*)gameState + 0x64f4, 0xad6);
#endif
    return 1;
}
