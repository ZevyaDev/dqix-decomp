#include <globaldefs.h>

struct MenuLayout_0207fd88;
extern "C" void CopyMenuLayoutBGScreenDataToVRAM_0207fd88(struct MenuLayout_0207fd88* menuLayout);

// USA: func_ov003_0216757c
extern "C" ARM void func_ov003_0216757c(char* arg0) {
#if defined(jpn)
    enum { Enum_ov003_0216757c_116 = 0x44 };
#else
    enum { Enum_ov003_0216757c_116 = 0x74 };
#endif
	if (*(unsigned char*)(arg0 + Enum_ov003_0216757c_116) != 0) {
		struct MenuLayout_0207fd88* var0 = *(struct MenuLayout_0207fd88**)(arg0 + 0x10);
		if (var0 != 0) CopyMenuLayoutBGScreenDataToVRAM_0207fd88(var0);
	}
}
