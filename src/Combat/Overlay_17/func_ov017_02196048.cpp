#include <globaldefs.h>
#include "NitroSDK/Matrix.h"
#include "NitroSDK/Graphics3D/RenderConfig.h"


// USA: func_ov017_02196048
extern "C" ARM void func_ov017_02196048(int* arg0, int* arg1, int* arg2) {
	g_nitro3DRenderConfig.eyeVector = *(Vector3i*)arg0;
	g_nitro3DRenderConfig.upVector = *(Vector3i*)arg1;
	g_nitro3DRenderConfig.targetVector = *(Vector3i*)arg2;
	Mat4x3_WriteViewMatrix((Vector3i*)arg0, (Vector3i*)arg1, (Vector3i*)arg2, &g_nitro3DRenderConfig.viewMatrix);
	g_nitro3DRenderConfig.flags &= ~0xe8;
}
