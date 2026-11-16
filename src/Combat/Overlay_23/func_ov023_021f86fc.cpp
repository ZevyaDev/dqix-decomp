#include <globaldefs.h>
#include "Graphics/BGLayer.h"

extern "C" void* GetMenuObjectList_ov011_021849c8(int menu);
extern "C" void* FindMenuObjectById_ov023_021f6880(void** objectList, int id);
extern "C" void* func_ov023_021f79e4(void* arg0);
extern "C" int IsTextWindowOpen_0204c7e0(unsigned char* textWindow);
extern "C" int func_0204fd00(void* arg0, int arg1);

// USA: func_ov023_021f86fc
extern "C" ARM void func_ov023_021f86fc(unsigned char* arg0, int arg1) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg1);
    void* var1 = FindMenuObjectById_ov023_021f6880((void**)var0, arg0[0x108]);
    if (!var1) return;
    void* var2 = func_ov023_021f79e4(var1);
    if (!IsTextWindowOpen_0204c7e0(arg0 + 0x20)) return;
    if (arg0[0xe5] & 0x20) return;
    if (arg0[0xe5] & 0x80) return;
    short var3 = *(short*)(arg0 + 0xcc);
    short var4 = *(short*)(arg0 + 0xce);
    short var5 = *(short*)(arg0 + 0xc8);
    short var6 = *(short*)(arg0 + 0xe0);
    ((BGLayer*)(var2))->SetTileInRectangle(1, var3, var4, var5, var6, 0);
    if (var6 == 0) return;
    if (!func_0204fd00(arg0 + 0x20, 1))
        ((BGLayer*)(var2))->SetTileInRectangle(2, var3, var4, 1, 1, 0);
    if (!func_0204fd00(arg0 + 0x20, 2))
        ((BGLayer*)(var2))->SetTileInRectangle(0x402, (short)(var3 + var5 - 1), var4, 1, 1, 0);
    if (!func_0204fd00(arg0 + 0x20, 4))
        ((BGLayer*)(var2))->SetTileInRectangle(0x802, var3, (short)(var4 + var6 - 1), 1, 1, 0);
    if (!func_0204fd00(arg0 + 0x20, 8))
        ((BGLayer*)(var2))->SetTileInRectangle(0xc02, (short)(var3 + var5 - 1), (short)(var4 + var6 - 1), 1, 1, 0);
}
