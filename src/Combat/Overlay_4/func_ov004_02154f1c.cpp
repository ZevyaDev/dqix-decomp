#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);
extern "C" int func_ov024_021f6f10(void* arg0);
struct Struct_02000c9c_8;
extern "C" unsigned char GetGameLanguage_0200fb08(struct Struct_02000c9c_8* gameState);
extern "C" void* func_ov023_021f79e4(void* arg0);

struct Struct_0204b988;
extern "C" void func_0204b988(struct Struct_0204b988*, unsigned int, int, int, unsigned short);

struct BGLayer_0204b8d0;
extern "C" void CopyBGScreenBlockRect_0204b8d0(struct BGLayer_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);

struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(struct BGLayer_02020cb8_2*, void*);

// USA: func_ov004_02154f1c
extern "C" ARM int func_ov004_02154f1c(void* arg0) {
    unsigned char var0 = GetGameLanguage_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance());
    unsigned int var1 = 1;
    switch (var0) {
    case 2: var1 = 2; break;
    case 4: var1 = 3; break;
    case 3: var1 = 4; break;
    case 5: var1 = 5; break;
    }

    void* var2 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0xc);
    if (!var2) return 0;
    if (func_ov024_021f6f10(var2) != 2) return 0;

    *(unsigned char*)((char*)var2 + 0xc) |= 1;
    void* var3 = func_ov023_021f79e4(var2);
    func_0204b988((struct Struct_0204b988*)var3, 1, 0, 0, 0xffff);
    if (var1 > 1) {
        CopyBGScreenBlockRect_0204b8d0((struct BGLayer_0204b8d0*)var3, var1, 0, 0, 0x16, 2, 9, 2, 0xffff);
    }
    LoadBGScreenData_0204b0e8((struct BGLayer_02020cb8_2*)var3, 0);
    return 0;
}
