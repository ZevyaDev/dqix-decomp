#include <globaldefs.h>

extern "C" int TrySelectTacticOption_ov024_021fe698(char* tacticAI, int option);

// USA: func_ov024_021fc004
extern "C" ARM void func_ov024_021fc004(char* arg0) {
    if (!TrySelectTacticOption_ov024_021fe698(arg0, 2)) {
        return;
    }
}
