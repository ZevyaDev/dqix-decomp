#include <globaldefs.h>

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
extern "C" struct SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254* animationList, int index);

// USA: func_020e27ec
extern "C" ARM void func_020e27ec(struct SpriteAnimationList_0205a254* arg0, int arg1, short arg2, short arg3) {
    struct SpriteAnimation_0205a254_2* var0 = FindSpriteAnimation_0205a3d0(arg0, arg1);
    if (var0 != NULL) {
        *(short*)((char*)var0 + 0x4) = arg2;
        *(short*)((char*)var0 + 0x6) = arg3;
    }
}
