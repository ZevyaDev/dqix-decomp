#include <globaldefs.h>

struct Struct_02087c84 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 15;
    int unknown_59_7_ : 3;
};

extern "C" void ClearMagicalMendingBuff_02087cfc(void* stats);

// USA: ChangeMagicalMendingBuff_02087c84
extern "C" ARM int ChangeMagicalMendingBuff_02087c84(struct Struct_02087c84* stats, int stages) {
    int var0 = stats->unknown_59_7_ + stages;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        ClearMagicalMendingBuff_02087cfc(stats);
        return 0;
    }
    stats->unknown_59_7_ = var0;
    *((unsigned char*)stats + 0x73) = 5;
    *((unsigned char*)stats + 0x96) = 0;
    stats->unknown_14_ |= 0x8000;
    return stats->unknown_59_7_;
}
