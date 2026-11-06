#include <globaldefs.h>


extern "C" int Memcpy16Bit_020ca3b8(int, int, int);
extern "C" void func_ov031_0223e2c0(int, int);
extern int data_ov031_02290ce8;

// USA: func_ov031_0223508c
extern "C" ARM void func_ov031_0223508c(int arg0) {
	Memcpy16Bit_020ca3b8(*(int*)((char*)&data_ov031_02290ce8 + 0x4), 0x5000000, 0x200);
	func_ov031_0223e2c0(1, arg0);
}
