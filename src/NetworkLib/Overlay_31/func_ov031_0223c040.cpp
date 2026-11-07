#include <globaldefs.h>

extern "C" int FreeAndClearPointer_ov031_0223cf70(void** pointer);
extern void* data_ov031_02290d34;

// USA: func_ov031_0223c040
extern "C" ARM int func_ov031_0223c040(void) {
	return FreeAndClearPointer_ov031_0223cf70(&data_ov031_02290d34);
}
