#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int _ZNK8Object3D7GetFlagEi(void* obj, int mask);
extern "C" void _ZN8Object3D14AdvanceEffectsEv(void* obj);

// USA: func_ov017_02197394
ARM void AdvanceCombatantsInRange_02197394(void) {
    GameState* bs = GameState::GetInstance();
    int id;
    for (id = 0xa0; id < 0xc0; id++) {
        GameObject* combatant = bs->GetGameObjectByIndex(id);
        if (!combatant) continue;
        if (_ZNK8Object3D7GetFlagEi(combatant, 0x40000000) != 0) continue;
        _ZN8Object3D14AdvanceEffectsEv(combatant);
    }
}
