#include <globaldefs.h>

// USA: SetNPCPlacement_02040530
extern "C" ARM void SetNPCPlacement_02040530(int* npc, int placement) {
    npc[3] = placement;
}
