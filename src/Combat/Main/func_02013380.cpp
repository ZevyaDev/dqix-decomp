#include <globaldefs.h>


extern "C" void* GetFlagManager_0205ec34(void);

struct Struct_02013380 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_02013380
extern "C" ARM void func_02013380(Struct_02013380* arg0, int arg1, int arg2) {
    GetFlagManager_0205ec34();
    if (arg2 != 0)
        arg0->unknown_2_ &= ~4;
    else
        arg0->unknown_2_ |= 4;
    arg0->unknown_2_ |= 0x40;
}
