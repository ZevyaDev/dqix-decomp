#include <globaldefs.h>

struct Struct_0208806c {
    char unknown_0_[0x18];
    unsigned int unknown_18_;
    char unknown_1c_[0x3c];
    int : 24;
    int unknown_5b_0_ : 3;
};

extern "C" void ClearBlockChanceBuff_020880e4(void* stats);

// USA: ChangeBlockChanceBuff_0208806c
extern "C" ARM int ChangeBlockChanceBuff_0208806c(struct Struct_0208806c* stats, int stages) {
    int var0 = stats->unknown_5b_0_ + stages;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        ClearBlockChanceBuff_020880e4(stats);
        return 0;
    }
    stats->unknown_5b_0_ = var0;
    *((unsigned char*)stats + 0x76) = 5;
    *((unsigned char*)stats + 0x99) = 0;
    stats->unknown_18_ |= 0x1;
    return stats->unknown_5b_0_;
}
