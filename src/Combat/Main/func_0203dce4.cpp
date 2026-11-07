#include <globaldefs.h>

#include "Combat/EntryGetterTypes.h"

struct NPCManager_0203dce4_2 {
    char unknown_0_[0xc];
    struct NPC_0203dce4* npcs_c_[0x20];
};

// USA: GetNPCByIndex_0203dce4
extern "C" ARM struct NPC_0203dce4* GetNPCByIndex_0203dce4(struct NPCManager_0203dce4_2* npcManager, int index) {
    struct NPC_0203dce4* npc;
    if ((unsigned int)index >= 0x20) {
        return 0;
    }
    npc = npcManager->npcs_c_[index];
    if (npc != 0 && (npc->flags_0_ & 0x8000)) {
        npc = 0;
    }
    return npc;
}
