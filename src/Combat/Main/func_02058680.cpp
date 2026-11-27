#include <globaldefs.h>

// USA: CollectEffectSlotsByEffectId_02058680
extern "C" ARM int CollectEffectSlotsByEffectId_02058680(char* effectManager, int effectId, void** outSlots, int maxCount) {
    int count = 0;
    if (maxCount == 0) {
        int slotIndex;
        for (slotIndex = 0; slotIndex < 0x10; slotIndex++) {
            if (effectId == *(int*)(effectManager + slotIndex * 0xd4 + 0xd8)) count++;
        }
    } else {
        int slotIndex;
        for (slotIndex = 0; slotIndex < 0x10; slotIndex++) {
            int slotOffset = slotIndex * 0xd4;
            if (effectId == *(int*)(effectManager + slotOffset + 0xd8)) {
                if (count < maxCount) {
                    outSlots[count++] = (effectManager + 8) + slotOffset;
                }
            }
        }
    }
    return count;
}
