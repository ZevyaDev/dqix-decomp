#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov005_02153954 {
    char unknown_0_[R(0x3d30, 0x3db8)];
    unsigned char unknown_3db8_;
    unsigned char unknown_3db9_;
    unsigned char unknown_3dba_;
    signed char unknown_3dbb_;
    unsigned char unknown_3dbc_;
    signed char unknown_3dbd_;
    unsigned char unknown_3dbe_;
    signed char unknown_3dbf_;
    signed char unknown_3dc0_;
    char unknown_3dc1_[0x3dcc - 0x3dc1];
    unsigned int unknown_3dcc_;
    char unknown_3dd0_[0x3df0 - 0x3dd0];
    signed char unknown_3df0_;
    signed char unknown_3df1_;
    signed char unknown_3df2_;
};

extern "C" void func_ov005_021571d0(Struct_ov005_02153954* arg0);

// USA: SetEquipMenuMode_ov005_0215792c
extern "C" ARM void SetEquipMenuMode_ov005_0215792c(Struct_ov005_02153954* equipMenuUI, unsigned char mode) {
    equipMenuUI->unknown_3db9_ = equipMenuUI->unknown_3db8_;
    equipMenuUI->unknown_3db8_ = mode;
    equipMenuUI->unknown_3dba_ = 0;
    if (equipMenuUI->unknown_3db8_ == 0) {
        equipMenuUI->unknown_3dbe_ = equipMenuUI->unknown_3dbc_;
        equipMenuUI->unknown_3dcc_ |= 0x400;
    } else {
        equipMenuUI->unknown_3dcc_ &= ~0x400;
    }
    if (equipMenuUI->unknown_3db8_ == 0 && equipMenuUI->unknown_3db9_ == 1) {
        equipMenuUI->unknown_3df0_ = 3;
        equipMenuUI->unknown_3df1_ = 30;
        equipMenuUI->unknown_3df2_ = 30;
        equipMenuUI->unknown_3dcc_ &= ~0x1000;
        equipMenuUI->unknown_3dcc_ &= ~0x2000;
    } else if (equipMenuUI->unknown_3db9_ == 3) {
        equipMenuUI->unknown_3df0_ = 0;
        equipMenuUI->unknown_3dcc_ &= ~0x1000;
    }
    if (equipMenuUI->unknown_3db8_ != 5 && equipMenuUI->unknown_3db8_ != 1 && equipMenuUI->unknown_3db8_ != 7)
        func_ov005_021571d0(equipMenuUI);
}
