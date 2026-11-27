#include <globaldefs.h>

#include "NitroSDK/Memory.h"

// USA: Memcpy_ov031_0221e51c
extern "C" THUMB void Memcpy_ov031_0221e51c(void* destination, const void* source, unsigned int length) {
    VectorizedInvertedMemcpy(source, destination, length);
}
