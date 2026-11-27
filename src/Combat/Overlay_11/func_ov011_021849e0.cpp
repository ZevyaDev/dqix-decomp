#include <globaldefs.h>

struct Menu_ov004_02158dcc { char unknown_0_[0x1b0]; unsigned short activeGridId_1b0_; char unknown_1b2_[0x1c8-0x1b2]; int isGridRefreshPending_1c8_; };

// USA: SetActiveMenuGrid_ov011_021849e0
extern "C" ARM void SetActiveMenuGrid_ov011_021849e0(Menu_ov004_02158dcc* menu, unsigned short gridId) {
    if (menu->activeGridId_1b0_ != gridId) {
        menu->isGridRefreshPending_1c8_ = 1;
    }
    menu->activeGridId_1b0_ = gridId;
}
