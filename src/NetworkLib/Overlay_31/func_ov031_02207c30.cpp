#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_0224e3b8_4 {
	char unknown_0_[0x5a];
	unsigned char unknown_5a_;
	char unknown_5b_[0x5c - 0x5b];
};

extern Struct_ov031_0224e3b8_4 data_ov031_0224e3b8[4];

extern "C" int CompareBytes_02001aec(void* left, void* right, int count);

// USA: func_ov031_02207c30
extern "C" ARM void func_ov031_02207c30(void* arg0) {
	int var0;
	int var1;
	Struct_ov031_0224e3b8_4* var2;
	var1 = DisableIRQInterrupts();
	var2 = data_ov031_0224e3b8;
	var0 = 0;
	do {
		if (var2->unknown_5a_ != 0) {
			if (CompareBytes_02001aec(var2, (char*)arg0 + 0x74, 0x20) == 0) {
				var2->unknown_5a_ = 0;
				break;
			}
		}
		var0++;
		var2++;
	} while (var0 < 4);
	SetIRQInterruptState(var1);
}
