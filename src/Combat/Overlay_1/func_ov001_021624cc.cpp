#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/VRAM.h"

extern "C" int GetScriptValueAsString_ov017_021d612c(void* value);
extern char data_ov001_02165745[];

extern "C" unsigned int func_ov001_0215a750(const char* arg0, void** arg1);
extern "C" void func_ov001_02162678(int arg0, int arg1, int arg2, int arg3);

struct PacEntry_02020cb8_4;
extern "C" int CountPacEntries_02046900(struct PacEntry_02020cb8_4* pac);

struct PacEntry_02020aec;
extern "C" void* GetPacEntryData_020467f0(struct PacEntry_02020aec* pac, int index, void** outEntry, int* outSize);

struct BGLayer_02020cb8;
extern "C" void InitBGLayer_0204af64(struct BGLayer_02020cb8* layer);

extern "C" void SetBGScreenSize_0204b11c(unsigned char* layer, int screenSize);

extern "C" void SetBGPriority_0204b5b4(void*, int);

struct BGLayer_02020cb8_5;
extern "C" int SetBGScroll_0204b5e8(struct BGLayer_02020cb8_5* layer, int scrollX, int scrollY);

extern "C" void WaitForVBlank_020c9820();

extern "C" void FlushBGBlock_0204b2e0(void* layer, char* block);

struct BGLayer_02020cb8_6;
extern "C" void CopyBGBlockToVRAM_0204b3a0(struct BGLayer_02020cb8_6* layer, char* block);

struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(struct BGLayer_02020cb8_2* layer, void* screenData);

struct BGLayer_02020cb8_3;
extern "C" void ResetBGLayerData_0204afb4(struct BGLayer_02020cb8_3* layer);

struct Struct_ov001_021624cc {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_[3];
};

// USA: func_ov001_021624cc
extern "C" ARM int func_ov001_021624cc(void* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    char* var1[3];
    int var2[3];
    Struct_ov001_021624cc var3;
    void* var4;
    unsigned int var5;
    void* var6;
    char var7[0x50];

    sprintf(var7, data_ov001_02165745, GetScriptValueAsString_ov017_021d612c(arg0));
    int var8 = 0;
    var4 = NULL;
    var5 = 0;
    var0->GetLoadedFileByName(var7, &var4, &var5);
    if (var4 == NULL) {
        BackgroundLoader::AddLockGlobal();
        var8 = 1;
        if (func_ov001_0215a750(var7, &var4) == 0) {
            BackgroundLoader::RemoveLockGlobal();
            return 0;
        }
    }
    int var9 = CountPacEntries_02046900((struct PacEntry_02020cb8_4*)var4);
    for (int var10 = 0; var10 < var9; var10++) {
        var1[var10] = (char*)GetPacEntryData_020467f0((struct PacEntry_02020aec*)var4, var10, &var6, &var2[var10]);
    }
    ReleaseMainBGVRAMBanks();
    MapVRAMBanksToMainBG(0x10);
    DISPCNT = (DISPCNT & ~0x1f00) | 0x800;
    func_ov001_02162678(0, 1, 1, 1);
    InitBGLayer_0204af64((struct BGLayer_02020cb8*)&var3);
    var3.unknown_1c_0_ = 0;
    var3.unknown_1c_4_ = 3;
    SetBGPriority_0204b5b4(&var3, 0);
    SetBGScreenSize_0204b11c((unsigned char*)&var3, 0);
    SetBGScroll_0204b5e8((struct BGLayer_02020cb8_5*)&var3, 0, 0);
    WaitForVBlank_020c9820();
    for (int var11 = 0; var11 < var9; var11++) {
        char* var12 = var1[var11];
        FlushBGBlock_0204b2e0(&var3, var12);
        CopyBGBlockToVRAM_0204b3a0((struct BGLayer_02020cb8_6*)&var3, var12);
    }
    if (var8) {
        BackgroundLoader::RemoveLockGlobal();
    }
    LoadBGScreenData_0204b0e8((struct BGLayer_02020cb8_2*)&var3, 0);
    ResetBGLayerData_0204afb4((struct BGLayer_02020cb8_3*)&var3);
    return 1;
}
