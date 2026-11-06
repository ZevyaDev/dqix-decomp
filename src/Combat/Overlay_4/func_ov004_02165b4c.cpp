#include <globaldefs.h>

#if defined(jpn)
#define func_ov004_02165b4c func_ov004_021663dc
#endif

extern "C" void QueueMenuScriptEntry_ov011_021848a0(int menu, int entryId);

// USA: func_ov004_02165b4c
extern "C" ARM int func_ov004_02165b4c(int arg0) {
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x68);
	return 0;
}
