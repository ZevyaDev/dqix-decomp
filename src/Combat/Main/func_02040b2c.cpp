#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02040b2c_724 = 0x2c8 };
#else
enum { Enum_02040b2c_724 = 0x2d4 };
#endif

struct Struct_0203cda8;
extern "C" void func_0203cda8(struct Struct_0203cda8* arg0, int arg1);
extern "C" void SetObject3DRotation_0203db34(unsigned char* object, int x, int y, int z);

struct Rotation_02040b2c { int x_0_, y_4_, z_8_; };

struct NPC_0203e2c4_2 {
    char unknown_0_[0x14];
    struct Struct_0203cda8* unknown_14_;
    unsigned char* unknown_18_;
    unsigned char* unknown_1c_;
};

// USA: SetNPCFacingInstantly_02040b2c
extern "C" ARM void SetNPCFacingInstantly_02040b2c(struct NPC_0203e2c4_2* npc, int angle) {
    struct Struct_0203cda8* sprite;
    unsigned char* object;

    sprite = npc->unknown_14_;
    if (sprite != NULL) {
        func_0203cda8(sprite, angle);
        return;
    }
    object = npc->unknown_18_;
    if (object != NULL) {
        struct Rotation_02040b2c modelRotation = *(struct Rotation_02040b2c*)(object + 0x50);
        SetObject3DRotation_0203db34(object, modelRotation.x_0_, angle, modelRotation.z_8_);
        object = npc->unknown_18_;
        *(int*)(object + 0xb0) = angle;
        return;
    }
    object = npc->unknown_1c_;
    if (object == NULL) return;
    {
        struct Rotation_02040b2c gameObjectRotation = *(struct Rotation_02040b2c*)(object + 0x50);
        SetObject3DRotation_0203db34(object, gameObjectRotation.x_0_, angle, gameObjectRotation.z_8_);
    }
    object = npc->unknown_1c_;
    *(int*)(object + Enum_02040b2c_724) = angle;
}
