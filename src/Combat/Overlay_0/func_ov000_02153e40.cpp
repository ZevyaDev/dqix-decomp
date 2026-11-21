#include <globaldefs.h>

extern "C" int CollectPartyCombatantIndices_ov000_0215e9fc(void* battle, short* indices, int maxCount, int filterFlags);
extern "C" int CollectEnemyCombatantIndices_ov000_0215eb1c(void* battle, short* indices, int maxCount, int filterFlags);

// USA: CollectCombatantIndices_ov000_02153e40
extern "C" ARM int CollectCombatantIndices_ov000_02153e40(void* battle, short* indices, int maxCount, int filterFlags) {
    int count = 0;
    count = count + CollectPartyCombatantIndices_ov000_0215e9fc(battle, indices, maxCount, filterFlags);
    return count + CollectEnemyCombatantIndices_ov000_0215eb1c(battle, indices + count, maxCount - count, filterFlags);
}
