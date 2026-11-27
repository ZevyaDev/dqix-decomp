#include <globaldefs.h>

extern "C" void RestoreSoundHeapState_0203aa80(void* manager, int heapState);

struct Struct_02108760_4 {
    char unknown_0_[0xb8];
    int unknown_b8_;
    char unknown_bc_[4];
    int unknown_c0_;
};

// USA: func_0205eb08
extern "C" ARM void func_0205eb08(struct Struct_02108760_4* arg0) {
    RestoreSoundHeapState_0203aa80(arg0, arg0->unknown_b8_);
    arg0->unknown_c0_ = arg0->unknown_b8_;
}
