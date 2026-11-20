#if defined(jpn)
enum { Enum_ov017_0219b43c_1584 = 0x420, Enum_ov017_0219b43c_11152 = 0x2980 };
#else
enum { Enum_ov017_0219b43c_1584 = 0x630, Enum_ov017_0219b43c_11152 = 0x2b90 };
#endif

#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Graphics/SPRSprite.h"

#if defined(jpn)
#define func_0202ec84 func_0202e7f4
#endif

#if defined(jpn)
#define func_020100bc func_0200ff18
#endif

struct Struct_02015ef4 { unsigned int unknown_0_[3]; };
extern "C" int func_0202ec84(void* camera, struct Struct_02015ef4* worldPosition, int* outX, int* outY);

struct SPRSprite_0203a46c;
extern "C" void SetSPRSpritePosition_0203a46c(struct SPRSprite_0203a46c* sprite, int x, int y, int z);

struct SPRSprite_02017098_3;

struct Struct_ov017_0219b43c { unsigned char unknown_0_[0x88]; };

// USA: func_ov017_0219b43c
extern "C" ARM void func_ov017_0219b43c(char* arg0, int arg1, struct Struct_02015ef4* arg2, int arg3, int arg4) {
    void* var0 = func_020100bc(GameState::GetInstance());
    switch (arg1) {
    case 2:
        arg1 = 2;
        break;
    case 5:
        arg1 = 3;
        break;
    case 6:
        arg1 = 4;
        break;
    case 14:
        arg1 = 12;
        break;
    case 15:
        arg1 = 13;
        break;
    case 16:
        arg1 = 14;
        break;
    }

    int var1, var2;
    func_0202ec84(var0, arg2, &var1, &var2);

    struct Struct_ov017_0219b43c* var3 = (struct Struct_ov017_0219b43c*)(arg0 + Enum_ov017_0219b43c_11152) + arg1;
    *(struct Struct_ov017_0219b43c**)(arg0 + 0x3000 + Enum_ov017_0219b43c_1584) = var3;

    switch (arg1) {
    default: {
        int var4 = ((var1 - 0xc) + arg3) << 0xc;
        int var5 = ((var2 - 0x4c) + arg4) << 0xc;
        SetSPRSpritePosition_0203a46c(*(struct SPRSprite_0203a46c**)(arg0 + 0x3000 + Enum_ov017_0219b43c_1584), var4, var5, 0);
        ((SPRSprite*)(*(struct SPRSprite_02017098_3**)(arg0 + 0x3000 + Enum_ov017_0219b43c_1584)))->SetAnimation(1);
        break;
    }
    case 0xc:
    case 0xd:
    case 0xe: {
        int var6 = ((var1 - 6) + arg3) << 0xc;
        int var7 = ((var2 - 0x4c) + arg4) << 0xc;
        SetSPRSpritePosition_0203a46c(*(struct SPRSprite_0203a46c**)(arg0 + 0x3000 + Enum_ov017_0219b43c_1584), var6, var7, 0);
        break;
    }
    }
}
