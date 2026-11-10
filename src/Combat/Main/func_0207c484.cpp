#include <globaldefs.h>

struct Struct_0207c378;
extern "C" int func_0207caa4(struct Struct_0207c378* arg0, int arg1, int arg2);

struct EquipmentBag_0207c484 {
    char unknown_0_[0xbd0];
    short* pItemIds_bd0_[8];
    signed char* pCounts_bf0_[8];
    short unknown_c10_[8];
    unsigned char categories_c20_[8];
};

// USA: RemoveEquipmentFromBag_0207c484
extern "C" ARM int RemoveEquipmentFromBag_0207c484(struct EquipmentBag_0207c484* bag, int itemId, int count, int category) {
    int categoryIndex;
    int i;
    int slot;
    signed char* counts;

    if (count <= 0) {
        return 0;
    }

    slot = func_0207caa4((struct Struct_0207c378*)bag, itemId, category);
    if (slot < 0) {
        return 0;
    }

    for (i = 0; i < 8; i++) {
        if (category == bag->categories_c20_[i]) {
            categoryIndex = i;
            break;
        }
    }

    counts = bag->pCounts_bf0_[categoryIndex];
    counts[slot] = counts[slot] - count;
    if (counts[slot] <= 0) {
        bag->pItemIds_bd0_[categoryIndex][slot] = -1;
        counts[slot] = 0;
    }

    return 1;
}
