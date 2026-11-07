#include <globaldefs.h>

typedef void (*VRAMLoader_ov031_022234d8)(void*, int, int);
extern "C" void LoadFileToVRAM_ov031_022234d8(int path, VRAMLoader_ov031_022234d8 loadToVRAM);
extern "C" void* AllocateZeroedMemory_ov031_0223cf4c(unsigned int size, int alignAndDir);
extern "C" unsigned int func_ov031_02227558(void);
extern "C" int LoadToMainBG1ScreenData(int, int, unsigned int);
extern "C" int LoadToMainBG1CharacterData(int arg0, int arg1, unsigned int arg2);

extern void* data_ov031_02250bf4;
extern unsigned char data_ov031_0224b410;
extern int data_ov031_0224b3c0[];

// USA: func_ov031_0222390c
extern "C" ARM void func_ov031_0222390c(void) {
	data_ov031_02250bf4 = AllocateZeroedMemory_ov031_0223cf4c(0xc0, 4);
	LoadFileToVRAM_ov031_022234d8((int)&data_ov031_0224b410, (VRAMLoader_ov031_022234d8)LoadToMainBG1CharacterData);
	unsigned int var0 = func_ov031_02227558();
	switch (var0) {
	case 0:
		LoadFileToVRAM_ov031_022234d8(data_ov031_0224b3c0[0], (VRAMLoader_ov031_022234d8)LoadToMainBG1ScreenData);
		break;
	case 1:
		LoadFileToVRAM_ov031_022234d8(data_ov031_0224b3c0[1], (VRAMLoader_ov031_022234d8)LoadToMainBG1ScreenData);
		break;
	}
}
