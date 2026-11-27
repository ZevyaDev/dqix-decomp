#include <globaldefs.h>

struct ActionActor_ov000_0215767c_6 {
    char unknown_0_[0x30];
    struct ActionActor_ov000_0215767c_6* pNext_30_;
};
struct BattleAction_ov000_0215767c_7 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[7];
    struct ActionActor_ov000_0215767c_6* unknown_10_;
};

// USA: AppendActionActor_ov000_02160068
extern "C" ARM void AppendActionActor_ov000_02160068(struct BattleAction_ov000_0215767c_7* action, struct ActionActor_ov000_0215767c_6* actor) {
    struct ActionActor_ov000_0215767c_6** link = &action->unknown_10_;
    while (*link != NULL) {
        link = &(*link)->pNext_30_;
    }
    *link = actor;
    action->unknown_8_++;
}
