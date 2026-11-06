#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(int menu, int entryId);

// USA: func_ov004_02167678
#if defined(jpn)
extern "C" ARM int func_ov004_02167c84(int arg0)
#else
extern "C" ARM int func_ov004_02167678(int arg0)
#endif
{
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x6c);
	return 0;
}
