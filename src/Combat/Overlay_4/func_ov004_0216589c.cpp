#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(int menu, int entryId);

// USA: func_ov004_0216589c
extern "C" ARM int func_ov004_0216589c(int arg0) {
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x64);
	return 0;
}
