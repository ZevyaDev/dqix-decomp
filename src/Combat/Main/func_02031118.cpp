#include <globaldefs.h>

#include "World/Bounds3D.h"

// USA: IsPointInBoundingBox_02031118
extern "C" ARM int IsPointInBoundingBox_02031118(const Vector3fix* point, const BoundingBox_02018fbc* box) {
    if (box->maxCorner_0_.x < point->x) return 0;
    if (box->maxCorner_0_.y < point->y) return 0;
    if (box->maxCorner_0_.z < point->z) return 0;
    if (point->x < box->minCorner_c_.x) return 0;
    if (point->y < box->minCorner_c_.y) return 0;
    return point->z >= box->minCorner_c_.z ? 1 : 0;
}
