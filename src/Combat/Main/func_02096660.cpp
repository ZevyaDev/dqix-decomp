#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/FontBankLoader.h"

#if defined(jpn)
struct Struct_02096660 {
    char unknown_0_[4];
    short unknown_4_;
    char* unknown_8_;
    char* unknown_c_;
};

// JPN: func_02096660
extern "C" ARM int func_02096660(Struct_0208cb08* arg0, int arg1, Struct_02096660* arg2, unsigned int arg3) {
    if (arg2 == NULL) return 1;
    if (arg3 == 0) return 1;
    arg2->unknown_8_ = (char*)arg2 + (int)arg2->unknown_8_;
    arg2->unknown_c_ = (char*)arg2 + (int)arg2->unknown_c_;
    int var0 = 0;
    char* var1 = (char*)arg0->unknown_0_;
    switch (arg2->unknown_4_) {
        case 8:
            if (arg3 + arg0->unknown_10_ <= (unsigned int)*(int*)arg0->unknown_8_) {
                func_02094b38(arg0, arg0->unknown_40_);
                var1 = (char*)arg0->unknown_0_ + (*(int*)arg0->unknown_8_ - arg3);
                arg0->unknown_4_ = var1;
                arg0->unknown_40_ = arg1;
                arg0->unknown_10_ = arg3;
                arg0->unknown_64_ = arg0->unknown_61_;
                var0 = 1;
            }
            break;
        case 10:
            if (arg3 + arg0->unknown_10_ <= (unsigned int)*(int*)arg0->unknown_8_) {
                func_02094b38(arg0, arg0->unknown_3c_);
                arg0->unknown_3c_ = arg1;
                arg0->unknown_c_ = arg3;
                arg0->unknown_63_ = arg0->unknown_61_;
                var0 = 1;
            }
            break;
        case 12:
            if (arg3 + arg0->unknown_c_ <= (unsigned int)*(int*)arg0->unknown_8_) {
                func_02094b38(arg0, arg0->unknown_40_);
                var1 = (char*)arg0->unknown_0_ + (*(int*)arg0->unknown_8_ - arg3);
                arg0->unknown_4_ = var1;
                arg0->unknown_40_ = arg1;
                arg0->unknown_10_ = arg3;
                arg0->unknown_64_ = arg0->unknown_61_;
                var0 = 1;
            }
            break;
    }
    if (var0 == 0) return 1;
    memcpy(var1, arg2, arg3);
    return 0;
}
#endif
