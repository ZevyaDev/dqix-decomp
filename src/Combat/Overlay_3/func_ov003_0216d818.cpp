// USA: func_ov003_0216d818
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int GetMessageWindow_020421a0();
extern "C" void ResetMessageWindow_02043204(char* window);

struct TextWindowManager_0205d6a0;
extern "C" void CloseTextWindows_0205d6a0(struct TextWindowManager_0205d6a0* windowManager, int isAll);

extern "C" void func_ov003_0216d77c(void* arg0);

extern "C" ARM void func_ov003_0216d818(char* arg0) {
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    ResetMessageWindow_02043204((char*)GetMessageWindow_020421a0());
#if defined(jpn)
    enum { Enum_ov003_0216d818_4800 = 0x1150 };
#else
    enum { Enum_ov003_0216d818_4800 = 0x12c0 };
#endif
    CloseTextWindows_0205d6a0(*(struct TextWindowManager_0205d6a0**)(arg0 + Enum_ov003_0216d818_4800), 0);
    func_ov003_0216d77c(arg0);
}
