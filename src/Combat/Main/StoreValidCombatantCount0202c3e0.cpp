#include <globaldefs.h>
#include "GameState/GameState.h"

void CollectValidCombatants02010890(GameState* bs, int* outList, int* outCount);

// USA: func_0202c3e0
ARM void StoreValidCombatantCount0202c3e0(void* obj) {
    GameState* bs = GameState::GetInstance();
    int list[4];
    int count;
    CollectValidCombatants02010890(bs, list, &count);
    *((unsigned char*)obj + 0x1027) = (unsigned char)count;
}
