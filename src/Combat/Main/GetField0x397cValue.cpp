#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_020100b0
ARM unsigned char GetField0x397cValue(GameState* battleStruct) {
    return *(unsigned char*)((char*)battleStruct + 0x397c);
}
