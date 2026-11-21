#include <globaldefs.h>

#include "Combat/Main/BattleList.h"
#include "Combat/ResourceScriptEntry.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

#if defined(jpn)
enum { Enum_020897b4_2384 = 0x8b8 };
#else
enum { Enum_020897b4_2384 = 0x950 };
#endif

struct Struct_02013fb4;
struct SpellTable_02086f24_6 { void* pBlock_0_; };

extern char data_020f1019[];
extern char data_020f102e[];

extern "C" int func_02053c6c(unsigned char* gameObject);
extern "C" void* ClearLevelEntries_0208247c(void* levelEntries);
extern "C" int func_0208274c(void* arg0, Struct_02013fb4* arg1, int arg2, int arg3);
extern "C" void SetLevelStats_02083cbc(void* memberData, void* arg1, void* arg2);
extern "C" void CalculatePartyMemberStats_02083e28(void* memberData, int outStats);
extern "C" void func_02083b8c(unsigned char* arg0, unsigned char* arg1, unsigned int arg2);
extern "C" void ClearSpellTable_0209a804(int* table);
extern "C" void BuildSpellTable_0209a8b4(SpellTable_02086f24_6* table, SafeAllocator* allocator, Struct_02013fb4* scriptData, int scriptSize);
extern "C" int func_0209aa54(void* arg0, unsigned char* arg1, unsigned char* arg2, int arg3);
extern "C" void func_ov017_021ce614(unsigned char arg0, unsigned char arg1, unsigned char arg2);

struct Struct_020897b4 {
    unsigned char unknown_0_[0x138];
    unsigned int unknown_138_[13];
    unsigned short unknown_16c_[13];
    unsigned char unknown_186_[0x564 - 0x186];
    unsigned short unknown_564_;
    unsigned char unknown_566_[Enum_020897b4_2384 - 0x566];
    int unknown_950_;
    unsigned short unknown_954_;
};

struct Struct_020897b4_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_020897b4_3 {
    unsigned char unknown_0_[0x130];
    Struct_020897b4_2* unknown_130_;
};

// USA: func_020897b4
extern "C" ARM void func_020897b4(unsigned char arg0, unsigned char arg1, int arg2, unsigned char arg3,
                                 unsigned char arg4, void* arg5, unsigned int arg6, void* arg7, unsigned int arg8) {
    char var0[0x50];
    LevelEntries_0201099c_2 var1;
    char var2[0x600];
    unsigned int var5;
    SpellTable_02086f24_6 var6;

    GameObject* var7 = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), arg0);
    if (var7 == 0) {
        return;
    }
    BackgroundLoader::AddLockGlobal();

    if (arg5 == 0) {
        sprintf(var0, data_020f1019, arg2);
        if (LoadFileIntoMemory(var0, &g_fileScratchSpace, &var5) == 0) {
            BackgroundLoader::RemoveLockGlobal();
            return;
        }
        arg5 = &g_fileScratchSpace;
        arg6 = var5;
    }

    ClearLevelEntries_0208247c(&var1);
    func_0208274c(&var1, (Struct_02013fb4*)arg5, arg6, arg1);

    LevelEntries_0201099c_2* const var8 = &var1;
    Struct_020897b4* var9 = reinterpret_cast<Struct_020897b4*>(func_02053c6c((unsigned char*)var7));
    var9->unknown_954_ |= 1 << arg2;
    var9->unknown_950_ = arg2;
    var9->unknown_16c_[arg2] = arg1;
    var9->unknown_138_[arg2] = var8->requestedLevelEntry_0_.requiredExperience_0_0_;
    var9->unknown_564_ = var8->requestedLevelEntry_0_.unknown_4_7_;
    SetLevelStats_02083cbc(var9, var8, var1.unknown_3c_);

    if (arg4 != 0) {
        CalculatePartyMemberStats_02083e28(var9, 0);
        Struct_020897b4_3* var10 = reinterpret_cast<Struct_020897b4_3*>(var7);
        var10->unknown_130_->unknown_4_ = var7->baseStats_->primaryStats.maxHP;
        var10->unknown_130_->unknown_6_ = var7->baseStats_->primaryStats.maxMP;
    }

    if (arg7 == 0) {
        if (LoadFileIntoMemory(data_020f102e, &g_fileScratchSpace, &var5) != 0) {
            arg7 = &g_fileScratchSpace;
            arg8 = var5;
        }
    }

    if (arg7 != 0) {
        SafeAllocator var3;
        unsigned char var4[0x14];
        var3.CreateTypeA(var2, 0x600);
        ClearSpellTable_0209a804((int*)&var6);
        BuildSpellTable_0209a8b4(&var6, &var3, (Struct_02013fb4*)arg7, arg8);
        unsigned int var11 = func_0209aa54(&var6, (unsigned char*)var7, var4, 0);
        func_02083b8c(reinterpret_cast<unsigned char*>(var9), var4, var11);
        var3.Destroy();
    }

    if (arg3 != 0) {
        func_ov017_021ce614(arg0, arg1, arg4);
    }

    BackgroundLoader::RemoveLockGlobal();
}
