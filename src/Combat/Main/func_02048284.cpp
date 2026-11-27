#include <globaldefs.h>

struct Struct_02048284_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_02048284_2 {
    char unknown_0_[0x32];
    unsigned short unknown_32_;
};

struct Struct_02048284 {
    char unknown_0_[0x130];
    struct Struct_02048284_3* unknown_130_;
    struct Struct_02048284_2* unknown_134_;
};

// USA: RestoreMP_02048284
extern "C" ARM int RestoreMP_02048284(struct Struct_02048284* member, int amount) {
    struct Struct_02048284_3* status = member->unknown_130_;
    struct Struct_02048284_2* baseStats = member->unknown_134_;
    int missingMP = baseStats->unknown_32_ - status->unknown_6_;
    if (missingMP <= 0) {
        return 0;
    }
    if (missingMP <= amount) {
        status->unknown_6_ = baseStats->unknown_32_;
        return missingMP;
    }
    status->unknown_6_ = status->unknown_6_ + amount;
    return amount;
}
