#include <globaldefs.h>

#include "Combat/ManagerSelection.h"
#include "std_library_functions.h"

#if defined(jpn)
#include "Combat/Main/CandidateFilter.h"
struct Struct_0209ebe4_3 { char unknown_0_[0x40]; };
struct Struct_0209ebe4 { char unknown_0_[0x5c60]; Struct_0209ebe4_3 unknown_5c60_[16]; char unknown_6060_[0x8e07-0x6060]; unsigned char unknown_8e07_; };
struct Struct_0209ebe4_2 { int unknown_0_; Struct_0209ebe4* unknown_4_; char unknown_8_[0x90]; int unknown_98_; Struct_0209ebe4_3 unknown_9c_[16]; int unknown_49c_; Struct_0209ebe4_3 unknown_4a0_[16]; };
enum { Enum_0209ebe4_1 = 0 };
// JPN: func_020a0644
extern "C" ARM void func_020a0644(Struct_0209ebe4_2* arg0, int arg1, int arg2) {
    int var0;
    int var1;
    Struct_0209ebe4_3* var2;
    Struct_0209ebe4_3* var3;
    var1 = 0;
    if (!arg1) {
        arg0->unknown_98_ = 0;
        var0 = arg0->unknown_4_->unknown_8e07_;
        for (var1 = 0; var1 < var0; var1++) {
            var3 = &arg0->unknown_4_->unknown_5c60_[var1];
            if (var3 && func_0209e1cc(arg0, var3, Enum_0209ebe4_1, arg2)) {
                memcpy(&arg0->unknown_9c_[arg0->unknown_98_++], var3, 0x40);
            }
        }
    } else {
        arg0->unknown_49c_ = 0;
        memset(arg0->unknown_4a0_, 0, 0x400);
        var2 = arg0->unknown_9c_;
        for (var1 = 0; var1 < arg0->unknown_98_; var1++) {
            var3 = &var2[var1];
            if (func_0209e1cc(arg0, var3, Enum_0209ebe4_1, arg2)) {
                int var4 = arg0->unknown_49c_;
                arg0->unknown_49c_ = arg0->unknown_49c_ + 1;
                memcpy(&arg0->unknown_4a0_[var4], var3, 0x40);
            }
        }
        arg0->unknown_98_ = arg0->unknown_49c_;
        memcpy(arg0->unknown_9c_, arg0->unknown_4a0_, 0x400);
    }
}
#endif

// USA: func_0209e9f4
extern "C" ARM void func_0209e9f4(void *arg0, int arg1, int arg2) {
    Struct_0209e5b4_3 *var0 = static_cast<Struct_0209e5b4_3 *>(arg0);
    int var1                = sizeof(Struct_0209e5b4);
    if (arg1 == 0) {
        int var2;
        var0->unknown_98_.unknown_0_ = 0;
        var2             = var0->unknown_4_[0x8e07];
        for (int var3 = 0; var3 < var2; ++var3) {
            Struct_0209e5b4 *var4 = reinterpret_cast<Struct_0209e5b4 *>(var0->unknown_4_ + 0x5c60) + var3;
            if (var4 != NULL && (var4->unknown_8_ & arg2) != 0) {
                int var5 = var0->unknown_98_.unknown_0_++;
                memcpy(&var0->unknown_98_.unknown_4_[var5], var4, var1);
            }
        }
        return;
    }
    var0->unknown_49c_.unknown_0_ = 0;
    memset(var0->unknown_49c_.unknown_4_, 0, sizeof(var0->unknown_49c_.unknown_4_));
    for (int var6 = 0; var6 < var0->unknown_98_.unknown_0_; ++var6) {
        Struct_0209e5b4 *var7 = &var0->unknown_98_.unknown_4_[var6];
        if ((var7->unknown_8_ & arg2) != 0) {
            int var8 = var0->unknown_49c_.unknown_0_++;
            memcpy(&var0->unknown_49c_.unknown_4_[var8], var7, var1);
        }
    }
    var0->unknown_98_.unknown_0_ = var0->unknown_49c_.unknown_0_;
    memcpy(var0->unknown_98_.unknown_4_, var0->unknown_49c_.unknown_4_, sizeof(var0->unknown_98_.unknown_4_));
}

// USA: func_0209eaec
extern "C" ARM void func_0209eaec(void *arg0, int arg1, int arg2) {
    Struct_0209e5b4_3 *var0 = static_cast<Struct_0209e5b4_3 *>(arg0);
    int var1                = sizeof(Struct_0209e5b4);
    if (arg1 == 0) {
        int var2;
        var0->unknown_98_.unknown_0_ = 0;
        var2             = var0->unknown_4_[0x8e07];
        for (int var3 = 0; var3 < var2; ++var3) {
            Struct_0209e5b4 *var4 = reinterpret_cast<Struct_0209e5b4 *>(var0->unknown_4_ + 0x5c60) + var3;
            if (var4 != NULL && (var4->unknown_c_ & arg2) != 0) {
                int var5 = var0->unknown_98_.unknown_0_++;
                memcpy(&var0->unknown_98_.unknown_4_[var5], var4, var1);
            }
        }
        return;
    }
    var0->unknown_49c_.unknown_0_ = 0;
    memset(var0->unknown_49c_.unknown_4_, 0, sizeof(var0->unknown_49c_.unknown_4_));
    for (int var6 = 0; var6 < var0->unknown_98_.unknown_0_; ++var6) {
        Struct_0209e5b4 *var7 = &var0->unknown_98_.unknown_4_[var6];
        if ((var7->unknown_c_ & arg2) != 0) {
            int var8 = var0->unknown_49c_.unknown_0_++;
            memcpy(&var0->unknown_49c_.unknown_4_[var8], var7, var1);
        }
    }
    var0->unknown_98_.unknown_0_ = var0->unknown_49c_.unknown_0_;
    memcpy(var0->unknown_98_.unknown_4_, var0->unknown_49c_.unknown_4_, sizeof(var0->unknown_98_.unknown_4_));
}
