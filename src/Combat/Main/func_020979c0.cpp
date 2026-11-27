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

// USA: InitVRAMBankSwitch_020979c0
extern "C" ARM void InitVRAMBankSwitch_020979c0(struct VRAMBankSwitch_020979c0* bankSwitch, unsigned char layoutId) {
    bankSwitch->unknown_0_ = 0;
    bankSwitch->unknown_4_ = 0;
    bankSwitch->unknown_8_ = 0;
    bankSwitch->unknown_c_ = 0;
    bankSwitch->unknown_10_ = 0;
    bankSwitch->unknown_14_ = 0;
    bankSwitch->unknown_18_ = -1;
    bankSwitch->unknown_1c_ = 0;
    bankSwitch->unknown_1d_ = layoutId;
    bankSwitch->unknown_1e_ = 0;
}
