#include <globaldefs.h>

#if defined(jpn)
struct Struct_02073bc4;

extern "C" void* func_02073bc4(struct Struct_02073bc4* arg0, int arg1);

struct Struct_02081b80 {
    struct Struct_02073bc4* unknown_0_;
};

// JPN: func_02081b80
extern "C" ARM void* func_02081b80(struct Struct_02081b80* arg0, int arg1) {
    return func_02073bc4(arg0->unknown_0_, arg1);
}
#endif
