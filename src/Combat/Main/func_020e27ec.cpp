#include <globaldefs.h>

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
extern "C" struct SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254* animationList, int index);

// USA: SetSpriteAnimationPosition_020e27ec
extern "C" ARM void SetSpriteAnimationPosition_020e27ec(struct SpriteAnimationList_0205a254* animationList, int index, short x, short y) {
    struct SpriteAnimation_0205a254_2* animation = FindSpriteAnimation_0205a3d0(animationList, index);
    if (animation != NULL) {
        *(short*)((char*)animation + 0x4) = x;
        *(short*)((char*)animation + 0x6) = y;
    }
}
