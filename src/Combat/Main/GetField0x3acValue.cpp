#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: _Z18GetField0x3acValueP9GameState
ARM int GetField0x3acValue(GameState* battleStruct) {
    return *(int*)((char*)battleStruct + 0x3ac);
}
