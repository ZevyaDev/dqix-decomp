#include <globaldefs.h>
#include "GameState/GameState.h"

void SetByteField0x253(void* obj);

// USA: func_ov017_021ab67c
ARM void CallHelpersAndSetField253_021ab67c(unsigned char* obj) {
    obj[1] = 1;
    SetByteField0x253(GameState::GetInstance()->GetUnknownGameObject());
}
