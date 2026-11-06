#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
struct GlobalFlags_02038598_4;
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);
extern "C" void func_020dc2d0(int arg0);
extern "C" void* GetGlobalFlags_020d6c00(void);

// USA: func_ov001_0215aef0
extern "C" ARM int func_ov001_0215aef0(void* arg0) {
    int var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    void* var1 = GetGlobalFlags_020d6c00();
    (int)GetGameResources();
    if (var0 != 0) {
        ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)var1, 1);
        func_020dc2d0(0);
    } else {
        SetGlobalFlags_020466e4((unsigned int*)var1, 1);
    }
    return 1;
}
