#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/StringList.h"


struct Struct_020534ac;


struct Struct_ov000_0216fd80 {
    int unknown_0_;
    char unknown_4_[0x84 - 0x4];
    int unknown_84_;
    char unknown_88_[0xa1 - 0x88];
    unsigned char unknown_a1_;
};

// USA: func_ov000_0216fd80
extern "C" ARM void func_ov000_0216fd80(struct Struct_ov000_0216fd80* arg0, int arg1) {
    int var0 = (int)BackgroundLoader::GetInstance();
    int var1, var2;
    ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(arg0->unknown_0_), (void**)(&var1), (unsigned int*)(&var2));
    ((StringList*)((char*)arg0 + 0x88))->LoadSubsetFromMemory((SafeAllocator*)(arg1), (void*)(var1), var2, (const short*)(&arg0->unknown_4_), (unsigned short)arg0->unknown_84_);
    ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_0_));
    arg0->unknown_0_ = -1;
    arg0->unknown_a1_ = 1;
}
