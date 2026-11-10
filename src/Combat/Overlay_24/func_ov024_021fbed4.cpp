#include <globaldefs.h>

extern "C" int TrySelectTacticOption_ov024_021fe698(char* tacticAI, int option);
extern "C" void func_ov024_021fdf04(void* arg0, int arg1);

// USA: func_ov024_021fbed4
extern "C" ARM void func_ov024_021fbed4(char* arg0) {
	if (TrySelectTacticOption_ov024_021fe698(arg0, 1)) {
		func_ov024_021fdf04(arg0, 4);
	}
}
