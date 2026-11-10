#include <globaldefs.h>

#if defined(jpn)
#include "GameState/GameState.h"

extern "C" void SetTitleIdleTimeoutEnabled_02012028(void* gameState, unsigned char isEnabled);
extern "C" int func_020ab9c0(int arg0);
extern "C" int func_020ab5d4(void* arg0, int arg1, int arg2, void* arg3);

struct Struct_ov004_02171034 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[4];
    unsigned short unknown_a_;
    void* unknown_c_;
    int unknown_10_;
};
extern Struct_ov004_02171034 data_ov004_02171034[];

// JPN: func_ov004_0216e198
extern "C" ARM int func_ov004_0216e198(void) {
    GameState* var0 = GameState::GetInstance();
    SetTitleIdleTimeoutEnabled_02012028(var0, 1);
    data_ov004_02171034[0].unknown_5_ = 0;
    data_ov004_02171034[0].unknown_1_ = 0;
    int var1 = func_020ab9c0(0);
    int var2 = func_020ab9c0(1);
    if (var1 == 1 || var2 == 1) {
        data_ov004_02171034[0].unknown_5_ = 6;
        return 0;
    }
    if (var2 == 4) {
        data_ov004_02171034[0].unknown_5_ = 0;
        if (var1 == 3) {
            data_ov004_02171034[0].unknown_1_ = 1;
        }
        return 0;
    }
    if (var2 == 2) {
        data_ov004_02171034[0].unknown_5_ = 7;
        return 0;
    }
    if (var1 == 2) {
        data_ov004_02171034[0].unknown_5_ = 4;
        return 0;
    }
    if (var1 == 0) {
        data_ov004_02171034[0].unknown_5_ = 1;
    } else if (var1 == 3) {
        data_ov004_02171034[0].unknown_5_ = 2;
    }
    if (data_ov004_02171034[0].unknown_5_ == 1) {
        unsigned char var3[3];
        if (func_020ab5d4(data_ov004_02171034[0].unknown_c_, 0, 0, var3) == 0) {
            unsigned char var4 = var0->unknown_5cc8_;
            if (var4 == 0) {
                data_ov004_02171034[0].unknown_5_ = 6;
            } else if (var4 == 2) {
                data_ov004_02171034[0].unknown_5_ = 4;
            }
            return 0;
        }
        data_ov004_02171034[0].unknown_a_ = *(unsigned short*)var3;
        data_ov004_02171034[0].unknown_4_ = var3[2];
        data_ov004_02171034[0].unknown_2_ = var3[3];
    }
    return 0;
}
#endif
