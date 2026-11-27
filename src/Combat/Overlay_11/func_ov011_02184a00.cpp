#include <globaldefs.h>

struct Struct_ov011_02184a00 { char unknown_0_[0x1b0]; unsigned short activeGridId_1b0_; };

// USA: GetActiveMenuGrid_ov011_02184a00
extern "C" ARM unsigned short GetActiveMenuGrid_ov011_02184a00(struct Struct_ov011_02184a00* menu) {
    return menu->activeGridId_1b0_;
}
