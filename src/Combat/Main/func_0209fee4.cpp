#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif


extern "C" void func_020c9be0(void);
extern "C" void InitScriptVM_ov017_021d4c04(void*, int, void*, int, void*, int);
extern "C" void SetSelectionScriptNatives_ov023_021eb000(void*);

extern void* data_02109d8c;

struct SelectionScript_0209fee4 {
    char unknown_0_[0x4];
    int scriptData_4_;
    int scriptSize_8_;
    char scriptVM_c_[0x1000];
};

// USA: LoadSelectionScript_0209fee4
extern "C" ARM void LoadSelectionScript_0209fee4(struct SelectionScript_0209fee4* script, struct SafeAllocator* allocator, int scriptData, int scriptSize) {
    data_02109d8c = script;
    script->scriptData_4_ = scriptData;
    script->scriptSize_8_ = scriptSize;

    void* valueStack = allocator->Allocate(0x400);
    void* callStack = allocator->Allocate(0x1800);
    if (valueStack == NULL || callStack == NULL) {
        func_020c9be0();
    }

    InitScriptVM_ov017_021d4c04(&script->scriptVM_c_, script->scriptData_4_, valueStack, 0x80, callStack, 0x200);
    SetSelectionScriptNatives_ov023_021eb000(&script->scriptVM_c_);
}
