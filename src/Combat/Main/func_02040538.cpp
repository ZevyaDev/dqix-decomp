#include <globaldefs.h>

#include "Combat/EntryGetterTypes.h"

// USA: GetNPCPlacement_02040538
extern "C" ARM void* GetNPCPlacement_02040538(struct NPC_0203e0a0* npc) {
    return npc->pPlacement_c_;
}
