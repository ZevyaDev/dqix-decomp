#pragma opt_vectorize_loops off
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"
#include "Filesystem/FileIO.h"


extern "C" void WriteBrightnessRegister_020c39a0(short* reg, int brightness);

extern "C" void MapVRAMBanksToMainBG(int);
extern "C" void func_ov020_0218c7bc(int, int, int, int, int);
struct BGLayer_02020cb8;
struct BGLayer_0204b12c;
struct BGLayer_0204af38;
struct BGLayer_02020cb8_5;
extern "C" int DisableSubObjVRAMBanks();
extern "C" int DisableSubBGVRAMBanks();
extern "C" void SetSubBGMode_020c3984(unsigned int);
extern "C" void MapVRAMBanksToSubObj(unsigned short value);
extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void func_ov020_0218cd64(int, int, int, int, int);
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct BGLayer_02020cb8_6;
struct BGLayer_02020cb8_2;
struct BGLayer_02020cb8_3;
extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, unsigned char c, int d);

extern char data_ov020_0218dce2;
extern char data_ov020_0218dcf8;

struct Struct_ov020_0218d32c {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_[3];
};

struct Struct_ov020_0218d32c_2 {
#if defined(jpn)
    char unknown_0_[0x400];
#else
    char unknown1_0_[0x470];
#endif

    SafeAllocator unknown_470_;
};

// USA: func_ov020_0218d32c
extern "C" ARM void func_ov020_0218d32c(struct Struct_ov020_0218d32c_2* arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov020_0218d32c_156=0x2c};
#else
 enum {Enum_ov020_0218d32c_156=0x9c};
#endif
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned int var1;
    void* var2;
    char* volatile var3[3];
    int var4[3];
    unsigned char var5[0x20];

    arg0->unknown_470_.Reset();
    WriteBrightnessRegister_020c39a0((short*)0x400006c, -16);
    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
    MapVRAMBanksToMainBG(8);
    func_ov020_0218c7bc(0, 1, 1, 1, 0);

    ((BGLayer*)((BGLayer_02020cb8*)(var0 + Enum_ov020_0218d32c_156 + 0x400)))->Reset();
    ((BGLayer*)((unsigned char*)(var0 + Enum_ov020_0218d32c_156 + 0x400)))->ConfigureTextMode(0);
    struct Struct_ov020_0218d32c* var6 = (struct Struct_ov020_0218d32c*)(var0 + Enum_ov020_0218d32c_156 + 0x400);
    var6->unknown_1c_0_ = 0;
    var6->unknown_1c_4_ = 1;
    ((BGLayer*)(var6))->SetPriority(1);
    ((BGLayer*)((BGLayer_0204b12c*)(var0 + Enum_ov020_0218d32c_156 + 0x400)))->AllocateIndexBuffer((SafeAllocator*)((SafeAllocator*)&arg0->unknown_470_));
    ((BGLayer*)((BGLayer_0204af38*)(var0 + Enum_ov020_0218d32c_156 + 0x400)))->AllocateSprites(1, (SafeAllocator*)((SafeAllocator*)&arg0->unknown_470_));
    ((BGLayer*)((BGLayer_02020cb8_5*)(var0 + Enum_ov020_0218d32c_156 + 0x400)))->SetOffset(0, 0);

    DisableSubObjVRAMBanks();
    DisableSubBGVRAMBanks();
    SetSubBGMode_020c3984(0);

    *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x100;
    MapVRAMBanksToSubObj(0x100);

    *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & 0xffcfffef) | 0x10;
    MapVRAMBanksToSubBG(0x80);

    func_ov020_0218cd64(0, 0, 0xe, 0, 0);
    func_ov020_0218cd64(0, 0, 0xf, 0, 0);

    volatile unsigned short* var8 = (volatile unsigned short*)0x4001008;
    var8[0] = (var8[0] & ~3) | 1;
    var8[1] = (var8[1] & ~3) | 2;
    var8[2] = var8[2] & ~3;
    var8[3] = (var8[3] & ~3) | 3;

    BackgroundLoader::AddLockGlobal();

    if (arg1 == 1) {
        LoadFileIntoMemory((const char*)&data_ov020_0218dce2, (void*)&g_fileScratchSpace, &var1);
    } else {
        LoadFileIntoMemory((const char*)&data_ov020_0218dcf8, (void*)&g_fileScratchSpace, &var1);
    }

    int var9 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)&g_fileScratchSpace));

    for (int var10 = 0; var10 < var9; var10++) {
        var3[var10] = (char*)GetFileInPACByIndex((void*)((PacEntry_02020aec*)&g_fileScratchSpace), var10, (const char**)(&var2), (unsigned int*)(&var4[var10]));
    }

    ((BGLayer*)((BGLayer_02020cb8*)var5))->Reset();
    var5[0x1c] = (var5[0x1c] & ~0xf) | 1;
    var5[0x1c] = var5[0x1c] & ~0xf0;
    ((BGLayer*)(var5))->SetPriority(3);
    ((BGLayer*)((unsigned char*)var5))->ConfigureTextMode(0);
    ((BGLayer*)((BGLayer_02020cb8_5*)var5))->SetOffset(0, 0);

    for (int var11 = 0; var11 < 3; var11++) {
        ((BGLayer*)(var5))->ProcessGraphicsFileMetadata((const void*)(var3[var11]));
        ((BGLayer*)((BGLayer_02020cb8_6*)var5))->StageGraphicsFileBuffer((const void*)(var3[var11]));
    }

    ((BGLayer*)((BGLayer_02020cb8_2*)var5))->CleanCacheAndUploadIndexBuffer((const void*)((void*)0));
    ((BGLayer*)((BGLayer_02020cb8_3*)var5))->MaybeDestroy();
    BackgroundLoader::RemoveLockGlobal();

    *(volatile unsigned short*)0x4000050 = 0;
    *(volatile unsigned short*)0x4001050 = 0;
    ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050, 1, 2, 0xf, 0x1f);

    volatile unsigned int* var12 = (volatile unsigned int*)0x4000000;
    *var12 = (*var12 & ~0x1f00) | 0x1300;

    WriteBrightnessRegister_020c39a0((short*)0x400006c, -16);
    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
}
