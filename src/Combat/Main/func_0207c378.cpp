#include <globaldefs.h>

struct Struct_0207c378;
extern "C" int func_0207caa4(struct Struct_0207c378* arg0, int arg1, int arg2);

struct EquipmentBag_020732cc {
    char unknown_0_[0xbd0];
    short* pItemIds_bd0_[8];
    signed char* pCounts_bf0_[8];
    short capacities_c10_[8];
    unsigned char categories_c20_[8];
};

// USA: AddEquipmentToBag_0207c378
extern "C" ARM int AddEquipmentToBag_0207c378(struct EquipmentBag_020732cc* bag, int itemId, int count, int category) {
    int isAdded;
    signed char* counts;
    int categoryIndex;
    int i;
    int existingSlot;
    short* itemIds;
    short capacity;
    short freeSlot;

    if (count <= 0) {
        return 0;
    }

    existingSlot = func_0207caa4((struct Struct_0207c378*)bag, itemId, category);
    if (existingSlot == -2) {
        return 0;
    }

    categoryIndex = -1;
    for (i = 0; i < 8; i++) {
        if (category == bag->categories_c20_[i]) {
            categoryIndex = i;
            break;
        }
    }
    if (categoryIndex < 0) {
        return 0;
    }

    counts = bag->pCounts_bf0_[categoryIndex];
    isAdded = 0;
    if (existingSlot >= 0) {
        counts[existingSlot] += count;
        isAdded = 1;
        if (counts[existingSlot] > 0x63) {
            counts[existingSlot] = 0x63;
        }
    } else {
        itemIds = bag->pItemIds_bd0_[categoryIndex];
        capacity = bag->capacities_c10_[categoryIndex];
        for (freeSlot = 0; freeSlot < capacity; freeSlot++) {
            if (itemIds[freeSlot] < 0) {
                itemIds[freeSlot] = itemId;
                counts[freeSlot] = count;
                isAdded = 1;
                if (counts[freeSlot] > 0x63) {
                    counts[freeSlot] = 0x63;
                }
                break;
            }
        }
    }
    return isAdded;
}
