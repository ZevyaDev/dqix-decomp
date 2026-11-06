#include <globaldefs.h>
#include <GameState/GameState.h>

struct Struct_ov000_0215eb1c_2 {
    char unknown_0_[6];
    unsigned char unknown_6_[8];
    unsigned char enemyCount_e_0_ : 4;
    unsigned char unknown_e_4_ : 4;
    char unknown_f_[9];
};
struct Struct_ov000_0215eb1c {
    char unknown_0_[0x81b0];
    union {
        struct {
            unsigned char unknown_81b0_;
            unsigned char unknown_81b1_0_ : 4;
            unsigned char enemyGroupCount_81b1_4_ : 2;
            unsigned char unknown_81b1_6_ : 2;
        };
        Struct_ov000_0215eb1c_2 unknown1_81b0_[3];
    };
};
struct Struct_02010088;
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" int func_02010088(Struct_02010088*);

// USA: CollectEnemyCombatantIndices_ov000_0215eb1c
extern "C" ARM int CollectEnemyCombatantIndices_ov000_0215eb1c(Struct_ov000_0215eb1c* battle, short* indices, int maxCount, int filterFlags) {
    int count = 0;
    for (int i = 0; i < battle->enemyGroupCount_81b1_4_; i++) {
        for (int j = 0; j < battle->unknown1_81b0_[i].enemyCount_e_0_; j++) {
            short combatantIndex = battle->unknown1_81b0_[i].unknown_6_[j] + 0xc0;
            GameObject* combatant = GameState::GetInstance()->GetCombatantByIndex(combatantIndex);
            if (!combatant) continue;
            if (!(filterFlags & 0x10) && func_ov000_02153c0c(combatant)) continue;
            if ((filterFlags & 1) && func_02010088((Struct_02010088*)combatant)) continue;
            indices[count++] = combatantIndex;
            if (count == maxCount) return count;
        }
    }
    return count;
}
