#include <globaldefs.h>
#include "Graphics/SPRSprite.h"


extern int GetFileFromNARCInMemory(const char* filename);

extern int data_020ef7c4;

struct Struct_0202f310 { char unknown_0_[0x28]; };

// USA: func_0202f310
extern "C" ARM void func_0202f310(char* arg0, void* arg1, void* arg2) {
    struct Struct_0202f310 var0;
    char* var1;
    int var2;
    var1 = arg0;
    for (var2 = 0; var2 < 8; var2++) {
        int var3;
        sprintf((char*)(&var0), (const char*)(&data_020ef7c4), var2);
        var3 = GetFileFromNARCInMemory((const char*)&var0);
        ((SPRSprite*)(var1))->Reset();
        ((SPRSprite*)(var1))->LoadFromSPR((const void*)(var3), (SafeAllocator*)(arg1));
        var1 += 0x88;
    }
}
