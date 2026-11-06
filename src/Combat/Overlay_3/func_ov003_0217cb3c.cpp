#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"

struct BGLayer_02020cb8;
extern "C" void InitBGLayer_0204af64(BGLayer_02020cb8* layer);
extern "C" void SetBGPriority_0204b5b4(void* layer, int priority);
extern "C" void SetBGScreenSize_0204b11c(unsigned char* layer, int screenSize);
struct BGLayer_02020cb8_5;
extern "C" void SetBGScroll_0204b5e8(BGLayer_02020cb8_5* layer, int scrollX, int scrollY);
struct BGLayer_0204b12c;
extern "C" void AllocateBGScreenData_0204b12c(BGLayer_0204b12c* layer, SafeAllocator* allocator);
struct BGLayer_0204af38;
extern "C" void AllocateBGScreenBlocks_0204af38(BGLayer_0204af38* layer, int capacity, SafeAllocator* allocator);
struct PacEntry_02020cb8_4;
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4* pac);
struct PacEntry_02020aec;
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec* pac, int index, void** outEntry, int* outSize);
extern "C" void LoadBGBlock_0204b174(void* layer, void* block, SafeAllocator* allocator, unsigned int arg3);
struct BGLayer_0204b8d0;
extern "C" void CopyBGScreenBlockRect_0204b8d0(BGLayer_0204b8d0* layer, unsigned int screenBlockIndex, int srcX, int srcY, short destX, short destY, short width, short height, unsigned short palette);
struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(BGLayer_02020cb8_2* layer, void* screenData);

struct Struct_ov003_0217cb3c {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[3];
};

struct Struct_ov003_0217cb3c_2 {
    char unknown_0_[0x18];
    SafeAllocator unknown_18_;
    SafeAllocator unknown_2c_;
    Struct_ov003_0217cb3c unknown_40_;
    Struct_ov003_0217cb3c unknown_60_;
    char unknown_80_[0xb4];
    int unknown_134_[2];
};

// USA: func_ov003_0217cb3c
extern "C" ARM void func_ov003_0217cb3c(Struct_ov003_0217cb3c_2* arg0, int arg1, int arg2) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    Struct_ov003_0217cb3c* var1;
    SafeAllocator* var2;

    if (arg1 != 0) {
        BG1CNT = (BG1CNT & 0x43) | 0xf00;
        var1 = &arg0->unknown_60_;
        DISPCNT = (DISPCNT & ~0x1f00) | 0x300;
        var2 = &arg0->unknown_2c_;
        InitBGLayer_0204af64((BGLayer_02020cb8*)var1);
        var1->unknown_1c_0_ = 0;
        var1->unknown_1c_4_ = 1;
        SetBGPriority_0204b5b4(var1, 1);
    } else {
        BG0CNTSUB = (BG0CNTSUB & 0x43) | 0xf00;
        var1 = &arg0->unknown_40_;
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x100;
        var2 = &arg0->unknown_18_;
        InitBGLayer_0204af64((BGLayer_02020cb8*)var1);
        var1->unknown_1c_0_ = 1;
        var1->unknown_1c_4_ = 0;
        SetBGPriority_0204b5b4(var1, 0);
    }

    var2->Reset();

    int var3;
    if (arg2 != 0) {
        var3 = arg0->unknown_134_[1];
    } else {
        var3 = arg0->unknown_134_[0];
    }

    SetBGScreenSize_0204b11c((unsigned char*)var1, 0);
    SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)var1, 0, 0);
    AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)var1, var2);
    AllocateBGScreenBlocks_0204af38((BGLayer_0204af38*)var1, 1, var2);

    void* var4;
    void* var5;
    unsigned int var6;
    var0->GetLoadedFileByID(var3, &var5, &var6);
    int var7 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var5);
    for (int var8 = 0; var8 < var7; var8++) {
        unsigned int var9;
        void* var10 = GetPacEntryData_020467f0((PacEntry_02020aec*)var5, var8, &var4, (int*)&var9);
        if (var10 != NULL) {
            LoadBGBlock_0204b174(var1, var10, var2, var9);
        }
    }

    CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)var1, 0, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
    LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)var1, NULL);
}
