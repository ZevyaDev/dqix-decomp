#include <globaldefs.h>

#include "GameState/GameState.h"

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
struct Struct_02046574_2;
extern "C" struct Struct_02046574_2* GetMessageWindow_020421a0(void);
extern "C" void* GetBattleScene_ov000_02160130(void);
extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" void SetMessageString_02046574(struct Struct_02046574_2* window, int index, char* text);

struct Struct_ov025_021e5e84 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

// USA: func_ov025_021e5e84
extern "C" ARM int func_ov025_021e5e84(struct Struct_ov025_021e5e84* arg0, int arg1, int arg2, void* arg3) {
    int var0[8];
    if (func_ov000_021820bc(arg3, arg1, arg0->unknown_9_, (int)&var0[0]) != 1) {
        return 1;
    }

    GameState* var1 = GameState::GetInstance();
    struct Struct_02046574_2* var2 = GetMessageWindow_020421a0();
    int var3 = var0[0];
    GetBattleScene_ov000_02160130();
#if defined(jpn)
    GameObject* var4 = var1->GetCombatantByIndex(var3);
    if (var4 != NULL) {
        SetMessageString_02046574(var2, arg0->unknown_8_, (char*)var4->baseStats_);
    }
#else
    var1->GetCombatantByIndex(var3);

    int var5 = (var3 >= 0 && var3 <= 3) ? 1 : 0;
    if (var5) {
        GameObject* var6 = GetPartyMemberBaseByIndex_0200ff1c(var1, var3);
        if (var6 != NULL) {
            SetMessageString_02046574(var2, arg0->unknown_8_, (char*)var6->baseStats_);
        }
    } else {
        GameObject* var7 = func_0200fea4(var1, var3);
        if (var7 != NULL) {
            SetMessageString_02046574(var2, arg0->unknown_8_, (char*)var7 + 0x14c);
        }
    }
#endif
    return 1;
}
