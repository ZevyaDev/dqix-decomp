#include <globaldefs.h>

struct MenuCursor_0205ba68 {
    int unknown_0_;
    int unknown_4_;
    int columnCount_8_;
    int rowCount_c_;
    unsigned char isRowMajor_10_;
    int unknown_14_;
    int column_18_;
    int row_1c_;
    int* pMajorCount_20_;
    int* pMinorCount_24_;
    int* pMajorIndex_28_;
    int* pMinorIndex_2c_;
};

// USA: SetMenuCursorGrid_0205ba68
extern "C" ARM void SetMenuCursorGrid_0205ba68(struct MenuCursor_0205ba68* cursor, int columnCount, int rowCount, int isRowMajor) {
    cursor->columnCount_8_ = columnCount;
    cursor->rowCount_c_ = rowCount;
    cursor->isRowMajor_10_ = isRowMajor;
    if (isRowMajor == 0) {
        cursor->pMajorCount_20_ = &cursor->columnCount_8_;
        cursor->pMinorCount_24_ = &cursor->rowCount_c_;
        cursor->pMajorIndex_28_ = &cursor->column_18_;
        cursor->pMinorIndex_2c_ = &cursor->row_1c_;
    } else if (isRowMajor == 1) {
        cursor->pMajorCount_20_ = &cursor->rowCount_c_;
        cursor->pMinorCount_24_ = &cursor->columnCount_8_;
        cursor->pMajorIndex_28_ = &cursor->row_1c_;
        cursor->pMinorIndex_2c_ = &cursor->column_18_;
    }
}
