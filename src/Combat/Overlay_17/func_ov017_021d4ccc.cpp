#include <globaldefs.h>

extern "C" void func_ov017_021d4e38(void* arg0);

// USA: ResumeScript_ov017_021d4ccc
extern "C" ARM void ResumeScript_ov017_021d4ccc(void* scriptVM) {
	if (*(int*)((char*)scriptVM + 0x38))
		func_ov017_021d4e38(scriptVM);
}
