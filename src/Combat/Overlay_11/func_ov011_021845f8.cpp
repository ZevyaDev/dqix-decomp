#include <globaldefs.h>

extern "C" ARM void* FindHeapById_ov011_021842c8(unsigned char* heap, unsigned int id);

// USA: func_ov011_021845f8
extern "C" ARM void* func_ov011_021845f8(unsigned char* arg0, unsigned int arg1) {
    return FindHeapById_ov011_021842c8(arg0, arg1);
}
