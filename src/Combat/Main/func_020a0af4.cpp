#include <globaldefs.h>

struct Struct_020a095c {
    short* unknown_0_;
    signed char* unknown_4_;
    short unknown_8_;
};

// USA: FindBagItemSlot_020a0af4
extern "C" ARM int FindBagItemSlot_020a0af4(struct Struct_020a095c* bag, int itemId) {
    short* itemIds = bag->unknown_0_;
    short slotCount = bag->unknown_8_;
    short i;
    if (itemId < 0) {
        return -1;
    }
    for (i = 0; i < slotCount; i++) {
        if (itemId == itemIds[i]) {
            return i;
        }
    }
    return -1;
}
