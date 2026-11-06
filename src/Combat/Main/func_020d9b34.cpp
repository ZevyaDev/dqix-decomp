#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define REGION_VALUE(jpnValue, usaValue) jpnValue
extern const char data_020f2a18[];
extern "C" void LoadStringList_020728ac(int, int, void*, int, int, unsigned short, unsigned char);
struct StringList_02072a68_2;
extern "C" void* FindStringInList_02072a68(StringList_02072a68_2*, int);
extern "C" void StartMessage_0204500c(void*, void*, int);
#else
#define REGION_VALUE(jpnValue, usaValue) usaValue
#endif

extern AllocatorUnion gMainHeap_02114e20;
extern const char data_020f2810[];
extern const char data_020f2826[];

struct Struct_02114e20;
extern "C" unsigned int func_02012dd0(Struct_02114e20* arg0);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);
struct Struct_02018300_3;
extern "C" void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ClearMessageParams_02046380(void* window);
#if !defined(jpn)
extern "C" void StartMessage_0204500c(void* window, void* text, int arg2, int arg3);
#endif
extern "C" void LoadStringTable_020dfec0(void* stringTable, void* allocator, void* fileData, unsigned int fileSize);
struct Struct_02046574_2;
extern "C" void SetMessageString_02046574(struct Struct_02046574_2* window, int index, char* text);
struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);

struct Struct_020d9b34 {
    char unknown_0_[REGION_VALUE(0x24, 0x58)];
    SafeAllocator unknown_58_;
};
extern "C" void func_020d9d60(struct Struct_020d9b34* arg0);

struct Struct_020d9b34_2 {
    unsigned char unknown_0_[0x1];
    unsigned char unknown_1_;
    unsigned char unknown_2_[0x8 - 0x2];
    signed char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_[0xc - 0xa];
    int unknown_c_;
    char unknown_10_[REGION_VALUE(0x1c, 0x40) - 0x10];
    char unknown_40_[REGION_VALUE(0x24 - 0x1c, 0x58 - 0x40)];
    SafeAllocator unknown_58_;
};

// USA: func_020d9b34
extern "C" ARM void func_020d9b34(struct Struct_020d9b34_2* arg0) {
    if (arg0->unknown_9_ == 0) {
        if (func_02012dd0((Struct_02114e20*)&gMainHeap_02114e20) < 0x400) {
            arg0->unknown_1_ = 1;
            return;
        }
        DisablePlayerControl_020397cc((struct Struct_02018300_3*)GameState::GetInstance()->GetUnknownGameObject(), 1);
        SetGlobalFlags_020466e4((unsigned int*)GetGlobalFlags_020d6c00(), 0xe);
        arg0->unknown_58_.ResetAllocatorPointer();
        arg0->unknown_58_.CreateTypeA(AllocateRoundedSize_02012d88(&gMainHeap_02114e20, 0x400), 0x400);
        arg0->unknown_58_.Reset();
#if defined(jpn)
        arg0->unknown_c_ = BackgroundLoader::GetInstance()->QueueLoadFile(data_020f2a18, NULL);
#else
        arg0->unknown_c_ = BackgroundLoader::GetInstance()->QueueLoadFileInGP2(data_020f2810, data_020f2826, NULL);
#endif
        arg0->unknown_9_++;
    } else if (arg0->unknown_9_ == 1) {
        BackgroundLoader* var0 = BackgroundLoader::GetInstance();
        if (var0->GetTaskStatus(arg0->unknown_c_) == 0) return;
        if (var0->GetDetailedTaskStatus(arg0->unknown_c_) != 2) {
            var0->RemoveTask(arg0->unknown_c_);
            arg0->unknown_c_ = -1;
            func_020d9d60((struct Struct_020d9b34*)arg0);
            arg0->unknown_1_ = 1;
        } else {
            void* var1;
            unsigned int var2;
            var0->GetLoadedFileByID(arg0->unknown_c_, &var1, &var2);
#if defined(jpn)
            LoadStringList_020728ac((int)&arg0->unknown_40_, (int)&arg0->unknown_58_, var1, var2, 0, 0, 0);
#else
            LoadStringTable_020dfec0(&arg0->unknown_40_, &arg0->unknown_58_, var1, var2);
#endif
            var0->RemoveTask(arg0->unknown_c_);
            arg0->unknown_c_ = -1;
            arg0->unknown_9_++;
        }
    } else if (arg0->unknown_9_ == 2) {
        FontLoader_0208cb08* var3 = GetFontLoader_02094a00();
        ClearLoadedFontSets_02094b40(var3);
        CancelFontLoad_02094ab0(var3);
        RequestSingleFontLoad_02094b30(var3, 0x207, 0);
        arg0->unknown_9_++;
    } else if (arg0->unknown_9_ == 3) {
        if (UpdateFontLoad_02094b4c(GetFontLoader_02094a00()) == 0) return;
        void* var4 = (void*)GetMessageWindow_020421a0();
        ClearMessageParams_02046380(var4);
        SetMessageString_02046574((struct Struct_02046574_2*)var4, 0, arg0->unknown_10_);
#if defined(jpn)
        StartMessage_0204500c(var4, FindStringInList_02072a68((StringList_02072a68_2*)&arg0->unknown_40_, arg0->unknown_8_), 0);
#else
        StartMessage_0204500c(var4, (void*)FindStringInTable_020e0434((struct Struct_0201099c_3*)&arg0->unknown_40_, arg0->unknown_8_), 0, 0xe3);
#endif
        *(int*)((char*)var4 + REGION_VALUE(0x868, 0x998)) = 1;
        arg0->unknown_9_++;
    } else if (arg0->unknown_9_ == 4) {
        if (*(int*)((char*)GetMessageWindow_020421a0() + REGION_VALUE(0x868, 0x998)) == 0) {
            func_020d9d60((struct Struct_020d9b34*)arg0);
            arg0->unknown_1_ = 1;
        }
    }
}
