#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_020103e8
ARM int GetActiveBitIndex(GameState* battleStruct) {
    return *(int*)((char*)battleStruct + 0x3e0);
}
