#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif
#include "GameState/GameState.h"

struct Vector3i;
extern "C" int GetResources_0200fb8c(int* gameState);

struct QueueNode_02015438;
extern "C" int GetQueueHeadType_02046b24(struct QueueNode_02015438** queue);

extern "C" void* GetBattleScene_ov000_02160130(void);
extern "C" void* func_ov000_021677d8(void* arg0, int arg1);

extern "C" void* GetZone3D_02012fe4(void);

extern "C" int func_02011b50(void* arg0, int arg1);

struct Struct_02092d60 {
    int unknown_0_, unknown_4_, unknown_8_;
};

extern "C" void func_ov017_021cf3c0(struct Struct_02092d60 arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_02092d60_2 {
    unsigned short unknown_0_;
};

struct Struct_02092d60_3 {
    char unknown_0_[0x38];
    signed char unknown_38_;
};

// USA: func_02092d60
extern "C" ARM void func_02092d60(struct Struct_02092d60_3* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    if (var1 != 0) {
        struct Struct_02092d60 var2;
        *(Vector3i*)&var2.unknown_0_ = *(Vector3i const*)(&var1->obj3D_.position_.x);
        int var3 = GetResources_0200fb8c((int*)var0);
        struct QueueNode_02015438** var4 = *(struct QueueNode_02015438***)((char*)(int)var3 + (IS_JPN ? 0x34ec : 0x36fc));
        int var5 = GetQueueHeadType_02046b24(var4);
        if (var5 == 0xa) {
            void* var6 = GetBattleScene_ov000_02160130();
            if (var6 != 0) {
                void* var7 = func_ov000_021677d8(var6, var1->obj3D_.unknown_4_);
                if (var7 != 0) {
                    *(Vector3i*)&var2.unknown_0_ = *(Vector3i const*)((int*)var7);
                }
            }
        }
        struct Struct_02092d60_2* var8 = (struct Struct_02092d60_2*)GetZone3D_02012fe4();
        unsigned short var9 = var8->unknown_0_;
        int var10 = func_02011b50(var0, 1);
        func_ov017_021cf3c0(var2, var9, arg1, var10, arg0->unknown_38_);
    }
}
