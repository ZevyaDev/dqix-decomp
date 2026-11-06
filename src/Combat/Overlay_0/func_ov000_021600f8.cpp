#include <globaldefs.h>

struct ActionTarget_ov000_021600f8 {
    char unknown_0_[0x20];
    struct ActionTarget_ov000_021600f8* pNext_20_;
};

struct BattleAction_ov000_0215440c {
    char unknown_0_[9];
    unsigned char unknown_9_;
    char unknown_a_[10];
    struct ActionTarget_ov000_021600f8* unknown_14_;
};

// USA: GetActionTarget_ov000_021600f8
extern "C" ARM struct ActionTarget_ov000_021600f8* GetActionTarget_ov000_021600f8(struct BattleAction_ov000_0215440c* action, int index) {
    struct ActionTarget_ov000_021600f8* target;
    int i;
    if (action->unknown_9_ <= index) return 0;
    target = action->unknown_14_;
    i = 0;
    while (i < index && target != 0) {
        target = target->pNext_20_;
        i++;
    }
    return target;
}
