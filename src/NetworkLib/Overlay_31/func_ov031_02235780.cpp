#include <globaldefs.h>

extern "C" void* AllocateZeroedMemory_ov031_0223cf4c(unsigned int size, int alignAndDir);
extern void* data_ov031_02290cf8;

// USA: func_ov031_02235780
extern "C" ARM void func_ov031_02235780(void) {
	if (data_ov031_02290cf8 != NULL) return;
	data_ov031_02290cf8 = AllocateZeroedMemory_ov031_0223cf4c(0x1e60, 0x20);
}
