#include <globaldefs.h>

struct Struct_0207d798 {
    short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_;
    char unknown_5_;
    char unknown_6_[2];
    char unknown_8_;
    char unknown_9_;
    char unknown_a_;
    char unknown_b_;
};

// USA: ResetBattleJoinRecord_0207d7c0
extern "C" ARM void ResetBattleJoinRecord_0207d7c0(struct Struct_0207d798* record) {
    record->unknown_0_ = 0;
    record->unknown_4_ = -1;
    record->unknown_8_ = -1;
    record->unknown_9_ = -1;
    record->unknown_a_ = -1;
    record->unknown_b_ = -1;
    record->unknown_2_ = 0x75a4;
    record->unknown_5_ = 0;
}
