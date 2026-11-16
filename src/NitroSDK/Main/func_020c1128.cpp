#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"
#include "NitroSDK/Matrix.h"

extern "C" ARM void Mat2x2_ApplyScale(const Matrix2x2* arg0, Matrix2x2* arg1, fix32_t arg2, fix32_t arg3) {
    arg1->entries[0] = FIX32_MULTIPLY_SIMPLE(arg2, arg0->entries[0]);
    arg1->entries[1] = FIX32_MULTIPLY_SIMPLE(arg2, arg0->entries[1]);
    arg1->entries[2] = FIX32_MULTIPLY_SIMPLE(arg3, arg0->entries[2]);
    arg1->entries[3] = FIX32_MULTIPLY_SIMPLE(arg3, arg0->entries[3]);
}
