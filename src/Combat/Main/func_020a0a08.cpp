#include <globaldefs.h>

struct Struct_020a095c;
extern "C" short FindBagItemSlot_020a0af4(struct Struct_020a095c* bag, int itemId);
struct Struct_020a0a08;
extern "C" void func_020a0a60(struct Struct_020a0a08* arg0, short arg1);

struct ItemBag_02061c04_23 { short* pItemIds_0_; signed char* pCounts_4_; short unknown_8_; };

// USA: RemoveItemFromBag_020a0a08
extern "C" ARM int RemoveItemFromBag_020a0a08(struct ItemBag_02061c04_23* bag, int itemId, int count) {
    short* itemIds = bag->pItemIds_0_;
    signed char* counts = bag->pCounts_4_;
    short slot = FindBagItemSlot_020a0af4((struct Struct_020a095c*)bag, itemId);
    int isRemoved = 0;
    if (slot >= 0) {
        counts[slot] -= count;
        if (counts[slot] <= 0) {
            itemIds[slot] = isRemoved - 1;
            counts[slot] = isRemoved;
            func_020a0a60((struct Struct_020a0a08*)bag, slot);
        }
        isRemoved = 1;
    }
    return isRemoved;
}
