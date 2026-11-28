#include <globaldefs.h>

struct Struct_020878b4 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x40];
    int : 3;
    int unknown_58_3_ : 3;
};

extern "C" void ClearDefenseBuff_0208792c(void* stats);

// USA: ChangeDefenseBuff_020878b4
extern "C" ARM int ChangeDefenseBuff_020878b4(struct Struct_020878b4* stats, int stages) {
    int var0 = stats->unknown_58_3_ + stages;
    if (var0 > 2) var0 = 2;
    if (var0 < -2) var0 = -2;
    if (var0 == 0) {
        ClearDefenseBuff_0208792c(stats);
        return 0;
    }
    stats->unknown_58_3_ = var0;
    *((unsigned char*)stats + 0x6f) = 6;
    *((unsigned char*)stats + 0x92) = 0;
    stats->unknown_14_ |= 0x800;
    return stats->unknown_58_3_;
}
