#include <globaldefs.h>

#if defined(jpn)
struct Struct_02047410 {
    char unknown_0_[0x77c];
    int unknown_77c_;
};

// JPN: func_02047410
extern "C" ARM void func_02047410(struct Struct_02047410* arg0, int arg1) {
    arg0->unknown_77c_ = arg1;
}
#endif
