#include <globaldefs.h>

extern "C" void FreeAndClearPointer_ov031_0223cf70(void *pointer);
extern int data_ov031_02290c40;

// USA: func_ov031_0222761c
extern "C" ARM void func_ov031_0222761c(void) {
	FreeAndClearPointer_ov031_0223cf70(&data_ov031_02290c40);
}
