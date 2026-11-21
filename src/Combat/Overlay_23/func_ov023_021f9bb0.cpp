#include <globaldefs.h>

struct MenuGrid_ov004_021549e4_2 {
    char unknown_0_[0x28];
    unsigned short cursorRow_28_;
};

// USA: GetMenuGridCursorRow_ov023_021f9bb0
extern "C" ARM unsigned int GetMenuGridCursorRow_ov023_021f9bb0(struct MenuGrid_ov004_021549e4_2 *grid) {
    return grid->cursorRow_28_;
}
