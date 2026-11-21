#include <globaldefs.h>

struct MenuGrid_ov004_02153e20 {
    char unknown_0_[0x20];
    short* unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
};

// USA: SetMenuGridCell_ov023_021f9b30
extern "C" ARM int SetMenuGridCell_ov023_021f9b30(struct MenuGrid_ov004_02153e20* grid, short objectId, unsigned int row, unsigned int column) {
    if (grid->unknown_20_ == NULL) {
        return 0;
    }
    if (!(grid->unknown_24_ > row && grid->unknown_26_ > column)) {
        return 0;
    }
    grid->unknown_20_[row * grid->unknown_26_ + column] = objectId;
    return 1;
}
