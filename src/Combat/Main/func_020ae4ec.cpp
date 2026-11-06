#include <globaldefs.h>
#include "Resource/GameResources.h"


#if defined(jpn)
enum { Enum_020ae4ec_17496 = 0x41a8 };
#else
enum { Enum_020ae4ec_17496 = 0x4458 };
#endif

extern "C" void* GetFlagManager_0205ec34(void);
extern "C" void SetFlag_0206df6c(void*, unsigned char*, int, int);
extern "C" void func_ov017_021cdb00(int, int, int, int);

// USA: func_020ae4ec
extern "C" ARM void func_020ae4ec(int arg0, int arg1) {
    void* var0 = GetFlagManager_0205ec34();
    SetFlag_0206df6c(var0, (unsigned char*)var0 + 0x8c, arg0 + 0x33e, arg1);
    void* var1 = GetGameResources();
    if (*(int*)((char*)var1 + Enum_020ae4ec_17496) == 0) return;
    func_ov017_021cdb00(7, arg0, arg1, -1);
}
