#include <globaldefs.h>

struct Struct_020877c0 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int unknown_58_0_ : 3;
};

extern "C" void ClearAttackBuff_02087838(void* stats);

// USA: ChangeAttackBuff_020877c0
extern "C" ARM int ChangeAttackBuff_020877c0(struct Struct_020877c0* stats, int stages) {
    int var0 = stats->unknown_58_0_ + stages;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        ClearAttackBuff_02087838(stats);
        return 0;
    }
    stats->unknown_58_0_ = var0;
    *((unsigned char*)stats + 0x6e) = 5;
    *((unsigned char*)stats + 0x91) = 0;
    stats->unknown_14_ |= 0x400;
    return stats->unknown_58_0_;
}
