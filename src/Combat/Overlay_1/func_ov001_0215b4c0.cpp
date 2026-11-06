#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" void* GetResources_0200fb8c(int*);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);

// USA: func_ov001_0215b4c0
extern "C" ARM int func_ov001_0215b4c0(void* arg0, int arg1) {
    int var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    if (arg1 >= 2) {
        GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 0x8);
    }
    void* var1 = GameState::GetInstance();
    void* var2 = GetResources_0200fb8c((int*)var1);
    if (var2 != NULL) {
        SetMainBrightness((GameResources*)var2, 0, var0);
        GetGameResources();
    }
    return 1;
}
