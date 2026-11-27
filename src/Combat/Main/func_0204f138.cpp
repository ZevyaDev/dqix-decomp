#include <globaldefs.h>

// USA: GetTextWindowEntryRectArrays_0204f138
extern "C" ARM void GetTextWindowEntryRectArrays_0204f138(unsigned char* textWindow, unsigned char** outXs, unsigned char** outYs, unsigned char** outWidths, unsigned char** outHeights) {
    *outXs = textWindow + 0xc;
    *outYs = textWindow + 0x30;
    *outWidths = textWindow + 0x54;
    *outHeights = textWindow + 0x78;
}
