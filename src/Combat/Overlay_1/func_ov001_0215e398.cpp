#include <globaldefs.h>

extern "C" int GetMessageWindow_020421a0(void);
extern "C" void CloseMessageWindow_02043124(char* window);
extern "C" void ResetMessageWindow_02043204(char* window);

// USA: func_ov001_0215e398
extern "C" ARM int func_ov001_0215e398(void) {
	int var0 = GetMessageWindow_020421a0();
	CloseMessageWindow_02043124((char*)var0);
	ResetMessageWindow_02043204((char*)var0);
	return 1;
}
