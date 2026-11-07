#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" ARM void* func_ov031_0223cf00(unsigned int arg0, int arg1);

// USA: AllocateZeroedMemory_ov031_0223cf4c
extern "C" ARM void* AllocateZeroedMemory_ov031_0223cf4c(unsigned int size, int alignAndDir) {
	void* block = func_ov031_0223cf00(size, alignAndDir);
	VectorizedMemset(block, 0, size);
	return block;
}
