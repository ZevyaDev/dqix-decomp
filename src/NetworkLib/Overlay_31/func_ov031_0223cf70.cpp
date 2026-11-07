#include <globaldefs.h>
#include "NitroSDK/Memory/HPXEAllocator.h"

unsigned int DisableSpecificInterrupts(unsigned int mask);
ARM unsigned int EnableSpecificInterrupts(unsigned int mask);

extern HPXEAllocator* data_ov031_02290d3c;

// USA: FreeAndClearPointer_ov031_0223cf70
extern "C" ARM unsigned int FreeAndClearPointer_ov031_0223cf70(void** pointer) {
    unsigned int previousInterruptMask = DisableSpecificInterrupts(1);
    void* block = *pointer;
    if (block == NULL) {
        return previousInterruptMask;
    }
    data_ov031_02290d3c->Free(block);
    EnableSpecificInterrupts(previousInterruptMask);
    *pointer = NULL;
    return 0;
}
