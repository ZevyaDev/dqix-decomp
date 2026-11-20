#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern int data_021052b4;
extern int data_021056b4;

// USA: CleanInvalidateOAMBuffers_0203bd88
extern "C" ARM void CleanInvalidateOAMBuffers_0203bd88(void*) {
    CleanInvalidateCacheRange((const void*)((const void*)((int)&data_021052b4)), 0x400);
    CleanInvalidateCacheRange((const void*)((const void*)((int)&data_021056b4)), 0x400);
}
