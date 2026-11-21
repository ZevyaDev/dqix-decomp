#include <globaldefs.h>

#include "Combat/NodeLookup.h"

// USA: FindNPCPlacement_0206db20
extern "C" ARM struct NPCPlacement_0206db20* FindNPCPlacement_0206db20(void* placementList, int npcId) {
    struct NPCPlacement_0206db20* placement = *(struct NPCPlacement_0206db20**)placementList;
    while (placement != 0) {
        if (placement->npcId_0_ == npcId) {
            return placement;
        }
        placement = placement->pNext_68_;
    }
    return 0;
}
