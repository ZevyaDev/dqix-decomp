#include <globaldefs.h>

struct Struct_02064530 {
    char unknown_0_[0x14];
    struct Struct_02064530* unknown_14_;  // 0x14
};

extern "C" int RunTriggerAction_02061c04(void*, struct Struct_02064530*, void*);

// USA: RunTriggerActions_02064530
extern "C" ARM int RunTriggerActions_02064530(void* flagManager, struct Struct_02064530* actions, void* triggerResult) {
    while (actions != NULL) {
        if (RunTriggerAction_02061c04(flagManager, actions, triggerResult) == 0) return 0;
        actions = actions->unknown_14_;
    }
    return 1;
}
