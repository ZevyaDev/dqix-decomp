#include <globaldefs.h>

extern "C" int func_ov023_021f6f10(void*);
extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: FindMenuGrid_ov004_02156ed0
extern "C" ARM void* FindMenuGrid_ov004_02156ed0(void* menu, int id) {
    void* objectList = GetMenuObjectList_ov011_021849c8(menu);
    void* object = FindMenuObjectById_ov023_021f6880(objectList, id);
    if (!object) {
        return 0;
    }
    if (func_ov023_021f6f10(object) != 7) {
        return 0;
    }
    return object;
}
