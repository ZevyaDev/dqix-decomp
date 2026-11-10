#pragma once

#include "NitroSDK/Matrix.h"

struct BoundingBox_02018fbc {
    Vector3fix maxCorner_0_;
    Vector3fix minCorner_c_;
};


extern "C" int func_02031118(const Vector3fix* arg0, const BoundingBox_02018fbc* arg1);
extern "C" int func_020321e0(const Vector3fix* arg0, const BoundingBox_02018fbc* arg1,
                            int arg2, const Vector3fix* arg3, int arg4);
