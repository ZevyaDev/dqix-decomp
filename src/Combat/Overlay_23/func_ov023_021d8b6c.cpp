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

// USA: CloseAndRedrawTextWindows_ov023_021d8b6c
extern "C" ARM void CloseAndRedrawTextWindows_ov023_021d8b6c(void* panel) {
    void* textWindowManager = (char*)panel + 0x20;
    if (func_0205d67c((Struct_0205d67c*)textWindowManager)) {
        CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)textWindowManager, 1);
    }
    ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)textWindowManager);
    DrawTextWindows_0205d228((TextWindowManager_0205d228*)textWindowManager);
    FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)textWindowManager);
    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((TextWindowManager_0205d2bc*)textWindowManager);
}
