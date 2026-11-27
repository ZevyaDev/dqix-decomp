#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/VRAM.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"

extern "C" int GetScriptValueAsString_ov017_021d612c(void* value);
extern char gDataPathFormat_ov001_02165745[];

extern "C" unsigned int func_ov001_0215a750(const char* arg0, void** arg1);
extern "C" void func_ov001_02162678(int arg0, int arg1, int arg2, int arg3);

struct PacEntry_02020cb8_4;

struct PacEntry_02020aec;

struct BGLayer_02020cb8;



struct BGLayer_02020cb8_5;

extern "C" void WaitForVBlank_020c9820();


struct BGLayer_02020cb8_6;

struct BGLayer_02020cb8_2;

struct BGLayer_02020cb8_3;

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

    sprintf(var7, gDataPathFormat_ov001_02165745, GetScriptValueAsString_ov017_021d612c(arg0));
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
    int var9 = GetNumFilesInPAC((const void*)((struct PacEntry_02020cb8_4*)var4));
    for (int var10 = 0; var10 < var9; var10++) {
        var1[var10] = (char*)GetFileInPACByIndex((void*)((struct PacEntry_02020aec*)var4), var10, (const char**)(&var6), (unsigned int*)(&var2[var10]));
    }
    ReleaseMainBGVRAMBanks();
    MapVRAMBanksToMainBG(0x10);
    DISPCNT = (DISPCNT & ~0x1f00) | 0x800;
    func_ov001_02162678(0, 1, 1, 1);
    ((BGLayer*)((struct BGLayer_02020cb8*)&var3))->Reset();
    var3.unknown_1c_0_ = 0;
    var3.unknown_1c_4_ = 3;
    ((BGLayer*)(&var3))->SetPriority(0);
    ((BGLayer*)((unsigned char*)&var3))->ConfigureTextMode(0);
    ((BGLayer*)((struct BGLayer_02020cb8_5*)&var3))->SetOffset(0, 0);
    WaitForVBlank_020c9820();
    for (int var11 = 0; var11 < var9; var11++) {
        char* var12 = var1[var11];
        ((BGLayer*)(&var3))->ProcessGraphicsFileMetadata((const void*)(var12));
        ((BGLayer*)((struct BGLayer_02020cb8_6*)&var3))->StageGraphicsFileBuffer((const void*)(var12));
    }
    if (var8) {
        BackgroundLoader::RemoveLockGlobal();
    }
    ((BGLayer*)((struct BGLayer_02020cb8_2*)&var3))->CleanCacheAndUploadIndexBuffer((const void*)(0));
    ((BGLayer*)((struct BGLayer_02020cb8_3*)&var3))->MaybeDestroy();
    return 1;
}
