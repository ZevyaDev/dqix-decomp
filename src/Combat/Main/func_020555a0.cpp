#include <globaldefs.h>
#include "Graphics/TextureArena.h"

extern "C" void func_020553ec(void* arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_020555a0 {
    int unknown_0_;
    int unknown_4_;
    char* unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_020555a0
extern "C" ARM void func_020555a0(struct Struct_020555a0* arg0) {
    if (arg0->unknown_4_ != 0 && arg0->unknown_c_ != 0 && arg0->unknown_10_ != 0 && arg0->unknown_8_ != 0) {
        ((TextureArena*)(arg0->unknown_8_))->Restore();
        func_020553ec(arg0, arg0->unknown_0_, arg0->unknown_4_, arg0->unknown_c_, arg0->unknown_10_);
        ((TextureArena*)(arg0->unknown_8_))->Save();
    }
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
}
