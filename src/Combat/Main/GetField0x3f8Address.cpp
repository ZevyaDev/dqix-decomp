#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_0200fd0c
ARM void* GetField0x3f8Address(GameState* battleStruct) {
    return (char*)battleStruct + 0x3f8;
}
