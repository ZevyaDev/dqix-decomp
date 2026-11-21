#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct MenuGrid_ov004_02153e20;

extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" void* FindMenuObjectById_ov023_021f6880(void* objectList, int id);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" int SetMenuGridCell_ov023_021f9b30(struct MenuGrid_ov004_02153e20* grid, unsigned short objectId, unsigned int row, unsigned int column);

// USA: func_ov004_0216b2c8
extern "C" ARM void func_ov004_0216b2c8(void* arg0, int arg1, int arg2, int arg3) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
    void* var1 = FindMenuObjectById_ov023_021f6880(var0, arg1);
    void* var2 = FindMenuObjectById_ov023_021f6880(var0, arg2);
    if (var1 == NULL || var2 == NULL) {
        return;
    }
    if (func_ov023_021f6f10(var1) != 7) {
        return;
    }
    if (!SetMenuGridCell_ov023_021f9b30((struct MenuGrid_ov004_02153e20*)var1, arg2, (unsigned short)arg3, 0)) {
        return;
    }
}
