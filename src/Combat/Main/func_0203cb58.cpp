#include <globaldefs.h>
#if defined(jpn)

struct Struct_0203cb58_2 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[10];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct Struct_0203cb58 {
    void* unknown_0_;
    Struct_0203cb58_2 unknown_4_[96];
    int unknown_604_;
    char* unknown_608_;
    unsigned int unknown_60c_;
    unsigned short unknown_610_;
    unsigned short unknown_612_;
    unsigned char unknown_614_[256];
};

static inline bool inline_0203cb58(const Struct_0203cb58_2* arg0) {
    return arg0->unknown_e_ == 0;
}

// JPN: func_0203cb58
extern "C" ARM void func_0203cb58(Struct_0203cb58* arg0, short* arg1) {
    if (arg1 == NULL) {
        return;
    }
    for (int var0 = 0; var0 < 10; var0++) {
        int var1 = arg1[var0];
        if (var1 < 0) {
            continue;
        }
        Struct_0203cb58_2* var2 = &arg0->unknown_4_[var1];
        Struct_0203cb58_2* var3 = &arg0->unknown_4_[var1 + 1];
        if (inline_0203cb58(var2) && inline_0203cb58(var2)) {
            arg0->unknown_612_ += 2;
            var2->unknown_e_ = 1;
            var3->unknown_e_ = 1;
            continue;
        }
        var2->unknown_e_++;
        var3->unknown_e_++;
    }
}
#endif
