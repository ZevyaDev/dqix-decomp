#include <globaldefs.h>

#if defined(jpn)
extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" void* FindMenuObjectById_ov023_021f6880(void* objectList, int id);
extern "C" int func_ov023_021f6f10(void* arg0);

// JPN: func_ov004_02168fa4
extern "C" ARM void* func_ov004_02168fa4(void* arg0, int arg1) {
    void* var0 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), arg1);
    if (var0 != NULL && func_ov023_021f6f10(var0) == 6) return var0;
    return NULL;
}
#endif
