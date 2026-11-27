#include <globaldefs.h>

extern "C" int GetMessageWindow_020421a0();
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseMessageWindow_02043124(char* window);

// USA: ResetAndCloseMessageWindow_ov011_02187460
extern "C" ARM int ResetAndCloseMessageWindow_ov011_02187460(void) {
    char* messageWindow = (char*)GetMessageWindow_020421a0();
    ResetMessageWindow_02043204(messageWindow);
    CloseMessageWindow_02043124(messageWindow);
    return 1;
}
