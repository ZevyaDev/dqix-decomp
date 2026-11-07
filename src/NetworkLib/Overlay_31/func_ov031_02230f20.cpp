#include <globaldefs.h>

typedef void (*VRAMLoader_ov031_022234d8)(void*, int, int);

extern "C" void LoadFileToVRAM_ov031_022234d8(int path, VRAMLoader_ov031_022234d8 loadToVRAM);

extern "C" extern int LoadToMainBG2CharacterData(int, int, unsigned int);
extern "C" extern void LoadToMainBGStandardPalette(int, int, unsigned int);
extern "C" extern int LoadToMainBG2ScreenData(int, int, unsigned int);

extern char data_ov031_0224bb8c;
extern char data_ov031_0224bba4;
extern char data_ov031_0224bbbc;

// USA: func_ov031_02230f20
extern "C" ARM void func_ov031_02230f20(void) {
	LoadFileToVRAM_ov031_022234d8((int)&data_ov031_0224bb8c, (VRAMLoader_ov031_022234d8)LoadToMainBG2CharacterData);
	LoadFileToVRAM_ov031_022234d8((int)&data_ov031_0224bba4, (VRAMLoader_ov031_022234d8)LoadToMainBGStandardPalette);
	LoadFileToVRAM_ov031_022234d8((int)&data_ov031_0224bbbc, (VRAMLoader_ov031_022234d8)LoadToMainBG2ScreenData);

	unsigned short *var0 = (unsigned short*)0x4001008;
	unsigned short *var1 = (unsigned short*)0x400000a;
	var0[0] = (var0[0] & ~3) | 3;
	var0[1] = (var0[1] & ~3) | 3;
	var1[0] = (var1[0] & ~3) | 3;
	var1[1] = (var1[1] & ~3) | 3;
}
