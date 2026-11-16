#include <globaldefs.h>

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif
class AllocatorUnion;
extern "C" int func_02012da4(AllocatorUnion*, void*);

extern int gMainHeap_02114e20;

// USA: func_020998ac
extern "C" ARM int func_020998ac(int* arg0) {
    return func_02012da4((AllocatorUnion*)(&gMainHeap_02114e20), (void*)(*arg0));
}
