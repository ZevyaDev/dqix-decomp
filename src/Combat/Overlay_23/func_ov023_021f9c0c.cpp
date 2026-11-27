#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov004_021698f4 { char unknown_0_[0x20]; void* unknown_20_; unsigned short unknown_24_; unsigned short unknown_26_; };

// USA: ClearMenuGridCells_ov023_021f9c0c
extern "C" ARM void* ClearMenuGridCells_ov023_021f9c0c(struct Struct_ov004_021698f4* grid) {
    unsigned short var0 = grid->unknown_24_;
    unsigned short var1 = grid->unknown_26_;
    void* var2 = grid->unknown_20_;
    return memset(var2, 0, var1 * (var0 * 2));
}
