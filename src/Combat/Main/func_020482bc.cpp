#include <globaldefs.h>

struct Struct_020482bc_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_020482bc {
    char unknown_0_[0x32];
    unsigned short unknown_32_;
};

struct Struct_02010604_3 {
    char unknown_0_[0x130];
    struct Struct_020482bc_2* unknown_130_;
    struct Struct_020482bc* unknown_134_;
};

// USA: RestoreFullMP_020482bc
extern "C" ARM int RestoreFullMP_020482bc(struct Struct_02010604_3* member) {
    struct Struct_020482bc_2* status = member->unknown_130_;
    struct Struct_020482bc* baseStats = member->unknown_134_;
    unsigned short currMP = status->unknown_6_;
    unsigned short maxMP = baseStats->unknown_32_;
    if (maxMP - currMP <= 0) {
        return 0;
    }
    status->unknown_6_ = maxMP;
    return maxMP - currMP;
}
