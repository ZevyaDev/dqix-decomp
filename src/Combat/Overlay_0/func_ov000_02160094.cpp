#include <globaldefs.h>

struct ActionActor_ov000_02160094 {
    char unknown_0_[0x30];
    struct ActionActor_ov000_02160094* pNext_30_;
};

struct BattleAction_ov000_0215440c_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[7];
    struct ActionActor_ov000_02160094* unknown_10_;
};

// USA: GetActionActor_ov000_02160094
extern "C" ARM struct ActionActor_ov000_02160094* GetActionActor_ov000_02160094(struct BattleAction_ov000_0215440c_2* action, int index) {
    struct ActionActor_ov000_02160094* actor;
    int i;
    if (action->unknown_8_ <= index) return 0;
    actor = action->unknown_10_;
    i = 0;
    while (i < index && actor != 0) {
        actor = actor->pNext_30_;
        i++;
    }
    return actor;
}
