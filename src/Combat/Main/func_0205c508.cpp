#include <globaldefs.h>

struct MenuCursor_0205c508 {
    int itemCount_0_;
    unsigned char unknown_4_[4];
    int columnCount_8_;
    int rowCount_c_;
    unsigned char unknown_10_[4];
    int page_14_;
};

// USA: GetMenuCursorPageRange_0205c508
extern "C" ARM void GetMenuCursorPageRange_0205c508(struct MenuCursor_0205c508* cursor, int* outPageStartIndex, int* outPageEndIndex) {
    int itemsPerPage = cursor->columnCount_8_ * cursor->rowCount_c_;
    int pageStartIndex = itemsPerPage * cursor->page_14_;
    *outPageStartIndex = pageStartIndex;
    *outPageEndIndex = pageStartIndex + itemsPerPage;
    if (cursor->itemCount_0_ < *outPageEndIndex) {
        *outPageEndIndex = cursor->itemCount_0_;
    }
}
