#include <globaldefs.h>

struct Struct_0207ed48 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    unsigned char unknown_14_;
    unsigned char unknown_15_;
};

struct Struct_0207f018 {
    struct Struct_0207ed48* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: AppendMenuLayoutWindowEntry_0207f018
extern "C" ARM void AppendMenuLayoutWindowEntry_0207f018(struct Struct_0207f018* windowEntries, struct Struct_0207ed48* entry) {
    short var0;
    struct Struct_0207ed48* var1;
    if (entry == NULL) {
        return;
    }
    var0 = windowEntries->unknown_4_;
    if (windowEntries->unknown_6_ <= var0) {
        return;
    }
    var1 = &windowEntries->unknown_0_[var0];
    var1->unknown_0_ = entry->unknown_0_;
    var1->unknown_4_ = entry->unknown_4_;
    var1->unknown_8_ = entry->unknown_8_;
    var1->unknown_a_ = entry->unknown_a_;
    var1->unknown_c_ = entry->unknown_c_;
    var1->unknown_e_ = entry->unknown_e_;
    var1->unknown_10_ = entry->unknown_10_;
    var1->unknown_12_ = entry->unknown_12_;
    var1->unknown_13_ = entry->unknown_13_;
    var1->unknown_14_ = entry->unknown_14_;
    var1->unknown_15_ = entry->unknown_15_;
    windowEntries->unknown_4_ = windowEntries->unknown_4_ + 1;
}
