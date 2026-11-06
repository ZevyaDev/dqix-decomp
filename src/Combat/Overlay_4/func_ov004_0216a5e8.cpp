#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_0216a5e8
extern "C" ARM int func_ov004_0216a5e8(void* arg0) {
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x5b);
	return 0;
}
