#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/MessageSystem.h"

extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);
extern "C" unsigned short func_ov023_021f6f10(void*);
extern "C" void* func_ov023_021fa598(void*);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" int func_020ab7a8(void* arg0, int arg1);
struct GlobalFlags_02038598_4;
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);
extern "C" void func_02012028(void* arg0, unsigned char arg1);

struct Struct_ov004_02171034_3 {
    #if defined(jpn)
    unsigned char unknown_0_[0xc];
#else
    unsigned char unknown1_0_[0x10];
#endif
    unsigned char* unknown_10_;
};
extern struct Struct_ov004_02171034_3 data_ov004_02171034;

// USA: func_ov004_0216dd78
extern "C" ARM int func_ov004_0216dd78(void* arg0) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
    void* var1 = FindMenuObjectById_ov023_021f6880(var0, 0x192);
    if (!var1) return 0;
    if (func_ov023_021f6f10(var1) != 4) return 0;

    void* var2 = func_ov023_021fa598(var1);
    void* var3 = GameState::GetInstance();
    MessageWindow_02021b84* var4 = (MessageWindow_02021b84*)GetMessageWindow_020421a0();
    struct GlobalFlags_02038598_4* var5 = (struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00();
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();

    int var6 = 1;
    void* var7 = FindMenuObjectById_ov023_021f6880(var0, 2);
    if (!var7) return 0;
    if (func_ov023_021f6f10(var7) != 0xb) return 0;

    *(unsigned char*)((char*)var7 + 0xc) &= ~8;
    var4->unknown_19ca_ = 0;
    var4->unknown_19af_ = 0;

    int var8 = func_020ab7a8((void*)data_ov004_02171034.unknown_10_, var6);
    if (var8 == 5) {
        ClearGlobalFlags_020466f4(var5, 0x80);
        data_ov004_02171034.unknown_10_[1] = 0;
        QueueMenuScriptEntry_ov011_021848a0(arg0, 0x194);
        var6 = 0;
    } else if (var8 == 1) {
        ClearGlobalFlags_020466f4(var5, 0x80);
        data_ov004_02171034.unknown_10_[1] = 0;
        void* var9 = FindStringInList_02072a68((struct StringList_02072a68_2*)var2, 0x5dc);
#if defined(jpn)
        StartMessage_0204500c(var4, (const char*)var9, 0);
#else
        StartMessage_0204500c(var4, (const char*)var9, 0, 0xe3);
#endif
        func_02012028(var3, 0);
        var6 = 0;
    } else if (var8 == 2) {
        ClearGlobalFlags_020466f4(var5, 0x80);
        data_ov004_02171034.unknown_10_[1] = 0;
        void* var10 = FindStringInList_02072a68((struct StringList_02072a68_2*)var2, 0x5dd);
#if defined(jpn)
        StartMessage_0204500c(var4, (const char*)var10, 0);
#else
        StartMessage_0204500c(var4, (const char*)var10, 0, 0xe3);
#endif
        func_02012028(var3, 0);
        var6 = 0;
    } else if (var8 == 3) {
        ClearGlobalFlags_020466f4(var5, 0x80);
        data_ov004_02171034.unknown_10_[1] = 0;
        QueueMenuScriptEntry_ov011_021848a0(arg0, 0x195);
        var6 = 0;
    }

    if (var6 == 0) {
        *(unsigned char*)((char*)var7 + 0xc) |= 8;
    }
    BackgroundLoader::RemoveLockGlobal();
    return var6;
}
