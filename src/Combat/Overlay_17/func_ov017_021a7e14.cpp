#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Resource/MessageSystem.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"

struct Struct_02018300_3 {
    char unknown_0_[0xb2];
    short unknown_b2_;
};

struct LocalWireless_0202b2f0;
struct ItemTable_0201099c_10;
struct Struct_0201099c_3;
struct StringTable_0201099c_14;

struct MessageWindow_020465c0 {
#if defined(jpn)
    char unknown_0_[0x28];
    char* unknown_5c_;
    char unknown_2c_[0x868 - 0x2c];
#else
    void* unknown1_0_;
    char unknown_4_[0x14];
    void* unknown_18_;
    char unknown_1c_[0xc];
    void* unknown_28_;
    char unknown1_2c_[0x30];
    char* unknown_5c_;
    char unknown_60_[0x998 - 0x60];
#endif
    int unknown_998_;
    char unknown_99c_[4];
    int unknown_9a0_;
#if defined(jpn)
    char unknown_874_[0x17de - 0x874];
#else
    char unknown_9a4_[0x19ae - 0x9a4];
#endif
    unsigned char unknown_19ae_;
};

struct Struct_ov017_021a7e14_6 {
    char unknown_0_[0x950];
    int unknown_950_;
};

struct Struct_ov017_021a7e14 {
    char unknown_0_[0x150];
    Struct_ov017_021a7e14_6* unknown_150_;
};

struct Struct_ov017_021a7e14_2 {
    char* unknown_0_;
    char* unknown_4_;
    int unknown_8_;
};

struct Struct_ov017_021a7e14_3 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
};

struct Struct_ov017_021a7e14_4 {
    SafeAllocator unknown_0_;
    char unknown_14_[0x18];
    ItemTable_0201099c_10* unknown_2c_;
    int unknown_30_;
    int unknown_34_;
};

struct Struct_ov017_021a7e14_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    SafeAllocator unknown_8_;
    Struct_0201099c_3* unknown_1c_;
    char* unknown_20_;
    int unknown_24_;
    int unknown_28_;
    ItemTable_0201099c_10* unknown_2c_;
    short unknown_30_;
    short unknown_32_;
    int unknown_34_;
    short unknown_38_;
    unsigned short unknown_3a_;
#if !defined(jpn)
    Struct_ov017_021a7e14_2* unknown_3c_;
    void* unknown_40_;
    void* unknown_44_;
    char* unknown_48_;
    char* unknown_4c_;
#endif
};

