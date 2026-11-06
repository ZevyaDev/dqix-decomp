#include <globaldefs.h>
#include <Resource/GameResources.h>

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;

extern signed char data_ov017_021d76d8;
extern "C" void func_ov017_021a967c(unsigned char* arg0, int arg1);
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);

// USA: func_ov017_021a4dd0
extern "C" ARM void func_ov017_021a4dd0(GameResources* arg0) {
	Queue_0201bdac_2* var0 = (Queue_0201bdac_2*)arg0->unknown_ptr_array_36fc[0];
	QueueNode_0201bdac* var1 = (QueueNode_0201bdac*)arg0->unknown_ptr_array_3afc[34];
	signed char var2 = data_ov017_021d76d8;
	if (var2 < 0) {
		return;
	}
	func_ov017_021a967c((unsigned char*)var1, var2);
	AppendToQueue_020469b4(var0, var1);
}
