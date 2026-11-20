#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Graphics.h"
#include "Resource/Brightness.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

extern "C" int GetResources_0200fb8c(int* gameState);
extern "C" void* func_020d6c00(void);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);
extern "C" void SuspendMapDisplay_020dc2bc(void);
struct BGLayer_02020cb8_5;
struct BGLayer_0204af38;
struct BGLayer_0204b12c;
struct BGLayer_0204b010;
struct BGLayer_0204b988;
struct BGLayer_02020cb8_2;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;

extern char data_ov003_0217fcb5[];
extern char data_ov003_0217fcc7[];

struct Struct_ov003_021541b0 {
    SafeAllocator* unknown_0_;
    char unknown_4_[0x18 - 0x04];
    char unknown_18_[0x34 - 0x18];
    unsigned char unknown_34_0_ : 4;
    unsigned char unknown_34_4_ : 4;
    char unknown_35_[0x50 - 0x35];
    int unknown_50_;
    int unknown_54_;
    unsigned char unknown_58_;
    signed char unknown_59_;
    unsigned char unknown_5a_;
    unsigned char unknown_5b_;
    unsigned char unknown_5c_;
    unsigned char unknown_5d_;

    bool inline_ov003_021541b0() const { return unknown_59_ >= 0 && unknown_59_ <= 3; }
};

// USA: func_ov003_021541b0
extern "C" ARM void func_ov003_021541b0(struct Struct_ov003_021541b0* arg0) {
    GameResources* var0 = (GameResources*)GetResources_0200fb8c((int*)GameState::GetInstance());
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();

    if (arg0->unknown_5b_ == 0) {
        if (arg0->inline_ov003_021541b0()) {
            arg0->unknown_58_ = 1;
            SetSubBrightness(var0, -16, 1);
            arg0->unknown_5b_++;
        }
    } else if (arg0->unknown_5b_ == 1) {
        if (IsSubBrightnessTransitionActive(var0) == 0) {
            SetGlobalFlags_020466e4((unsigned int*)func_020d6c00(), 1);
            SuspendMapDisplay_020dc2bc();
            arg0->unknown_5b_++;
        }
    } else if (arg0->unknown_5b_ == 2) {
        BG0CNTSUB = (BG0CNTSUB & 0x43) | 0xf00;
        BG0CNTSUB &= ~3;
        BG1CNTSUB = (BG1CNTSUB & ~3) | 1;
        BG2CNTSUB = (BG2CNTSUB & ~3) | 2;
        BG3CNTSUB = (BG3CNTSUB & ~3) | 3;
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1100;

        SafeAllocator* var2 = arg0->unknown_0_;
        var2->Reset();
        arg0->unknown_34_0_ = 1;
        arg0->unknown_34_4_ = 0;
        ((BGLayer*)((unsigned char*)arg0->unknown_18_))->ConfigureTextMode(0);
        ((BGLayer*)(arg0->unknown_18_))->SetPriority(0);
        ((BGLayer*)((struct BGLayer_02020cb8_5*)arg0->unknown_18_))->SetOffset(0, 0);
        ((BGLayer*)((struct BGLayer_0204af38*)arg0->unknown_18_))->AllocateSprites(14, (SafeAllocator*)(var2));
        ((BGLayer*)((struct BGLayer_0204b12c*)arg0->unknown_18_))->AllocateIndexBuffer((SafeAllocator*)(var2));
#if defined(jpn)
        arg0->unknown_50_ = var1->QueueLoadFile(data_ov003_0217fcb5, 0);
#else
        arg0->unknown_50_ = var1->QueueLoadFileInGP2(data_ov003_0217fcb5, data_ov003_0217fcc7, 0);
#endif
        arg0->unknown_5b_++;
    } else if (arg0->unknown_5b_ == 3) {
        if (var1->GetTaskStatus(arg0->unknown_50_) != 0) {
            SafeAllocator* var3 = arg0->unknown_0_;
            void* var4;
            void* var5;
            unsigned int var6;
            var1->GetLoadedFileByID(arg0->unknown_50_, &var5, &var6);
            int var7 = GetNumFilesInPAC((const void*)((struct PacEntry_02020cb8_4*)var5));
            for (int var8 = 0; var8 < var7; var8++) {
                int var9;
                void* var10 = GetFileInPACByIndex((void*)((struct PacEntry_02020aec*)var5), var8, (const char**)(&var4), (unsigned int*)(&var9));
                ((BGLayer*)arg0->unknown_18_)->ProcessGraphicsFile((const void*)var10, (SafeAllocator*)var3, var9);
            }
            var1->RemoveTask(arg0->unknown_50_);
            arg0->unknown_50_ = -1;
            ((BGLayer*)((struct BGLayer_0204b010*)arg0->unknown_18_))->PrepareIndexBuffer((void*)(0));
            ((BGLayer*)((struct BGLayer_0204b988*)arg0->unknown_18_))->BlitSpriteByIndex(0, 0, 0, 0xffff);
            ((BGLayer*)((struct BGLayer_02020cb8_2*)arg0->unknown_18_))->CleanCacheAndUploadIndexBuffer((const void*)(0));
            arg0->unknown_5a_ = 1;
            arg0->unknown_5b_ = 0;
            arg0->unknown_5d_ |= 2;
        }
    }
}
