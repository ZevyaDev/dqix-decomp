#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_ov031_022157f8(int arg0, void *arg1);
extern "C" int CompareBytes_02001aec(void *left, void *right, int count);
extern char data_ov031_02249b3c;

// USA: func_ov031_02215778
extern "C" ARM void func_ov031_02215778(int arg0, void *arg1) {
	unsigned int var0[6];
	func_ov031_022157f8(arg0, var0);
	if (CompareBytes_02001aec(var0, &data_ov031_02249b3c, 8) == 0) {
		VectorizedInvertedMemcpy(&var0[2], arg1, 0xa);
	}
}
