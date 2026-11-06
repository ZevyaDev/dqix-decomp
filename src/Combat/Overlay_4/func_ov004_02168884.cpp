#include <globaldefs.h>
#include "GameState/GameState.h"



extern "C" int func_02011b50(void* arg0, int arg1);
extern "C" void func_02011af0(void* arg0);
extern "C" void* GetFlagManager_0205ec34(void);
extern "C" void SetFlag_0206df6c(void* flagManager, unsigned char* flags, int flagIndex, int isSet);

// USA: func_ov004_02168884
extern "C" ARM int func_ov004_02168884(void) {
    GameState* var0 = GameState::GetInstance();
    func_02011b50(var0, 1);
    func_02011af0(var0);
    void* var1 = GetFlagManager_0205ec34();
    SetFlag_0206df6c(var1, (unsigned char*)var1 + 0x8c, 3, 0);
    return 0;
}
