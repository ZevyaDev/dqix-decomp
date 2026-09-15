#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
int AbsPlus159IfNegative0215ad2c(int x);
extern "C" void _ZN8Object3D10EnableFlagEi(unsigned char* obj, unsigned int mask);
extern "C" void _ZN8Object3D11DisableFlagEi(unsigned char* obj, unsigned int mask);

// USA: func_ov001_0215eeb0
ARM int SetOrClearCombatantFlag6c_0215eeb0(void* self) {
    GameState* battle = GameState::GetInstance();
    int id = AbsPlus159IfNegative0215ad2c(func_ov017_021d60f4(self));
    int flag = func_ov017_021d60f4((char*)self + 0x8);
    int mask = func_ov017_021d60f4((char*)self + 0x10);
    GameObject* combatant = battle->GetGameObjectByIndex(id);
    if (combatant == NULL) return 0;
    if (mask != 0) {
        _ZN8Object3D10EnableFlagEi((unsigned char*)combatant, flag);
    } else {
        _ZN8Object3D11DisableFlagEi((unsigned char*)combatant, flag);
    }
    return 1;
}
