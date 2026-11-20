#include <globaldefs.h>

struct EquipmentBag_0207c7a0 {
    char unknown_0_[0xbd0];
    short *pItemIds_bd0_[8];
    signed char *pCounts_bf0_[8];
    short unknown_c10_[8];
    unsigned char categories_c20_[8];
};
extern const short data_020e8a14[8];

// USA: GetEquipmentBagItemCount_0207c7a0
extern "C" ARM int GetEquipmentBagItemCount_0207c7a0(void *bag, int itemId, int category) {
    EquipmentBag_0207c7a0 *equipmentBag = static_cast<EquipmentBag_0207c7a0 *>(bag);
    if (itemId < 0) {
        return 0;
    }
    int categoryIndex = -1;
    for (int i = 0; i < 8; i++) {
        if (category == equipmentBag->categories_c20_[i]) {
            categoryIndex = i;
            break;
        }
    }
    if (categoryIndex < 0) {
        for (int i = 0; i < 8; i++) {
            int capacity = data_020e8a14[i];
            short *itemIds = equipmentBag->pItemIds_bd0_[i];
            for (int j = 0; j < capacity; j++) {
                if (itemId == itemIds[j]) {
                    signed char *counts = equipmentBag->pCounts_bf0_[i];
                    return counts[j];
                }
            }
        }
    } else {
        int capacity = data_020e8a14[categoryIndex];
        short *itemIds = equipmentBag->pItemIds_bd0_[categoryIndex];
        for (int i = 0; i < capacity; i++) {
            if (itemId == itemIds[i]) {
                signed char *counts = equipmentBag->pCounts_bf0_[categoryIndex];
                return counts[i];
            }
        }
    }
    return 0;
}