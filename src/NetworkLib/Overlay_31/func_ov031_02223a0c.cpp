#include <globaldefs.h>

extern "C" char* GetEditedConnectionSettings_ov031_02235c70(void);
extern "C" void ShowPageTitle_ov031_02223998(int);

// USA: func_ov031_02223a0c
extern "C" ARM void func_ov031_02223a0c(void) {
    ShowPageTitle_ov031_02223998(*(unsigned char*)(GetEditedConnectionSettings_ov031_02235c70() + 0xf4) + 2);
}
