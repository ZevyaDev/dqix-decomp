#include <globaldefs.h>

extern "C" void InitFollowCamera_020a2010(void* arg0);
extern "C" void SetCameraTarget_0202e5c8(unsigned char* camera, int x, int y, int z);
extern "C" void DisableCameraFollow_020a27a0(void* camera);
extern "C" void SetCameraOrbit_0202e5d8(void*, int, int, int);
extern "C" void UpdateCamera_0202e0a4(void*);

// USA: func_ov006_021542f4
extern "C" ARM void func_ov006_021542f4(void *arg0) {
	if (!arg0) return;
	InitFollowCamera_020a2010(arg0);
	SetCameraTarget_0202e5c8((unsigned char*)arg0, 0, 0xffffe171, 0);
	SetCameraOrbit_0202e5d8(arg0, 0, 0x2eb8, 0xa000);
	UpdateCamera_0202e0a4(arg0);
	DisableCameraFollow_020a27a0(arg0);
}
