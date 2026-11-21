#include <globaldefs.h>

struct ItemData_02083508_2 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 12;
    short unknown_14_, unknown_16_, unknown_18_, unknown_1a_, unknown_1c_;
};

// USA: InitItemData_020de1d4
extern "C" ARM void InitItemData_020de1d4(struct ItemData_02083508_2* item) {
    item->unknown_0_ = 0;
    item->unknown_4_ = 0;
    item->unknown_8_ = 0;
    item->unknown_c_ = 0;
    item->unknown_14_ = 0;
    item->unknown_16_ = 0;
    item->unknown_18_ = -1;
    item->unknown_1a_ = 0;
    item->unknown_1c_ = 0;
    item->unknown_10_0_ = 999;
    item->unknown_11_2_ = 999;
}
