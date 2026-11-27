#include <globaldefs.h>

struct Struct_020a095c;
extern "C" short FindBagItemSlot_020a0af4(struct Struct_020a095c* bag, int itemId);

struct ItemBag_0207cf30_4 { short* pItemIds_0_; signed char* pCounts_4_; short slotCount_8_; };

// USA: AddItemToBag_020a095c
extern "C" ARM int AddItemToBag_020a095c(struct ItemBag_0207cf30_4* bag, int itemId, int count) {
    short* itemIds = bag->pItemIds_0_;
    signed char* counts = bag->pCounts_4_;
    short slotCount = bag->slotCount_8_;
    short slot;
    int isAdded;
    if (itemId < 0) {
        return 0;
    }
    if (count <= 0) {
        return 0;
    }
    isAdded = 0;
    slot = FindBagItemSlot_020a0af4((struct Struct_020a095c*)bag, itemId);
    if (slot >= 0) {
        isAdded = 1;
        if (counts[slot] < 99) {
            signed char spaceLeft = 99 - counts[slot];
            if (count > spaceLeft) count = spaceLeft;
            counts[slot] += count;
        }
    } else {
        short i;
        for (i = 0; i < slotCount; i++) {
            if (itemIds[i] < 0) {
                itemIds[i] = itemId;
                counts[i] = count;
                isAdded = 1;
                break;
            }
        }
    }
    return isAdded;
}
