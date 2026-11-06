#include <globaldefs.h>

extern int data_02114e04;

// USA: GetGlobalFlags_020d6c00
extern "C" ARM void* GetGlobalFlags_020d6c00(void) {
    return (void*)&data_02114e04;
}
