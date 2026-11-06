#include <globaldefs.h>
#include "Combat/MapDisplay.h"
#include "Filesystem/BackgroundLoader.h"

struct Struct_020534ac;

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

extern "C" void FlushBGBlock_0204b2e0(void* layer, char* block);

struct BGLayer_02020cb8_6;
extern "C" void CopyBGBlockToVRAM_0204b3a0(struct BGLayer_02020cb8_6* layer, char* block);

struct BGScreenBlock_02020cb8_7;
extern "C" void func_0204acb0(struct BGScreenBlock_02020cb8_7* arg0);
extern "C" void func_0204ad88(void* arg0, void* arg1);
extern "C" int func_0204a5f8(int arg0, int arg1);
typedef void (*Type_02020cb8)(void*, int, int);
extern "C" void func_0204adb4(unsigned char* arg0, Type_02020cb8 arg1, unsigned char* arg2);
extern "C" void func_0204acd0(struct BGScreenBlock_02020cb8_7* arg0);

struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(struct BGLayer_02020cb8_2* layer, void* screenData);

struct BGLayer_02020cb8_3;
extern "C" void ResetBGLayerData_0204afb4(struct BGLayer_02020cb8_3* layer);

// USA: func_02020cb8
extern "C" ARM void func_02020cb8(void* arg0, Type_02020aec arg1) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    void* var1 = 0;
    unsigned int var2 = 0;
    void* var3;
    void* var4[3];
    int var5[3];
    BGLayer_02020cb8 var6;
    unsigned char var7[0x10];

    var0->GetLoadedFileByID(
#if defined(jpn)
        arg1
#else
        *arg1
#endif
, &var1, &var2);
    int var8 = CountPacEntries_02046900((struct PacEntry_02020cb8_4*)var1);
    for (int var9 = 0; var9 < var8; var9++) {
        var4[var9] = GetPacEntryData_020467f0((struct PacEntry_02020aec*)var1, var9, &var3, &var5[var9]);
    }

    InitBGLayer_0204af64((struct BGLayer_02020cb8*)&var6);
    var6.isSubScreen_1c_0_ = 1;
    var6.bgIndex_1c_4_ = 1;
    SetBGPriority_0204b5b4(&var6, 3);
    SetBGScreenSize_0204b11c((unsigned char*)&var6, 0);
    SetBGScroll_0204b5e8((struct BGLayer_02020cb8_5*)&var6, 0, 0);

    var6.unknown_0_ = 0x6000;
    var6.unknown_e_ = 0xfffe;
    unsigned short* var10 = (unsigned short*)((char*)var4[2] + 0x10);
    for (int var11 = 0; var11 < 0x300; var11++) {
        var10[var11] = var10[var11] + 0x300;
    }

    for (int var12 = 0; var12 < 2; var12++) {
        FlushBGBlock_0204b2e0(&var6, (char*)var4[var12]);
        CopyBGBlockToVRAM_0204b3a0((struct BGLayer_02020cb8_6*)&var6, (char*)var4[var12]);
    }

    func_0204acb0((struct BGScreenBlock_02020cb8_7*)var7);
    func_0204ad88(var7, var4[2]);
    Type_02020cb8 var13 = (Type_02020cb8)func_0204a5f8(1, 1);
    func_0204adb4(var7, var13, (unsigned char*)var4[2]);
    func_0204acd0((struct BGScreenBlock_02020cb8_7*)var7);

    LoadBGScreenData_0204b0e8((struct BGLayer_02020cb8_2*)&var6, 0);
    ResetBGLayerData_0204afb4((struct BGLayer_02020cb8_3*)&var6);

    BackgroundLoader* var14 = BackgroundLoader::GetInstance();
    var14->RemoveTask(
#if defined(jpn)
        arg1
#else
        *arg1
#endif
);
#if !defined(jpn)
    *arg1 = -1;
#endif
}
