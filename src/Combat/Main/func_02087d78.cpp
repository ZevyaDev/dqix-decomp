#include <globaldefs.h>

struct Struct_02087d78 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 18;
    int unknown_5a_2_ : 3;
};

extern "C" void ClearSpellResistanceBuff_02087df0(void* stats);

// USA: ChangeSpellResistanceBuff_02087d78
extern "C" ARM int ChangeSpellResistanceBuff_02087d78(struct Struct_02087d78* stats, int stages) {
    int var0 = stats->unknown_5a_2_ + stages;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        ClearSpellResistanceBuff_02087df0(stats);
        return 0;
    }
    stats->unknown_5a_2_ = var0;
    *((unsigned char*)stats + 0x74) = 5;
    *((unsigned char*)stats + 0x97) = 0;
    stats->unknown_14_ |= 0x10000;
    return stats->unknown_5a_2_;
}
