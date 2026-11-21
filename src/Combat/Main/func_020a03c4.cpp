#include <globaldefs.h>

struct BattleRecords_020a03c4 {
    char unknown_0_[0x10];
    unsigned int accoladeCount_10_0_ : 9;
    unsigned int unknown_11_1_ : 23;
};

// USA: func_020a03c4
extern "C" ARM void func_020a03c4(struct BattleRecords_020a03c4* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->accoladeCount_10_0_ + arg1;
    if (var0 > 0x1f4) {
        var0 = 0x1f4;
    }
    arg0->accoladeCount_10_0_ = var0;
}
