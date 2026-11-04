#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"
#if defined(jpn)

struct Struct_0204f284 {
    unsigned char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
};

extern "C" void func_0204e038(Struct_0204f284* arg0, char* arg1, short arg2, short arg3, short arg4,
                              short arg5, unsigned char arg6, unsigned char arg7);

// JPN: func_0204f284
extern "C" ARM void func_0204f284(Struct_0204f284* arg0, char* arg1, short arg2, short arg3, int arg4,
                                  unsigned char arg5, unsigned char arg6) {
    if (arg1 == NULL) {
        return;
    }
    Struct_0203bebc* var0 = func_020429bc(arg4);
    if (var0 == NULL) {
        return;
    }
    unsigned int var1 = var0->unknown_2_ >> 1;
    func_0204e038(arg0, arg1, arg2, arg3, var1 * 2, var0->unknown_3_, arg5, arg6);
}
#endif
