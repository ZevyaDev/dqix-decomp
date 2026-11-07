#include <globaldefs.h>

struct Struct_02109bf4_2 {
    char unknown_0_[0xc9];
    unsigned char jingleState_c9_;
    char unknown_ca_[4];
    unsigned short jingleIndex_ce_;
};

// USA: func_0209c830
extern "C" ARM void func_0209c830(Struct_02109bf4_2* arg0, int arg1) {
    arg0->jingleIndex_ce_ = arg1;
    arg0->jingleState_c9_ = 1;
}
