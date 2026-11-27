#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif


extern "C" void func_020c9be0(void);
extern "C" void InitScriptVM_ov017_021d4c04(void*, int, void*, int, void*, int);
extern "C" void SetQuestBattleScriptNatives_0209dc4c(void* scriptVM);

extern void* data_02109d88;

struct Struct_0209fd64 {
    char unknown_0_[0x8];
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[0x1000];
};

// USA: LoadQuestBattleScript_0209fd64
extern "C" ARM void LoadQuestBattleScript_0209fd64(struct Struct_0209fd64* script, struct SafeAllocator* allocator, int scriptData, int scriptSize) {
    data_02109d88 = script;
    script->unknown_8_ = scriptData;
    script->unknown_c_ = scriptSize;

    void* var0 = allocator->Allocate(0x400);
    void* var1 = allocator->Allocate(0x1800);
    if (var0 == NULL || var1 == NULL) {
        func_020c9be0();
    }

    InitScriptVM_ov017_021d4c04(&script->unknown_10_, script->unknown_8_, var0, 0x80, var1, 0x200);
    SetQuestBattleScriptNatives_0209dc4c(&script->unknown_10_);
}
