#include <globaldefs.h>

struct Struct_0205d67c;
extern "C" int func_0205d67c(struct Struct_0205d67c*);

struct TextWindowManager_0205d6a0;
extern "C" void CloseTextWindows_0205d6a0(struct TextWindowManager_0205d6a0*, int);

struct BGControlSave_02074bf4;
extern "C" void RestoreSubBGControl_02074bf4(struct BGControlSave_02074bf4*);

struct TextWindowManager_0205cfd4;
extern "C" void InitTextWindowManager_0205cfd4(struct TextWindowManager_0205cfd4*);

// USA: func_ov023_021d8af8
extern "C" ARM void func_ov023_021d8af8(void* arg0) {
    void* var0 = (char*)arg0 + 0x20;
    if (func_0205d67c((struct Struct_0205d67c*)var0)) {
        CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0*)var0, 1);
    }
    *(int*)arg0 = 0;
    int* var1 = (int*)0x4001000;
    *var1 = (*var1 & ~0x1f00) | (*(int*)((char*)arg0 + 0x1c) << 8);
    RestoreSubBGControl_02074bf4((struct BGControlSave_02074bf4*)((char*)arg0 + 8));
    InitTextWindowManager_0205cfd4((struct TextWindowManager_0205cfd4*)var0);
    *(unsigned char*)((char*)arg0 + 0x11a) = 0;
    *(unsigned char*)((char*)arg0 + 0x11b) = 0;
    *(unsigned char*)((char*)arg0 + 0x11c) = 0;
    *(int*)arg0 = 0;
    *(int*)((char*)arg0 + 4) = 0;
}
