#include <globaldefs.h>

struct TextWindowManager_0205d1e0;
extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(struct TextWindowManager_0205d1e0* windowManager);
struct TextWindowManager_0205d228;
extern "C" void DrawTextWindows_0205d228(struct TextWindowManager_0205d228* windowManager);
extern "C" void FillBGUnderTextWindows_0205da88(void* windowManager, int fillBGIndex, int windowBGIndex, int screenEntry);
struct TextWindowManager_0205d274;
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(struct TextWindowManager_0205d274* windowManager);
extern "C" void func_ov003_0215c32c(void* arg0);
extern "C" void func_ov003_0215c464(void* arg0);
struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
struct Struct_020e2794_2;
extern "C" void func_020e2794(struct Struct_020e2794_2* arg0, void* arg1);

// USA: func_ov003_02159078
extern "C" ARM void func_ov003_02159078(void* arg0) {
    char* var0 = (char*)arg0;
    if (*(signed char*)(var0 + 0x588) == 0) return;
    if (*(unsigned char*)(var0 + 0x587) != 0) return;
    ClearTextWindowManagerBGScreenData_0205d1e0((struct TextWindowManager_0205d1e0*)(var0 + 0xf4));
    DrawTextWindows_0205d228((struct TextWindowManager_0205d228*)(var0 + 0xf4));
    FillBGUnderTextWindows_0205da88(var0 + 0xf4, 1, 2, 1);
    FlushTextWindowManagerBGScreenData_0205d274((struct TextWindowManager_0205d274*)(var0 + 0xf4));
    func_ov003_0215c32c(var0);
    func_ov003_0215c464(var0);
    if (*(void**)(var0 + 0x570) == NULL) return;
    if (!func_020e28dc((struct Struct_020e28dc*)*(void**)(var0 + 0x570))) return;
    func_020e2794((struct Struct_020e2794_2*)*(void**)(var0 + 0x570), var0 + 0x98);
}
