#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"
#include "NitroSDK/Matrix.h"

extern "C" THUMB void Mat2x2_WriteRotation(Matrix2x2* arg0, fix32_t arg1, fix32_t arg2) {
    arg0->entries[0] = arg2;
    arg0->entries[1] = arg1;
    arg0->entries[2] = -arg1;
    arg0->entries[3] = arg2;
}
