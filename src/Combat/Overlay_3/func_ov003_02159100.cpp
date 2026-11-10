#include <globaldefs.h>

struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(struct TextWindowManager_0205d2bc* windowManager);
extern "C" void SetDisplayWindowInsideLayers_020e2d24(int* displayWindow, int layers, int isEffectEnabled);
struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
struct DisplayWindow_020439b0;
extern "C" void SetDisplayWindowEnabled_020e2cc4(struct DisplayWindow_020439b0* displayWindow, int isEnabled);
struct Struct_020e2834;
extern "C" void func_020e2834(struct Struct_020e2834* arg0);

// USA: func_ov003_02159100
extern "C" ARM void func_ov003_02159100(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    if (*(signed char*)(var0 + 0x588) == 0) return;
    if (*(unsigned char*)(var0 + 0x587) != 0) return;

    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((struct TextWindowManager_0205d2bc*)(var0 + 0xf4));

    if (*(void**)(var0 + 0x570) == NULL) return;

    unsigned char* var1 = *(unsigned char**)((char*)(*(void**)(var0 + 0x570)) + 0x10);
    int var2;
    SetDisplayWindowInsideLayers_020e2d24((int*)(var1 + 0x28), 0x11, 1);
    var2 = func_020e28dc((struct Struct_020e28dc*)*(void**)(var0 + 0x570));
    SetDisplayWindowEnabled_020e2cc4((struct DisplayWindow_020439b0*)(var1 + 0x28), var2);
    func_020e2834((struct Struct_020e2834*)*(void**)(var0 + 0x570));
}
