#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int IsDead_02010088(struct Struct_02010088* object);
extern "C" int HasLeftBattle_ov000_02153c0c(GameObject* combatant);
extern "C" GameObject* GetEnemyByIndex_0200fea4(GameState* gameState, int index);

struct Enemy_ov000_02153e78 {
    char unknown_0_[0x17c];
    unsigned char groupIndex_17c_;
};

struct EnemyGroup_ov000_02153e78_2 {
    char unknown_0_[2];
    unsigned char enemySlots_2_[8];
    unsigned char enemyCount_a_0_ : 4;
    char unknown_b_[0x18 - 0xb];
};

struct Battle_ov000_02153e78_3 {
    char unknown_0_[0x81b1];
    unsigned char : 4;
    unsigned char enemyGroupCount_81b1_4_ : 2;
    char unknown_81b2_[0x81b4 - 0x81b2];
    struct EnemyGroup_ov000_02153e78_2 enemyGroups_81b4_[1];
};

// USA: CollectEnemyGroupCombatantIndices_ov000_02153e78
extern "C" ARM int CollectEnemyGroupCombatantIndices_ov000_02153e78(struct Battle_ov000_02153e78_3* battle, short* indices, int maxCount, int groupIndex, int filterFlags) {
    GameState* gameState = GameState::GetInstance();
    int count = 0;
    struct EnemyGroup_ov000_02153e78_2* groups = battle->enemyGroups_81b4_;
    int i;
    for (i = 0; i < battle->enemyGroupCount_81b1_4_; i++) {
        unsigned char* enemySlots = groups[i].enemySlots_2_;
        int j;
        for (j = 0; j < groups[i].enemyCount_a_0_; j++) {
            GameObject* enemy = GetEnemyByIndex_0200fea4(gameState, enemySlots[j] + 0xc0);
            if (enemy == NULL) continue;
            if (groupIndex != ((struct Enemy_ov000_02153e78*)enemy)->groupIndex_17c_) continue;
            if (!(filterFlags & 0x10) && HasLeftBattle_ov000_02153c0c(enemy)) continue;
            if ((filterFlags & 1) && IsDead_02010088((struct Struct_02010088*)enemy)) continue;
            indices[count] = enemySlots[j] + 0xc0;
            count++;
            if (count == maxCount) return count;
        }
    }
    return count;
}
