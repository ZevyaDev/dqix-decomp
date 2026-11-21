#include <globaldefs.h>

struct ActionTarget_ov000_0215767c_4 {
    char unknown_0_[0x20];
    struct ActionTarget_ov000_0215767c_4* pNext_20_;
};
struct BattleAction_ov000_0215767c_5 {
    char unknown_0_[9];
    unsigned char targetCount_9_;
    char unknown_a_[0xa];
    struct ActionTarget_ov000_0215767c_4* pFirstTarget_14_;
};

// USA: AppendActionTarget_ov000_021600cc
extern "C" ARM void AppendActionTarget_ov000_021600cc(struct BattleAction_ov000_0215767c_5* action, struct ActionTarget_ov000_0215767c_4* target) {
    struct ActionTarget_ov000_0215767c_4** link = &action->pFirstTarget_14_;
    while (*link != NULL) {
        link = &(*link)->pNext_20_;
    }
    *link = target;
    action->targetCount_9_++;
}
