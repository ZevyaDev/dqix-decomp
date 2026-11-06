#include <globaldefs.h>

extern "C" int* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);

// USA: func_ov017_021a01bc
extern "C" ARM void func_ov017_021a01bc(unsigned char* arg0) {
	int* var0 = GetLocalWireless_0202ae18();
	if (!IsLocalWirelessOn_0202b7d8(var0)) return;
	if (IsNotLocalWirelessGuest_0202c508(var0) == 0) {
		arg0[
#if defined(jpn)
            0x40c9
#else
            0x42e9
#endif
        ] = 1;
	}
}
