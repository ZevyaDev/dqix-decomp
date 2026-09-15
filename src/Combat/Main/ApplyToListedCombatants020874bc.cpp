#include <globaldefs.h>
#include "GameState/GameState.h"

GameObject* GetCombatantWithFlag0x1000(GameState* battleStruct, int combatantId);
struct S02037418;
extern "C" void _ZN8Object3D17SetInheritedAlphaEi(struct S02037418* obj, int val);

struct Party020874bc {
    char pad[0xf78];
    unsigned char ids[4];   // 0xf78
    unsigned char count;    // 0xf7c
};

// USA: func_020874bc
ARM void ApplyToListedCombatants020874bc(struct Party020874bc* party, int val) {
    GameState* bs = GameState::GetInstance();
    unsigned char i;
    for (i = 0; i < party->count; i++) {
        GameObject* c = GetCombatantWithFlag0x1000(bs, party->ids[i]);
        if (c != NULL) {
            _ZN8Object3D17SetInheritedAlphaEi((struct S02037418*)c, val);
        }
    }
}