extern "C" MessageWindow_020465c0* GetMessageWindow_020421a0();
extern "C" LocalWireless_0202b2f0* GetLocalWireless_0202ae18();
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" void DisablePlayerControl_020397cc(Struct_02018300_3* object, int standStill);
extern "C" void ReleaseFileTablesForSpace_020a0cc4(unsigned int neededSize);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern "C" void LoadFileTables_020a0c0c();
#if defined(jpn)
#define func_ov017_021a7dd8 func_ov017_021a8754
#endif
extern "C" void func_ov017_021a7dd8(Struct_ov017_021a7e14_5* arg0);
extern "C" void InitStringTable_020dfc40(StringTable_0201099c_14* stringTable);
extern "C" void LoadStringTable_020dfec0(void* stringTable, SafeAllocator* allocator, void* fileData, unsigned int fileSize);
extern "C" void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);
extern "C" void ClearItemTable_020de848(void* itemTable);
extern "C" void func_020de980(void* arg0, void* arg1, void* arg2, int arg3, int arg4);
extern "C" void InitNoun_020e46c4(void* noun);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_020dcf7c(int arg0, void* arg1);
extern "C" Struct_ov017_021a7e14_3* FindItemData_020dedd0(ItemTable_0201099c_10* itemTable, int itemId);
extern "C" void func_ov017_021d0198(int arg0, int arg1, int arg2, int arg3);
extern "C" void InitPartyMemberNoun_020e4bf4(void* noun, int partyMemberIndex);
extern "C" char* GetStandardString_020e51cc(int stringId);
extern "C" void SetNoun_020e4b34(void* noun, char* singularText, int pluralText, int singularIndefiniteArticle, int pluralIndefiniteArticle, int singularDefiniteArticle, int pluralDefiniteArticle, int gender, int isPluralOnly, int arg9, int hasInitialVowelSound, int isInitialVowelFromText);
extern "C" void ClearMessageParams_02046380(MessageWindow_020465c0* window);
extern "C" void SetMessageNumber_020465c0(MessageWindow_020465c0* window, int index, int number);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char* window, int index, unsigned char width);
extern "C" char* FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
extern "C" void AppendText_02042058(char* buffer, const char* text);
extern "C" int func_02086bf4(char* arg0, int arg1);
extern "C" int GetMessageChoice_020457e0(MessageWindow_020465c0* window);
extern "C" int IsLocalWirelessPlayerDisconnected_0202c578(LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" int func_ov017_021a85e8(unsigned char* arg0, int arg1);
extern "C" void* InitItemTable_020de824(void* itemTable);
extern "C" void func_0207cbe8(char* arg0);
extern "C" void func_0207cf30(void* arg0, int arg1, int arg2, int arg3);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void EnablePlayerControl_020397c0(void* object);

extern AllocatorUnion gMainHeap_02114e20;
#if defined(jpn)
extern const char data_ov017_021d7bf0[];
extern "C" void func_020de968(int, char*);
extern "C" void* func_020e08f0(int, unsigned int*);
extern "C" void __clear(void*, int);
struct Struct_02046574_2;
extern "C" void SetMessageString_02046574(Struct_02046574_2*, int, char*);
#else
extern const char data_ov017_021d77c4[];
extern const char data_ov017_021d77de[];
extern const char* data_020f2a18;
extern const char* data_020f2a0c;
#endif

// USA: func_ov017_021a7e14
// JPN: func_ov017_021a8790
extern "C" ARM void func_ov017_021a7e14(Struct_ov017_021a7e14_5* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    MessageWindow_020465c0* var2 = GetMessageWindow_020421a0();
    FontLoader_0208cb08* var3 = GetFontLoader_02094a00();
    GetGameResources();
    LocalWireless_0202b2f0* var4 = GetLocalWireless_0202ae18();
    Struct_02018300_3* var5 = (Struct_02018300_3*)var0->GetUnknownGameObject();
    int var6 = GetProtagonistObjectIndex_020100a8(var0);
    DisablePlayerControl_020397cc(var5, 1);
    int var7 = 0;
    var5->unknown_b2_ = 0;

    if (arg0->unknown_24_ == 0) {
        ReleaseFileTablesForSpace_020a0cc4(0x2000);
        void* var8 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, 0x2000);
        if (var8 == NULL) {
            LoadFileTables_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        arg0->unknown_8_.CreateTypeA(var8, 0x2000);
        arg0->unknown_8_.Reset();
        arg0->unknown_1c_ = (Struct_0201099c_3*)arg0->unknown_8_.Allocate(0x18);
        if (arg0->unknown_1c_ == NULL) {
            func_ov017_021a7dd8(arg0);
            LoadFileTables_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
#if defined(jpn)
        arg0->unknown_28_ = var1->QueueLoadFile(data_ov017_021d7bf0, NULL);
#else
        arg0->unknown_28_ = var1->QueueLoadFileInGP2(data_ov017_021d77c4, data_ov017_021d77de, NULL);
#endif
        arg0->unknown_24_ = 1;
    } else if (arg0->unknown_24_ == 1) {
        if (var1->GetTaskStatus(arg0->unknown_28_) != 0) {
            void* var9;
            unsigned int var10;
            var1->GetLoadedFileByID(arg0->unknown_28_, &var9, &var10);
            arg0->unknown_1c_ = (Struct_0201099c_3*)arg0->unknown_8_.Allocate(0x18);
            InitStringTable_020dfc40((StringTable_0201099c_14*)arg0->unknown_1c_);
            LoadStringTable_020dfec0(arg0->unknown_1c_, &arg0->unknown_8_, var9, var10);
            var1->RemoveTask(arg0->unknown_28_);
            arg0->unknown_28_ = -1;
            arg0->unknown_20_ = var2->unknown_5c_;
#if defined(jpn)
            ClearLoadedFontSets_02094b40(var3);
            RequestSingleFontLoad_02094b30(var3, 0x208, 0);
#endif
            arg0->unknown_24_ = 2;
        }
    } else if (arg0->unknown_24_ == 2) {
#if defined(jpn)
        if (!UpdateFontLoad_02094b4c(var3)) return;
        char var11[0x40];
#endif
        BackgroundLoader::AddLockGlobal();
        unsigned int var12;
#if defined(jpn)
        void* var13 = func_020e08f0(8, &var12);
#else
        void* var13 = ExtractFileFromGP2(data_020f2a18, data_020f2a0c, &var12);
#endif
        arg0->unknown_2c_ = (ItemTable_0201099c_10*)arg0->unknown_8_.Allocate(0x18);
        ClearItemTable_020de848(arg0->unknown_2c_);
        if (var13 != NULL) {
            func_020de980(arg0->unknown_2c_, &arg0->unknown_8_, var13, var12, arg0->unknown_30_);
        }
#if defined(jpn)
        __clear(var11, sizeof(var11));
        func_020de968(arg0->unknown_30_, var11);
#else
        arg0->unknown_3c_ = (Struct_ov017_021a7e14_2*)arg0->unknown_8_.Allocate(0xc);
        arg0->unknown_48_ = (char*)arg0->unknown_8_.Allocate(0x40);
        arg0->unknown_4c_ = (char*)arg0->unknown_8_.Allocate(0x40);
        if (arg0->unknown_3c_ != NULL && arg0->unknown_48_ != NULL && arg0->unknown_4c_ != NULL) {
            InitNoun_020e46c4(arg0->unknown_3c_);
            memset(arg0->unknown_48_, 0, 0x40);
            memset(arg0->unknown_4c_, 0, 0x40);
            arg0->unknown_3c_->unknown_0_ = arg0->unknown_48_;
            arg0->unknown_3c_->unknown_4_ = arg0->unknown_4c_;
            func_020dcf7c(arg0->unknown_30_, arg0->unknown_3c_);
        }
#endif
        BackgroundLoader::RemoveLockGlobal();
#if !defined(jpn)
        arg0->unknown_40_ = arg0->unknown_8_.Allocate(0xc);
        arg0->unknown_44_ = arg0->unknown_8_.Allocate(0xc);
#endif
        Struct_ov017_021a7e14* var14 = (Struct_ov017_021a7e14*)GetPartyMemberBaseByIndex_0200ff1c(var0, arg0->unknown_34_);
        if (FindItemData_020dedd0(arg0->unknown_2c_, arg0->unknown_30_) == NULL || var14 == NULL
#if !defined(jpn)
            || arg0->unknown_3c_ == NULL || arg0->unknown_48_ == NULL || arg0->unknown_4c_ == NULL ||
            arg0->unknown_40_ == NULL || arg0->unknown_44_ == NULL
#endif
        ) {
            func_ov017_021d0198(5, arg0->unknown_34_, var6, arg0->unknown_30_);
            arg0->unknown_24_ = 7;
            return;
        }
#if defined(jpn)
        ClearMessageParams_02046380(var2);
        SetMessageString_02046574((Struct_02046574_2*)var2, 0, ((GameObject*)var14)->baseStats_->unk);
        SetMessageString_02046574((Struct_02046574_2*)var2, 1, var11);
#else
        InitNoun_020e46c4(arg0->unknown_40_);
        InitPartyMemberNoun_020e4bf4(arg0->unknown_40_, arg0->unknown_34_);
        InitNoun_020e46c4(arg0->unknown_44_);
        char* var15 = GetStandardString_020e51cc((short)var14->unknown_150_->unknown_950_);
        SetNoun_020e4b34(arg0->unknown_44_, var15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        ClearMessageParams_02046380(var2);
        SetMessageNumber_020465c0(var2, 0, 1);
        SetMessageNumberWidth_020465f0((unsigned char*)var2, 0, 1);
        var2->unknown1_0_ = arg0->unknown_40_;
        var2->unknown_18_ = arg0->unknown_3c_;
        var2->unknown_28_ = arg0->unknown_44_;
#endif
        char* var16 = var2->unknown_5c_;
#if defined(jpn)
        memset(var16, 0, 0x800);
#else
        memset(var16, 0, 0x960);
#endif
        AppendText_02042058(var16, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x64));
        AppendText_02042058(var16, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x78));
        if (func_02086bf4((char*)GetParty_02010828(var0), arg0->unknown_30_) == 0x63) {
            AppendText_02042058(var16, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x70));
            arg0->unknown_3a_ |= 1;
        } else {
            AppendText_02042058(var16, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x6e));
        }
        var2->unknown_998_ = 1;
#if defined(jpn)
        StartMessage_0204500c((MessageWindow_02021b84*)var2, var16, 0);
#else
        StartMessage_0204500c((MessageWindow_02021b84*)var2, var16, 0, 0xe3);
#endif
        arg0->unknown_24_ = 3;
    } else if (arg0->unknown_24_ == 3) {
        if (var2->unknown_9a0_ == 3 || var2->unknown_9a0_ == 0) {
            var2->unknown_19ae_ = 0;
            int var17 = GetMessageChoice_020457e0(var2);
            if (var17 == 0) {
                if (arg0->unknown_3a_ & 1) {
                    func_ov017_021d0198(8, arg0->unknown_34_, var6, arg0->unknown_30_);
                    arg0->unknown_3a_ &= ~1;
                    arg0->unknown_24_ = 7;
                } else {
                    func_ov017_021d0198(6, arg0->unknown_34_, var6, arg0->unknown_30_);
                    arg0->unknown_24_ = 4;
                    arg0->unknown_38_ = 0xe10;
                }
            } else if (var17 == 1) {
                func_ov017_021d0198(7, arg0->unknown_34_, var6, arg0->unknown_30_);
                arg0->unknown_24_ = 7;
            }
        }
    } else if (arg0->unknown_24_ == 4) {
        var2->unknown_19ae_ = 0;
        if (IsLocalWirelessPlayerDisconnected_0202c578(var4, 0) || IsLocalWirelessPlayerDisconnected_0202c578(var4, arg0->unknown_34_)) {
            var7 = 1;
        }
        int var18 = var0->GetTickCount();
        if (var18 == 0) {
            var18 = 1;
        }
        if (func_ov017_021a85e8((unsigned char*)arg0, var18) == 0) {
            var7 = 1;
        }
        if (var7) {
#if defined(jpn)
            StartMessage_0204500c((MessageWindow_02021b84*)var2, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x71), 0);
#else
            StartMessage_0204500c((MessageWindow_02021b84*)var2, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x71), 0, 0xe3);
