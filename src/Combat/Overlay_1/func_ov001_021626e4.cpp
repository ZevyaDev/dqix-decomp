#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/VRAM.h"

struct Struct_ov001_021626e4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[3];
};

extern "C" int func_ov017_021d612c(void* arg0);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" unsigned int func_ov001_0215a750(const char* arg0, void** arg1);
struct PacEntry_02020cb8_4;
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4*);
struct PacEntry_02020aec;
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec*, int, void**, int*);
extern "C" void func_ov001_02162678(int arg0, int arg1, int arg2, int arg3);
extern "C" void SetSubBGMode_020c3984(unsigned int bgMode);
extern "C" void func_ov001_021628d4(int arg0, int arg1, int arg2, int arg3);
struct BGLayer_02020cb8;
extern "C" void InitBGLayer_0204af64(BGLayer_02020cb8*);
extern "C" void SetBGPriority_0204b5b4(Struct_ov001_021626e4* layer, int priority);
extern "C" void SetBGScreenSize_0204b11c(unsigned char*, int);
struct BGLayer_02020cb8_5;
extern "C" void SetBGScroll_0204b5e8(BGLayer_02020cb8_5*, int, int);
extern "C" void WaitForVBlank_020c9820();
extern "C" void FlushBGBlock_0204b2e0(void*, char*);
struct BGLayer_02020cb8_6;
extern "C" void CopyBGBlockToVRAM_0204b3a0(BGLayer_02020cb8_6*, char*);
struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(BGLayer_02020cb8_2*, void*);
struct BGLayer_02020cb8_3;
extern "C" void ResetBGLayerData_0204afb4(BGLayer_02020cb8_3*);

extern char data_ov001_02165745[];

// USA: func_ov001_021626e4
extern "C" ARM int func_ov001_021626e4(void* arg0) {
    char var0[0x50];
    void* var1[3];
    int var2[3];
    Struct_ov001_021626e4 var3;
    void* var4;
    unsigned int var5;
    void* var6;
    BackgroundLoader* var7;
    int var8;
    int var9;
    int var10;
    int var11;

    var7 = BackgroundLoader::GetInstance();
    var8 = func_ov017_021d612c(arg0);
    var11 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 8);
    sprintf(var0, data_ov001_02165745, var8);

    var9 = 0;
    var4 = NULL;
    var5 = 0;
    var7->GetLoadedFileByName(var0, &var4, &var5);
    if (var4 == NULL) {
        BackgroundLoader::AddLockGlobal();
        var9 = 1;
        if (func_ov001_0215a750(var0, &var4) == 0) {
            BackgroundLoader::RemoveLockGlobal();
            return 0;
        }
    }

    var10 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var4);
    for (int var12 = 0; var12 < var10; var12++) {
        var1[var12] = GetPacEntryData_020467f0((PacEntry_02020aec*)var4, var12, &var6, &var2[var12]);
    }

    DISPCNT = (DISPCNT & ~0x1f00) | 0x800;
    if (var11 == 0) {
        func_ov001_02162678(0, 0, 1, 1);
    } else {
        DisableSubBGVRAMBanks();
        SetSubBGMode_020c3984(0);
        MapVRAMBanksToSubBG(VRAM_BANK_H);
        func_ov001_021628d4(0, 0, 0xe, 0);
    }

    InitBGLayer_0204af64((BGLayer_02020cb8*)&var3);
    var3.unknown_1c_0_ = var11;
    var3.unknown_1c_4_ = 3;
    SetBGPriority_0204b5b4(&var3, 0);
    SetBGScreenSize_0204b11c((unsigned char*)&var3, 0);
    SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)&var3, 0, 0);
    WaitForVBlank_020c9820();
    for (int var13 = 0; var13 < var10; var13++) {
        FlushBGBlock_0204b2e0(&var3, (char*)var1[var13]);
        CopyBGBlockToVRAM_0204b3a0((BGLayer_02020cb8_6*)&var3, (char*)var1[var13]);
    }
    LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&var3, NULL);
    ResetBGLayerData_0204afb4((BGLayer_02020cb8_3*)&var3);

    if (var9) {
        BackgroundLoader::RemoveLockGlobal();
    }
    return 1;
}
