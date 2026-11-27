#include <globaldefs.h>

extern "C" void RunBrightnessScriptCommand_ov001_0215b074(int command, int args, int argCount);

// USA: func_ov001_0215b614
extern "C" ARM int func_ov001_0215b614(int arg0, int arg1) {
	RunBrightnessScriptCommand_ov001_0215b074(8, arg0, arg1);
	return 1;
}
