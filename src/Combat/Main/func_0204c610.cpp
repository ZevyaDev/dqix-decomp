#include <globaldefs.h>

struct TextWindow_0204c610 {
    char unknown_0_[0xc];
    short entryXs_c_[18]; // 0xc
    short entryYs_30_[18]; // 0x30
    short entryWidths_54_[18]; // 0x54
    short entryHeights_78_[18]; // 0x78
};

// USA: GetTextWindowEntryRect_0204c610
extern "C" ARM void GetTextWindowEntryRect_0204c610(struct TextWindow_0204c610* textWindow, int entryIndex, short* outX, short* outY, short* outWidth, short* outHeight) {
    if (entryIndex < 0) return;
    if (entryIndex >= 18) return;
    *outX = textWindow->entryXs_c_[entryIndex];
    *outY = textWindow->entryYs_30_[entryIndex];
    *outWidth = textWindow->entryWidths_54_[entryIndex];
    *outHeight = textWindow->entryHeights_78_[entryIndex];
}
