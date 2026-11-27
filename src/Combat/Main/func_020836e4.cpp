#include <globaldefs.h>
struct ItemData_0208358c_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    short unknown_18_;
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
};
// USA: CopyItemData_020836e4
extern "C" ARM void CopyItemData_020836e4(struct ItemData_0208358c_2* dst, struct ItemData_0208358c_2* src) {
    dst->unknown_0_ = src->unknown_0_;
    dst->unknown_4_ = src->unknown_4_;
    dst->unknown_8_ = src->unknown_8_;
    dst->unknown_c_ = src->unknown_c_;
    dst->unknown_10_ = src->unknown_10_;
    dst->unknown_14_ = src->unknown_14_;
    dst->unknown_16_ = src->unknown_16_;
    dst->unknown_18_ = src->unknown_18_;
    dst->unknown_1a_ = src->unknown_1a_;
    dst->unknown_1c_ = src->unknown_1c_;
}
