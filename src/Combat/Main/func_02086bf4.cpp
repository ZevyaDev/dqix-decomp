#include <globaldefs.h>

struct ItemBag_0207cf30_3;
extern "C" signed char GetBagItemCount_020a0b3c(struct ItemBag_0207cf30_3* bag, int itemId);
extern "C" int func_0207c7a0(void* arg0, int arg1, int arg2);

// USA: func_02086bf4
extern "C" ARM short func_02086bf4(char* arg0, int arg1) {
    short var0 = 0;
    if (arg1 < 0) {
        return 0;
    }
    var0 = var0 + GetBagItemCount_020a0b3c((struct ItemBag_0207cf30_3*)arg0, arg1);
    var0 = var0 + func_0207c7a0(arg0 + 0x1d4, arg1, 9);
    var0 = var0 + GetBagItemCount_020a0b3c((struct ItemBag_0207cf30_3*)(arg0 + 0xe04), arg1);
    return var0;
}
