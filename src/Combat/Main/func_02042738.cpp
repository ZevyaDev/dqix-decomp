#include <globaldefs.h>

#if defined(jpn)
struct Struct_02042738 {
    char unknown_0_[0x48];
    unsigned int* unknown_48_;
};

struct Struct_02107800 {
    char unknown_0_[0x38];
    struct Struct_02042738* unknown_38_;
};

extern Struct_02107800 data_02107800;
extern "C" int func_0204290c(unsigned int* arg0, unsigned char arg1);
extern "C" int func_02043014(int arg0, void* arg1);

// JPN: func_02042738
extern "C" ARM int func_02042738(unsigned int arg0) {
    if (arg0 >= 0x50) return 0;
    return func_0204290c(data_02107800.unknown_38_->unknown_48_, arg0);
}

// JPN: func_02042764
extern "C" ARM int func_02042764(void* arg0) {
    if (arg0 == NULL) return 0;
    int var0 = func_02043014(6, arg0);
    if (var0 < 0) return 0;
    return func_02042738((unsigned short)var0);
}
#endif
