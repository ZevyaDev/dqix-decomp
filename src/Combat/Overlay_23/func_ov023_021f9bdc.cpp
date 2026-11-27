#include <globaldefs.h>

struct Struct_ov004_021549e4_5 {
    char unknown_0_[0x26];
    unsigned short unknown_26_;
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
};

// USA: SetMenuGridCursorIndex_ov023_021f9bdc
extern "C" ARM void SetMenuGridCursorIndex_ov023_021f9bdc(struct Struct_ov004_021549e4_5* grid, int index) {
    grid->unknown_28_ = index / grid->unknown_26_;
    grid->unknown_2a_ = index % grid->unknown_26_;
}
