#include <globaldefs.h>

extern "C" void RunBrightnessScriptCommand_ov001_0215b074(int command, int args, int argCount);

// USA: func_ov001_0215b6a0
extern "C" ARM int func_ov001_0215b6a0(int arg0, int arg1) {
	RunBrightnessScriptCommand_ov001_0215b074(13, arg0, arg1);
	return 1;
}
