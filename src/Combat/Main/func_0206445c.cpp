#include <globaldefs.h>

struct Struct_02061c04_25 {
    char unknown_0_[0x18];
    struct Struct_02061c04_25* unknown_18_;
};

struct Struct_02061c04_26 {
    char unknown_0_[0x30];
    struct Struct_02061c04_25* unknown_30_;
};

// USA: DeferTriggerAction_0206445c
extern "C" ARM void DeferTriggerAction_0206445c(int flagManager, struct Struct_02061c04_25* action, struct Struct_02061c04_26* triggerResult) {
    struct Struct_02061c04_25* var0;
    action->unknown_18_ = 0;
    var0 = triggerResult->unknown_30_;
    if (var0 == 0) {
        triggerResult->unknown_30_ = action;
        return;
    }
    while (var0->unknown_18_ != 0) {
        var0 = var0->unknown_18_;
    }
    var0->unknown_18_ = action;
}
