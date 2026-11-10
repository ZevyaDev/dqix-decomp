#include <globaldefs.h>

// USA: TrySelectTacticOption_ov024_021fe698
extern "C" ARM int TrySelectTacticOption_ov024_021fe698(char* tacticAI, int option) {
    if (*(unsigned char*)(tacticAI + option + 0x10) == 0) {
        return 0;
    }
    *(int*)(tacticAI + 0x38) = option;
    return 1;
}
