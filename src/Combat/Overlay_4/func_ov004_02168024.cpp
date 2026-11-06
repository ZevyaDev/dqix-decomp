#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(int menu, int entryId);

// USA: func_ov004_02168024
extern "C" ARM int func_ov004_02168024(int arg0) {
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x15);
	return 0;
}
