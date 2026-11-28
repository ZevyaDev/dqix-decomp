#include <globaldefs.h>

struct ZoneFeature_02094b9c_2 {
    char unknown_0_[0x08];
    int center_8_[3];
    int size_14_[3];
    char unknown_20_[0x02];
    short angle_22_;
    int unknown_24_;
    int triggerFlags_28_;
};

struct BoundingBox_02094b9c {
    int unknown_0_[6];
};

struct Struct_02032148 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

extern "C" ARM int IsPointInRotatedBoundingBox_020321e0(void* point, struct BoundingBox_02094b9c* box, short angle, int* pivot, int maxDistanceSq);
extern "C" ARM int func_02032148(void* arg0, struct Struct_02032148* arg1, int arg2);

// USA: IsInsideZoneFeature_02094b9c
extern "C" ARM int IsInsideZoneFeature_02094b9c(struct ZoneFeature_02094b9c_2* feature, void* position) {
    if (feature->triggerFlags_28_ & 8) {
        return 0;
    }

    struct BoundingBox_02094b9c box;
    struct Struct_02032148 cylinder;
    struct BoundingBox_02094b9c corners;

    corners.unknown_0_[0] = feature->center_8_[0] + (feature->size_14_[0] >> 1);
    corners.unknown_0_[1] = feature->center_8_[1] + (feature->size_14_[1] >> 1);
    corners.unknown_0_[2] = feature->center_8_[2] + (feature->size_14_[2] >> 1);
    corners.unknown_0_[3] = feature->center_8_[0] - (feature->size_14_[0] >> 1);
    corners.unknown_0_[4] = feature->center_8_[1] - (feature->size_14_[1] >> 1);
    corners.unknown_0_[5] = feature->center_8_[2] - (feature->size_14_[2] >> 1);

    box = corners;

    int isInside = 0;
    int isInVolume;
    int isBox = feature->size_14_[2] > 0;
    if (isBox) {
        isInVolume = IsPointInRotatedBoundingBox_020321e0(position, &box, feature->angle_22_, &feature->center_8_[0], feature->unknown_24_);
    } else {
        cylinder.unknown_0_ = feature->center_8_[0];
        cylinder.unknown_4_ = feature->center_8_[1];
        cylinder.unknown_8_ = feature->center_8_[2];
        cylinder.unknown_c_ = feature->size_14_[0];
        cylinder.unknown_10_ = feature->size_14_[1];
        isInVolume = func_02032148(position, &cylinder, cylinder.unknown_10_);
    }
    if (isInVolume) {
        isInside = 1;
    }

    int featureFlags = feature->triggerFlags_28_;
    if (isInside != 0) {
        if (featureFlags & 1) {
            if (featureFlags & 4) {
                isInside = 0;
            } else {
                feature->triggerFlags_28_ = featureFlags | 2;
            }
        }
    } else {
        if (featureFlags & 1) {
            if (featureFlags & 2) {
                feature->triggerFlags_28_ = featureFlags | 4;
            }
        }
    }
    return isInside;
}