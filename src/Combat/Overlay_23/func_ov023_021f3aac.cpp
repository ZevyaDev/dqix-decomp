#include <globaldefs.h>
#include <std_library_functions.h>
#include <Filesystem/BackgroundLoader.h>
#include <Memory/SafeAllocator.h>
#include "Filesystem/FileIO.h"
#include "Resource/StringList.h"

#define GUIDE_WINDOW_MESSAGE_WINDOW 4

struct SelectionScript_0209fee4;
struct SelectionScript_0209ff64;
struct SelectionScript_0209ff6c;
struct Struct_ov023_021f1868_10;
struct Struct_020a13c4;
struct AccoladeTable_020a15bc;
struct Struct_ov023_021f1868_11;

struct Struct_ov023_021f3aac_5 {
    unsigned char unknown_0_0_ : 1;
};

struct Struct_ov023_021f3aac_6 {
    char unknown_0_[0x49c];
    Struct_ov023_021f3aac_5 unknown_49c_;
};

struct Struct_ov023_021f3aac_7 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif

    Struct_ov023_021f3aac_6* unknown_150_;
};

struct GameState {
    static GameState* GetInstance();
    Struct_ov023_021f3aac_7* GetProtagonist();
};

struct Struct_ov023_021f3aac_8 {
    char unknown_0_[0x68];
    short unknown_68_;
    short unknown_6a_[1];
};

struct Struct_ov023_021f3aac_9 {
#if defined(jpn)
    char unknown1_0_[0x15c];
#else
    char unknown_0_[0x244];
#endif

};

struct Struct_ov023_021f3aac {
    char unknown_0_[0x438];
    unsigned short unknown_438_;
};

struct Struct_ov023_021f3aac_3 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_ov023_021f3aac_4 {
    char unknown_0_[0x30];
    SafeAllocator unknown_30_;
#if defined(jpn)
    char unknown_44_[0xe28 - 0x44];
#else
    char unknown1_44_[0xeac - 0x44];
#endif

    int unknown_eac_;
#if defined(jpn)
    char unknown_e2c_[0x371c - 0xe2c];
#else
    char unknown_eb0_[0x3760 - 0xeb0];
#endif

#if defined(jpn)
    char unknown_3760_[0x1bf8];
#else
    char unknown_3760_[0x1af8];
#endif

    SafeAllocator unknown_5258_;
#if defined(jpn)
    char unknown_5328_[0x5778 - 0x5328];
#else
    char unknown_526c_[0x5588 - 0x526c];
#endif

    void* unknown_5588_;
    char unknown_558c_[0x55c4 - 0x558c];
    Struct_ov023_021f3aac_8* unknown_55c4_;
    void* unknown_55c8_;
    Struct_ov023_021f3aac* unknown_55cc_;
    Struct_ov023_021f3aac_9* unknown_55d0_;
    unsigned char unknown_55d4_;
    unsigned char unknown_55d5_;
    char unknown_55d6_[0x77d1 - 0x55d6];
    unsigned char unknown_77d1_;
};

extern "C" Struct_ov023_021f3aac_3* _ZZ21inline_ov023_021f4c04vE1s;
#if defined(jpn)
extern const char data_ov023_021fd533[];
#endif
extern const char data_ov023_021fe316[];
extern const char data_ov023_021fe2a0[];
extern const char data_ov023_021fe2b7[];

extern "C" char* GetMessageWindow_020421a0();
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseAndRedrawTextWindows_ov023_021d8b6c(void* panel);
extern "C" void ResetSelectionScript_0209fe9c(char* script);
extern "C" void LoadSelectionScript_0209fee4(SelectionScript_0209fee4* script, SafeAllocator* allocator, int scriptData, int scriptSize);
extern "C" void QueueSelectionScriptEntry_0209ff64(SelectionScript_0209ff64* script, int entryId);
extern "C" void UpdateSelectionScript_0209ff6c(SelectionScript_0209ff6c* script);
extern "C" int func_ov023_021f21f4(Struct_ov023_021f1868_10* arg0);
extern "C" void ClearAccoladeTable_020a13c4(Struct_020a13c4* table);
extern "C" void func_020a13e4(void* arg0, void* arg1, int arg2, unsigned short arg3, unsigned char arg4);
extern "C" void* FindAccolade_020a15bc(AccoladeTable_020a15bc* table, int accoladeId);
extern "C" void func_ov023_021f222c(Struct_ov023_021f1868_11* arg0);
extern "C" void func_ov023_021f2304(void* arg0, char* arg1);
extern "C" void func_ov023_021f2348(void* arg0, int arg1);

