#include <globaldefs.h>

struct ItemData_02015ef4_4 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 12;
    short unknown_14_, unknown_16_, itemId_18_, unknown_1a_, unknown_1c_;
};

// USA: GetItemGraphicNumber_020de234
extern "C" ARM unsigned short GetItemGraphicNumber_020de234(ItemData_02015ef4_4* item, int gender) {
    if (item->itemId_18_ <= 0) {
        return 999;
    }
    if (!gender) {
        if (item->unknown_10_0_ != 999) {
            return item->unknown_10_0_;
        }
        return item->unknown_11_2_;
    } else {
        if (item->unknown_11_2_ != 999) {
            return item->unknown_11_2_;
        }
        return item->unknown_10_0_;
    }
}
