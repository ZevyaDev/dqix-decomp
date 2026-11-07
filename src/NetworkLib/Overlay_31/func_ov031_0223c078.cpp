#include <globaldefs.h>

extern "C" void func_ov031_0223c150();
extern "C" void ColorEffect_ConfigureBrightnessAdjust(unsigned short* dst, int flag, int value);
extern "C" void* AddTask_ov031_0223e218(void* listIndex, void* callback, void* callbackData, int priority);

extern unsigned char data_ov031_022493a0[];

struct BrightnessFade_ov031_0223c078 {
	unsigned int pTask_0_;
	unsigned short elapsedTime_4_;
	unsigned short duration_6_;
	unsigned char mode_8_;
	unsigned char isActive_9_;
	unsigned char unknown_a_[2];
};
extern BrightnessFade_ov031_0223c078* data_ov031_02290d34;

// USA: StartBrightnessFade_ov031_0223c078
extern "C" ARM int StartBrightnessFade_ov031_0223c078(int mode, int useSubScreen, int layerMask, int duration) {
	signed char startBrightnessByMode[4];
	startBrightnessByMode[0] = data_ov031_022493a0[0x8];
	startBrightnessByMode[1] = data_ov031_022493a0[0x9];
	startBrightnessByMode[2] = data_ov031_022493a0[0xa];
	startBrightnessByMode[3] = data_ov031_022493a0[0xb];

	BrightnessFade_ov031_0223c078* fade = (useSubScreen == 1) ? data_ov031_02290d34 : (BrightnessFade_ov031_0223c078*)((char*)data_ov031_02290d34 + 0xc);
	if (fade->isActive_9_ != 0) {
		return 0;
	}

	if (useSubScreen == 1) {
		ColorEffect_ConfigureBrightnessAdjust((unsigned short*)0x4001050, layerMask, startBrightnessByMode[mode]);
	} else {
		ColorEffect_ConfigureBrightnessAdjust((unsigned short*)0x4000050, layerMask, startBrightnessByMode[mode]);
	}

	fade->pTask_0_ = (unsigned int)AddTask_ov031_0223e218((void*)1, (void*)func_ov031_0223c150, fade, 0xc8);
	fade->elapsedTime_4_ = 0;
	fade->mode_8_ = (unsigned char)mode;
	fade->duration_6_ = (unsigned short)duration;
	fade->isActive_9_ = 1;
	return 1;
}
