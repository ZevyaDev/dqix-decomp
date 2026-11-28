#include <globaldefs.h>

extern "C" void ClearBreathResistanceBuff_02087efc(unsigned char* stats);
extern "C" void ClearFireBarrier_02088c38(unsigned char* stats);
extern "C" void ClearIceBarrier_02088c9c(unsigned char* stats);

struct Struct_02087e6c {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[0x58 - 0x18];
    int unknown_58_0_ : 21;
    int unknown_5a_5_ : 3;
    char unknown_5b_[0x75 - 0x5c];
    unsigned char unknown_74_;
    char unknown_75_[0x98 - 0x76];
    unsigned char unknown_97_;
};

// USA: ChangeBreathResistanceBuff_02087e6c
extern "C" ARM int ChangeBreathResistanceBuff_02087e6c(struct Struct_02087e6c* stats, int stages) {
    int var0 = stages + stats->unknown_5a_5_;

    if (var0 > 2) {
        var0 = 2;
    }
    if (var0 < -2) {
        var0 = -2;
    }

    if (var0 == 0) {
        ClearBreathResistanceBuff_02087efc((unsigned char*)stats);
        return 0;
    }

    stats->unknown_5a_5_ = var0;
    stats->unknown_74_ = 5;
    stats->unknown_97_ = 0;
    stats->unknown_14_ |= 0x20000;
    ClearFireBarrier_02088c38((unsigned char*)stats);
    ClearIceBarrier_02088c9c((unsigned char*)stats);
    return stats->unknown_5a_5_;
}
