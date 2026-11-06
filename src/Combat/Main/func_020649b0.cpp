#include <globaldefs.h>

struct Struct_02064530;
struct Trigger_020649b0 { char unknown_0_[0xc]; void* pActions_c_; };

extern "C" struct Trigger_020649b0* func_02064490(void*, int, void*);
extern "C" int func_02064530(void* arg0, struct Struct_02064530* arg1, void* arg2);

// USA: RunTrigger_020649b0
extern "C" ARM int RunTrigger_020649b0(void* flagManager, int triggerType, void* triggerResult) {
    struct Trigger_020649b0* trigger = func_02064490(flagManager, triggerType, triggerResult);
    if (trigger == NULL) return 0;
    *(int*)((char*)triggerResult + 0x30) = 0;
    return func_02064530(flagManager, (struct Struct_02064530*)trigger->pActions_c_, triggerResult) != 0;
}
