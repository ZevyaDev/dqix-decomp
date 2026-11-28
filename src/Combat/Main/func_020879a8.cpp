#include <globaldefs.h>

struct Struct_020879a8 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 6;
    int unknown_58_6_ : 3;
};

extern "C" void ClearAgilityBuff_02087a20(void* stats);

// USA: ChangeAgilityBuff_020879a8
extern "C" ARM int ChangeAgilityBuff_020879a8(struct Struct_020879a8* stats, int stages) {
    int var0 = stats->unknown_58_6_ + stages;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        ClearAgilityBuff_02087a20(stats);
        return 0;
    }
    stats->unknown_58_6_ = var0;
    *((unsigned char*)stats + 0x70) = 6;
    *((unsigned char*)stats + 0x93) = 0;
    stats->unknown_14_ |= 0x1000;
    return stats->unknown_58_6_;
}
