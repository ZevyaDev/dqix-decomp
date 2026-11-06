#include <globaldefs.h>

extern "C" int GetMessageWindow_020421a0();
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseMessageWindow_02043124(char* window);

// USA: func_ov011_02187460
extern "C" ARM int func_ov011_02187460(void) {
    char* var0 = (char*)GetMessageWindow_020421a0();
    ResetMessageWindow_02043204(var0);
    CloseMessageWindow_02043124(var0);
    return 1;
}
