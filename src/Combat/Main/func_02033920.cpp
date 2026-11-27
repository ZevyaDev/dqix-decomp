#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" int func_02032424(struct Struct_ov009_0218aa28*, struct Struct_ov009_0218aa28*);
struct Struct_02033834_2;
extern "C" void SetFacing_02033834(struct Struct_02033834_2*, int);
int fix32SignedAngleDistance(int a, int b);
int fix32abs(int x);
extern char data_020efa3c;

struct Struct_02033920 {
    char unknown_0_[4];
    short objectIndex_4_;
    char unknown_6_[0x3e];
    struct Struct_ov009_0218aa28 position_44_;
    char unknown_50_[4];
    int rotationY_54_;
    char unknown_58_[0x56];
    short targetFacing_ae_;
    short unknown_b0_;
    char unknown_b2_[0xc];
    unsigned char motion_be_;
    char unknown_bf_[5];
    unsigned short unknown_c4_;
};

// USA: FaceGameObject_02033920
extern "C" ARM void FaceGameObject_02033920(struct Struct_02033920* object, int targetObjectIndex, int isTurnAnimated) {
    GameState* gameState = GameState::GetInstance();
    if (targetObjectIndex == object->objectIndex_4_) return;
    GameObject* target = gameState->GetGameObjectByIndex(targetObjectIndex);
    if (target == 0) return;
    int angle = func_02032424((struct Struct_ov009_0218aa28*)((char*)target + 0x44), &object->position_44_);
    SetFacing_02033834((struct Struct_02033834_2*)object, angle);
    if (isTurnAnimated == 0) return;
    if (object->motion_be_ != 0) return;
    int turnAngle = fix32SignedAngleDistance(object->rotationY_54_, object->targetFacing_ae_);
    int absTurnAngle = fix32abs(turnAngle);
    if (absTurnAngle <= 0x1000) return;
    if (object->unknown_b0_ > 0x10c) return;
    int isRunAnimationSet = ((Object3D*)object)->MaybeSetRegularAnimation(&data_020efa3c, 0x11);
    if (isRunAnimationSet != 0) {
        object->unknown_c4_ |= 0x8000;
    }
}
