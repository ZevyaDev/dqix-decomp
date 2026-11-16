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

struct BGLayer_02020cb8_2;

struct BGLayer_02020cb8_3;

// USA: func_02020e58
extern "C" ARM void func_02020e58(void* arg0, Type_02020aec arg1) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    void* var1 = 0;
    unsigned int var2 = 0;
    int var3 = var0->GetTaskStatus(
#if defined(jpn)
        arg1
#else
        *arg1
#endif
);
    if (var3 == -1) {
        *(unsigned int*)0x04001000 = (*(unsigned int*)0x04001000 & ~0x1f00) | 0x200;
        ((Struct_02020554*)arg0)->unknown_768_ = 0;
    } else {
        void* var4;
        void* var5[3];
        int var6[3];
        BGLayer_02020cb8 var7;

        var0->GetLoadedFileByID(
#if defined(jpn)
        arg1
#else
        *arg1
#endif
, &var1, &var2);
        int var8 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var1));
        for (int var9 = 0; var9 < var8; var9++) {
            var5[var9] = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var1), var9, (const char**)(&var4), (unsigned int*)(&var6[var9]));
        }
        ((BGLayer*)((BGLayer_02020cb8*)&var7))->Reset();
        var7.isSubScreen_1c_0_ = 1;
        var7.bgIndex_1c_4_ = 0;
        ((BGLayer*)(&var7))->SetPriority(2);
        ((BGLayer*)((unsigned char*)&var7))->ConfigureTextMode(0);
        ((BGLayer*)((BGLayer_02020cb8_5*)&var7))->SetOffset(0, 0);
        for (int var10 = 0; var10 < var8; var10++) {
            ((BGLayer*)(&var7))->ProcessGraphicsFileMetadata((const void*)((char*)var5[var10]));
            ((BGLayer*)((BGLayer_02020cb8_6*)&var7))->StageGraphicsFileBuffer((const void*)((char*)var5[var10]));
        }
        ((BGLayer*)((BGLayer_02020cb8_2*)&var7))->CleanCacheAndUploadIndexBuffer((const void*)(0));
        ((BGLayer*)((BGLayer_02020cb8_3*)&var7))->MaybeDestroy();
        ((Struct_02020554*)arg0)->unknown_55c_ = 1;
    }
    BackgroundLoader* var11 = BackgroundLoader::GetInstance();
    var11->RemoveTask(
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
