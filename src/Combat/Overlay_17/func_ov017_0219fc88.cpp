#if defined(jpn)
enum { Enum_ov017_0219fc88_1788 = 0x4ec, Enum_ov017_0219fc88_1844 = 0x524, Enum_ov017_0219fc88_1744 = 0x4c0, Enum_ov017_0219fc88_266 = 0x106 };
#else
enum { Enum_ov017_0219fc88_1788 = 0x6fc, Enum_ov017_0219fc88_1844 = 0x734, Enum_ov017_0219fc88_1744 = 0x6d0, Enum_ov017_0219fc88_266 = 0x10a };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"


extern "C" void* GetZone3D_02012fe4(void);
extern "C" void* GetZoneEntry_0200fd0c(GameState* gameState);

struct Struct_02071488 {
    char unknown_0_[0x46];
    short unknown_46_;
    char unknown_48_[0x68 - 0x48];
};
extern "C" struct Struct_02071488* func_02071574(unsigned int arg0, struct Struct_02071488* arg1);

extern "C" void* GetFlagManager_0205ec34(void);
extern "C" int IsFlagSet_0206dfb0(int flagManager, unsigned char* flags, int flagIndex);

extern "C" void ResetEventTask_ov017_021baedc(void* node, int isRestart);

struct Struct_020213fc;
extern "C" void func_020213fc(struct Struct_020213fc* arg0, int arg1);

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

extern "C" void func_ov017_021bd398(void* arg0);

extern "C" int func_020649f4(void* arg0, void* arg1);
extern "C" void func_0206f81c(void* arg0);

struct Struct_ov017_0219fc88 {
    char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    char unknown_4_[8 - 4];
    unsigned short unknown_8_;
    char unknown_a_[Enum_ov017_0219fc88_266 - 0xa];
    unsigned char unknown_10a_;
};

struct Struct_ov017_0219fc88_2 {
    char unknown_0_[0xc];
    int unknown_c_;
    char unknown_10_[0x34 - 0x10];
};

// USA: func_ov017_0219fc88
extern "C" ARM int func_ov017_0219fc88(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    unsigned short* var1 = (unsigned short*)GetZone3D_02012fe4();
    void* var2;
    int var3;
    void* var4 = GetGameResources();
    struct Queue_0201bdac_2* var5 = *(struct Queue_0201bdac_2**)((char*)var4 + 0x3000 + Enum_ov017_0219fc88_1788);
    var2 = GetZoneEntry_0200fd0c(var0);

    struct Struct_02071488 var6;
    var3 = 0;

    if (func_02071574((unsigned short)arg1, &var6) != NULL) {
        void* var7 = GetFlagManager_0205ec34();
        if (IsFlagSet_0206dfb0((int)var7, (unsigned char*)var7 + 0x8c, var6.unknown_46_ + 0x38e) == 0) {
            struct Struct_ov017_0219fc88* var8 = *(struct Struct_ov017_0219fc88**)((char*)var4 + 0x3000 + Enum_ov017_0219fc88_1844);

            if (var8->unknown_2_ != 0) {
                var8->unknown_8_ = arg1;
            } else if (var8->unknown_3_ == 0) {
                ResetEventTask_ov017_021baedc(var8, 1);
                var8->unknown_8_ = arg1;
                func_020213fc(*(struct Struct_020213fc**)((char*)var4 + 0x3000 + Enum_ov017_0219fc88_1744), 1);
                AppendToQueue_020469b4(var5, (struct QueueNode_0201bdac*)var8);
            }

            func_ov017_021bd398(var8);

            if (*((unsigned char*)var2 + 0xd) != 0) var8->unknown_10a_ = 1;
            var3 = 1;
        }
    }

    if (!var3) {
        void* var9 = GetFlagManager_0205ec34();
        struct Struct_ov017_0219fc88_2 var10;
        var10.unknown_c_ = *var1;
        if (func_020649f4(var9, &var10)) {
            func_0206f81c(&var10);
        }
    }

    return var3;
}
