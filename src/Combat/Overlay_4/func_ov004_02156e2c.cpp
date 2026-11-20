#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov023_021f6f10
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" void* func_ov023_021f9bc8(void*);

// USA: GetMenuGridCursorIndex_ov004_02156e2c
extern "C" ARM int GetMenuGridCursorIndex_ov004_02156e2c(void* menu, int id) {
    void* objectList = GetMenuObjectList_ov011_021849c8(menu);
    void* object = FindMenuObjectById_ov023_021f6880(objectList, id);
    if (!object) return -1;
    if (func_ov024_021f6f10(object) != 7) return -1;
    return (int)func_ov023_021f9bc8(object);
}
