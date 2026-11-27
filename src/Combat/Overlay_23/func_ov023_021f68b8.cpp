#include <globaldefs.h>

struct Struct_ov023_021f68b8 { void* unknown_0_; };

// USA: GetMenuObjectByIndex_ov023_021f68b8
extern "C" ARM void* GetMenuObjectByIndex_ov023_021f68b8(struct Struct_ov023_021f68b8* objectList, int index) {
    void* object = objectList->unknown_0_;
    while (object != NULL && index > 0) {
        object = *(void**)((char*)object + 0x18);
        index--;
    }
    return object;
}
