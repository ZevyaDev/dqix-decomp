#include <globaldefs.h>

extern "C" void func_ov023_021ecdfc(void*);
struct TextWindowManager_0205d1e0;
extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0*);
struct TextWindowManager_0205d228;
extern "C" void DrawTextWindows_0205d228(TextWindowManager_0205d228*);
struct TextWindowManager_0205d274;
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274*);
extern "C" void func_ov023_021ecf78(void*);

// USA: func_ov023_021eb4b8
extern "C" ARM void func_ov023_021eb4b8(void* arg0) {
    if (*(unsigned char*)((char*)arg0 + 0x431) == 0) return;
    func_ov023_021ecdfc(arg0);
    ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)((char*)arg0 + 0xc4));
    DrawTextWindows_0205d228((TextWindowManager_0205d228*)((char*)arg0 + 0xc4));
    FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)((char*)arg0 + 0xc4));
    func_ov023_021ecf78(arg0);
}
