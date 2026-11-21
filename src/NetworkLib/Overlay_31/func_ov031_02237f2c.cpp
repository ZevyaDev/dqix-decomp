#include <globaldefs.h>

struct OAMAllocation_ov031_02222f44_2;
extern "C" void GetSpritePosition_ov031_0223bd28(OAMAllocation_ov031_02222f44_2*, int, unsigned int*, unsigned int*);
extern "C" void func_ov031_022381c8(int);
extern "C" ARM void* AddTask_ov031_0223e218(void* listIndex, void* callback, void* callbackData, int priority);
extern "C" void func_ov031_0223815c(void);
extern "C" void func_ov031_02238000(void);
extern "C" void QueueTaskRemoval_ov031_0223e2c0(int, void*);

struct Struct_ov031_02237f2c {
    OAMAllocation_ov031_02222f44_2* unknown_0_;
    unsigned char unknown_4_[0x14 - 4];
    void* unknown_14_;
    unsigned char unknown_18_[0x1c - 0x18];
    unsigned char unknown_1c_;
};
extern Struct_ov031_02237f2c* gDialog_ov031_02290d10;

extern unsigned short data_ov031_02249336[];

// USA: func_ov031_02237f2c
extern "C" ARM void func_ov031_02237f2c(void* arg0) {
    unsigned int var0, var1;
    GetSpritePosition_ov031_0223bd28(gDialog_ov031_02290d10->unknown_0_, 0, &var0, &var1);
    var1 = var1 - 0xc;
    unsigned short var2 = data_ov031_02249336[gDialog_ov031_02290d10->unknown_1c_ * 2];
    if ((int)var1 > var2) {
        func_ov031_022381c8(var1);
        return;
    }
    func_ov031_022381c8(var2);
    if (gDialog_ov031_02290d10->unknown_1c_ == 5) {
        gDialog_ov031_02290d10->unknown_14_ = AddTask_ov031_0223e218(0, (void*)func_ov031_0223815c, 0, 0x78);
    } else {
        gDialog_ov031_02290d10->unknown_14_ = AddTask_ov031_0223e218(0, (void*)func_ov031_02238000, 0, 0x78);
    }
    QueueTaskRemoval_ov031_0223e2c0(1, arg0);
}
