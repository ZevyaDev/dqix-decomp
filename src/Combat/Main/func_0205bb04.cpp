#include <globaldefs.h>

struct MenuCursor_0205bb04 {
    int itemCount_0_;
    char unknown_4_[4];
    int columnCount_8_;
    int rowCount_c_;
    char unknown_10_[4];
    int page_14_;
    char unknown_18_[0x24 - 0x18];
    int* pMinorCount_24_;
    int* pMajorIndex_28_;
    int* pMinorIndex_2c_;
};

// USA: SetMenuCursorIndex_0205bb04
extern "C" ARM void SetMenuCursorIndex_0205bb04(struct MenuCursor_0205bb04* cursor, int index) {
    if (index < 0) return;
    if (index >= cursor->itemCount_0_) return;
    int itemsPerPage = cursor->rowCount_c_ * cursor->columnCount_8_;
    if (itemsPerPage == 0) return;
    cursor->page_14_ = index / itemsPerPage;
    index = index % itemsPerPage;
    *cursor->pMinorIndex_2c_ = index % *cursor->pMinorCount_24_;
    *cursor->pMajorIndex_28_ = index / *cursor->pMinorCount_24_;
}
