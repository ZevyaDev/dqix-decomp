#include <globaldefs.h>

struct Struct_0204a120_2;
extern "C" void InitKeyControlledCamera_020a2cf0(struct Struct_0204a120_2*);
extern "C" ARM void SetCameraClassFlags_0202e08c(unsigned int* camera, unsigned int flags);

struct BoneCamera_0204a120 {
    char unknown_0_[0x21c];
    int pTrackedObject_21c_;
    int unknown_220_;
    unsigned char eyeBoneName_224_;
    char unknown_225_[0xf];
    unsigned char targetBoneName_234_;
    char unknown_235_[0xf];
    unsigned char unknown_244_;
    char unknown_245_[0xf];
    int eyeBoneIndex_254_;
    int targetBoneIndex_258_;
    int unknown_25c_;
    int unknown_260_;
    unsigned char unknown_264_;
    unsigned char unknown_265_;
};

// USA: InitBoneCamera_0204a120
extern "C" ARM void InitBoneCamera_0204a120(struct BoneCamera_0204a120* camera) {
    InitKeyControlledCamera_020a2cf0((struct Struct_0204a120_2*)camera);
    SetCameraClassFlags_0202e08c((unsigned int*)camera, 0x10);
    camera->pTrackedObject_21c_ = 0;
    camera->unknown_220_ = 0;
    camera->eyeBoneName_224_ = 0;
    camera->targetBoneName_234_ = 0;
    camera->unknown_244_ = 0;
    camera->eyeBoneIndex_254_ = -1;
    camera->targetBoneIndex_258_ = -1;
    camera->unknown_25c_ = -1;
    camera->unknown_260_ = -1;
    camera->unknown_264_ = 0;
    camera->unknown_265_ = 0;
}
