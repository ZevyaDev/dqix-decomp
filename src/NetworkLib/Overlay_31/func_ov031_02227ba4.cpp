#include <globaldefs.h>


extern "C" int func_ov031_02222a10();
extern "C" void HaltForever_020c9be0(void);
extern "C" int FreeAndClearPointer_ov031_0223cf70(void*);
extern char data_ov031_02290c48;

// USA: func_ov031_02227ba4
extern "C" ARM int func_ov031_02227ba4(void) {
	if (func_ov031_02222a10() != 1) HaltForever_020c9be0();
	return FreeAndClearPointer_ov031_0223cf70(&data_ov031_02290c48);
}
