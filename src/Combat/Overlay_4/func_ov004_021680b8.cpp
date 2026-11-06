#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_021680b8
extern "C" ARM int func_ov004_021680b8(void* arg0) {
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x66);
	return 0;
}
