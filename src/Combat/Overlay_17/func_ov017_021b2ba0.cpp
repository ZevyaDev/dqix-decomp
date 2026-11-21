#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif


extern "C" void func_020c9be0(void);

struct MenuTask_0206f81c_2 {
	unsigned char unknown_0_[0x24];
	char fileName_24_[1];
};

// USA: SetMenuTaskFileName_ov017_021b2ba0
extern "C" ARM void SetMenuTaskFileName_ov017_021b2ba0(MenuTask_0206f81c_2* menuTask, char* fileName) {
	if (strlen(fileName) >= 0xc) func_020c9be0();
	strcpy(menuTask->fileName_24_, fileName);
}
