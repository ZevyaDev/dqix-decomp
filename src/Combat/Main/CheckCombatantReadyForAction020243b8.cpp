#include <globaldefs.h>
#include "GameState/GameState.h"

struct Bits40_37464;
extern "C" int _ZNK8Object3D17GetInheritedAlphaEv(struct Bits40_37464* obj);
extern "C" short _ZNK8Object3D19GetAlphaScaleFactorEv(unsigned char* obj);
extern "C" int _ZNK8Object3D9IsVisibleEv(unsigned char* obj);

// USA: func_020243b8
ARM int CheckCombatantReadyForAction020243b8(void* unused, int combatantId) {
    if (combatantId < 0) {
        return 1;
    }
    GameObject* combatant = GetCombatantWithFlag0x100(GameState::GetInstance(), combatantId);
    if (combatant == NULL) {
        return 1;
    }
    if (_ZNK8Object3D17GetInheritedAlphaEv((struct Bits40_37464*)combatant) == 0) {
        return 0;
    }
    if (_ZNK8Object3D19GetAlphaScaleFactorEv((unsigned char*)combatant) == 0) {
        return 0;
    }
    return _ZNK8Object3D9IsVisibleEv((unsigned char*)combatant) != 0;
}
