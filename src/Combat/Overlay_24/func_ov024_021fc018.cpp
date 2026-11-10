#include <globaldefs.h>

extern "C" int TrySelectTacticOption_ov024_021fe698(char* tacticAI, int option);
extern "C" void func_ov024_021fdf04(void* arg0, int arg1);

// USA: func_ov024_021fc018
extern "C" ARM void func_ov024_021fc018(char* arg0) {
	if (TrySelectTacticOption_ov024_021fe698(arg0, 1)) {
		func_ov024_021fdf04(arg0, 6);
	}
}
