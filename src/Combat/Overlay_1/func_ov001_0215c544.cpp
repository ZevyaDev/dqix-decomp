#include <globaldefs.h>

extern "C" void* GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void* GetEventActorState_ov001_0215ab20(void* actorIndex);
extern "C" void* func_ov001_0215a530(void* arg0, int arg1);

// USA: func_ov001_0215c544
extern "C" ARM int func_ov001_0215c544(void* arg0) {
	void* var0 = GetEventActorState_ov001_0215ab20(GetScriptValueAsInt_ov017_021d60f4(arg0));
	if (!var0) return 0;
	int var1 = (int)GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 8);
	func_ov001_0215a530(var0, var1);
	return 1;
}
