#include <globaldefs.h>

struct Struct_0205bd58 {
    char unknown_0_[0x34];
    int unknown_34_;
    char unknown_38_[0x4];
    int unknown_3c_;
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
};

// USA: SetMenuCursorEntryRects_0205bd58
extern "C" ARM void SetMenuCursorEntryRects_0205bd58(struct Struct_0205bd58* cursor, int entryCount, int entryXs, int entryYs, int entryWidths, int entryHeights) {
    cursor->unknown_34_ = entryCount;
    cursor->unknown_3c_ = entryXs;
    cursor->unknown_40_ = entryYs;
    cursor->unknown_44_ = entryWidths;
    cursor->unknown_48_ = entryHeights;
}
