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
extern "C" struct ActionActor_ov000_02160094* GetActionActor_ov000_02160094(struct BattleAction_ov000_0215440c_2* action, int index);
extern "C" int CollectPartyCombatantIndices_ov000_0215e9fc(void* battle, short* indices, int maxCount, int filterFlags);
extern "C" int func_ov000_0215ec1c(void* arg0, short* arg1, int arg2, int arg3);

// USA: func_ov000_02181abc
extern "C" ARM int func_ov000_02181abc(void* arg0, struct BattleAction_ov000_0215440c_2* arg1, int* arg2) {
    struct ActionActor_ov000_02160094* var0 = GetActionActor_ov000_02160094(arg1, 0);
    short var1[16];
    int var2;
    int var3;
    if (var0 == 0) {
        return 0;
    }
    var2 = 0;
    var2 = var2 + CollectPartyCombatantIndices_ov000_0215e9fc(arg0, var1, 0x10, var2);
    var2 = var2 + func_ov000_0215ec1c(arg0, var1 + var2, 0x10 - var2, 0);
    for (var3 = 0; var3 < var2; var3++) {
        arg2[var3] = var1[var3];
    }
    return var2;
}
