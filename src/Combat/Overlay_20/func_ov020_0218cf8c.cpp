#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"


extern "C" void WriteBrightnessRegister_020c39a0(short* reg, int brightness);

extern "C" void MapVRAMBanksToMainBG(int);
extern "C" void func_ov020_0218c7bc(int, int, int, int, int);
struct BGLayer_02020cb8;
extern "C" void InitBGLayer_0204af64(BGLayer_02020cb8*);
extern "C" void SetBGScreenSize_0204b11c(unsigned char*, int);
extern "C" void SetBGPriority_0204b5b4(void*, int);
struct BGLayer_0204b12c;
extern "C" void AllocateBGScreenData_0204b12c(BGLayer_0204b12c*, SafeAllocator*);
struct BGLayer_0204af38;
extern "C" void AllocateBGScreenBlocks_0204af38(BGLayer_0204af38*, int, SafeAllocator*);
struct BGLayer_02020cb8_5;
extern "C" void SetBGScroll_0204b5e8(BGLayer_02020cb8_5*, int, int);
extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void func_ov020_0218cd64(int, int, int, int, int);
struct PacEntry_02020cb8_4;
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4*);
struct PacEntry_02020aec;
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec*, int, void**, int*);
extern "C" void LoadBGBlock_0204b174(void*, void*, void*, int);
struct BGLayer_0204b8d0;
extern "C" void CopyBGScreenBlockRect_0204b8d0(BGLayer_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(BGLayer_02020cb8_2*, void*);

extern char data_ov020_0218dcca;

struct Struct_ov020_0218d944 { unsigned int unknown_0_, unknown_4_, unknown_8_; };
extern Struct_ov020_0218d944 data_ov020_0218d950;
extern Struct_ov020_0218d944 data_ov020_0218d944;

struct Struct_ov020_0218cf8c {
#if defined(jpn)
    char unknown_0_[0x400];
#else
    char unknown1_0_[0x470];
#endif

    SafeAllocator unknown_470_;
};

// USA: func_ov020_0218cf8c
extern "C" ARM void func_ov020_0218cf8c(struct Struct_ov020_0218cf8c* arg0) {
#if defined(jpn)
 enum {Enum_ov020_0218cf8c_156=0x2c, Enum_ov020_0218cf8c_1208=0x448, Enum_ov020_0218cf8c_1240=0x468, Enum_ov020_0218cf8c_188=0x4c};
#else
 enum {Enum_ov020_0218cf8c_156=0x9c, Enum_ov020_0218cf8c_1208=0x4b8, Enum_ov020_0218cf8c_1240=0x4d8, Enum_ov020_0218cf8c_188=0xbc};
#endif
    unsigned char* var0 = (unsigned char*)arg0;

    arg0->unknown_470_.Reset();
    MapVRAMBanksToMainBG(8);
    func_ov020_0218c7bc(0, 0, 0x1f, 2, 0);

    InitBGLayer_0204af64((BGLayer_02020cb8*)(var0 + Enum_ov020_0218cf8c_156 + 0x400));
    SetBGScreenSize_0204b11c((unsigned char*)(var0 + Enum_ov020_0218cf8c_156 + 0x400), 0);
    var0[Enum_ov020_0218cf8c_1208] = var0[Enum_ov020_0218cf8c_1208] & ~0xf;
    var0[Enum_ov020_0218cf8c_1208] = (var0[Enum_ov020_0218cf8c_1208] & ~0xf0) | 0x10;
    SetBGPriority_0204b5b4(var0 + Enum_ov020_0218cf8c_156 + 0x400, 0);
    AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)(var0 + Enum_ov020_0218cf8c_156 + 0x400), (SafeAllocator*)&arg0->unknown_470_);
    AllocateBGScreenBlocks_0204af38((BGLayer_0204af38*)(var0 + Enum_ov020_0218cf8c_156 + 0x400), 1, (SafeAllocator*)&arg0->unknown_470_);
    SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)(var0 + Enum_ov020_0218cf8c_156 + 0x400), 0, 0);

    MapVRAMBanksToSubBG(4);
    func_ov020_0218cd64(0, 0, 1, 1, 0);

    InitBGLayer_0204af64((BGLayer_02020cb8*)(var0 + Enum_ov020_0218cf8c_188 + 0x400));
    SetBGScreenSize_0204b11c((unsigned char*)(var0 + Enum_ov020_0218cf8c_188 + 0x400), 0);
    var0[Enum_ov020_0218cf8c_1240] = (var0[Enum_ov020_0218cf8c_1240] & ~0xf) | 1;
    var0[Enum_ov020_0218cf8c_1240] = var0[Enum_ov020_0218cf8c_1240] & ~0xf0;
    SetBGPriority_0204b5b4(var0 + Enum_ov020_0218cf8c_188 + 0x400, 0);
    AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)(var0 + Enum_ov020_0218cf8c_188 + 0x400), (SafeAllocator*)&arg0->unknown_470_);
    AllocateBGScreenBlocks_0204af38((BGLayer_0204af38*)(var0 + Enum_ov020_0218cf8c_188 + 0x400), 1, (SafeAllocator*)&arg0->unknown_470_);
    SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)(var0 + Enum_ov020_0218cf8c_188 + 0x400), 0, 0);

    int var1;
    void* var2 = BackgroundLoader::GetInstance();
    ((BackgroundLoader*)var2)->MaybeReset();
    var1 = ((BackgroundLoader*)var2)->QueueLoadFile(&data_ov020_0218dcca, (SafeAllocator*)0);

  retryLoop:
    if (((BackgroundLoader*)var2)->GetTaskStatus(var1) == 0) goto waitForLoad;

    void* var3;
    void* var4;
    unsigned int var5;
    ((BackgroundLoader*)var2)->GetLoadedFileByID(var1, &var4, &var5);
    int var6 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var4);

    void* var7[6];
    int var8[6];
    for (int var9 = 0; var9 < var6; var9++) {
        var7[var9] = GetPacEntryData_020467f0((PacEntry_02020aec*)var4, var9, &var3, &var8[var9]);
    }

    Struct_ov020_0218d944 var10 = data_ov020_0218d950;
    Struct_ov020_0218d944 var11 = data_ov020_0218d944;

    int var12 = 0;
    int var13 = 0;

    for (int var14 = 0; var14 < var6; var14++) {
        if (var14 == (&var10.unknown_0_)[var12]) {
            LoadBGBlock_0204b174(var0 + Enum_ov020_0218cf8c_156 + 0x400, var7[var14], &arg0->unknown_470_, var8[var14]);
            var12++;
        }
        if (var14 == (&var11.unknown_0_)[var13]) {
            LoadBGBlock_0204b174(var0 + Enum_ov020_0218cf8c_188 + 0x400, var7[var14], &arg0->unknown_470_, var8[var14]);
            var13++;
        }
    }

    ((BackgroundLoader*)var2)->RemoveTask(var1);

    CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)(var0 + Enum_ov020_0218cf8c_156 + 0x400), 0, 0, 0, 0, 0, 0x20, 0x19, 0);
    CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)(var0 + Enum_ov020_0218cf8c_188 + 0x400), 0, 0, 0, 0, 0, 0x20, 0x19, 0);
    LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)(var0 + Enum_ov020_0218cf8c_156 + 0x400), (void*)0);
    LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)(var0 + Enum_ov020_0218cf8c_188 + 0x400), (void*)0);
    goto afterLoop;
  waitForLoad:
    ((BackgroundLoader*)var2)->RemoveAllLocks();
    goto retryLoop;
  afterLoop:

    *(volatile unsigned short*)0x4000050 = 0;
    *(volatile unsigned short*)0x4001050 = 0;
    volatile unsigned int* var15 = (volatile unsigned int*)0x4000000;
    *var15 = (*var15 & ~0x1f00) | 0x200;
    volatile unsigned int* var16 = (volatile unsigned int*)0x4001000;
    *var16 = (*var16 & ~0x1f00) | 0x100;

    WriteBrightnessRegister_020c39a0((short*)0x400006c, -16);
    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
}
