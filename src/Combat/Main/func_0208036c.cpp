#include <globaldefs.h>

struct MenuLayoutTextEntry_020800fc_3 {
    char unknown_0_[0x18];
    struct MenuLayoutTextEntry_020800fc_3* pUpEntry_18_;
    struct MenuLayoutTextEntry_020800fc_3* pDownEntry_1c_;
    struct MenuLayoutTextEntry_020800fc_3* pLeftEntry_20_;
    struct MenuLayoutTextEntry_020800fc_3* pRightEntry_24_;
    char unknown_28_[0x2a - 0x28];
    unsigned char flags_2a_;
};

struct Struct_020800fc {
    unsigned int unknown_0_;
};

// USA: func_0208036c
extern "C" ARM struct MenuLayoutTextEntry_020800fc_3* func_0208036c(void* arg0, struct MenuLayoutTextEntry_020800fc_3* arg1, int arg2, struct Struct_020800fc* arg3, unsigned char arg4) {
    struct MenuLayoutTextEntry_020800fc_3* var0;
    struct MenuLayoutTextEntry_020800fc_3* var1;
    if (arg1 == NULL) {
        return NULL;
    }
    var0 = arg1;
    switch (arg2) {
    case 0x40:
        while ((var1 = var0->pDownEntry_1c_) != NULL) {
            if (var1->flags_2a_ & 0x2) {
                break;
            }
            var0 = var1;
        }
        break;
    case 0x80:
        while ((var1 = var0->pUpEntry_18_) != NULL) {
            if (var1->flags_2a_ & 0x2) {
                break;
            }
            var0 = var1;
        }
        break;
    case 0x20:
        if (arg4) {
            arg3->unknown_0_ |= 0x20;
        } else {
            while ((var1 = var0->pRightEntry_24_) != NULL) {
                if (var1->flags_2a_ & 0x2) {
                    break;
                }
                var0 = var1;
            }
        }
        break;
    case 0x10:
        if (arg4) {
            arg3->unknown_0_ |= 0x10;
        } else {
            while ((var1 = var0->pLeftEntry_20_) != NULL) {
                if (var1->flags_2a_ & 0x2) {
                    break;
                }
                var0 = var1;
            }
        }
        break;
    }
    return var0;
}
