#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Timing.h"
#include "NitroSDK/WirelessScanDescriptor.h"
#include "std_library_functions.h"

struct Struct_ov031_0221fd18_2 {
    unsigned int unknown_0_;
    unsigned char unknown_4_[0x20];
    char unknown_24_[4];
    unsigned char unknown_28_[6];
    unsigned short unknown_2e_;
};

struct Struct_ov031_0221fd18 {
    unsigned int unknown_0_;
    Struct_ov031_0221fd18_2 unknown_4_[1];
};

struct Struct_ov031_0224f670 {
    char unknown_0_[0x10];
    int unknown_10_;
    int unknown_14_;
    unsigned int unknown_18_;
    char unknown_1c_[0x38 - 0x1c];
    int unknown_38_;
    char unknown_3c_[0x5c - 0x3c];
    Struct_ov031_0220ec04_3* unknown_5c_;
    char unknown_60_[0x70 - 0x60];
    int unknown_70_;
};

struct Struct_ov031_0224b114 {
    unsigned char* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    int unknown_10_;
};

struct Struct_ov031_0224fb20 {
    unsigned char unknown_0_[6];
};

extern Struct_ov031_0224f670 data_ov031_0224f670;
extern Struct_ov031_0224b114 data_ov031_0224b114;
extern char data_ov031_0224fb80[];
extern Struct_ov031_0224fb20 data_ov031_0224fb20;

extern "C" {
int func_ov031_0221f698(Struct_ov031_0220ec04_3* arg0, int arg1);
int func_ov031_0221f6dc(unsigned char* arg0, unsigned char* arg1, int arg2, unsigned long arg3);
int func_ov031_0221fa20(void);
void func_ov031_0221fa88(int arg0);
int func_ov031_0221fd18(Struct_ov031_0221fd18* arg0, Struct_ov031_0221fd18* arg1, unsigned int* arg2);
unsigned int func_ov031_02222870(void);
Struct_ov031_0221fd18* func_ov031_0222288c(unsigned int arg0, unsigned int arg1);
void func_ov031_022228b0(void* arg0);
int func_ov031_022228f4(char* arg0, const Struct_ov031_0224fb20* arg1);
void func_ov031_02222af0(void);
}

