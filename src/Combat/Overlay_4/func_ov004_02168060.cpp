#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_02168060
extern "C" ARM int func_ov004_02168060(void* arg0) {
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x6e);
	return 0;
}
