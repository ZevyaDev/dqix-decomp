#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Graphics.h"
#include "Resource/Brightness.h"

extern "C" int GetResources_0200fb8c(int* gameState);
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);
extern "C" void func_020dc2bc(void);
extern "C" void SetBGScreenSize_0204b11c(unsigned char* layer, int screenSize);
extern "C" void SetBGPriority_0204b5b4(void* layer, int priority);
struct BGLayer_02020cb8_5;
extern "C" void SetBGScroll_0204b5e8(struct BGLayer_02020cb8_5* layer, int scrollX, int scrollY);
struct BGLayer_0204af38;
extern "C" void AllocateBGScreenBlocks_0204af38(struct BGLayer_0204af38* layer, int capacity, SafeAllocator* allocator);
struct BGLayer_0204b12c;
extern "C" void AllocateBGScreenData_0204b12c(struct BGLayer_0204b12c* layer, SafeAllocator* allocator);
struct Struct_0204b010;
extern "C" void func_0204b010(struct Struct_0204b010* arg0, void* arg1);
struct Struct_0204b988;
extern "C" void func_0204b988(struct Struct_0204b988* arg0, unsigned int arg1, int arg2, int arg3, unsigned short arg4);
struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(struct BGLayer_02020cb8_2* layer, void* screenData);
struct PacEntry_02020cb8_4;
extern "C" int CountPacEntries_02046900(struct PacEntry_02020cb8_4* pac);
struct PacEntry_02020aec;
extern "C" void* GetPacEntryData_020467f0(struct PacEntry_02020aec* pac, int index, void** outEntry, int* outSize);
extern "C" void LoadBGBlock_0204b174(void* layer, void* block, SafeAllocator* allocator, int arg3);

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
            SetGlobalFlags_020466e4((unsigned int*)GetGlobalFlags_020d6c00(), 1);
            func_020dc2bc();
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
        SetBGScreenSize_0204b11c((unsigned char*)arg0->unknown_18_, 0);
        SetBGPriority_0204b5b4(arg0->unknown_18_, 0);
        SetBGScroll_0204b5e8((struct BGLayer_02020cb8_5*)arg0->unknown_18_, 0, 0);
        AllocateBGScreenBlocks_0204af38((struct BGLayer_0204af38*)arg0->unknown_18_, 14, var2);
        AllocateBGScreenData_0204b12c((struct BGLayer_0204b12c*)arg0->unknown_18_, var2);
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
            int var7 = CountPacEntries_02046900((struct PacEntry_02020cb8_4*)var5);
            for (int var8 = 0; var8 < var7; var8++) {
                int var9;
                void* var10 = GetPacEntryData_020467f0((struct PacEntry_02020aec*)var5, var8, &var4, &var9);
                LoadBGBlock_0204b174(arg0->unknown_18_, var10, var3, var9);
            }
            var1->RemoveTask(arg0->unknown_50_);
            arg0->unknown_50_ = -1;
            func_0204b010((struct Struct_0204b010*)arg0->unknown_18_, 0);
            func_0204b988((struct Struct_0204b988*)arg0->unknown_18_, 0, 0, 0, 0xffff);
            LoadBGScreenData_0204b0e8((struct BGLayer_02020cb8_2*)arg0->unknown_18_, 0);
            arg0->unknown_5a_ = 1;
            arg0->unknown_5b_ = 0;
            arg0->unknown_5d_ |= 2;
        }
    }
}
