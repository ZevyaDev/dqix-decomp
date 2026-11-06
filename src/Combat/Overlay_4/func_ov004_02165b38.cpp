#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(int menu, int entryId);

// USA: func_ov004_02165b38
extern "C" ARM int func_ov004_02165b38(int arg0) {
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x67);
	return 0;
}
