#include <globaldefs.h>

#include "NitroSDK/Matrix.h"
#include "GameState/GameState.h"
#include "NitroSDK/Graphics3D/Graphics3D.h"
#include "NitroSDK/Graphics3D/RenderConfig.h"
#include "World/Object3D.h"

struct Model3D;
void* GetModel3DContext(Model3D*);
Matrix4x3 RotationMatrixY(int angle);
void Vector3fixMultiply(const Vector3fix* a, const Vector3fix* b, Vector3fix* out);
extern "C" void func_02059f54(void* arg0, int arg1);

struct Struct_02057ab8 {
    char unknown_0_[0xc4];
    Vector3fix position_c4_;
    Vector3fix rotation_d0_;
    Vector3fix scale_dc_;
    Matrix4x3 transform_e8_;
};

struct EffectSlot_02057ab8_2 {
    char unknown_0_[4];
    struct Struct_02057ab8* pEffectInstance_4_;
    char unknown_8_[0x44 - 0x8];
    Vector3fix position_44_;
    Vector3fix rotation_50_;
    char unknown_5c_[0xac - 0x5c];
    int hasBeffFile_ac_;
    short startDelay_b0_;
    short parentObjectIndex_b2_;
    short parentBoneIndex_b4_;
    char unknown_b6_[0xd4 - 0xb6];
};

struct EffectManager_02057ab8_3 {
    char unknown_0_[8];
    struct EffectSlot_02057ab8_2 effectSlots_8_[16];
};

extern "C" ARM void DrawAttachedEffects_02057ab8(struct EffectManager_02057ab8_3* effectManager, int objectIndex);

// USA: DrawAttachedEffects_02057ab8
extern "C" ARM void DrawAttachedEffects_02057ab8(struct EffectManager_02057ab8_3* effectManager, int objectIndex) {
    GameState* gameState = GameState::GetInstance();
    int i;
    if (objectIndex < 0) {
        return;
    }
    for (i = 0; i < 16; i++) {
        struct EffectSlot_02057ab8_2* slot = &effectManager->effectSlots_8_[i];
        if (objectIndex != slot->parentObjectIndex_b2_) continue;
        if (slot->startDelay_b0_ > 0) continue;
        void* parent = gameState->GetGameObjectByIndex(slot->parentObjectIndex_b2_);
        if (parent == 0) {
            slot->parentObjectIndex_b2_ = -1;
            continue;
        }
        void* model = *(void**)((char*)parent + 8);
        if (model == 0) {
            slot->parentObjectIndex_b2_ = -1;
            continue;
        }
        Nitro3DRenderContext* renderContext = (Nitro3DRenderContext*)GetModel3DContext((Model3D*)model);
        if (renderContext == 0) {
            slot->parentObjectIndex_b2_ = -1;
            continue;
        }

        Matrix4x3 boneMatrix;
        Mat4x3_WriteIdentity(&boneMatrix);
        Vector3fix position = *(Vector3fix*)((char*)parent + 0x44);
        Vector3fix rotation = *(Vector3fix*)((char*)parent + 0x50);
        Vector3fix scale = ((Object3D*)parent)->GetScale();
        int hasBoneMatrix = 0;
        if (slot->parentBoneIndex_b4_ > -1) {
            if (Nitro3D_GetBonePosDirMatrices(renderContext, (Matrix4x3*)hasBoneMatrix, (Matrix3x3*)hasBoneMatrix, (unsigned int)slot->parentBoneIndex_b4_)) {
                const Matrix4x3* inverseViewMatrix = Nitro3DRenderConfig::GetInverseViewMatrix();
                Nitro3D_GetCurrentPosDirMatrices(&boneMatrix, (Matrix3x3*)hasBoneMatrix);
                Mat4x3_Multiply(&boneMatrix, inverseViewMatrix, &boneMatrix);
                hasBoneMatrix = 1;
            }
        }
        if (slot->hasBeffFile_ac_ == 0) {
            Vector3fix localPosition = slot->position_44_;
            Vector3fix localRotation = slot->rotation_50_;
            Vector3fix localScale = ((Object3D*)slot)->GetScale();
            Matrix4x3 yawMatrix;
            Vector3fix rotatedPosition;
            yawMatrix = RotationMatrixY(rotation.y);
            Mat4x3_ApplyToVector(&localPosition, &yawMatrix, &rotatedPosition);
            Vector3fix_Add(&position, &rotatedPosition, &position);
            Vector3fixMultiply(&scale, &localScale, &scale);
            slot->position_44_ = position;
            slot->rotation_50_ = rotation;
            ((Object3D*)slot)->SetScale(&scale);
            func_02059f54(slot, i + 0xd0);
            DrawAttachedEffects_02057ab8(effectManager, i + 0xd0);
            slot->position_44_ = localPosition;
            slot->rotation_50_ = localRotation;
            ((Object3D*)slot)->SetScale(&localScale);
        } else if (slot->hasBeffFile_ac_ == 1) {
            struct Struct_02057ab8* effectInstance = slot->pEffectInstance_4_;
            if (effectInstance != 0) {
                if (hasBoneMatrix == 0) {
                    effectInstance->position_c4_ = position;
                    effectInstance->rotation_d0_ = rotation;
                    effectInstance->scale_dc_ = scale;
                } else {
                    position.x = boneMatrix.translation.x;
                    position.y = boneMatrix.translation.y;
                    position.z = boneMatrix.translation.z;
                    Mat4x3_ApplyScale(&boneMatrix, &boneMatrix, 0xf627, 0xf627, 0xf627);
                    boneMatrix.translation.x = position.x;
                    boneMatrix.translation.y = position.y;
                    boneMatrix.translation.z = position.z;
                    effectInstance->transform_e8_ = boneMatrix;
                }
            }
            func_02059f54(slot, i + 0xd0);
            DrawAttachedEffects_02057ab8(effectManager, i + 0xd0);
        }
    }
}
