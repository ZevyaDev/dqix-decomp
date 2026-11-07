#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetEnemyByIndex_0200fea4(GameState* gameState, int index);

struct Struct_ov000_02156068 {
    char unknown_0_[0xa];
    unsigned short unknown_a_0_ : 7;
    unsigned short kind_a_7_ : 4;
    unsigned short unknown_b_3_ : 1;
    unsigned short unknown_b_4_ : 1;
    unsigned short unknown_b_5_ : 3;
};

// USA: HasEnemyTrait_ov000_02156068
extern "C" ARM int HasEnemyTrait_ov000_02156068(int battle, int combatantIndex, int kind, int traitType) {
    int isPartyMember = (combatantIndex >= 0 && combatantIndex <= 3);
    if (isPartyMember) {
        return 0;
    }
    GameState* gameState = GameState::GetInstance();
    GameObject* enemy = GetEnemyByIndex_0200fea4(gameState, combatantIndex);
    if (enemy == NULL) {
        return 0;
    }
    struct Struct_ov000_02156068* species = *(struct Struct_ov000_02156068**)((char*)enemy + 0x144);
    if (species == NULL) {
        return 0;
    }
    if (traitType > 0) {
        if (traitType == 1) {
            if (species->unknown_b_4_) return 1;
        } else {
            if (species->unknown_b_3_) return 1;
        }
    } else {
        if (species->kind_a_7_ == kind) return 1;
    }
    return 0;
}
