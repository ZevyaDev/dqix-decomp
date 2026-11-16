#if !defined(jpn)
#include <globaldefs.h>
#include "Resource/GameStrings.h"

extern "C" void* func_020e462c(void*, int, void*, int);

struct Struct_020e4750 {
    void* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 12;
    unsigned int unknown_9_4_ : 6;
    unsigned int unknown_a_2_ : 14;
};

// USA: func_020e4750
extern "C" ARM void* func_020e4750(void* arg0, struct Struct_020e4750* arg1) {
    if (arg1->unknown_0_ != NULL) {
        int var0 = ((int)GetArticleTemplate(arg1->unknown_9_4_));
        arg0 = func_020e462c(arg0, var0, arg1->unknown_0_, 0);
    }
    return arg0;
}
#endif
