#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_02010828
ARM void* GetPtrField0x2a04(GameState* battleStruct) {
    return (char*)battleStruct + 0x2a04;
}
