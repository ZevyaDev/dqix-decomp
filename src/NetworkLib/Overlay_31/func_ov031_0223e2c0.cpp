#include <globaldefs.h>

extern "C" void func_ov031_0223bf48(int, void*);
extern char* data_ov031_02290d9c;

// USA: QueueTaskRemoval_ov031_0223e2c0
extern "C" ARM void QueueTaskRemoval_ov031_0223e2c0(int listIndex, void* task) {
	int removalQueue = *(int*)(data_ov031_02290d9c + (listIndex << 0x6) + 0x4);
	func_ov031_0223bf48(removalQueue, task);
}
