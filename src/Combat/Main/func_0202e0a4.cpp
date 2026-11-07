#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "Graphics/Vector.h"

struct Camera_0202e0a4 {
    unsigned int unknown_0_;
    Vector3i eye_4_;
    Vector3i target_10_;
    Vector3i up_1c_;
    unsigned char unknown_28_[0x34];
    int projectionParams_5c_[5];
    unsigned char unknown_70_[0xc];
    short roll_7c_;
    unsigned char unknown_7e_[0x72];
    Matrix4x3 transform_f0_;
    Vector3i transformedEye_120_;
    Vector3i transformedTarget_12c_;
    Vector3i viewDirection_138_;
    Matrix3x3 inverseViewRotation_144_;
    unsigned int flags_168_;
    unsigned char unknown_16c_[0x78];
    int shakeAmplitude_1e4_;
    unsigned int shakeTime_1e8_;
    unsigned char unknown_1ec_[0xc];
    unsigned char isSwaying_1f8_;
    unsigned char unknown_1f9_;
    unsigned short swayAngle_1fa_;
    int swayOffset_1fc_;
    float swaySpeed_200_;
    int swayAmplitude_204_;
    int minEyeHeight_208_;
    unsigned char hasMinEyeHeight_20c_;
    unsigned char unknown_20d_[5];
    short panAngle_212_;
};
extern "C" void func_0202ef14(Camera_0202e0a4*);
extern "C" void func_0202f0e0(Camera_0202e0a4*);
extern const Vector3i data_020e73c0;
extern const short data_020e9450[];

static inline void inline_0202e0a4(Vector3i& arg0, Vector3i& arg1, short arg2) {
    Vector3i var0;
    Vector3fix_Subtract(&arg1, &arg0, &var0);
    Matrix4x3 var1;
    var1 = RotationMatrixY(arg2);
    Mat4x3_ApplyToVector(&var0, &var1, &var0);
    Vector3fix_Add(&arg0, &var0, &arg1);
}

