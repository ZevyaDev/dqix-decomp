#include <globaldefs.h>

extern "C" int EnqueueValue_020c7e0c(void* queue, int value, int flags);
extern int data_ov031_022918bc;

// USA: func_ov031_022403f4
extern "C" ARM int func_ov031_022403f4(void) {
	return EnqueueValue_020c7e0c(&data_ov031_022918bc, 0, 0);
}
