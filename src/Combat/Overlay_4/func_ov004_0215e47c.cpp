#include <globaldefs.h>

extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: FindMenuObject_ov004_0215e47c
extern "C" ARM void* FindMenuObject_ov004_0215e47c(void* menu, int id) {
    void* object = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(menu), id);
    return object ? object : 0;
}
