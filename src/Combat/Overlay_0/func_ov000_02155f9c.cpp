#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int IsDead_02010088(struct Struct_02010088* object);
extern "C" int HasLeftBattle_ov000_02153c0c(GameObject* combatant);
extern "C" int func_ov000_02156038(GameObject* arg0);
extern "C" int IsAsleep_020882f8(unsigned char* currentStats);
extern "C" int func_ov000_02156050(GameObject* arg0);
extern "C" int func_ov000_021543f4(GameObject* arg0);

// USA: IsCombatantIncapacitated_ov000_02155f9c
extern "C" ARM int IsCombatantIncapacitated_ov000_02155f9c(void* battle, int combatantIndex, int isConfusionCounted) {
    GameState* gameState = GameState::GetInstance();
    GameObject* combatant = gameState->GetCombatantByIndex(combatantIndex);
    if (combatant == 0) {
        return 1;
    }
    if (IsDead_02010088((struct Struct_02010088*)combatant) ||
        HasLeftBattle_ov000_02153c0c(combatant) ||
        func_ov000_02156038(combatant) ||
        IsAsleep_020882f8((unsigned char*)combatant->currentStats_) ||
        func_ov000_02156050(combatant)) {
        return 1;
    }
    if (isConfusionCounted != 0 && func_ov000_021543f4(combatant)) {
        return 1;
    }
    return 0;
}
