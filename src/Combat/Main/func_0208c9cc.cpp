#include <globaldefs.h>
#include "NitroSDK/Graphics.h"

// USA: SetBG0SubControl_0208c9cc
extern "C" ARM void SetBG0SubControl_0208c9cc(int screenSize, int colorMode, int screenBase, int charBase, int extPaletteSlot) {
    BG0CNTSUB = (BG0CNTSUB & 0x43) | (screenSize << 14) | (colorMode << 7) |
                (screenBase << 8) | (charBase << 2) | (extPaletteSlot << 13);
}
