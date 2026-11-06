#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void func_020a2718(char* arg0);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);
extern "C" void func_ov004_0216fa48(char* arg0);

// USA: func_020e4524
extern "C" ARM void func_020e4524(char* arg0) {
    ResetMessageWindow_02043204((char*)GetMessageWindow_020421a0());
    func_020a2718((char*)GetFollowCamera_020100f8((char*)GameState::GetInstance()));
    SetMainBrightness(GetGameResources(), 0, 0x3c);
    func_ov004_0216fa48(arg0);
}
