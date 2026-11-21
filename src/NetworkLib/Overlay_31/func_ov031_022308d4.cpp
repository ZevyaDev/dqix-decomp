#include <globaldefs.h>

extern "C" unsigned char* GetEditedConnectionSettings_ov031_02235c70(void);
extern "C" int FastIntDivide(int arg0, unsigned int arg1);
extern "C" void func_ov031_022307fc(void);
extern unsigned char gConnectionSettingsPage_ov031_02290ca0;
extern unsigned char data_ov031_0224903c;

// USA: func_ov031_022308d4
extern "C" ARM void func_ov031_022308d4(void) {
	unsigned char var0 = gConnectionSettingsPage_ov031_02290ca0;
	unsigned int var1 = (var0 + 0xf5) & 0xff;
	if (var1 <= 2) {
		func_ov031_022307fc();
		return;
	}
	unsigned char* var2 = GetEditedConnectionSettings_ov031_02235c70();
	unsigned short var3 = *(unsigned short*)(&gConnectionSettingsPage_ov031_02290ca0 + 4);
	int var4 = FastIntDivide(var3, 0x1d);
	unsigned char var5 = (&gConnectionSettingsPage_ov031_02290ca0)[2];
	int var6 = var5 + var4;
	switch (var6) {
		case 2:
			if (var2[0xf5]) {
				(&gConnectionSettingsPage_ov031_02290ca0)[0] = 2;
			} else {
				(&gConnectionSettingsPage_ov031_02290ca0)[0] = 3;
			}
			break;
		case 6:
			if (var2[0xf6]) {
				(&gConnectionSettingsPage_ov031_02290ca0)[0] = 7;
			} else {
				(&gConnectionSettingsPage_ov031_02290ca0)[0] = 8;
			}
			break;
		default:
			(&gConnectionSettingsPage_ov031_02290ca0)[0] = (&data_ov031_0224903c)[var6];
			break;
	}
	func_ov031_022307fc();
}
