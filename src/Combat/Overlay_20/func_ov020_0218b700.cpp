#include <globaldefs.h>

extern "C" unsigned int DestroyMessageWindow_02043000(char* window);
extern "C" char* GetMessageWindow_020421a0();

// USA: func_ov020_0218b700
extern "C" ARM void func_ov020_0218b700() {
    DestroyMessageWindow_02043000(GetMessageWindow_020421a0());
}
