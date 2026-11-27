#include <globaldefs.h>
extern "C" unsigned short* GetNPCData_02040528(int*);

struct NPCManager_0203dfdc { char unknown_0_[0xc]; void* npcs_c_[0x20]; };

// USA: FindNPCIndexById_0203dfdc
extern "C" ARM int FindNPCIndexById_0203dfdc(void* npcManager, int id) {
    int i;
    for (i = 0; i < 0x20; i++) {
        void* npc = ((struct NPCManager_0203dfdc*)npcManager)->npcs_c_[i];
        if (npc == NULL) continue;
        if (*(int*)npc & 0x8000) continue;
        {
            unsigned short* npcData = GetNPCData_02040528((int*)(npc));
            if (npcData == NULL) continue;
            if (*npcData == id) return i;
        }
    }
    return -1;
}
