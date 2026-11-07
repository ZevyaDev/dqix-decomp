#include <globaldefs.h>

extern "C" void CloseSubScreenMessage_ov031_02223440(void);
extern "C" int func_ov031_0223da58(void*);
extern "C" void* CloseScreenTextLayer_ov031_0223c7c4(int);
extern "C" void HideScreenLayers_ov031_0223cbbc(int, int);
extern "C" void SetStepIndicatorAndButtonBarModes_ov031_022274d0(int, int);
extern "C" void func_ov031_02227520(int*, int*);
extern "C" void func_ov031_0222750c(int, int);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_0222ea24(void);
extern "C" unsigned int FreeAndClearPointer_ov031_0223cf70(void** pointer);

extern "C" int LoadToMainObjStandardPalette(int arg0, int arg1, unsigned int arg2);
extern int data_ov031_0224badc;

typedef void (*VRAMLoader_ov031_022234d8)(void*, int, int);
extern "C" void LoadFileToVRAM_ov031_022234d8(int path, VRAMLoader_ov031_022234d8 loadToVRAM);

#if defined(jpn)
extern "C" void* data_ov031_02290c98;
namespace DuplicatePool {
    extern "C" void* data_ov031_02290c98;
}
#else
extern void* data_ov031_02290c98;
#endif

// USA: func_ov031_0222dee0
extern "C" ARM void func_ov031_0222dee0(void) {
	CloseSubScreenMessage_ov031_02223440();
	func_ov031_0223da58(*(void**)((char*)data_ov031_02290c98 + 4));
	CloseScreenTextLayer_ov031_0223c7c4(0);
	LoadFileToVRAM_ov031_022234d8((int)&data_ov031_0224badc, (VRAMLoader_ov031_022234d8)LoadToMainObjStandardPalette);
	HideScreenLayers_ov031_0223cbbc(1, 1);
	HideScreenLayers_ov031_0223cbbc(0, 0x15);

	int var0;
	func_ov031_02227520(&var0, 0);
	if (var0 >= 3) var0 += 1;

	SetStepIndicatorAndButtonBarModes_ov031_022274d0(2, 1);
	func_ov031_0222750c(0, var0 + 3);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222ea24);
#if defined(jpn)
	void** var1 = &DuplicatePool::data_ov031_02290c98;
#else
	void** var1 = (void**)0x02290C98;
#endif
	FreeAndClearPointer_ov031_0223cf70(var1);
}
