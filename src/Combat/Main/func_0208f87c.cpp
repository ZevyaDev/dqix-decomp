#include <globaldefs.h>

#include <World/Object3D.h>
#include <NitroSDK/Graphics3D/RenderConfig.h>
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_020ca528 func_020cbff4
#endif

#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

extern "C" void func_020ca528(void* a, void* b);

// USA: DrawShadow_0208f87c
extern "C" ARM void DrawShadow_0208f87c(const void* position, int color, int scale, int alpha, int polygonId) {
    void* gameResources = GetGameResources();
    Object3D* shadowObject = *(Object3D**)((char*)gameResources + (IS_JPN ? 0x34bc : 0x36cc));
    if (TestFlags04((GameResources*)gameResources, 0x200400) != 0) {
        return;
    }
    if (shadowObject->pModel_ == 0) {
        return;
    }
    shadowObject->pModel_->SetMaterialDiffuseColor(color);
    Nitro3DRenderConfig::SetObjectPosition((Vector3i*)position);
    Vector3i scaleVector = { scale, scale, scale };
    Nitro3DRenderConfig::SetObjectScale(&scaleVector);
    Matrix3x3 rotation;
    Mat3x3_WriteIdentity(&rotation);
    func_020ca528(&rotation, &g_nitro3DRenderConfig.objectRotationPosition);
    g_nitro3DRenderConfig.flags &= ~0xa4;
    shadowObject->SetInheritedAlpha(alpha);
    Nitro3DRenderConfig::SubmitToFifo();
    shadowObject->DrawMeshWithMaterialSimple(0, 0, 0, 1);
}
