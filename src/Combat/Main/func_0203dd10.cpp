#include <globaldefs.h>

struct Struct_0203dd10 {
    unsigned char unknown_0_[0xc];
    int npcs_c_[0x20];
};

// USA: SetNPCByIndex_0203dd10
extern "C" ARM void SetNPCByIndex_0203dd10(Struct_0203dd10* npcManager, unsigned int index, int npc) {
    if (index < 0x20) npcManager->npcs_c_[index] = npc;
}
