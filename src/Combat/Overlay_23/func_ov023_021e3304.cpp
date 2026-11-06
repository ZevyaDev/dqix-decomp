#include <globaldefs.h>
#include "GameState/GameState.h"

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
extern "C" void SetSpriteAnimationOAMIndex_0205a42c(struct SpriteAnimationList_0205a254*, int, int);
extern "C" void PlaySpriteAnimation_0205a370(struct SpriteAnimationList_0205a254*, int);
extern "C" struct SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254*, int);

struct SpriteAnimationList_0205a330;
extern "C" void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330*, int);


extern "C" void DrawSpriteAnimations_0205ae8c(void*);

// USA: func_ov023_021e3304
extern "C" ARM void func_ov023_021e3304(void* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    SetSpriteAnimationOAMIndex_0205a42c(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0), 0, 0);
    PlaySpriteAnimation_0205a370(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0), 0);
    struct SpriteAnimation_0205a254_2* var1 = FindSpriteAnimation_0205a3d0(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0), 0);
    if (var1 != NULL) {
        *(unsigned char*)((char*)var1 + 0x15) |= 8;
    }
    int var2 = (int)var0->GetTickCount();
    AdvanceSpriteAnimations_0205a330((struct SpriteAnimationList_0205a330*)(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0)), var2);
    var1 = FindSpriteAnimation_0205a3d0(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0), 0);
    if (var1 != NULL) {
        *(short*)((char*)var1 + 0x4) = (short)arg1;
        *(short*)((char*)var1 + 0x6) = (short)arg2;
    }
    DrawSpriteAnimations_0205ae8c(*(void**)((char*)arg0 + 0xc8));
}
