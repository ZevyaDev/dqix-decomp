#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

struct Metatile_0202756c {
    char unknown_0_[0xc];
    int scaleX_c_;
    int scaleY_10_;
    int positionX_14_;
    int positionY_18_;
    char unknown_1c_[4];
    unsigned short rotScaleDataIndex_20_;
    unsigned char destinationObjIndex_22_;
    char unknown_23_[3];
    unsigned char priority_26_;
};


// USA: DrawMetatileAt_0202756c
extern "C" ARM void DrawMetatileAt_0202756c(void* subScreenDisplay, int positionX, int positionY, int metatileIndex,
        unsigned char destinationObjIndex, unsigned char priority, unsigned short palette, unsigned char rotScaleDataIndex, int scaleX, int scaleY) {
    struct Metatile_0202756c* metatile = (struct Metatile_0202756c*)((char*)subScreenDisplay + 0xe8 + metatileIndex * 0x28);
    metatile->positionX_14_ = positionX;
    metatile->positionY_18_ = positionY;
    metatile->destinationObjIndex_22_ = destinationObjIndex & 0x7f;
    metatile->priority_26_ = priority & 0x3;
    if (palette < 0xf) {
        ((OBJSpriteSet*)((int)((char*)subScreenDisplay + 0x94)))->SetMetatilePalette((OBJSpriteSet::Metatile*)(metatile), palette);
    }
    if (rotScaleDataIndex < 0x40) {
        metatile->rotScaleDataIndex_20_ = rotScaleDataIndex;
    }
    metatile->scaleX_c_ = scaleX;
    metatile->scaleY_10_ = scaleY;
    ((OBJSpriteSet*)((char*)subScreenDisplay + 0x94))->DrawMetatile((OBJSpriteSet::Metatile*)(metatile));
}
