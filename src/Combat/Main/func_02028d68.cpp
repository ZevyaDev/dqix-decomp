#include <globaldefs.h>
#include "Graphics/GlyphMetrics.h"

// USA: SetPrintMode_02028d68
extern "C" ARM void SetPrintMode_02028d68(int mode) {
    data_020ef74c.mode_c_ = mode;
    if (mode == 0) {
        data_020ef74c.lineHeight_4_ = 8;
        data_020ef74c.charWidth_8_ = 8;
        return;
    }
    if ((unsigned int)(mode - 1) <= 1) {
        data_020ef74c.charWidth_8_ = 6;
        data_020ef74c.lineHeight_4_ = 0xc;
        return;
    }
    if ((unsigned int)(mode - 3) <= 1) {
        data_020ef74c.charWidth_8_ = 5;
        data_020ef74c.lineHeight_4_ = 0xa;
        return;
    }
    if ((unsigned int)(mode - 5) <= 1) {
        data_020ef74c.charWidth_8_ = 6;
        data_020ef74c.lineHeight_4_ = 0xc;
    }
}
