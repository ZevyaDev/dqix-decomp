#include <globaldefs.h>

struct Struct_0203e03c {
    char unknown_0_[0xC];
    int npcs_c_[0x20];
};

// USA: FindFreeNPCSlot_0203e03c
extern "C" ARM int FindFreeNPCSlot_0203e03c(struct Struct_0203e03c* npcManager) {
    int i;
    for (i = 0; i < 0x20; i++) {
        if (npcManager->npcs_c_[i] == 0) {
            return i;
        }
    }
    return -1;
}