// USA: UpdateCamera_0202e0a4
extern "C" ARM void UpdateCamera_0202e0a4(Camera_0202e0a4* camera) {
    func_0202ef14(camera);
    func_0202f0e0(camera);
    camera->transformedEye_120_ = camera->eye_4_;
    camera->transformedTarget_12c_ = camera->target_10_;
    if (camera->flags_168_ & 1) {
        Mat4x3_ApplyToVector(&camera->transformedEye_120_, &camera->transform_f0_, &camera->transformedEye_120_);
        Mat4x3_ApplyToVector(&camera->transformedTarget_12c_, &camera->transform_f0_, &camera->transformedTarget_12c_);
    }
    Mat4x4_MaybeWriteFrustum(camera->projectionParams_5c_[0], camera->projectionParams_5c_[1], camera->projectionParams_5c_[2], camera->projectionParams_5c_[3], camera->projectionParams_5c_[4], 0x1000, &gRenderConfig_0210a010.projectionMatrix);
    gRenderConfig_0210a010.flags &= ~0x50;
    if (camera->roll_7c_ == 0) {
        camera->up_1c_.x = 0;
        camera->up_1c_.y = 0x1000;
        camera->up_1c_.z = 0;
    } else {
        Vector3i up = data_020e73c0;
        Matrix4x3 rotation;
        rotation = RotationMatrixZ(camera->roll_7c_);
        Mat4x3_ApplyToVector(&up, &rotation, &up);
        Vector3i horizontalDirection;
        Vector3fix_Subtract(&camera->transformedTarget_12c_, &camera->transformedEye_120_, &horizontalDirection);
        horizontalDirection.y = 0;
        Vector3fix_Normalize(&horizontalDirection, &horizontalDirection);
        rotation = RotationMatrixY(fix32ReduceAngle0To2Pi(fix32_Atan2(horizontalDirection.x, horizontalDirection.z)));
        Mat4x3_ApplyToVector(&up, &rotation, &camera->up_1c_);
    }
    Vector3i eye = camera->transformedEye_120_;
    Vector3i target = camera->transformedTarget_12c_;
    if (camera->shakeTime_1e8_ && !(camera->flags_168_ & 4)) {
        if (camera->shakeTime_1e8_ <= 33) {
            camera->shakeTime_1e8_ = 0;
            camera->shakeAmplitude_1e4_ = 0;
        } else {
            camera->shakeTime_1e8_ -= 33;
            int amplitude = camera->shakeAmplitude_1e4_;
            camera->shakeAmplitude_1e4_ = amplitude - (33 * amplitude) / camera->shakeTime_1e8_;
        }
    }
    if (camera->shakeAmplitude_1e4_ > 0) {
        const Matrix4x3& viewMatrix = gRenderConfig_0210a010.viewMatrix;
        Vector3i viewRow0 = { viewMatrix.rows[0].x, viewMatrix.rows[0].y, viewMatrix.rows[0].z };
        Vector3i viewRow1 = { viewMatrix.rows[1].x, viewMatrix.rows[1].y, viewMatrix.rows[1].z };
        switch (rand() % 4) {
        case 0:
            Vector3fixMultiplyScalar(&viewRow0, camera->shakeAmplitude_1e4_, &viewRow0);
            Vector3fixMultiplyScalar(&viewRow1, camera->shakeAmplitude_1e4_, &viewRow1);
            break;
        case 1:
            Vector3fixMultiplyScalar(&viewRow0, -camera->shakeAmplitude_1e4_, &viewRow0);
            Vector3fixMultiplyScalar(&viewRow1, camera->shakeAmplitude_1e4_, &viewRow1);
            break;
        case 2:
            Vector3fixMultiplyScalar(&viewRow0, camera->shakeAmplitude_1e4_, &viewRow0);
            Vector3fixMultiplyScalar(&viewRow1, -camera->shakeAmplitude_1e4_, &viewRow1);
            break;
        case 3:
            Vector3fixMultiplyScalar(&viewRow0, -camera->shakeAmplitude_1e4_, &viewRow0);
            Vector3fixMultiplyScalar(&viewRow1, -camera->shakeAmplitude_1e4_, &viewRow1);
            break;
        }
        Vector3fix_Add(&eye, &viewRow0, &eye);
        Vector3fix_Add(&eye, &viewRow1, &eye);
        Vector3fix_Add(&target, &viewRow0, &target);
        Vector3fix_Add(&target, &viewRow1, &target);
    }
    if (camera->isSwaying_1f8_) {
        unsigned int tickCount = GameState::GetInstance()->GetTickCount();
        camera->swayAngle_1fa_ += (int)(camera->swaySpeed_200_ * (float)(tickCount * 182));
        camera->swayOffset_1fc_ = data_020e9450[(camera->swayAngle_1fa_ >> 4) * 2 + 1] >> 3;
        camera->swayOffset_1fc_ = FIX32_MULTIPLY(camera->swayOffset_1fc_, camera->swayAmplitude_204_);
        eye.y += camera->swayOffset_1fc_;
        target.y += camera->swayOffset_1fc_;
    }
    if (camera->hasMinEyeHeight_20c_ && eye.y < camera->minEyeHeight_208_) {
        eye.y = camera->minEyeHeight_208_;
    }
    short panAngle = camera->panAngle_212_;
    if (panAngle) {
        inline_0202e0a4(eye, target, panAngle);
    }
    gRenderConfig_0210a010.eyeVector = eye;
    gRenderConfig_0210a010.upVector = camera->up_1c_;
    gRenderConfig_0210a010.targetVector = target;
    Mat4x3_WriteViewMatrix(&eye, &camera->up_1c_, &target, &gRenderConfig_0210a010.viewMatrix);
    gRenderConfig_0210a010.flags &= ~0xe8;
    Vector3fix_Subtract(&camera->transformedTarget_12c_, &camera->transformedEye_120_, &camera->viewDirection_138_);
    Vector3fix_Normalize(&camera->viewDirection_138_, &camera->viewDirection_138_);
    const Matrix4x3* inverseViewMatrix = RenderConfig::GetInverseViewMatrix();
    camera->inverseViewRotation_144_.entries[0] = inverseViewMatrix->entries[0];
    camera->inverseViewRotation_144_.entries[1] = inverseViewMatrix->entries[1];
    camera->inverseViewRotation_144_.entries[2] = inverseViewMatrix->entries[2];
    camera->inverseViewRotation_144_.entries[3] = inverseViewMatrix->entries[3];
    camera->inverseViewRotation_144_.entries[4] = inverseViewMatrix->entries[4];
    camera->inverseViewRotation_144_.entries[5] = inverseViewMatrix->entries[5];
    camera->inverseViewRotation_144_.entries[6] = inverseViewMatrix->entries[6];
    camera->inverseViewRotation_144_.entries[7] = inverseViewMatrix->entries[7];
    camera->inverseViewRotation_144_.entries[8] = inverseViewMatrix->entries[8];
}
