#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" ARM void* func_ov031_0223cf00(unsigned int arg0, int arg1);

// USA: AllocateZeroedMemory_ov031_0223cf4c
extern "C" ARM void* AllocateZeroedMemory_ov031_0223cf4c(unsigned int size, int alignAndDir) {
	void* var0 = func_ov031_0223cf00(size, alignAndDir);
	VectorizedMemset(var0, 0, size);
	return var0;
}
