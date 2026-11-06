#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021d1c84_10164 = 0x27f4, Enum_ov017_021d1c84_10166 = 0x27f6 };
#else
enum { Enum_ov017_021d1c84_10164 = 0x27b4, Enum_ov017_021d1c84_10166 = 0x27b6 };
#endif

struct LocalWireless_0202c1a4;
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);
extern "C" void* GetZone3D_02012fe4(void);

struct Struct_ov017_021d1c84 { unsigned char unknown_0_[4]; unsigned char unknown_4_; unsigned char unknown_5_; };

// USA: func_ov017_021d1c84
extern "C" ARM void func_ov017_021d1c84(int arg0, Struct_ov017_021d1c84* arg1, int arg2, int arg3, struct LocalWireless_0202c1a4* arg4) {
	if (GetOwnProtagonistObjectIndex_0202c1a4(arg4) == 0) return;
	unsigned char* var0 = (unsigned char*)GetZone3D_02012fe4();
	*(unsigned short*)(var0 + Enum_ov017_021d1c84_10164) = arg1->unknown_4_;
	*(unsigned short*)(var0 + Enum_ov017_021d1c84_10166) = arg1->unknown_5_;
}