extern "C" {
void __clear(void* arg0, unsigned long arg1);
void func_ov023_021f1818(void* arg0, int arg1);
void func_ov023_021d8af8(void* arg0);
int AwardAccolades_ov023_021ed724(void* table, short* accoladeIds, int idCount);
void func_ov023_021f229c(Struct_ov023_021f3aac_9* arg0, void* arg1);
void InitAccoladeDisplay_ov023_021eb138(Struct_ov023_021f3aac* display, int kind);
void AllocateAccoladeDisplayBuffers_ov023_021eb080(Struct_ov023_021f3aac* display, SafeAllocator* allocator);
void SetAccoladeDisplayEntries_ov023_021eb564(Struct_ov023_021f3aac* display, Struct_ov023_021f3aac_9* entries, int entryCount);
void DestroyAccoladeDisplay_ov023_021eb26c(Struct_ov023_021f3aac* display);
}

// USA: func_ov023_021f3aac
extern "C" ARM int func_ov023_021f3aac(Struct_ov023_021f3aac_4* arg0)
{
    Struct_ov023_021f3aac_3* var0 = _ZZ21inline_ov023_021f4c04vE1s;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    int var2 = var0->unknown_0_;
    if (var2 == 0)
    {
        ResetMessageWindow_02043204(GetMessageWindow_020421a0());
        if (arg0->unknown_5588_ != NULL)
        {
            func_ov023_021f1818(arg0->unknown_3760_, 1);
            CloseAndRedrawTextWindows_ov023_021d8b6c(arg0->unknown_5588_);
            func_ov023_021d8af8(arg0->unknown_5588_);
            arg0->unknown_5588_ = NULL;
        }
        arg0->unknown_77d1_ = 1;
        arg0->unknown_55c4_ = NULL;
        var0->unknown_4_ = var1->QueueLoadFile(data_ov023_021fe316, NULL);
        var0->unknown_0_++;
    }
    else if (var2 == 1)
    {
        BackgroundLoader* var3 = BackgroundLoader::GetInstance();
        if (var3->GetTaskStatus(var0->unknown_4_))
        {
            unsigned int var4;
            void* var5;
            var3->GetLoadedFileByID(var0->unknown_4_, &var5, &var4);
            arg0->unknown_30_.Reset();
            void* var6 = arg0->unknown_30_.Allocate(var4);
            memcpy(var6, var5, var4);
            arg0->unknown_55c4_ = (Struct_ov023_021f3aac_8*)arg0->unknown_30_.Allocate(0xd0);
            ResetSelectionScript_0209fe9c((char*)arg0->unknown_55c4_);
            LoadSelectionScript_0209fee4((SelectionScript_0209fee4*)arg0->unknown_55c4_, &arg0->unknown_30_, (int)var6, var4);
            var3->RemoveTask(var0->unknown_4_);
            var0->unknown_4_ = -1;
            QueueSelectionScriptEntry_0209ff64((SelectionScript_0209ff64*)arg0->unknown_55c4_, 100);
            var0->unknown_0_++;
        }
    }
    else if (var2 == 2)
    {
        UpdateSelectionScript_0209ff6c((SelectionScript_0209ff6c*)arg0->unknown_55c4_);
        if (func_ov023_021f21f4((Struct_ov023_021f1868_10*)arg0->unknown_55c4_))
            var0->unknown_0_++;
    }
    else if (var2 == 3)
    {
        short* var7;
#if defined(jpn)
        Struct_ov023_021f3aac_9* var8;
#endif
        int var9;
        int var10 = arg0->unknown_55c4_->unknown_68_;
        if (var10 > 0)
        {
            SafeAllocator* var11 = &arg0->unknown_5258_;
            var11->Reset();
            var10 = arg0->unknown_55c4_->unknown_68_;
            var7 = (short*)var11->Allocate(var10 * 2);
            for (int var12 = 0; var12 < var10; var12++)
                var7[var12] = arg0->unknown_55c4_->unknown_6a_[var12];
            arg0->unknown_30_.Reset();
            arg0->unknown_55c4_ = NULL;
            arg0->unknown_55c8_ = arg0->unknown_30_.Allocate(0x14);
            ClearAccoladeTable_020a13c4((Struct_020a13c4*)arg0->unknown_55c8_);
            func_020a13e4(arg0->unknown_55c8_, &arg0->unknown_30_, 0, 0, 2);
            arg0->unknown_55d5_ = AwardAccolades_ov023_021ed724(arg0->unknown_55c8_, var7, var10) & 1 ? 1 : 0;
            Struct_ov023_021f3aac_7* var13 = GameState::GetInstance()->GetProtagonist();
            StringList var14;
            var14.Reset();
#if defined(jpn)
            var14.LoadSubsetFromFile(&arg0->unknown_30_, data_ov023_021fd533, var7, (unsigned short)var10, var13->unknown_150_->unknown_49c_.unknown_0_0_, 1);
            var8 = (Struct_ov023_021f3aac_9*)var11->Allocate(var10 * sizeof(void*));
            for (var9 = 0; var9 < var10; var9++)
            {
                void* var15 = FindAccolade_020a15bc((AccoladeTable_020a15bc*)arg0->unknown_55c8_, var7[var9]);
                if (var15 == NULL)
                    continue;
                const char* var16 = var14.GetString(var7[var9]);
                if (var16 == NULL)
                    continue;
                func_ov023_021f222c((Struct_ov023_021f1868_11*)&var8[var9]);
                func_ov023_021f229c(&var8[var9], var15);
                func_ov023_021f2304(&var8[var9], (char*)var16);
            }
            arg0->unknown_30_.Reset();
            arg0->unknown_55c8_ = NULL;
            arg0->unknown_55d0_ = (Struct_ov023_021f3aac_9*)arg0->unknown_30_.Allocate(var10 * sizeof(Struct_ov023_021f3aac_9));
            for (var9 = 0; var9 < var10; var9++)
            {
                func_ov023_021f222c((Struct_ov023_021f1868_11*)&arg0->unknown_55d0_[var9]);
                func_ov023_021f229c(&arg0->unknown_55d0_[var9], &var8[var9]);
                func_ov023_021f2304(&arg0->unknown_55d0_[var9], (char*)&var8[var9] + 0xc);
            }

#else
            BackgroundLoader::AddLockGlobal();
            unsigned int var17 = 0;
            char var18[0x40];
            __clear(var18, sizeof(var18));
            char var19[0x20];
            __clear(var19, sizeof(var19));
            sprintf(var18, data_ov023_021fe2a0, var13->unknown_150_->unknown_49c_.unknown_0_0_);
            sprintf(var19, data_ov023_021fe2b7, var13->unknown_150_->unknown_49c_.unknown_0_0_);
            void* var20 = ExtractFileFromGP2((const char*)(var18), (const char*)(var19), (unsigned int*)(&var17));
            if (var20 != NULL)
                var14.LoadSubsetFromMemory((SafeAllocator*)(&arg0->unknown_30_), (void*)(var20), var17, (const short*)(var7), (unsigned short)var10);
            BackgroundLoader::RemoveLockGlobal();
            arg0->unknown_55d0_ = (Struct_ov023_021f3aac_9*)arg0->unknown_30_.Allocate(var10 * sizeof(Struct_ov023_021f3aac_9));
            for (var9 = 0; var9 < var10; var9++)
            {
                void* var21 = FindAccolade_020a15bc((AccoladeTable_020a15bc*)arg0->unknown_55c8_, var7[var9]);
                if (var21 == NULL)
                    continue;
                const char* var22 = var14.GetString(var7[var9]);
                if (var22 == NULL)
                    continue;
                func_ov023_021f222c((Struct_ov023_021f1868_11*)&arg0->unknown_55d0_[var9]);
                func_ov023_021f229c(&arg0->unknown_55d0_[var9], var21);
                func_ov023_021f2304(&arg0->unknown_55d0_[var9], (char*)var22);
            }
            arg0->unknown_55c8_ = NULL;

#endif
            arg0->unknown_55d4_ = var10;
            var11->Reset();
            var0->unknown_0_++;
        }
        else if (var10 == 0)
        {
            arg0->unknown_30_.Reset();
            arg0->unknown_55c4_ = NULL;
            arg0->unknown_77d1_ = 0;
            return 0x10;
        }
    }
    else if (var2 == 4)
    {
        arg0->unknown_55cc_ = (Struct_ov023_021f3aac*)arg0->unknown_30_.Allocate(0x44c);
        InitAccoladeDisplay_ov023_021eb138(arg0->unknown_55cc_, 2);
        AllocateAccoladeDisplayBuffers_ov023_021eb080(arg0->unknown_55cc_, &arg0->unknown_30_);
        SetAccoladeDisplayEntries_ov023_021eb564(arg0->unknown_55cc_, arg0->unknown_55d0_, arg0->unknown_55d4_);
        func_ov023_021f2348(arg0->unknown_55cc_, arg0->unknown_55d5_);
        var0->unknown_0_++;
    }
    else if (var2 == 5)
    {
        if (arg0->unknown_55cc_->unknown_438_ & GUIDE_WINDOW_MESSAGE_WINDOW)
            var0->unknown_0_ = var2 + 1;
    }
    else if (var2 == 6)
    {
        DestroyAccoladeDisplay_ov023_021eb26c(arg0->unknown_55cc_);
        arg0->unknown_30_.Reset();
        arg0->unknown_55cc_ = NULL;
        arg0->unknown_55d0_ = NULL;
        arg0->unknown_55d4_ = 0;
        arg0->unknown_55d5_ = 0;
        arg0->unknown_77d1_ = 0;
        return 0x10;
    }
    return arg0->unknown_eac_;
}
