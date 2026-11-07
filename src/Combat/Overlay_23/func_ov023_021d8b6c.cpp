#include <globaldefs.h>

struct Struct_0205d67c;
extern "C" int func_0205d67c(Struct_0205d67c*);

struct TextWindowManager_0205d6a0;
extern "C" void CloseTextWindows_0205d6a0(TextWindowManager_0205d6a0*, int);

struct TextWindowManager_0205d1e0;
extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0*);

struct TextWindowManager_0205d228;
extern "C" void DrawTextWindows_0205d228(TextWindowManager_0205d228*);

struct TextWindowManager_0205d274;
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274*);

struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(TextWindowManager_0205d2bc*);

// USA: func_ov023_021d8b6c
extern "C" ARM void func_ov023_021d8b6c(void* arg0) {
    void* var0 = (char*)arg0 + 0x20;
    if (func_0205d67c((Struct_0205d67c*)var0)) {
        CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)var0, 1);
    }
    ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)var0);
    DrawTextWindows_0205d228((TextWindowManager_0205d228*)var0);
    FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)var0);
    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((TextWindowManager_0205d2bc*)var0);
}
