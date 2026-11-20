#include <globaldefs.h>

struct ItemBag_0207cf30_3;
extern "C" signed char GetBagItemCount_020a0b3c(struct ItemBag_0207cf30_3* bag, int itemId);
extern "C" int GetEquipmentBagItemCount_0207c7a0(void* bag, int itemId, int category);

// USA: CountItemInBags_02086bf4
extern "C" ARM short CountItemInBags_02086bf4(char* party, int itemId) {
    short count = 0;
    if (itemId < 0) {
        return 0;
    }
    count = count + GetBagItemCount_020a0b3c((struct ItemBag_0207cf30_3*)party, itemId);
    count = count + GetEquipmentBagItemCount_0207c7a0(party + 0x1d4, itemId, 9);
    count = count + GetBagItemCount_020a0b3c((struct ItemBag_0207cf30_3*)(party + 0xe04), itemId);
    return count;
}
