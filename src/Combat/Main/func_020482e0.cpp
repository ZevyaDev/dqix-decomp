#include <globaldefs.h>

struct Struct_020482e0_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

struct Struct_020482e0 {
    char unknown_0_[0x130];
    struct Struct_020482e0_2* unknown_130_;
};

// USA: ReduceHP_020482e0
extern "C" ARM int ReduceHP_020482e0(struct Struct_020482e0* member, int amount, int canKill) {
    struct Struct_020482e0_2* status = member->unknown_130_;
    unsigned short currHP = status->unknown_4_;
    if (currHP <= amount) {
        if (canKill == 0) {
            status->unknown_4_ = 1;
            return currHP - 1;
        }
        status->unknown_4_ = 0;
        int isCursed = 0;
        if (member->unknown_130_->unknown_0_ & 4) {
            isCursed = 1;
        }
        member->unknown_130_->unknown_0_ = 1;
        if (isCursed) {
            member->unknown_130_->unknown_0_ |= 4;
        }
        return currHP;
    }
    status->unknown_4_ = currHP - amount;
    return amount;
}
