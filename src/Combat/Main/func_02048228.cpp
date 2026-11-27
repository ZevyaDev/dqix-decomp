#include <globaldefs.h>

struct Struct_02048228_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_02048228_2 {
    char unknown_0_[0x30];
    unsigned short unknown_30_;
};

struct Struct_02048228 {
    char unknown_0_[0x130];
    struct Struct_02048228_3* unknown_130_;
    struct Struct_02048228_2* unknown_134_;
};

// USA: RestoreHP_02048228
extern "C" ARM int RestoreHP_02048228(struct Struct_02048228* member, int amount) {
    struct Struct_02048228_3* status = member->unknown_130_;
    struct Struct_02048228_2* baseStats = member->unknown_134_;
    int missingHP = baseStats->unknown_30_ - status->unknown_4_;
    if (missingHP <= 0) {
        return 0;
    }
    if (missingHP <= amount) {
        status->unknown_4_ = baseStats->unknown_30_;
        return missingHP;
    }
    status->unknown_4_ = status->unknown_4_ + amount;
    return amount;
}
