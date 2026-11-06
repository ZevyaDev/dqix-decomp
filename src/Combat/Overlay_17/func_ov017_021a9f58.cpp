#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" int GetFontLoader_02094a00(void);
extern "C" void CancelFontLoad_02094ab0(void);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);
extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" void func_ov017_021a9fa0(int arg0);

// USA: func_ov017_021a9f58
extern "C" ARM void func_ov017_021a9f58(int arg0) {
    GameState* var0 = GameState::GetInstance();
    ResetMessageWindow_02043204((char*)(long)GetMessageWindow_020421a0());
    GetFontLoader_02094a00();
    CancelFontLoad_02094ab0();
    SetMainBrightness(GetGameResources(), 0, 0x14);
    EnablePlayerControl_020397c0(var0->GetUnknownGameObject());
    func_ov017_021a9fa0(arg0);
}
