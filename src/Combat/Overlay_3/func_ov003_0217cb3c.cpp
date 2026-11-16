#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"

struct BGLayer_02020cb8;
struct BGLayer_02020cb8_5;
struct BGLayer_0204b12c;
struct BGLayer_0204af38;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct BGLayer_0204b8d0;
struct BGLayer_02020cb8_2;

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
        ((BGLayer*)((BGLayer_02020cb8*)var1))->Reset();
        var1->unknown_1c_0_ = 0;
        var1->unknown_1c_4_ = 1;
        ((BGLayer*)(var1))->SetPriority(1);
    } else {
        BG0CNTSUB = (BG0CNTSUB & 0x43) | 0xf00;
        var1 = &arg0->unknown_40_;
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x100;
        var2 = &arg0->unknown_18_;
        ((BGLayer*)((BGLayer_02020cb8*)var1))->Reset();
        var1->unknown_1c_0_ = 1;
        var1->unknown_1c_4_ = 0;
        ((BGLayer*)(var1))->SetPriority(0);
    }

    var2->Reset();

    int var3;
    if (arg2 != 0) {
        var3 = arg0->unknown_134_[1];
    } else {
        var3 = arg0->unknown_134_[0];
    }

    ((BGLayer*)((unsigned char*)var1))->ConfigureTextMode(0);
    ((BGLayer*)((BGLayer_02020cb8_5*)var1))->SetOffset(0, 0);
    ((BGLayer*)((BGLayer_0204b12c*)var1))->AllocateIndexBuffer((SafeAllocator*)(var2));
    ((BGLayer*)((BGLayer_0204af38*)var1))->AllocateSprites(1, (SafeAllocator*)(var2));

    void* var4;
    void* var5;
    unsigned int var6;
    var0->GetLoadedFileByID(var3, &var5, &var6);
    int var7 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var5));
    for (int var8 = 0; var8 < var7; var8++) {
        unsigned int var9;
        void* var10 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var5), var8, (const char**)(&var4), (unsigned int*)((int*)&var9));
        if (var10 != NULL) {
            ((BGLayer*)var1)->ProcessGraphicsFile((const void*)var10, (SafeAllocator*)var2, var9);
        }
    }

    ((BGLayer*)((BGLayer_0204b8d0*)var1))->BlitSpriteByIndex(0, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
    ((BGLayer*)((BGLayer_02020cb8_2*)var1))->CleanCacheAndUploadIndexBuffer((const void*)(NULL));
}
