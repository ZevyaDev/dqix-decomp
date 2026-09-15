#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov001_0215b058
ARM int ClearByteAt5cac_0215b058(void) {
    ((char*)GameState::GetInstance() + 0x5000)[0xcac] = 0;
    return 1;
}
