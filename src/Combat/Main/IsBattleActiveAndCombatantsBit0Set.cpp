#include <globaldefs.h>
#include "GameState/GameState.h"

struct Obj02086b98;
int AreListedCombatantsBit0Set(struct Obj02086b98*);

// USA: func_0209c140
ARM int IsBattleActiveAndCombatantsBit0Set() {
    GameState* bs = GameState::GetInstance();
    if (bs != NULL) {
        struct Obj02086b98* o = (struct Obj02086b98*)GetPtrField0x2a04((GameState*)(bs));
        if (o != NULL) {
            if (AreListedCombatantsBit0Set(o) != 0) {
                return 1;
            }
        }
    }
    return 0;
}
