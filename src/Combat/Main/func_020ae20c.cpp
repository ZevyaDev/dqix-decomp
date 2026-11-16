#include <globaldefs.h>
#include "NitroSDK/Graphics3D/RenderConfig.h"
#include "World/Object3D.h"
#include "NitroSDK/Graphics3D/Graphics3D.h"

#if defined(jpn)
#define func_02033fa0 func_02033ad8
#endif

struct Struct_02040774_2 {
    char unknown_0_[0x44];
    int positionX_44_;
    int positionY_48_;
    int positionZ_4c_;
};

extern "C" void SetObject3DPosition_020407b4(struct Struct_02040774_2* object, int x, int y, int z);
extern "C" void SetObject3DRotation_0203db34(unsigned char* object, int x, int y, int z);
extern "C" void* func_02033fa0(void* arg0);
extern "C" int func_0204bedc(unsigned short* arg0);

// USA: func_020ae20c
extern "C" ARM void func_020ae20c(void* arg0, struct Struct_02040774_2* arg1, int* arg2, int arg3) {
    if (arg1 == NULL) return;

    SetObject3DPosition_020407b4(arg1, arg2[0], 0xffffd009, arg2[2]);
    SetObject3DRotation_0203db34((unsigned char*)arg1, 0, arg3, 0);

    int var0 = 0xc;
    void* var1 = func_02033fa0(arg0);
    if (var1 != NULL) {
        if (func_0204bedc((unsigned short*)var1))
            var0 = 0x14;
    }

    Nitro3DRenderConfig::SetPolygonAttributes(1, 3, 1, 0, var0, 0x8000);
    {
        Nitro3DModel* var2 = ((Object3D*)arg1)->pModel_->rawInternalModel_;
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var2), 0, 0x30);
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var2), 0, 0xc0);
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var2), 0, 0x3f000000);
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var2), 0, 0x1f0000);
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var2), 0, 0x8000);
    }
    ((Object3D*)arg1)->Draw(true);

    Nitro3DRenderConfig::SetPolygonAttributes(1, 3, 3, 0x3c, var0, 0x8000);
    {
        Nitro3DModel* var3 = ((Object3D*)arg1)->pModel_->rawInternalModel_;
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var3), 0, 0x30);
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var3), 0, 0xc0);
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var3), 0, 0x3f000000);
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var3), 0, 0x1f0000);
        Nitro3D_ConfigureModelPolygonAttrMask((Nitro3DModel*)(var3), 0, 0x8000);
    }
    ((Object3D*)arg1)->Draw(true);
}
