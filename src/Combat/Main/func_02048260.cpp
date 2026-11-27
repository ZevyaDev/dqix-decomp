#include <globaldefs.h>

struct Struct_02048260_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_02048260 {
    char unknown_0_[0x30];
    unsigned short unknown_30_;
};

struct Struct_02048260_2 {
    char unknown_0_[0x130];
    struct Struct_02048260_3* unknown_130_;
    struct Struct_02048260* unknown_134_;
};

// USA: RestoreFullHP_02048260
extern "C" ARM int RestoreFullHP_02048260(struct Struct_02048260_2* member) {
    struct Struct_02048260_3* status = member->unknown_130_;
    struct Struct_02048260* baseStats = member->unknown_134_;
    unsigned short currHP = status->unknown_4_;
    unsigned short maxHP = baseStats->unknown_30_;
    if (maxHP - currHP <= 0) {
        return 0;
    }
    status->unknown_4_ = maxHP;
    return maxHP - currHP;
}
