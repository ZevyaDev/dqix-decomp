#if defined(jpn)
#define CONTROLLER_STATE_OFFSET 0x4
#else
#define CONTROLLER_STATE_OFFSET 0x38
#endif
#if defined(jpn)
#define CONTROLLER_SUBOBJECT_OFFSET 0x1804
#else
#define CONTROLLER_SUBOBJECT_OFFSET 0x19e0
#endif
#include <globaldefs.h>
#include "Resource/MessageUpdate.h"
#if defined(jpn)
#define func_02043224 func_02043998
#endif
extern "C" void func_0202f1dc(char*);

extern "C" void func_02043224(void* arg0);
extern "C" void CloseMessageWindow_02043124(void* window);

// USA: DestroyMessageWindow_02043000
extern "C" ARM void DestroyMessageWindow_02043000(char* window) {
    func_0202f1dc((char*)(window + CONTROLLER_SUBOBJECT_OFFSET));
    func_02043224(window);
    MessageWindow_02021b84* messageWindow = (MessageWindow_02021b84*)window;
    func_02043040(messageWindow);
    CloseMessageWindow_02043124(window);
    func_020430b0(messageWindow);
    *(int*)(window + CONTROLLER_STATE_OFFSET) = 0;
}
