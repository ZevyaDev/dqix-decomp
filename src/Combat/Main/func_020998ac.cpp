#include <globaldefs.h>
class AllocatorUnion;
extern "C" int FreeMemory_02012da4(AllocatorUnion*, void*);

extern int gMainHeap_02114e20;

// USA: func_020998ac
extern "C" ARM int func_020998ac(int* arg0) {
    return FreeMemory_02012da4((AllocatorUnion*)(&gMainHeap_02114e20), (void*)(*arg0));
}
