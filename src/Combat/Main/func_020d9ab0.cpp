#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void CancelFontLoad_02094ab0(void);

extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" int GetFontLoader_02094a00(void);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void func_020a27ac(void* arg0);

// USA: func_020d9ab0
extern "C" ARM void func_020d9ab0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    ResetMessageWindow_02043204((char*)GetMessageWindow_020421a0());
    GetFontLoader_02094a00();
    CancelFontLoad_02094ab0();
    func_020a27ac((void*)GetFollowCamera_020100f8((char*)var0));
    *((unsigned char*)arg0 + 1) = 1;
}
