#include <globaldefs.h>
#include <std_library_functions.h>
#if defined(jpn)

struct Struct_02069878 {
    unsigned char unknown_0_[0x14];
    void* unknown_14_;
    unsigned char unknown_18_[0x2c - 0x18];
    char* unknown_2c_;
    char* unknown_30_;
    unsigned char unknown_34_[0x870 - 0x34];
    int unknown_870_;
    unsigned char unknown_874_[0x1788 - 0x874];
    unsigned char unknown_1788_;
};

extern "C" void func_0206b104(Struct_02069878* arg0);
extern "C" void func_020698d8(Struct_02069878* arg0, int arg1, int arg2, char* arg3);
extern "C" void func_02069ecc(Struct_02069878* arg0, char* arg1, char* arg2);
extern "C" void func_0206c570(Struct_02069878* arg0, char* arg1);

// JPN: func_02069878
extern "C" ARM void func_02069878(Struct_02069878* arg0, int arg1) {
    func_0206b104(arg0);
    memset(arg0->unknown_14_, 0, 0x800);
    func_020698d8(arg0, arg0->unknown_1788_, arg1, arg0->unknown_2c_);
    func_02069ecc(arg0, arg0->unknown_2c_, arg0->unknown_30_);
    func_0206c570(arg0, arg0->unknown_30_);
    arg0->unknown_870_ = 5;
}
#endif
