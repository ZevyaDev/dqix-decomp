#include <globaldefs.h>
#if defined(jpn)
#define data_020f1ef0 data_020f205c
#define data_020f1ef4 data_020f2060
#endif

struct Struct_0210cf88 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

typedef unsigned int (*Type_020f1ef0)(unsigned int arg0, int arg1, int arg2);
typedef int (*Type_020f1ef4)(unsigned int arg0);

extern Type_020f1ef0 data_020f1ef0;
extern Type_020f1ef4 data_020f1ef4;

static Struct_0210cf88 data_0210cf88;

extern "C" unsigned int func_020bb7cc(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020bb908(unsigned int arg0);
extern "C" void func_020bb948(void);

extern "C" ARM void func_020bb780(unsigned int arg0, int arg1) {
    data_0210cf88.unknown_8_ = arg0;
    func_020bb948();
    if (arg1) {
        data_020f1ef0 = func_020bb7cc;
        data_020f1ef4 = func_020bb908;
    }
}

static inline int inline_020bb7cc(unsigned int arg0, int arg1, unsigned int* arg2) {
    unsigned int var0 = data_0210cf88.unknown_0_;
    unsigned int var1;
    if (arg1)
        var1 = (8 - (var0 & 7)) & 7;
    else
        var1 = (16 - (var0 & 15)) & 15;
    unsigned int var2 = arg0 + var1;

    if (data_0210cf88.unknown_4_ - data_0210cf88.unknown_0_ >= var2) {
        unsigned int var3 = var0 + var2;
        if (arg1 && var3 > 0x10000)
            return 0;

        *arg2 = var0 + var1;
        data_0210cf88.unknown_0_ += var2;
        return 1;
    } else
        return 0;
}

static inline int inline_020bb7cc_2(unsigned int arg0, int arg1, unsigned int* arg2) {
    if (data_0210cf88.unknown_4_ >= arg0) {
        unsigned int var0 = data_0210cf88.unknown_4_ - arg0;
        unsigned int var1;
        if (arg1)
            var1 = var0 & 7;
        else
            var1 = var0 & 15;
        unsigned int var2 = arg0 + var1;

        if (data_0210cf88.unknown_4_ - data_0210cf88.unknown_0_ >= var2) {
            unsigned int var3 = data_0210cf88.unknown_4_;
            if (arg1 && var3 > 0x10000)
                return 0;

            data_0210cf88.unknown_4_ -= var2;
            *arg2 = data_0210cf88.unknown_4_;
            return 1;
        }
    }
    return 0;
}

extern "C" ARM unsigned int func_020bb7cc(unsigned int arg0, int arg1, int arg2) {
    unsigned int var0 = 0;
    int var1 = 0;

    arg0 = (arg0 == 0) ? 8 : ((arg0 + 7) & ~7);

    if (arg0 >= 0x7fff8)
        return 0;

    if (arg2 == 1)
        var1 = inline_020bb7cc(arg0, arg1, &var0);
    else
        var1 = inline_020bb7cc_2(arg0, arg1, &var0);

    if (var1)
        return ((arg0 >> 3) << 16) | ((var0 >> 3) & 0xffff);
    return 0;
}

extern "C" ARM int func_020bb908(unsigned int arg0) {
    return 0;
}

extern "C" ARM void func_020bb910(unsigned int* arg0) {
    arg0[0] = data_0210cf88.unknown_0_;
    arg0[1] = data_0210cf88.unknown_4_;
}

extern "C" ARM void func_020bb92c(const unsigned int* arg0) {
    data_0210cf88.unknown_0_ = arg0[0];
    data_0210cf88.unknown_4_ = arg0[1];
}

extern "C" ARM void func_020bb948(void) {
    data_0210cf88.unknown_0_ = 0;
    data_0210cf88.unknown_4_ = data_0210cf88.unknown_8_;
}
