#include <globaldefs.h>

struct Struct_0207f158 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    unsigned short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    unsigned char unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    short unknown_28_;
    unsigned char unknown_2a_;
    unsigned char unknown_2b_;
    unsigned char unknown_2c_;
    unsigned char unknown_2d_;
};

struct Struct_0207f158_2 {
    struct Struct_0207f158* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: AppendMenuLayoutTextEntry_0207f5d0
extern "C" ARM void AppendMenuLayoutTextEntry_0207f5d0(struct Struct_0207f158_2* textEntries, struct Struct_0207f158* entry) {
    struct Struct_0207f158* var0;
    struct Struct_0207f158* var1;
    short var2;
    var0 = textEntries->unknown_0_;
    if (var0 == NULL) {
        return;
    }
    var2 = textEntries->unknown_4_;
    if (textEntries->unknown_6_ <= var2) {
        return;
    }
    var1 = &var0[var2];
    var1->unknown_0_ = entry->unknown_0_;
    var1->unknown_4_ = entry->unknown_4_;
    var1->unknown_6_ = entry->unknown_6_;
    var1->unknown_8_ = entry->unknown_8_;
    var1->unknown_a_ = entry->unknown_a_;
    var1->unknown_c_ = entry->unknown_c_;
    var1->unknown_e_ = entry->unknown_e_;
    var1->unknown_10_ = entry->unknown_10_;
    var1->unknown_12_ = entry->unknown_12_;
    var1->unknown_13_ = entry->unknown_13_;
    var1->unknown_14_ = entry->unknown_14_;
    var1->unknown_18_ = entry->unknown_18_;
    var1->unknown_1c_ = entry->unknown_1c_;
    var1->unknown_20_ = entry->unknown_20_;
    var1->unknown_24_ = entry->unknown_24_;
    var1->unknown_28_ = entry->unknown_28_;
    var1->unknown_2a_ = entry->unknown_2a_;
    var1->unknown_2b_ = entry->unknown_2b_;
    var1->unknown_2c_ = entry->unknown_2c_;
    var1->unknown_2d_ = entry->unknown_2d_;
    textEntries->unknown_4_++;
}
