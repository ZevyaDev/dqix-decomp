#include <globaldefs.h>
#include "Resource/MessageUpdate.h"

extern "C" void CloseMessageWindow_02043124(char* window);

// USA: ResetMessageWindow_02043204
extern "C" ARM void ResetMessageWindow_02043204(char* window) {
    MessageWindow_02021b84* messageWindow = (MessageWindow_02021b84*)window;
    func_02043040(messageWindow);
    CloseMessageWindow_02043124(window);
    func_020430b0(messageWindow);
}
