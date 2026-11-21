#include <globaldefs.h>

extern "C" int DequeueValue_020c7ea0(void* queue, int* value, int flags);
extern int data_ov031_022918bc;

// USA: func_ov031_022403d8
extern "C" ARM int func_ov031_022403d8(void) {
	int var0;
	return DequeueValue_020c7ea0(&data_ov031_022918bc, &var0, 1);
}
