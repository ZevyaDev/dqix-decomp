#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/Graphics2D/Character.h"
#include "NitroSDK/Graphics2D/Palette.h"
#include "Resource/PAC.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif


extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
struct Struct_0205ab78;
extern "C" void func_020c9be0(void);

extern AllocatorUnion gMainHeap_02114e20;
extern const char data_020f290c;
extern const char data_020f2925;
extern const char data_020f2936;

struct Struct_020db0f0 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
    void* unknown_14_;
};

struct Struct_020db0f0_2 {
    char unknown_0_[0xc];
    void* unknown_c_;
};

struct Struct_02000c9c_18 {
    SafeAllocator unknown_0_;
    char unknown_14_[0x40 - sizeof(SafeAllocator)];
    void* unknown_40_;
    unsigned int unknown_44_;
    void* unknown_48_;
    unsigned int unknown_4c_;
};

// USA: func_020db0f0
extern "C" ARM void func_020db0f0(Struct_02000c9c_18* arg0) {
    unsigned int var0;
    unsigned int var1;
    unsigned int var2;
    char* var3;
    Struct_0205ab78* var4;
    Struct_020db0f0* var5;
    Struct_020db0f0_2* var6;
    void* var7;

    arg0->unknown_0_.CreateTypeA(AllocateRoundedSize_02012d88(&gMainHeap_02114e20, 0x300), 0x300);
    arg0->unknown_0_.Reset();
    BackgroundLoader::AddLockGlobal();

    var7 = g_fileScratchSpace;

    var0 = 0;
    LoadFileIntoMemory(&data_020f290c, var7, &var0);

    var1 = 0;
    var2 = 0;
    var3 = (char*)(GetFileInPAC((void*)(var7), (const char*)((char*)&data_020f2925), (unsigned int*)(&var1)));
    var4 = (Struct_0205ab78*)GetFileInPAC((void*)(var7), (const char*)((char*)&data_020f2936), (unsigned int*)(&var2));

    var5 = NULL;
    if (!((int)Nitro2D_GetCharacter((void*)(var3), (Nitro2DCharacter**)((void**)&var5)))) {
        func_020c9be0();
    }

    arg0->unknown_44_ = var5->unknown_10_;
    arg0->unknown_40_ = arg0->unknown_0_.Allocate(arg0->unknown_44_);
    VectorizedInvertedMemcpy(var5->unknown_14_, arg0->unknown_40_, arg0->unknown_44_);

    var6 = NULL;
    if (!((int)Nitro2D_GetPalette((void*)(var4), (Nitro2DPalette**)((void**)&var6)))) {
        func_020c9be0();
    }

    arg0->unknown_4c_ = 0x20;
    arg0->unknown_48_ = arg0->unknown_0_.Allocate(arg0->unknown_4c_);
    VectorizedInvertedMemcpy(var6->unknown_c_, arg0->unknown_48_, arg0->unknown_4c_);

    BackgroundLoader::RemoveLockGlobal();
}
