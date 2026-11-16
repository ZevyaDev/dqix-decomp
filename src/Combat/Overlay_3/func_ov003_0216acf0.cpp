#include <globaldefs.h>
#include "Combat/Main/BattleList.h"
#include "Graphics/OBJSpriteSet.h"

#if defined(jpn)
enum { Enum_ov003_0216acf0_1439 = 0x59b };
enum { Enum_ov003_0216acf0_228 = 0xe0 };
enum { Enum_ov003_0216acf0_1240 = 0x4d4 };
enum { Enum_ov003_0216acf0_1244 = 0x4d8 };
enum { Enum_ov003_0216acf0_1152 = 0x47c };
#else
enum { Enum_ov003_0216acf0_1439 = 0x59f };
enum { Enum_ov003_0216acf0_228 = 0xe4 };
enum { Enum_ov003_0216acf0_1240 = 0x4d8 };
enum { Enum_ov003_0216acf0_1244 = 0x4dc };
enum { Enum_ov003_0216acf0_1152 = 0x480 };
#endif

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0;
extern "C" TextWindow_0205d0e0* GetCursorTextWindow_0205d8c4(TextWindowManager_0205d81c*);
extern "C" int IsTextWindowOpen_0204c7e0(unsigned char*);

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;

struct SpriteAnimationList_0205a330;


// USA: func_ov003_0216acf0
extern "C" ARM void func_ov003_0216acf0(char* arg0) {
    if (!(*(unsigned char*)(arg0 + Enum_ov003_0216acf0_1439) & 1)) return;

    TextWindow_0205d0e0* var0 = GetCursorTextWindow_0205d8c4((TextWindowManager_0205d81c*)(arg0 + Enum_ov003_0216acf0_228));
    if (var0 == NULL) return;
    if (!IsTextWindowOpen_0204c7e0((unsigned char*)var0)) return;
    if (*(unsigned char*)((char*)var0 + 0xc5) & 0x20) return;

    short var1 = *(short*)((char*)var0 + 0xac);
    short var2 = *(short*)((char*)var0 + 0xae);
    short var3 = *(short*)((char*)var0 + 0xbc);
    short var4 = *(short*)((char*)var0 + 0xbe);

    short var5 = (short)(var3 + (short)(var1 << 3));
    short var6 = (short)(var4 + (short)(var2 << 3));

    SpriteAnimationList_0205a254* var7 = *(SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_0216acf0_1240);
    ((OBJSpriteSet::List*)(var7))->PlaySpriteAnimation(0);

    var7 = *(SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_0216acf0_1240);
    SpriteAnimation_0205a254_2* var8 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var7))->GetSprite(0));
    if (var8 != NULL) {
        *(unsigned char*)((char*)var8 + 0x15) |= 8;
    }

    var7 = *(SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_0216acf0_1240);
    int var9 = *(int*)(arg0 + Enum_ov003_0216acf0_1244);
    ((OBJSpriteSet::List*)((SpriteAnimationList_0205a330*)var7))->UpdateAll(var9);

    var7 = *(SpriteAnimationList_0205a254**)(arg0 + Enum_ov003_0216acf0_1240);
    var8 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(var7))->GetSprite(0));
    if (var8 != NULL) {
        *(short*)((char*)var8 + 0x4) = (short)(var5 - 8);
        *(short*)((char*)var8 + 0x6) = (short)(var6 - 2);
    }

    ((OBJSpriteSet*)(arg0 + Enum_ov003_0216acf0_1152))->DrawAll();
}
