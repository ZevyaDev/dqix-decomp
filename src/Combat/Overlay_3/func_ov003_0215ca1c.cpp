#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215ca1c_956 = 0x3d4 };
enum { Enum_ov003_0215ca1c_152 = 0xb0 };
#else
enum { Enum_ov003_0215ca1c_956 = 0x3bc };
enum { Enum_ov003_0215ca1c_152 = 0x98 };
#endif

struct TextWindowManager_0205d1e0;
struct TextWindowManager_0205d228;
struct TextWindowManager_0205d274;
extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0*);
extern "C" void DrawTextWindows_0205d228(TextWindowManager_0205d228*);
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274*);
extern "C" void FillBGUnderTextWindows_0205da88(void*, int, int, int);
extern "C" void func_ov003_0215e2a8(char* arg0);

// USA: func_ov003_0215ca1c
extern "C" ARM void func_ov003_0215ca1c(char* arg0) {
    if (*(unsigned char*)(arg0 + Enum_ov003_0215ca1c_956) == 0) return;
    ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)(arg0 + Enum_ov003_0215ca1c_152));
    DrawTextWindows_0205d228((TextWindowManager_0205d228*)(arg0 + Enum_ov003_0215ca1c_152));
    FillBGUnderTextWindows_0205da88(arg0 + Enum_ov003_0215ca1c_152, 1, 2, 1);
    FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)(arg0 + Enum_ov003_0215ca1c_152));
    func_ov003_0215e2a8(arg0);
}