#endif
            arg0->unknown_24_ = 7;
        }
    } else if (arg0->unknown_24_ == 5) {
        var2->unknown_19ae_ = 0;
        int var19 = var0->GetTickCount();
        if (var19 == 0) {
            var19 = 1;
        }
        if (func_ov017_021a85e8((unsigned char*)arg0, var19) == 0 && var2->unknown_9a0_ == 3) {
            if (IsLocalWirelessPlayerDisconnected_0202c578(var4, 0) || IsLocalWirelessPlayerDisconnected_0202c578(var4, arg0->unknown_34_)) {
#if defined(jpn)
                StartMessage_0204500c((MessageWindow_02021b84*)var2, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x71), 0);
#else
                StartMessage_0204500c((MessageWindow_02021b84*)var2, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x71), 0, 0xe3);
#endif
                arg0->unknown_24_ = 7;
            } else {
                Struct_ov017_021a7e14_3* var20 = FindItemData_020dedd0(arg0->unknown_2c_, arg0->unknown_30_);
                Struct_ov017_021a7e14_4 var21;
                var21.unknown_0_.ResetAllocatorPointer();
                InitItemTable_020de824(var21.unknown_14_);
                func_0207cbe8((char*)&var21);
                func_0207cbe8((char*)&var21);
                var21.unknown_2c_ = arg0->unknown_2c_;
                if ((unsigned char)var20->unknown_8_0_ == 8) {
                    func_0207cf30(&var21, arg0->unknown_30_, 1, 0);
                }
#if !defined(jpn)
                ClearMessageParams_02046380(var2);
                SetMessageNumber_020465c0(var2, 0, 1);
                SetMessageNumberWidth_020465f0((unsigned char*)var2, 0, 1);
                var2->unknown1_0_ = arg0->unknown_40_;
                var2->unknown_18_ = arg0->unknown_3c_;
                var2->unknown_28_ = arg0->unknown_44_;
#endif
#if defined(jpn)
                StartMessage_0204500c((MessageWindow_02021b84*)var2, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x6f), 0);
#else
                StartMessage_0204500c((MessageWindow_02021b84*)var2, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x6f), 0, 0xe3);
#endif
                arg0->unknown_24_ = 7;
            }
        }
    } else if (arg0->unknown_24_ == 6) {
        ResetMessageWindow_02043204((char*)var2);
        var2->unknown_998_ = 1;
#if defined(jpn)
        StartMessage_0204500c((MessageWindow_02021b84*)var2, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x65), var7);
#else
        StartMessage_0204500c((MessageWindow_02021b84*)var2, (char*)FindStringInTable_020e0434(arg0->unknown_1c_, 0x65), var7, 0xe3);
#endif
        arg0->unknown_24_ = 7;
    } else if (arg0->unknown_24_ == 7) {
        if (var2->unknown_998_ == 0) {
            var7 = 1;
        }
        if (var7) {
            ResetMessageWindow_02043204((char*)var2);
            EnablePlayerControl_020397c0(var5);
            func_ov017_021a7dd8(arg0);
            LoadFileTables_020a0c0c();
            arg0->unknown_1_ = 1;
        }
    }
}
