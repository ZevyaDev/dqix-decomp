#include <globaldefs.h>

#if defined(jpn)
#define func_ov003_0217dc40 func_ov003_0217c8e0
#endif
#include "Filesystem/BackgroundLoader.h"

extern "C" int GetMessageWindow_020421a0(void);

struct TextWindowManager_0205d6a0;
extern "C" void CloseTextWindows_0205d6a0(struct TextWindowManager_0205d6a0* windowManager, int isAll);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void func_ov003_0217db88(void* arg0);

struct Struct_ov003_0217dc40 {
    char unknown_0_[0xc];
    int unknown_c_;
#if defined(jpn)
    char unknown_10_[0x8c - 0x10];
#else
    char unknown1_10_[0x90 - 0x10];
#endif
    TextWindowManager_0205d6a0* unknown_90_;
};

// USA: func_ov003_0217dc40
extern "C" ARM void func_ov003_0217dc40(Struct_ov003_0217dc40* arg0) {
    int var0 = GetMessageWindow_020421a0();
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
#if !defined(jpn)
    int var1 = arg0->unknown_c_;
    if (var1 != -1) {
        BackgroundLoader::GetInstance()->RemoveTask(var1);
    }

#endif
    CloseTextWindows_0205d6a0(arg0->unknown_90_, 0);
    ResetMessageWindow_02043204((char*)var0);
    func_ov003_0217db88(arg0);
}
