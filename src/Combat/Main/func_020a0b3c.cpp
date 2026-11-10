#include <globaldefs.h>

struct ItemBag_0207cf30_3 {
    short* pItemIds_0_;
    signed char* pCounts_4_;
    short slotCount_8_;
};

// USA: GetBagItemCount_020a0b3c
extern "C" ARM signed char GetBagItemCount_020a0b3c(struct ItemBag_0207cf30_3* bag, int itemId) {
    short* itemIds = bag->pItemIds_0_;
    signed char* counts = bag->pCounts_4_;
    int slotCount = bag->slotCount_8_;
    short i;
    if (itemId < 0) {
        return 0;
    }
    for (i = 0; i < slotCount; i++) {
        if (itemId == itemIds[i]) {
            return counts[i];
        }
    }
    return 0;
}
