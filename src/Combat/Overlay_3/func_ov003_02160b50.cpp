// USA: func_ov003_02160b50
#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int GetLocalWirelessState_0202ba00(int* wireless);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);

extern "C" ARM int func_ov003_02160b50(void*) {
    int var0 = 0;
    if (GetLocalWirelessState_0202ba00((int*)func_0202ae18())) {
        var0 = GetProtagonistObjectIndex_020100a8(GameState::GetInstance()) == 0 ? 1 : 2;
    }
    return var0;
}
