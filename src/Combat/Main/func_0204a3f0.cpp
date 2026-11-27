#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0204a3f0_3;

struct Struct_0204a3f0_4 {
    unsigned int unknown_0_;
    char unknown_4_[0xa4];
    signed int unknown_a8_0_ : 1;
};

struct Struct_0204a3f0 {
    char unknown_0_[0x8];
    struct Struct_0204a3f0_4* pModel_8_;
};

struct BoneCamera_0204a3f0_2 {
    char unknown_0_[0x21c];
    struct Struct_0204a3f0* pTrackedObject_21c_;
};

// USA: SetBoneCameraObject_0204a3f0
extern "C" ARM void SetBoneCameraObject_0204a3f0(struct BoneCamera_0204a3f0_2* camera, struct Struct_0204a3f0* trackedObject) {
    struct Struct_0204a3f0_4* renderContext;
    camera->pTrackedObject_21c_ = trackedObject;
    ((Object3D*)((struct Struct_0204a3f0_3*)trackedObject))->EnableBoneTracking();
    renderContext = camera->pTrackedObject_21c_->pModel_8_;
    if (renderContext == NULL) return;
    if (!renderContext->unknown_a8_0_) renderContext = NULL;
    if (renderContext != NULL) {
        renderContext->unknown_0_ |= 4;
    }
}
