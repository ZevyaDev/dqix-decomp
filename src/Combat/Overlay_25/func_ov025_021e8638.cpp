#include <globaldefs.h>
#include "Resource/GameResources.h"

struct BattleAction_ov000_0215440c_2;
struct ActionActor_ov000_02160094;

extern "C" struct ActionActor_ov000_02160094* GetActionActor_ov000_02160094(struct BattleAction_ov000_0215440c_2* action, int index);
extern "C" void func_ov017_0219230c(void* arg0, int arg1, int arg2);

struct Struct_ov025_021e8638 {
    char unknown_0_[0x8];
    signed char unknown_8_;
};

// USA: func_ov025_021e8638
extern "C" ARM int func_ov025_021e8638(struct Struct_ov025_021e8638* arg0, struct BattleAction_ov000_0215440c_2* arg1) {
    void* var0 = GetGameResources();
    struct ActionActor_ov000_02160094* var1 = GetActionActor_ov000_02160094(arg1, 0);
    func_ov017_0219230c(var0, *(unsigned short*)((char*)var1 + 0x20), arg0->unknown_8_);
    return 1;
}