// USA: func_ov031_0221fee4
extern "C" THUMB int func_ov031_0221fee4(void) {
    long var0 = -1;
    int var1;
    int var2;
    int var3;
    unsigned int var4;
    Struct_ov031_0221fd18* var5;
    Struct_ov031_0221fd18* var6 = NULL;
    unsigned var7 = 0;
    char var8[0x20];
    Alarm var9;

    var4 = data_ov031_0224f670.unknown_70_ * sizeof(Struct_ov031_0221fd18_2) + sizeof(Struct_ov031_0221fd18);
    var5 = func_ov031_0222288c(1, var4);
    if (NULL == var5 || (var6 = func_ov031_0222288c(1, var4)) == NULL)
        goto cleanup;

    for (var1 = 0; var1 < 30 && 0 == data_ov031_0224f670.unknown_10_; var1++) {
        unsigned int var10;
        unsigned int var11;
        Struct_ov031_0220ec04_3* var12;

        if (func_ov031_02222870() >= data_ov031_0224b114.unknown_c_)
            break;
        if (func_ov031_0221f6dc(0, 0, 0, (unsigned)0x30bffe) == 0) {
            var0 = -2;
            goto cleanup;
        }
        ZeroInitializeAlarm(&var9);
        SetTimeout(&var9, 0xffb10, (Alarm::PFNCompletion)func_ov031_0221fa88, (ProcessorContext**)19);
        var10 = 1;
        var0 = 0;
        do {
            SleepCurrentContext(10);
            if (func_ov031_02222870() >= data_ov031_0224b114.unknown_c_ || 0 != data_ov031_0224f670.unknown_10_)
                break;
            var11 = func_ov031_0221fa20();
            if (0 != var11) {
                do {
                    switch (var11) {
                    case 4:
                    case 8:
                    case 18:
                        break;
                    case 19:
                        var10 = 0;
                        break;
                    case 5: {
                        int var13 = func_ov031_0221f698(data_ov031_0224f670.unknown_5c_, data_ov031_0224f670.unknown_70_);
                        if (var13 > var0) {
                            var0 = var13;
                            CancelAlarm(&var9);
                            SetTimeout(&var9, 0xffb10, (Alarm::PFNCompletion)func_ov031_0221fa88, (ProcessorContext**)19);
                        }
                        break;
                    }
                    case 10:
                        var10 = 0;
                        break;
                    case 0: case 1: case 2: case 3: case 6: case 7: case 9: case 11: case 12:
                    case 13: case 14: case 15: case 16: case 17:
                    default:
                        var10 = 0;
                        break;
                    }
                    var11 = func_ov031_0221fa20();
                } while (var11);
            }
        } while (var10);
        CancelAlarm(&var9);
        while (func_ov031_0221fa20() != 0) {
        }
        if (data_ov031_0224f670.unknown_10_ != 0)
            break;
        var3 = 0;
        if (var0 >= data_ov031_0224f670.unknown_70_) {
            var0 = -6;
            goto cleanup;
        }
        var12 = data_ov031_0224f670.unknown_5c_;
        var2 = 0;
        if (var0 > 0) {
            for (; var2 < var0; var2++) {
                unsigned char* var14;
                memcpy(var5->unknown_4_[var3].unknown_4_, var12->unknown_c_, 0x20);
                var5->unknown_4_[var3].unknown_0_ = var12->unknown_a_;
                var5->unknown_4_[var3].unknown_4_[var12->unknown_a_] = 0;
                var5->unknown_4_[var3].unknown_2e_ = (var12->unknown_2c_ & 0x10) ? 1 : 0;
                var14 = var5->unknown_4_[var3].unknown_28_;
                var14[0] = var12->unknown_4_[0];
                var14[1] = var12->unknown_4_[1];
                var14[2] = var12->unknown_4_[2];
                var14[3] = var12->unknown_4_[3];
                var14[4] = var12->unknown_4_[4];
                var14[5] = var12->unknown_4_[5];
                var12++;
                ++var3;
            }
        }
        var5->unknown_0_ = var0;
        if (data_ov031_0224f670.unknown_38_ != 1) {
            var3 = func_ov031_0221fd18(var5, var6, &var7);
            if (var3 != 0) {
                Struct_ov031_0221fd18_2* var15 = &var5->unknown_4_[var7];
                unsigned char* var16;
                data_ov031_0224f670.unknown_18_ = var7;
                strcpy(data_ov031_0224fb80, (char*)var15->unknown_4_);
                var16 = var15->unknown_28_;
                data_ov031_0224fb20.unknown_0_[0] = var16[0];
                data_ov031_0224fb20.unknown_0_[1] = var16[1];
                data_ov031_0224fb20.unknown_0_[2] = var16[2];
                data_ov031_0224fb20.unknown_0_[3] = var16[3];
                data_ov031_0224fb20.unknown_0_[4] = var16[4];
                data_ov031_0224fb20.unknown_0_[5] = var16[5];
                func_ov031_022228f4(var8, &data_ov031_0224fb20);
                break;
            }
        }
        memcpy(var6, var5, var4);
        data_ov031_0224f670.unknown_38_ = 2;
        func_ov031_02222af0();
    }
    if (var1 >= 30 || func_ov031_02222870() > data_ov031_0224b114.unknown_c_)
        var0 = -3;
    else if (data_ov031_0224f670.unknown_10_ != 0)
        var0 = -8;
    else
        var0 = 1;

cleanup:
    if (var5 != NULL)
        func_ov031_022228b0(var5);
    if (var6 != NULL)
        func_ov031_022228b0(var6);
    return var0;
}
