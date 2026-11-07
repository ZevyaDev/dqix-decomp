#include <globaldefs.h>

extern "C" void func_ov031_0223e168(int);
extern char gDTCMData_027e0000;

// USA: func_ov031_0223d830
extern "C" ARM void func_ov031_0223d830(void) {
	func_ov031_0223e168(1);
	*(unsigned int*)((char*)&gDTCMData_027e0000 + 0x3ff8) |= 1;
}
