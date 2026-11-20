#include <globaldefs.h>

struct ItemBag_020a0b8c {
    short* unknown_0_;
    signed char* pCounts_4_;
    short slotCount_8_;
};

// USA: CountUsedBagSlots_020a0b8c
extern "C" ARM int CountUsedBagSlots_020a0b8c(struct ItemBag_020a0b8c* bag) {
    signed char* counts = bag->pCounts_4_;
    short slotCount = bag->slotCount_8_;
    short usedSlotCount = 0;
    short i;
    for (i = 0; i < slotCount; i++) {
        if (counts[i] != 0) {
            usedSlotCount++;
        }
    }
    return usedSlotCount;
}
