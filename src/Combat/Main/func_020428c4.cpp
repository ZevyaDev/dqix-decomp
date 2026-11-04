#include <globaldefs.h>
#include "Resource/Script.h"

#if defined(jpn)
struct Struct_02107800 {
    int* unknown_0_;
};

extern Struct_02107800 data_02107800;

// JPN: func_020428c4
extern "C" ARM int func_020428c4(Script::Parameter* arg0) {
    int* var0 = data_02107800.unknown_0_;
    for (int var1 = 0; var1 < 10; var1++) {
        var0[var1] = arg0->ToInt();
        arg0++;
    }
    return 1;
}
#endif
