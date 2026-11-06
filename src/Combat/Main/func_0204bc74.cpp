#include <globaldefs.h>

struct BGLayer_0204bc74 {
    char unknown_0_[0x14];
    unsigned short (*pScreenData_14_)[32];
};

// USA: FillBGScreenRect_0204bc74
extern "C" ARM void FillBGScreenRect_0204bc74(struct BGLayer_0204bc74 *layer, unsigned short screenEntry, int x, int y, int width, int height, unsigned short palette) {
    unsigned short (*screenData)[32] = layer->pScreenData_14_;
    if (screenData == 0) {
        return;
    }
    if (x + width <= 0 || y + height <= 0) {
        return;
    }
    if (x >= 0x20 || y >= 0x19) {
        return;
    }

    if (x < 0) {
        width = (short)(x + width);
        x = 0;
    } else if (x + width >= 0x20) {
        width = (short)(0x20 - x);
    }

    if (y < 0) {
        height = height + y;
        height = (short)height;
        y = 0;
    } else if (y + height >= 0x19) {
        height = (short)(0x19 - y);
    }
    unsigned short *dest = screenData[y] + x;
    if (palette != 0xffff) {
        palette = palette << 12;
    } else {
        palette = 0;
    }
    screenEntry = screenEntry & 0xfff;
    screenEntry |= palette;

    short i = 0;
    short j;
    while (i < height) {
        j = 0;
        while (j < width) {
            dest[j] = screenEntry;
            j = j + 1;
        }
        dest += 32;
        i = i + 1;
    }
}
