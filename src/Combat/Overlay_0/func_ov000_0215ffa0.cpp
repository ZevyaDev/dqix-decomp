#include <globaldefs.h>

// USA: GetLatestTargetCombatantIndex_ov000_0215ffa0
extern "C" ARM short GetLatestTargetCombatantIndex_ov000_0215ffa0(void *entry) {
    unsigned char *target = (unsigned char*)entry;
    int lastSlot;
    unsigned char indexCount = target[0x17];
    lastSlot = indexCount - 1;
    if (indexCount > 3) lastSlot = 2;
    if (indexCount == 0) lastSlot = 0;
    return *(short*)((char*)target + lastSlot * 2 + 0xe);
}
