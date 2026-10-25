#include <globaldefs.h>

// The shift sizes of an OBJ (log2 of its width and height in characters).
struct Struct_020e91e0 {
    unsigned char shiftW;
    unsigned char shiftH;
};

// The largest OBJ that fits an area, by log2 of its height and width (capped at 8 characters).
extern Struct_020e91e0 data_020e91e0[4][4];

static inline unsigned int inline_020b10b4(unsigned int arg0) {
    asm {
        clz arg0, arg0
    }
    return arg0;
}

static inline int inline_020b10b4_2(unsigned int arg0) {
    return (int)(31 - inline_020b10b4(arg0));
}

static inline Struct_020e91e0* inline_020b10b4_3(int w, int h) {
    int logW = (w >= 8) ? 3 : inline_020b10b4_2((unsigned long)w);
    int logH = (h >= 8) ? 3 : inline_020b10b4_2((unsigned long)h);

    return &data_020e91e0[logH][logW];
}

// USA: func_020b10b4
// The character index of character (cx, cy) of an areaWidth x areaHeight area that is filled with the largest
// OBJs that fit, starting with an OBJ of 2^objWidth x 2^objHeight characters, in 1D character mapping.
extern "C" ARM unsigned int func_020b10b4(unsigned int cx, unsigned int cy, unsigned int areaWidth, unsigned int areaHeight,
                                          unsigned int objWidth, unsigned int objHeight) {
    const unsigned int fullbits = (unsigned int)(~0);
    unsigned int idx = 0;

    for (;;) {
        const unsigned int objWidthMaskInv = fullbits << objWidth;
        const unsigned int objHeightMaskInv = fullbits << objHeight;
        const unsigned int areaAWidth = areaWidth & objWidthMaskInv;
        const unsigned int areaAHeight = areaHeight & objHeightMaskInv;

        if (areaAHeight <= cy) {
            idx += areaWidth * areaAHeight;

            if (areaAWidth <= cx) {
                idx += (areaHeight - areaAHeight) * areaAWidth;

                cx -= areaAWidth;
                cy -= areaAHeight;
                areaWidth -= areaAWidth;
                areaHeight -= areaAHeight;
            } else {
                cy -= areaAHeight;
                areaWidth = areaAWidth;
                areaHeight -= areaAHeight;
            }
        } else {
            const unsigned int objHeightMask = ~objHeightMaskInv;

            if (areaAWidth <= cx) {
                idx += (unsigned int)(areaAWidth * areaAHeight);

                cx -= areaAWidth;
                areaWidth -= areaAWidth;
                areaHeight = areaAHeight;
            } else {
                const unsigned int objWidthMask = ~objWidthMaskInv;
                idx += (unsigned int)(cy & objHeightMaskInv) * areaAWidth;
                idx += (unsigned int)(cx & objWidthMaskInv) << objHeight;
                idx += (unsigned int)(cy & objHeightMask) << objWidth;
                idx += (unsigned int)(cx & objWidthMask);
                return idx;
            }
        }

        {
            const Struct_020e91e0* obj = inline_020b10b4_3((int)areaWidth, (int)areaHeight);

            objWidth = obj->shiftW;
            objHeight = obj->shiftH;
        }
    }
}
