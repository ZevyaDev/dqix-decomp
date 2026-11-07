#include <globaldefs.h>

struct MenuCursor_0205bb84 {
    int itemCount_0_;
    int pageCount_4_;
    int columnCount_8_;
    int rowCount_c_;
    int unknown_10_;
    int page_14_;
    int column_18_;
    int row_1c_;
    int unknown_20_;
    int* pMinorCount_24_;
    int* pMajorIndex_28_;
    int* pMinorIndex_2c_;
};

// USA: GetMenuCursorIndex_0205bb84
extern "C" ARM int GetMenuCursorIndex_0205bb84(struct MenuCursor_0205bb84* cursor) {
    int indexOnPage = *cursor->pMinorCount_24_ * *cursor->pMajorIndex_28_ + *cursor->pMinorIndex_2c_;
    int pageStartIndex = cursor->page_14_ * cursor->rowCount_c_ * cursor->columnCount_8_;
    return (short)pageStartIndex + (short)indexOnPage;
}
