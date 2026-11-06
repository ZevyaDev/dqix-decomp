#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/SpriteAffineTransform.h"

struct OAMEntry_0205ac40_4 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    short affineParameter_6_;
};

extern "C" void* GetOAMManager_0203bd08();
extern "C" OAMEntry_0205ac40_4* func_0203be4c(void*);
extern "C" OAMEntry_0205ac40_4* func_0203be40(void*);
extern "C" void func_020b0a1c(OAMEntry_0205ac40_4*, unsigned short, Sprite_0205ac40_2*, Matrix2x2_0205ac40_3*, int*, unsigned short, int);

// USA: DrawSprite_0205ac40
extern "C" ARM void DrawSprite_0205ac40(SpriteSet_0205ac40* spriteSet, Sprite_0205ac40_2* sprite) {
    int palette;
    unsigned short remainingCount;
    int priority;
    void* oamManager;
    OAMEntry_0205ac40_4* oamBuffer;
    Matrix2x2_0205ac40_3* transform;
    bool isDoubleSize;
    OAMEntry_0205ac40_4* oamEntry;
    Matrix2x2_0205ac40_3 transformMatrix;
    Matrix2x2_0205ac40_3 inverseMatrix;
    int position[2];
    if (sprite != NULL) {
        oamManager = GetOAMManager_0203bd08();
        transform = NULL;
        oamBuffer = func_0203be4c(oamManager);
        if (spriteSet->isSubScreen_50_ == 0) oamBuffer = func_0203be40(oamManager);
        isDoubleSize = false;
        if (sprite->isAffine_23_) {
            func_0205b0d8(spriteSet, &transformMatrix, &inverseMatrix, sprite);
            transform = &transformMatrix;
            if (sprite->isDoubleSize_24_) isDoubleSize = true;
        }
        unsigned short firstOAMIndex = sprite->oamIndex_22_ & 0x7f;
        unsigned short freeOAMCount = 128 - firstOAMIndex;
        if (transform != NULL) {
            OAMEntry_0205ac40_4* affineEntries = oamBuffer + sprite->affineIndex_20_ * 4;
            affineEntries[0].affineParameter_6_ = inverseMatrix.unknown_0_[0] >> 4;
            affineEntries[1].affineParameter_6_ = inverseMatrix.unknown_0_[1] >> 4;
            affineEntries[2].affineParameter_6_ = inverseMatrix.unknown_0_[2] >> 4;
            affineEntries[3].affineParameter_6_ = inverseMatrix.unknown_0_[3] >> 4;
        }
        COPY_ARRAY(position, sprite->position_14_);
        if (position[1] < -0x40000 || position[1] >= 0xc0000) return;
        oamEntry = oamBuffer + firstOAMIndex;
        func_020b0a1c(oamEntry, freeOAMCount, sprite, transform, sprite->position_14_, sprite->affineIndex_20_, isDoubleSize);
        palette = sprite->paletteOverride_25_;
        priority = sprite->priorityOverride_26_;
        if (palette < 0 && priority < 0) return;
        int oamMode = func_0205b174(spriteSet, sprite);
        remainingCount = sprite->oamCount_0_;
        while (remainingCount != 0) {
            if (palette >= 0) {
                oamEntry->unknown_0_ = (oamEntry->unknown_0_ & ~0xc00) | (oamMode << 10);
                oamEntry->unknown_4_ = (oamEntry->unknown_4_ & ~0xf000) | (palette << 12);
            }
            if (priority >= 0)
                oamEntry->unknown_4_ = (oamEntry->unknown_4_ & ~0xc00) | (priority << 10);
            ++oamEntry;
            --remainingCount;
        }
    }
}
