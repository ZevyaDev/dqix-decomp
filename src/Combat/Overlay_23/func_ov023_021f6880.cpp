#include <globaldefs.h>

struct Struct_ov004_02153978;
extern "C" unsigned int func_ov023_021f6f08(struct Struct_ov004_02153978*);

// USA: FindMenuObjectById_ov023_021f6880
extern "C" ARM void* FindMenuObjectById_ov023_021f6880(void** objectList, int id) {
    void* object = *objectList;
    while (object != 0) {
        if ((int)func_ov023_021f6f08((struct Struct_ov004_02153978*)object) == id) return object;
        object = *(void**)((char*)object + 0x18);
    }
    return 0;
}
