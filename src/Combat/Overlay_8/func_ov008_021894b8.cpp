#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" int GetFontLoader_02094a00(void);
struct FontLoader_02094ab0;
extern "C" void CancelFontLoad_02094ab0(struct FontLoader_02094ab0* loader);

struct Struct_02074bd0;
extern "C" void func_02074bd0(struct Struct_02074bd0* arg0);

struct TextWindowManager_0205d1e0;
extern "C" void func_0205d1e0(struct TextWindowManager_0205d1e0*);
struct TextWindowManager_0205d274;
extern "C" void func_0205d274(struct TextWindowManager_0205d274*);
struct TextWindowManager_0205d2bc;
extern "C" void func_0205d2bc(struct TextWindowManager_0205d2bc*);
extern "C" void func_0205d048(void*);

extern "C" void DC_FlushRange(const void*, unsigned int);
extern "C" void LoadToMainBG1CharacterData(int, int, unsigned int);

// USA: func_ov008_021894b8
extern "C" ARM void func_ov008_021894b8(unsigned char* arg0) {
    CancelFontLoad_02094ab0((struct FontLoader_02094ab0*)GetFontLoader_02094a00());

    volatile unsigned int* var0 = (volatile unsigned int*)0x4000000;
    *var0 = (*var0 & ~0x1f00) | 0x100;
    *(volatile unsigned short*)((char*)var0 + 0x50) = 0;

    func_02074bd0((struct Struct_02074bd0*)arg0);

    func_0205d1e0((struct TextWindowManager_0205d1e0*)(arg0 + 0x18));
    func_0205d274((struct TextWindowManager_0205d274*)(arg0 + 0x18));
    func_0205d2bc((struct TextWindowManager_0205d2bc*)(arg0 + 0x18));
    func_0205d048((void*)(arg0 + 0x18));

    if (*(void**)(arg0 + 0x2a4) != 0) {
        memset(*(void**)(arg0 + 0x2a4), 0, 0x20);
        DC_FlushRange(*(void**)(arg0 + 0x2a4), 0x20);
        LoadToMainBG1CharacterData((int)*(void**)(arg0 + 0x2a4), 0, 0x20);
    }

    *(int*)(arg0 + 0x2a0) = 0;
    *(int*)(arg0 + 0x2a4) = 0;

    void* var1[4];
    var1[0] = arg0 + 0x200;
    var1[1] = arg0 + 0x214;
    var1[2] = arg0 + 0x228;
    var1[3] = arg0 + 0x23c;

    for (int var2 = 0; var2 < 4; var2++) {
        SafeAllocator* var3 = (SafeAllocator*)var1[var2];
        if (var3->GetSignedAllocator()) {
            var3->Destroy();
        }
    }
}
