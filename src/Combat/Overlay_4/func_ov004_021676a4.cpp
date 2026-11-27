#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/BGLayer.h"

struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* gameState);

extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);

struct Struct_ov004_021676a4 { char unknown_0_[0xc]; unsigned char unknown_c_; };
extern "C" Struct_ov004_021676a4* FindMenuObjectById_ov023_021f6880(void* objectList, int id);

extern "C" int func_ov024_021f6f10(void* arg0);
extern "C" void* GetMenuObjectBGLayer_ov023_021f79e4(void* object);

struct BGLayer_0204b988;
struct BGLayer_0204b8d0;
struct BGLayer_02020cb8_2;

// USA: func_ov004_021676a4
extern "C" ARM int func_ov004_021676a4(void* arg0) {
    int var0 = func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance());
    unsigned int var1 = 1;
    switch (var0) {
    case 2:
        var1 = 2;
        break;
    case 4:
        var1 = 3;
        break;
    case 3:
        var1 = 4;
        break;
    case 5:
        var1 = 5;
        break;
    }

    void* var2 = GetMenuObjectList_ov011_021849c8(arg0);
    Struct_ov004_021676a4* var3 = FindMenuObjectById_ov023_021f6880(var2, 0xd);
    if (!var3) return 0;
    if (func_ov024_021f6f10(var3) != 2) return 0;

    var3->unknown_c_ |= 1;
    void* var4 = GetMenuObjectBGLayer_ov023_021f79e4(var3);
    ((BGLayer*)((struct BGLayer_0204b988*)var4))->BlitSpriteByIndex(1, 0, 0, 0xffff);

    if (var1 > 1) {
        ((BGLayer*)((struct BGLayer_0204b8d0*)var4))->BlitSpriteByIndex(var1, 0, 0, 0x16, 2, 9, 2, 0xffff);
    }
    ((BGLayer*)((struct BGLayer_02020cb8_2*)var4))->CleanCacheAndUploadIndexBuffer((const void*)(0));
    return 0;
}
