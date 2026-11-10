#include <globaldefs.h>

#include "World/Zone3D.h"
#include "World/ZoneTerrain.h"
#include "World/Bounds3D.h"
#include "Graphics/Vector.h"

extern "C" float _fflt(int v);
extern "C" float _fdiv(float arg0, float arg1);
extern "C" int _ffix(float v);

// USA: GetGroundHeight_02018fbc
extern "C" ARM int GetGroundHeight_02018fbc(Zone3D* zone, Vector3fix* position) {
    Vector3fix snappedPosition = *position;
    BoundingBox_02018fbc searchBox;
    Vector3fix localPosition;
    Vector3fix segmentTop;
    Vector3fix segmentBottom;
    Vector3fix hit;

    searchBox.maxCorner_0_ = snappedPosition;
    searchBox.minCorner_c_ = snappedPosition;
    searchBox.maxCorner_0_.x += 0x800;
    searchBox.maxCorner_0_.y += 0x1000;
    searchBox.maxCorner_0_.z += 0x800;
    searchBox.minCorner_c_.x -= 0x800;
    searchBox.minCorner_c_.y -= 0xa000;
    searchBox.minCorner_c_.z -= 0x800;

    int grottoTile;
    if (zone->isInMainGrottoFloor_23b8_ != 0) {
        grottoTile = (int)(((float)(snappedPosition.x + 0x4000) / 4096.0f) / 8.0f)
             + ((int)(((float)(snappedPosition.z + 0x4000) / 4096.0f) / 8.0f) << 4);
    }

    for (int i = 0; i < zone->unknown_82c_; i++) {
        if (zone->isInMainGrottoFloor_23b8_ == 0 || grottoTile == i) {
            Struct_02018fbc_3 packedTriangles;
            Struct_02018fbc_2 triangles[96];
            int triangleCount = func_02017d90(zone, i, &packedTriangles, searchBox, 0);
            if (triangleCount > 0) {
                Struct_02018fbc_2* triangle = triangles;
                int scale;
                for (int j = 0; j < triangleCount; j++, triangle++) {
                    scale = packedTriangles.unknown_904_ << 12;
                    func_02031188(triangle, &packedTriangles.unknown_0_[j][0]);
                    Vector3fixMultiplyScalar(&triangle->unknown_0_, scale, &triangle->unknown_0_);
                    Vector3fixMultiplyScalar(&triangle->unknown_c_, scale, &triangle->unknown_c_);
                    Vector3fixMultiplyScalar(&triangle->unknown_18_, scale, &triangle->unknown_18_);
                }
                Vector3fix_Subtract(&snappedPosition, &packedTriangles.unknown_908_, &localPosition);
                segmentTop = localPosition;
                segmentTop.y += 0x1000;
                segmentBottom = localPosition;
                segmentBottom.y -= 0xa000;
                if (func_020312bc(triangles, triangleCount, &segmentTop, &segmentBottom, &hit) != -1) {
                    hit.y += 0x199;
                    snappedPosition.y = hit.y;
                    localPosition.y = hit.y;
                }
            }
        }
    }
    return snappedPosition.y;
}
