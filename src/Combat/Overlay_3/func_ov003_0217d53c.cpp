#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217d53c_267 = 0x107 };
enum { Enum_ov003_0217d53c_14076 = 0x34ec };
enum { Enum_ov003_0217d53c_2464 = 0x870 };
enum { Enum_ov003_0217d53c_14132 = 0x3524 };
enum { Enum_ov003_0217d53c_14092 = 0x34fc };
#else
enum { Enum_ov003_0217d53c_267 = 0x10b };
enum { Enum_ov003_0217d53c_14076 = 0x36fc };
enum { Enum_ov003_0217d53c_2464 = 0x9a0 };
enum { Enum_ov003_0217d53c_14132 = 0x3734 };
enum { Enum_ov003_0217d53c_14092 = 0x370c };
#endif
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" char* GetMessageWindow_020421a0(void);
extern "C" char* GetZone3D_02012fe4(void);
extern "C" int func_020457e0(char* arg0);
extern "C" void func_ov017_021baedc(void* arg0, int arg1);
struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);
extern "C" void func_ov017_0219e310(unsigned char* arg0, int arg1);
extern "C" void* GetZoneEntry_0200fd0c(GameState* gameState);
extern "C" void func_02070378(char* arg0);

struct Struct_ov003_0217d53c_4 {
#if defined(jpn)
    unsigned char unknown1_0_[0x1b3c];
#else
    unsigned char unknown_0_[0xb3c];
#endif
    int unknown_b3c_;
};

#if !defined(jpn)
static inline struct Struct_ov003_0217d53c_4* inline_ov003_0216e714_2(void* arg0) {
    return (struct Struct_ov003_0217d53c_4*)((int)arg0 + 0x1840);
}
#endif

struct Struct_ov003_0217d53c {
    unsigned char unknown_0_[0x8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[Enum_ov003_0217d53c_267 - 0xa];
    unsigned char unknown_10b_;
};

struct Struct_ov003_0217d53c_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0x7 - 0x2];
    unsigned char unknown_7_;
    unsigned char unknown_8_[0xc - 0x8];
    unsigned char unknown_c_;
    unsigned char unknown_d_[0x14 - 0xd];
    int unknown_14_;
    int unknown_18_;
};

struct Struct_ov003_0217d53c_3 {
    unsigned char unknown_0_[0x4];
    unsigned char unknown_4_;
    signed char unknown_5_;
};

// USA: func_ov003_0217d53c
extern "C" ARM void func_ov003_0217d53c(Struct_ov003_0217d53c_3* arg0) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = GetMessageWindow_020421a0();
    char* var2 = (char*)GetGameResources();
    struct Queue_0201bdac_2* var3 = *(struct Queue_0201bdac_2**)(var2 + Enum_ov003_0217d53c_14076);
#if defined(jpn)
    Struct_ov003_0217d53c_4* var4 = (Struct_ov003_0217d53c_4*)(GetZone3D_02012fe4() + 0x860);
#else
    char* var5 = GetZone3D_02012fe4();
#endif
    if (arg0->unknown_5_ != 0 || *(int*)(var1 + Enum_ov003_0217d53c_2464) != 0) return;
    if (func_020457e0(var1) == 0) {
        Struct_ov003_0217d53c* var6 = *(Struct_ov003_0217d53c**)(var2 + Enum_ov003_0217d53c_14132);
        func_ov017_021baedc(var6, 1);
        var6->unknown_10b_ = 1;
        switch (
#if defined(jpn)
            var4->unknown_b3c_
#else
            inline_ov003_0216e714_2(var5)->unknown_b3c_
#endif
        ) {
            case 0:
            case 1:
            case 2:
                var6->unknown_8_ = 0xd067;
                break;
            case 3:
            case 4:
                var6->unknown_8_ = 0xd068;
                break;
            case 5:
                var6->unknown_8_ = 0xd069;
                break;
            case 6:
                var6->unknown_8_ = 0xd06a;
                break;
        }
        AppendToQueue_020469b4(var3, (struct QueueNode_0201bdac*)var6);
        unsigned char* var7 = *(unsigned char**)(var2 + Enum_ov003_0217d53c_14092);
        func_ov017_0219e310(var7, 0);
        Struct_ov003_0217d53c_2* var8 = (Struct_ov003_0217d53c_2*)GetZoneEntry_0200fd0c(var0);
        func_02070378((char*)var8);
        var8->unknown_0_ = 0xc3bc;
        var8->unknown_7_ = 1;
        var8->unknown_14_ = 0x266;
        var8->unknown_18_ = -0x7b33;
        var8->unknown_c_ = 1;
        AppendToQueue_020469b4(var3, (struct QueueNode_0201bdac*)var7);
        arg0->unknown_4_ = 4;
        arg0->unknown_5_ = 0;
    } else {
        arg0->unknown_4_ = 4;
        arg0->unknown_5_ = 0;
    }
}
