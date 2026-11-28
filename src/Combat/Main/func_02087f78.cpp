#include <globaldefs.h>

struct Struct_02087f78 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 27;
    int unknown_5b_3_ : 3;
};

extern "C" void ClearEvasionBuff_02087ff0(void* stats);

// USA: ChangeEvasionBuff_02087f78
extern "C" ARM int ChangeEvasionBuff_02087f78(struct Struct_02087f78* stats, int stages) {
    int var0 = stats->unknown_5b_3_ + stages;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        ClearEvasionBuff_02087ff0(stats);
        return 0;
    }
    stats->unknown_5b_3_ = var0;
    *((unsigned char*)stats + 0x77) = 5;
    *((unsigned char*)stats + 0x9a) = 0;
    stats->unknown_14_ |= 0x2000000;
    return stats->unknown_5b_3_;
}
