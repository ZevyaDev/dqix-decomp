#include <globaldefs.h>

// USA: SetNPCData_02040520
extern "C" ARM void SetNPCData_02040520(int* npc, int npcData) {
    npc[2] = npcData;
}
