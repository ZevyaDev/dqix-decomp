#include <globaldefs.h>
#if defined(jpn)
#include "Resource/CharacterCreationUI.h"
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif

#if defined(jpn)
#define func_ov009_02184bbc func_ov009_02185ee8
#endif

struct TextWindowManager_0205d1e0;
struct TextWindowManager_0205d228;
struct TextWindowManager_0205d274;

extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0*);
extern "C" void DrawTextWindows_0205d228(TextWindowManager_0205d228*);
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274*);

#if defined(jpn)
extern "C" void func_ov023_021da274(Struct_ov009_021842a0* arg0);
#else
extern "C" void func_ov023_021da274(void* arg0);
#endif
#if defined(jpn)
extern "C" void func_ov023_021da770(Struct_ov009_021842a0* arg0);
#else
extern "C" void func_ov023_021da770(void* arg0);
#endif
#if defined(jpn)
extern "C" void func_ov023_021da9b4(Struct_ov009_021842a0* arg0);
#else
extern "C" void func_ov023_021da9b4(void* arg0);
#endif

// USA: func_ov009_02184bbc
extern "C" ARM void func_ov009_02184bbc(void* arg0) {
    char* var0 = (char*)arg0;
    signed char var1 = *(signed char*)(var0 + R(0xc1c, 0xc58));
    if (var1 == 0 || var1 == 0xc) {
        return;
    }

#if defined(jpn)
    func_ov023_021da274((Struct_ov009_021842a0*)arg0);
#else
    func_ov023_021da274(var0);
#endif
#if defined(jpn)
    func_ov023_021da770((Struct_ov009_021842a0*)arg0);
#else
    func_ov023_021da770(var0);
#endif
#if defined(jpn)
    func_ov023_021da9b4((Struct_ov009_021842a0*)arg0);
#else
    func_ov023_021da9b4(var0);
#endif

    if (*(signed char*)(var0 + R(0xc1c, 0xc58)) != 0xa) {
        ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)(var0 + R(0x1bc, 0x1f8)));
        DrawTextWindows_0205d228((TextWindowManager_0205d228*)(var0 + R(0x1bc, 0x1f8)));
        FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)(var0 + R(0x1bc, 0x1f8)));
    }

    ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)(var0 + R(0x278, 0x2b4)));
    DrawTextWindows_0205d228((TextWindowManager_0205d228*)(var0 + R(0x278, 0x2b4)));
    FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)(var0 + R(0x278, 0x2b4)));
}
