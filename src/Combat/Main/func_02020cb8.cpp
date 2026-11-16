#include <globaldefs.h>
#include "Combat/MapDisplay.h"
#include "Filesystem/BackgroundLoader.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"

struct Struct_020534ac;

struct PacEntry_02020cb8_4;

struct PacEntry_02020aec;

struct BGLayer_02020cb8;



struct BGLayer_02020cb8_5;


struct BGLayer_02020cb8_6;

struct BGScreenBlock_02020cb8_7;
typedef void (*Type_02020cb8)(void*, int, int);

struct BGLayer_02020cb8_2;

struct BGLayer_02020cb8_3;

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
    int var8 = GetNumFilesInPAC((const void*)((struct PacEntry_02020cb8_4*)var1));
    for (int var9 = 0; var9 < var8; var9++) {
        var4[var9] = GetFileInPACByIndex((void*)((struct PacEntry_02020aec*)var1), var9, (const char**)(&var3), (unsigned int*)(&var5[var9]));
    }

    ((BGLayer*)((struct BGLayer_02020cb8*)&var6))->Reset();
    var6.isSubScreen_1c_0_ = 1;
    var6.bgIndex_1c_4_ = 1;
    ((BGLayer*)(&var6))->SetPriority(3);
    ((BGLayer*)((unsigned char*)&var6))->ConfigureTextMode(0);
    ((BGLayer*)((struct BGLayer_02020cb8_5*)&var6))->SetOffset(0, 0);

    var6.unknown_0_ = 0x6000;
    var6.unknown_e_ = 0xfffe;
    unsigned short* var10 = (unsigned short*)((char*)var4[2] + 0x10);
    for (int var11 = 0; var11 < 0x300; var11++) {
        var10[var11] = var10[var11] + 0x300;
    }

    for (int var12 = 0; var12 < 2; var12++) {
        ((BGLayer*)(&var6))->ProcessGraphicsFileMetadata((const void*)((char*)var4[var12]));
        ((BGLayer*)((struct BGLayer_02020cb8_6*)&var6))->StageGraphicsFileBuffer((const void*)((char*)var4[var12]));
    }

    ((BGLayer::Sprite*)((struct BGScreenBlock_02020cb8_7*)var7))->Reset();
    ((BGLayer::Sprite*)(var7))->GetLengthAndClearCache((const void*)(var4[2]));
    Type_02020cb8 var13 = (Type_02020cb8)((int)GetScreenVRAMLoadProc(1, 1));
    ((BGLayer::Sprite*)(var7))->StageBNSC((void (*)(const void*, unsigned int, unsigned int))(var13), (const void*)((unsigned char*)var4[2]));
    ((BGLayer::Sprite*)((struct BGScreenBlock_02020cb8_7*)var7))->MaybeDestroy();

    ((BGLayer*)((struct BGLayer_02020cb8_2*)&var6))->CleanCacheAndUploadIndexBuffer((const void*)(0));
    ((BGLayer*)((struct BGLayer_02020cb8_3*)&var6))->MaybeDestroy();

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
