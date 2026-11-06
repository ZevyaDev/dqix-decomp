#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/MapDisplay.h"

// USA: InitSprite_0205a198
extern "C" void InitSprite_0205a198(Sprite_02043368_2 *sprite) {
    memset(sprite, 0, 8);
    sprite->unknown_8_ = 0;
    sprite->unknown_c_ = sprite->unknown_10_ = 0x1000;
    sprite->unknown_14_ = sprite->unknown_18_ = 0;
    sprite->unknown_1c_ = 0;
    sprite->unknown_1e_ = 0;
    sprite->unknown_20_ = 0;
    sprite->unknown_22_ = 0;
    sprite->unknown_23_ = 0;
    sprite->unknown_24_ = 0;
    int noOverride = sprite->unknown_24_ - 1;
    sprite->unknown_25_ = noOverride;
    sprite->unknown_26_ = noOverride;
}
