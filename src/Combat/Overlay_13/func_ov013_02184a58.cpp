#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct TextWindowManager_0205d1e0;
struct TextWindowManager_0205d228;
struct TextWindowManager_0205d274;

extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0*);
extern "C" void DrawTextWindows_0205d228(TextWindowManager_0205d228*);
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274*);
extern "C" void func_0205c96c(void*, int);
extern "C" void FillBGUnderTextWindows_0205da88(void*, int, int, int);

extern "C" void func_ov013_02186cac(void*);
extern "C" void func_ov013_02186db4(void*);

// USA: func_ov013_02184a58
extern "C" ARM void func_ov013_02184a58(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char var1 = var0[R(0x5c8, 0x63c)];
    switch (var1) {
        case 0: case 5: case 6: return;
    }

    switch (var1) {
        case 3: case 4:
            func_0205c96c((void*)(var0 + R(0x3d0, 0x3d4)), 0);
            break;
    }

    ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)(var0 + R(0x34, 0x38)));
    DrawTextWindows_0205d228((TextWindowManager_0205d228*)(var0 + R(0x34, 0x38)));

    if (var0[R(0x5cc, 0x640)]) {
        FillBGUnderTextWindows_0205da88((void*)(var0 + R(0x34, 0x38)), 0, 2, 0);
    } else {
        FillBGUnderTextWindows_0205da88((void*)(var0 + R(0x34, 0x38)), 1, 2, 1);
    }

    FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)(var0 + R(0x34, 0x38)));
    func_ov013_02186cac(arg0);
#if !defined(jpn)
    func_ov013_02186db4(arg0);
#endif
}
