#include <globaldefs.h>

struct Struct_02064b24_2 {
    unsigned short unknown_0_;
    char unknown_2_[0x12];
    struct Struct_02064b24_2* unknown_14_;
};

struct Struct_02064b24 { char unknown_0_[0xc]; void* unknown_c_; };

extern "C" struct Struct_02064b24* FindMatchingTrigger_02064490(void*, int, void*);
extern "C" int RunTriggerAction_02061c04(void*, struct Struct_02064b24_2*, void*);

// USA: RunTriggerActionsOfType_02064b24
extern "C" ARM int RunTriggerActionsOfType_02064b24(void* flagManager, int triggerType, unsigned short actionType, void* triggerResult) {
    struct Struct_02064b24* var0 = FindMatchingTrigger_02064490(flagManager, triggerType, triggerResult);
    if (var0 == NULL) return 0;
    *(int*)((char*)triggerResult + 0x30) = 0;
    struct Struct_02064b24_2* var1 = (struct Struct_02064b24_2*)var0->unknown_c_;
    for (; var1 != NULL; var1 = var1->unknown_14_) {
        if (var1 != NULL && var1->unknown_0_ == actionType) {
            if (RunTriggerAction_02061c04(flagManager, var1, triggerResult) == 0) return 0;
        }
    }
    return 1;
}
