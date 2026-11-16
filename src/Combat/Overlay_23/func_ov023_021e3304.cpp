#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/OBJSpriteSet.h"

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;

struct SpriteAnimationList_0205a330;



// USA: func_ov023_021e3304
extern "C" ARM void func_ov023_021e3304(void* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    ((OBJSpriteSet::List*)(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0)))->SetSpriteOBJIndex(0, 0);
    ((OBJSpriteSet::List*)(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0)))->PlaySpriteAnimation(0);
    struct SpriteAnimation_0205a254_2* var1 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0)))->GetSprite(0));
    if (var1 != NULL) {
        *(unsigned char*)((char*)var1 + 0x15) |= 8;
    }
    int var2 = (int)var0->GetTickCount();
    ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0))))->UpdateAll(var2);
    var1 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(*(struct SpriteAnimationList_0205a254**)((char*)arg0 + 0xd0)))->GetSprite(0));
    if (var1 != NULL) {
        *(short*)((char*)var1 + 0x4) = (short)arg1;
        *(short*)((char*)var1 + 0x6) = (short)arg2;
    }
    ((OBJSpriteSet*)(*(void**)((char*)arg0 + 0xc8)))->DrawAll();
}
