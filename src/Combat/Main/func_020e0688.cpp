#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020e0688_2 {
    unsigned char unknown_0_[0x55c];
    unsigned char unknown_55c_;
#if defined(jpn)
    unsigned char unknown_55d_[0x6bc - 0x55d];
#else
    unsigned char unknown1_55d_[0x768 - 0x55d];
#endif
    unsigned char unknown_768_;
    unsigned char unknown_769_[0x9c5 - 0x769];
    unsigned char unknown_9c5_;
    unsigned char unknown_9c6_[0xa0c - 0x9c6];
    int unknown_a0c_;
};

struct GlobalFlags_02012de8;
extern "C" int TestGlobalFlags_02046708(struct GlobalFlags_02012de8* globalFlags, unsigned int mask);
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void func_02022b90(void* arg0, int* arg1);
extern "C" void WaitForVBlank_020c9820(void);

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

struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(struct BGLayer_02020cb8_2* layer, void* screenData);

struct BGLayer_02020cb8_3;
extern "C" void ResetBGLayerData_0204afb4(struct BGLayer_02020cb8_3* layer);

struct Struct_020e0688 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_[3];
};

// USA: func_020e0688
extern "C" ARM void func_020e0688(struct Struct_020e0688_2* arg0) {
    if (arg0->unknown_9c5_ == 0) {
        return;
    }

    if (TestGlobalFlags_02046708((struct GlobalFlags_02012de8*)GetGlobalFlags_020d6c00(), 0x41)) {
        return;
    }

    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int var1 = var0->GetTaskStatus(arg0->unknown_a0c_);
    if (var1 == 0) {
        return;
    }

    if (var1 == -1) {
        *(volatile unsigned int*)0x04001000 = (*(volatile unsigned int*)0x04001000 & ~0x1f00) | 0x200;
        arg0->unknown_768_ = 0;
    } else {
        int var2 = 0;
        int var3 = 0;
        void* var4;
        void* var5[3];
        int var6[3];
        Struct_020e0688 var7;

        var0->GetLoadedFileByID(arg0->unknown_a0c_, (void**)(&var2), (unsigned int*)(&var3));
        int var8 = CountPacEntries_02046900((struct PacEntry_02020cb8_4*)var2);
        for (int var9 = 0; var9 < var8; var9++) {
            var5[var9] = GetPacEntryData_020467f0((struct PacEntry_02020aec*)var2, var9, &var4, &var6[var9]);
        }

        WaitForVBlank_020c9820();
        InitBGLayer_0204af64((struct BGLayer_02020cb8*)&var7);
        var7.unknown_1c_0_ = 1;
        var7.unknown_1c_4_ = 0;
        SetBGPriority_0204b5b4(&var7, 2);
        SetBGScreenSize_0204b11c((unsigned char*)&var7, 0);
        SetBGScroll_0204b5e8((struct BGLayer_02020cb8_5*)&var7, 0, 0);

        for (int var10 = 0; var10 < var8; var10++) {
            FlushBGBlock_0204b2e0(&var7, (char*)var5[var10]);
            CopyBGBlockToVRAM_0204b3a0((struct BGLayer_02020cb8_6*)&var7, (char*)var5[var10]);
        }

        LoadBGScreenData_0204b0e8((struct BGLayer_02020cb8_2*)&var7, 0);
        ResetBGLayerData_0204afb4((struct BGLayer_02020cb8_3*)&var7);
    }

    func_02022b90(arg0, &arg0->unknown_a0c_);
    arg0->unknown_55c_ = 1;
    arg0->unknown_9c5_ = 0;
}
