#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif


extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void* func_0205ec34(void);

// USA: func_ov001_021609e4
extern "C" ARM int func_ov001_021609e4(void* arg0) {
	int var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
	*((unsigned char*)func_0205ec34() + 0x490) = (unsigned char)var0;
	return 1;
}
