#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct ScriptValue_ov011_02184c30 {
    int type_0_;
    union { int unknown_0_; float unknown1_0_; } value_4_;
};

extern "C" int func_ov011_02184c30(struct ScriptValue_ov011_02184c30* arg0);
extern "C" ARM void* GetCurrentMenu_ov017_021b2164(void);
extern "C" ARM void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" ARM void* FindMenuObjectById_ov023_021f6880(void* objectList, int id);
extern "C" ARM int func_ov023_021f6f10(void* arg0);

struct MenuGrid_ov004_02153e20;
extern "C" int SetMenuGridCell_ov023_021f9b30(struct MenuGrid_ov004_02153e20* grid, unsigned short objectId, unsigned int row, unsigned int column);

// USA: SetCurrentMenuGridCell_ov011_02185848
extern "C" ARM int SetCurrentMenuGridCell_ov011_02185848(struct ScriptValue_ov011_02184c30* params, int numParams) {
    int var0 = func_ov011_02184c30(&params[0]);
    int var1 = func_ov011_02184c30(&params[1]);
    int var2 = func_ov011_02184c30(&params[2]);
    int var3 = func_ov011_02184c30(&params[3]);
    void* var4 = GetMenuObjectList_ov011_021849c8(GetCurrentMenu_ov017_021b2164());
    void* var5 = FindMenuObjectById_ov023_021f6880(var4, var0);
    void* var6 = FindMenuObjectById_ov023_021f6880(var4, var1);
    if (var5 == 0 || var6 == 0)
        return 0;
    if (func_ov023_021f6f10(var5) != 7)
        return 0;

    return SetMenuGridCell_ov023_021f9b30((struct MenuGrid_ov004_02153e20*)var5, var1,(unsigned short)var3, (unsigned short)var2) ? 1 : 0;
}
