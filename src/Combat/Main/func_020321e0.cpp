#include <globaldefs.h>

#include "World/Bounds3D.h"
#include "Graphics/Vector.h"

static inline int inline_020321e0(int arg0) {
    return (int)(((long long)arg0 * arg0 + 0x800) >> 12);
}

// USA: IsPointInRotatedBoundingBox_020321e0
extern "C" ARM int IsPointInRotatedBoundingBox_020321e0(const Vector3fix* point, const BoundingBox_02018fbc* box, int angle, const Vector3fix* pivot, int maxDistanceSq) {
    Vector3fix var0 = *point;
    Vector3fix var1;
    Matrix4x3 var2;
    int var3;

    if (angle != 0) {
        int var4, var5;

        Vector3fix_Subtract(point, pivot, &var1);
        var4 = inline_020321e0(var1.z);
        var5 = inline_020321e0(var1.x);
        var3 = var5 + var4;
        if (maxDistanceSq < var3) {
            return 0;
        }
        var2 = RotationMatrixY(fix32ReduceAngle0To2Pi(-angle));
        Mat4x3_ApplyToVector(&var1, &var2, &var1);
        Vector3fix_Add(&var1, pivot, &var0);
    }
    return func_02031118(&var0, box);
}
