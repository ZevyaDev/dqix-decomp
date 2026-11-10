#include <globaldefs.h>

struct MenuCursor_0205bb84;
extern "C" int GetMenuCursorIndex_0205bb84(struct MenuCursor_0205bb84*);
extern "C" void SetMenuCursorIndex_0205bb04(void*, int);

struct MenuCursor_0205c4a8 {
    int itemCount_0_;
    int pageCount_4_;
    char unknown_8_[0xc];
    int page_14_;
};

// USA: ChangeMenuCursorPage_0205c4a8
extern "C" ARM void ChangeMenuCursorPage_0205c4a8(struct MenuCursor_0205c4a8* cursor, int pageStep) {
    int itemCount;
    cursor->page_14_ += pageStep;
    if (cursor->pageCount_4_ <= cursor->page_14_) {
        cursor->page_14_ -= cursor->pageCount_4_;
    } else if (cursor->page_14_ < 0) {
        cursor->page_14_ += cursor->pageCount_4_;
    }
    itemCount = cursor->itemCount_0_;
    if (itemCount <= GetMenuCursorIndex_0205bb84((struct MenuCursor_0205bb84*)cursor)) {
        SetMenuCursorIndex_0205bb04((void*)cursor, itemCount - 1);
    }
}
