#include <globaldefs.h>
#include "GameState/GameState.h"

struct Vec3 { int x, y, z; };
extern "C" void _ZN8Vector3iaSERKS_(int* dst, int* src);
extern "C" void __clear(void* ptr, int size);

struct IntField0x68_020377bc { char unk[0x68]; int field; };
extern "C" int _ZNK8Object3D9GetHeightEv(struct IntField0x68_020377bc* obj);

struct Obj020a2be8 {
    char pad0[0x10];
    struct Vec3 vec10;       // +0x10
    char pad1[0x21c - 0x1c];
    short field21c;           // +0x21c
    char pad2[0x22c - 0x21e];
    struct Vec3 vec22c;         // +0x22c
    char pad3[0x245 - 0x238];
    unsigned char field245;      // +0x245
};

// USA: func_020a2be8  (semantic: UpdateCombatantOffsetVec020a2be8)
extern "C" ARM void func_020a2be8(struct Obj020a2be8* obj) {
    GameState* battle = GameState::GetInstance();
    struct Vec3 v;
    __clear(&v, 0xc);
    GameObject* c = battle->GetGameObjectByIndex(obj->field21c);
    if (c != 0) {
        _ZN8Vector3iaSERKS_((int*)&v, (int*)((char*)c + 0x44));
        int val = _ZNK8Object3D9GetHeightEv((struct IntField0x68_020377bc*)c);
        v.y = v.y + (val >> 1);
    }
    struct Vec3 diff;
    Vector3fix_Subtract((const Vector3fix*)&obj->vec10, (const Vector3fix*)&v, (Vector3fix*)&diff);
    _ZN8Vector3iaSERKS_((int*)&obj->vec22c, (int*)&diff);
    obj->field245 |= 0x11;
}
