#include <globaldefs.h>

struct ActionActor_ov000_02160094 {
    char unknown_0_[0x20];
    short unknown_20_;
};
struct BattleAction_ov000_0215440c_2;
extern "C" ActionActor_ov000_02160094* GetActionActor_ov000_02160094(BattleAction_ov000_0215440c_2* action, int index);

struct ActionTarget_ov000_021600f8 {
    char unknown_0_[0xe];
    short unknown_e_;
};
struct BattleAction_ov000_0215440c;
extern "C" ActionTarget_ov000_021600f8* GetActionTarget_ov000_021600f8(BattleAction_ov000_0215440c* action, int index);

extern "C" int CollectPartyCombatantIndices_ov000_0215e9fc(void* battle, short* indices, int maxCount, int filterFlags);
extern "C" int CollectAllEnemyCombatantIndices_ov000_0215ec1c(void* battle, short* indices, int maxCount, int arg3);

static inline int inline_ov000_02156cc4_2(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

static inline int inline_ov000_0218177c(int arg0) {
    return arg0 >= 0xc0 && arg0 <= 0xc7;
}

// USA: func_ov000_0218177c
extern "C" ARM int func_ov000_0218177c(void* arg0, void* arg1, int arg2, int arg3, int* arg4) {
    short var0[12];
    int var1;
    if (arg2) {
        ActionActor_ov000_02160094* var2 = GetActionActor_ov000_02160094((BattleAction_ov000_0215440c_2*)arg1, 0);
        if (var2 == 0) {
            return 0;
        }
        var1 = var2->unknown_20_;
    } else {
        ActionTarget_ov000_021600f8* var3 = GetActionTarget_ov000_021600f8((BattleAction_ov000_0215440c*)arg1, 0);
        if (var3 == 0) {
            return 0;
        }
        var1 = var3->unknown_e_;
    }
    int var4 = 0;
    if (arg3) {
        if (inline_ov000_02156cc4_2(var1)) {
            var4 = CollectPartyCombatantIndices_ov000_0215e9fc(arg0, var0, 12, 0);
        } else if (inline_ov000_0218177c(var1)) {
            var4 = CollectAllEnemyCombatantIndices_ov000_0215ec1c(arg0, var0, 12, 0);
        }
    } else {
        if (inline_ov000_02156cc4_2(var1)) {
            var4 = CollectAllEnemyCombatantIndices_ov000_0215ec1c(arg0, var0, 12, 0);
        } else if (inline_ov000_0218177c(var1)) {
            var4 = CollectPartyCombatantIndices_ov000_0215e9fc(arg0, var0, 12, 0);
        }
    }
    for (int var5 = 0; var5 < var4; var5++) {
        arg4[var5] = var0[var5];
    }
    return var4;
}
