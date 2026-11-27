#include <globaldefs.h>

struct Struct_ov004_021549e4_4 {
    char unknown_0_[0x26];
    unsigned short unknown_26_;
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
};

// USA: GetMenuGridCursorColumn_ov023_021f9bc0
extern "C" ARM unsigned short GetMenuGridCursorColumn_ov023_021f9bc0(struct Struct_ov004_021549e4_4* grid) {
    return grid->unknown_2a_;
}
