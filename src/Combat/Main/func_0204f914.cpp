#include <globaldefs.h>

struct TextWindow_0204f914 {
    unsigned char unknown_0_[8];
    unsigned char* pCharacterData_8_;
    unsigned char unknown_c_[0x9c];
    short width_a8_;
    short height_aa_;
};

static inline int inline_0204f914(short arg0) { return arg0 >> 1; }

// USA: FillTextWindowRect_0204f914
extern "C" ARM void FillTextWindowRect_0204f914(TextWindow_0204f914* textWindow, unsigned char colorIndex, short left, short top, short right, short bottom) {
    if (right < 0 || bottom < 0) return;
    short pixelHeight = textWindow->height_aa_ * 8;
    short pixelWidth = textWindow->width_a8_ * 8;
    if (right > pixelWidth) return;
    if (pixelHeight < bottom) return;
    if (left == right || top == bottom) return;
    unsigned char highNibbleColor;
    unsigned char lowNibbleColor;
    lowNibbleColor = colorIndex & 15;
    highNibbleColor = lowNibbleColor << 4;
    for (short y = top; y < bottom; ++y) {
        short rowInTile = y & 7;
        short rowByteOffset = rowInTile * 4;
        int rowFirstTile = (short)(y >> 3) * textWindow->width_a8_;
        for (short x = left; x < right; ++x) {
            short tileIndex = rowFirstTile + (short)(x >> 3);
            short columnInTile = x & 7;
            short byteOffset = inline_0204f914(columnInTile) + (short)(tileIndex * 32);
            byteOffset += rowByteOffset;
            unsigned char& pixelPair = textWindow->pCharacterData_8_[byteOffset];
            if (x & 1) {
                pixelPair &= 15;
                pixelPair |= highNibbleColor;
            } else {
                pixelPair &= 0xf0;
                pixelPair |= lowNibbleColor;
            }
        }
    }
}
