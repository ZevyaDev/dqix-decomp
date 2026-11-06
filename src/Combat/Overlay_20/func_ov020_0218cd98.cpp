#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"


extern "C" void WriteBrightnessRegister_020c39a0(short* reg, int brightness);

extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void func_ov020_0218cd64(int, int, int, int, int);
struct BGLayer_02020cb8;
extern "C" void InitBGLayer_0204af64(BGLayer_02020cb8*);
extern "C" void SetBGScreenSize_0204b11c(unsigned char*, int);
extern "C" void SetBGPriority_0204b5b4(void*, int, void*, int);
struct BGLayer_0204b12c;
extern "C" void AllocateBGScreenData_0204b12c(BGLayer_0204b12c*, SafeAllocator*);
struct BGLayer_0204af38;
extern "C" void AllocateBGScreenBlocks_0204af38(BGLayer_0204af38*, int, SafeAllocator*);
struct BGLayer_02020cb8_5;
extern "C" void SetBGScroll_0204b5e8(BGLayer_02020cb8_5*, int, int);
void LoadFileIntoMemory(const char*, void*, unsigned int*);
struct PacEntry_02020cb8_4;
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4*);
struct PacEntry_02020aec;
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec*, int, void**, int*);
extern "C" void LoadBGBlock_0204b174(void*, void*, void*, int);
struct BGLayer_0204b8d0;
extern "C" void CopyBGScreenBlockRect_0204b8d0(BGLayer_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(BGLayer_02020cb8_2*, void*);

extern char data_ov020_0218dcb3;
extern int gFileScratchSpace_0211e33c;

struct Struct_ov020_0218cd98 {
    char unknown_0_[0x470];
    SafeAllocator unknown_470_;
};

// USA: func_ov020_0218cd98
extern "C" ARM void func_ov020_0218cd98(struct Struct_ov020_0218cd98* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
    arg0->unknown_470_.Reset();
    MapVRAMBanksToSubBG(4);
    func_ov020_0218cd64(0, 1, 1, 1, 0);

    InitBGLayer_0204af64((BGLayer_02020cb8*)(var0 + 0xbc + 0x400));
    SetBGScreenSize_0204b11c((unsigned char*)(var0 + 0xbc + 0x400), 0);

    unsigned char* var1 = var0 + 0xbc;
    unsigned char* var2 = var1 + 0x400;
    var2[0x1c] = (var2[0x1c] & ~0xf) | 1;
    int var3 = var2[0x1c] & ~0xf0;
    var2[0x1c] = var3;
    SetBGPriority_0204b5b4(var2, 0, var1, var3);

    AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)(var0 + 0xbc + 0x400), (SafeAllocator*)&arg0->unknown_470_);
    AllocateBGScreenBlocks_0204af38((BGLayer_0204af38*)(var0 + 0xbc + 0x400), 1, (SafeAllocator*)&arg0->unknown_470_);
    SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)(var0 + 0xbc + 0x400), 0, 0);
    BackgroundLoader::AddLockGlobal();

    unsigned int var4 = 0;
    LoadFileIntoMemory((const char*)&data_ov020_0218dcb3, (void*)&gFileScratchSpace_0211e33c, &var4);
    int var5 = CountPacEntries_02046900((PacEntry_02020cb8_4*)&gFileScratchSpace_0211e33c);

    for (int var6 = 0; var6 < var5; var6++) {
        int var7;
        void* var8;
        void* var9 = GetPacEntryData_020467f0((PacEntry_02020aec*)&gFileScratchSpace_0211e33c, var6, &var8, &var7);
        if (var9 != 0) {
            LoadBGBlock_0204b174(var0 + 0xbc + 0x400, var9, &arg0->unknown_470_, var7);
        }
    }

    CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)(var0 + 0xbc + 0x400), 0, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
    LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)(var0 + 0xbc + 0x400), (void*)0);
    BackgroundLoader::RemoveLockGlobal();

    *(volatile unsigned short*)0x4000050 = 0;
    *(volatile unsigned short*)0x4001050 = 0;
    volatile unsigned int* var10 = (volatile unsigned int*)0x4000000;
    *var10 = (*var10 & ~0x1f00) | 0x1300;
    volatile unsigned int* var11 = (volatile unsigned int*)0x4001000;
    *var11 = (*var11 & ~0x1f00) | 0x100;

    WriteBrightnessRegister_020c39a0((short*)0x400006c, -16);
    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
}
