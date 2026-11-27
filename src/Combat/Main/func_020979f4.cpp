#include <globaldefs.h>

struct VRAMBankSwitch_020979c0 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
};

extern "C" void InitVRAMBankSwitch_020979c0(struct VRAMBankSwitch_020979c0* bankSwitch, unsigned char layoutId);

// USA: func_020979f4
extern "C" ARM void func_020979f4(struct VRAMBankSwitch_020979c0* arg0) {
    InitVRAMBankSwitch_020979c0(arg0, 0);
}
