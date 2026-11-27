#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/OBJSpriteSet.h"


struct SpriteAnimationList_0205a254;
struct Struct_ov023_021fb3c8_2 {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
};

extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" void* FindMenuObjectById_ov023_021f6880(void* objectList, int id);
extern "C" void* GetMenuObjectSpriteSet_ov023_021fad18(void* object);

struct Struct_ov023_021fb3c8 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0x20 - 0xd];
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    char unknown_26_[0x28 - 0x26];
    short unknown_28_;
    short unknown_2a_;
};

// USA: func_ov023_021fb3c8
extern "C" ARM void func_ov023_021fb3c8(struct Struct_ov023_021fb3c8* arg0, void* arg1) {
    if (arg0->unknown_c_ & 8) {
        return;
    }
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetMenuObjectList_ov011_021849c8(arg1);
    void* var2 = FindMenuObjectById_ov023_021f6880(var1, arg0->unknown_20_);
    void* var3 = GetMenuObjectSpriteSet_ov023_021fad18(var2);
    struct SpriteAnimationList_0205a254* var4 = *(struct SpriteAnimationList_0205a254**)((char*)var3 + 0x3c);
    if (var4 == NULL) {
        return;
    }
    ((OBJSpriteSet::List*)(var4))->PlaySpriteAnimation(arg0->unknown_22_);
    struct Struct_ov023_021fb3c8_2* var5 = ((Struct_ov023_021fb3c8_2*)((OBJSpriteSet::List*)(var4))->GetSprite(arg0->unknown_22_));
    if (var5 != NULL) {
        var5->unknown_15_ |= 8;
    }
    ((OBJSpriteSet::List*)(var4))->SetSpriteOBJIndex(arg0->unknown_22_, (unsigned char)arg0->unknown_24_);
    unsigned int var6 = var0->GetTickCount();
    ((OBJSpriteSet::List*)(var4))->Update((unsigned char)arg0->unknown_22_, var6);
    short var7, var8;
    var8 = arg0->unknown_2a_;
    var7 = arg0->unknown_28_;
    struct Struct_ov023_021fb3c8_2* var9 = ((Struct_ov023_021fb3c8_2*)((OBJSpriteSet::List*)(var4))->GetSprite(arg0->unknown_22_));
    if (var9 != NULL) {
        *(short*)((char*)var9 + 0x4) = var7;
        *(short*)((char*)var9 + 0x6) = var8;
    }
    ((OBJSpriteSet*)(var3))->DrawSprite((unsigned char)arg0->unknown_22_);
}
