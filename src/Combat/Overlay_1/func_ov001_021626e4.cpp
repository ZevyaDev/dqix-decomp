#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/VRAM.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"

struct Struct_ov001_021626e4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[3];
};

extern "C" int GetScriptValueAsString_ov017_021d612c(void* value);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" unsigned int func_ov001_0215a750(const char* arg0, void** arg1);
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
extern "C" void func_ov001_02162678(int arg0, int arg1, int arg2, int arg3);
extern "C" void SetSubBGMode_020c3984(unsigned int bgMode);
extern "C" void func_ov001_021628d4(int arg0, int arg1, int arg2, int arg3);
struct BGLayer_02020cb8;
struct BGLayer_02020cb8_5;
extern "C" void WaitForVBlank_020c9820();
struct BGLayer_02020cb8_6;
struct BGLayer_02020cb8_2;
struct BGLayer_02020cb8_3;

extern char gDataPathFormat_ov001_02165745[];

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
    var8 = GetScriptValueAsString_ov017_021d612c(arg0);
    var11 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 8);
    sprintf(var0, gDataPathFormat_ov001_02165745, var8);

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

    var10 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var4));
    for (int var12 = 0; var12 < var10; var12++) {
        var1[var12] = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var4), var12, (const char**)(&var6), (unsigned int*)(&var2[var12]));
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

    ((BGLayer*)((BGLayer_02020cb8*)&var3))->Reset();
    var3.unknown_1c_0_ = var11;
    var3.unknown_1c_4_ = 3;
    ((BGLayer*)(&var3))->SetPriority(0);
    ((BGLayer*)((unsigned char*)&var3))->ConfigureTextMode(0);
    ((BGLayer*)((BGLayer_02020cb8_5*)&var3))->SetOffset(0, 0);
    WaitForVBlank_020c9820();
    for (int var13 = 0; var13 < var10; var13++) {
        ((BGLayer*)(&var3))->ProcessGraphicsFileMetadata((const void*)((char*)var1[var13]));
        ((BGLayer*)((BGLayer_02020cb8_6*)&var3))->StageGraphicsFileBuffer((const void*)((char*)var1[var13]));
    }
    ((BGLayer*)((BGLayer_02020cb8_2*)&var3))->CleanCacheAndUploadIndexBuffer((const void*)(NULL));
    ((BGLayer*)((BGLayer_02020cb8_3*)&var3))->MaybeDestroy();

    if (var9) {
        BackgroundLoader::RemoveLockGlobal();
    }
    return 1;
}
