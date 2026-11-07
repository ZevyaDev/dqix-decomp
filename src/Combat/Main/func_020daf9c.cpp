#include <globaldefs.h>
extern "C" void func_020db264(void*, int, int, int, int);

extern int data_0214e4c8;

// USA: SetLoadingIndicator_020daf9c
extern "C" ARM void SetLoadingIndicator_020daf9c(int isShown, int isFadeWaitSkipped, int isScreenBlanked, int isMainScreenForced) {
    func_020db264((void*)(&data_0214e4c8), (int)(isShown), (int)(isFadeWaitSkipped), (int)(isScreenBlanked), (int)(isMainScreenForced));
}
