#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_020100bc
ARM int GetField0x3b0Value(GameState* battleStruct) {
    return *(int*)((char*)battleStruct + 0x3b0);
}
