#include <globaldefs.h>

struct LocalWireless_0202c1a4;
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);
extern "C" void func_ov017_021cdccc(int arg0, int arg1, void* arg2);

struct Struct_ov017_021cdd30 {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
};

// USA: func_ov017_021cdd30
extern "C" ARM void func_ov017_021cdd30(int arg0, Struct_ov017_021cdd30* arg1, int arg2, int arg3, struct LocalWireless_0202c1a4* arg4) {
	unsigned int var0 = (unsigned int)arg1->unknown_4_ << 30;
	int var1 = (int)(var0 >> 30);
	if (GetOwnProtagonistObjectIndex_0202c1a4(arg4) != (int)(var0 >> 30)) return;
	func_ov017_021cdccc(var1, (int)(((unsigned int)arg1->unknown_4_ << 16) >> 18), (char*)arg1 + 6);
}
