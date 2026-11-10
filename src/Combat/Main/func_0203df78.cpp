#include <globaldefs.h>
extern "C" unsigned short* GetNPCData_02040528(int*);

struct NPCManager_0203df78 { char unknown_0_[0xc]; void* npcs_c_[0x20]; };

// USA: FindNPCById_0203df78
extern "C" ARM void* FindNPCById_0203df78(void* npcManager, int id) {
    int i;
    for (i = 0; i < 0x20; i++) {
        void* npc = ((struct NPCManager_0203df78*)npcManager)->npcs_c_[i];
        if (npc == NULL) continue;
        if (*(int*)npc & 0x8000) continue;
        {
            unsigned short* npcData = GetNPCData_02040528((int*)(npc));
            if (npcData == NULL) continue;
            if (*npcData == id) return ((struct NPCManager_0203df78*)npcManager)->npcs_c_[i];
        }
    }
    return NULL;
}
