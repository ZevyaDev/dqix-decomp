#include <globaldefs.h>
#include "std_library_functions.h"

extern int data_ov031_0224f670;

typedef void* (*AllocFn0224f670)(unsigned int);

// USA: func_ov031_0222288c  (semantic: AllocZeroed_0222288c)
extern "C" THUMB void* func_ov031_0222288c(int count, unsigned int size) {
    unsigned int total = count * size;
    AllocFn0224f670 fn = *(AllocFn0224f670*)((char*)&data_ov031_0224f670 + 4);
    void* p = fn(total);
    if (p) {
        memset(p, 0, total);
    }
    return p;
}
