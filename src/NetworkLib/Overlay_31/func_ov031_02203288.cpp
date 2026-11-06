#include <globaldefs.h>

extern void* gContextScheduler_02111304;

// USA: func_ov031_02203288
extern "C" ARM void func_ov031_02203288(int arg0) {
	void* var0 = *(void**)((char*)&gContextScheduler_02111304 + 0x4);
	var0 = *(void**)((char*)var0 + 0xa4);
	if (var0 != NULL) {
		*(int*)((char*)var0 + 0x38) = arg0;
	}
}
