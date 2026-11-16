#include <globaldefs.h>
#include <World/Zone3D.h>
#include "World/Zone3DTypes.h"
#include <NitroSDK/Graphics3D/RenderConfig.h>
#include "NitroSDK/Graphics3D/Graphics3D.h"

#if defined(jpn)
#define func_02016d8c func_02016b2c
#endif

extern Vector3i data_020e6e2c;
extern Vector3i data_020e6e38;
extern "C" void func_02016d8c(void* arg0);

// USA: func_02017540
extern "C" ARM void func_02017540(Zone3D* arg0) {
    if ((*(int*)(arg0->unk_2730 + 0x1c)) == 0) return;
    Nitro3DModel* var0[3] = {};
    var0[0] = arg0->models_498_[0].rawInternalModel_;
    var0[1] = arg0->models_498_[1].rawInternalModel_;
    Nitro3DTextureSet* var1[3] = {};
    var1[0] = arg0->models_498_[0].GetTEX0();
    var1[1] = arg0->models_498_[1].GetTEX0();
    Vector3i var2 = data_020e6e2c;
    Nitro3DRenderConfig::SetObjectScale(&var2);
    int* var3 = ((int*)arg0->unk_5f0);
    for (int var4 = 0; var4 < 2; var4++) {
        Nitro3DTextureSet** var5;
        Nitro3DModel** var6;
        var6 = var0;
        var5 = var1;
        while (*var5 != NULL && *var6 != NULL) {
            int var7 = *var3;
            var3++;
            Nitro3D_StoreTexturePaletteVRAMOffsets((Nitro3DTextureSet*)(*var5), var7);
            Nitro3D_DetachTexturePalette((Nitro3DModel*)(*var6));
            Nitro3DModel* var8 = *var6++;
            Nitro3DTextureSet* var9 = *var5++;
            Nitro3D_AttachTexturePalette((Nitro3DModel*)(var8), (Nitro3DTextureSet*)(var9));
        }
        Struct_020133fc* var10 = (Struct_020133fc*)(arg0->unknown_47c_);
        for (int var11 = 0; var11 < arg0->numChests_; var10++, var11++) {
            if (var10->unknown_16_ != 0 && ((var4 == 0 && var10->unknown_17_ == 0) || (var4 == 1 && var10->unknown_17_ != 0))) {
                Vector3i var12 = var10->unknown_0_;
                short var13 = var10->unknown_c_;
                short var14 = var10->unknown_e_;
                Nitro3DRenderConfig::SetObjectPosition(&var12);
                Matrix3x3 var15;
                fix32_t var16 = fix32cos(var13);
                fix32_t var17 = fix32sin(var13);
                Mat3x3_WriteRotationY(&var15, var17, var16);
                func_02016d8c(&var15);
                Nitro3DRenderConfig::SubmitToFifo();
                arg0->models_498_[0].DrawMeshWithMaterial(true, 0, 0, 1);
                Vector3i var18 = data_020e6e38;
                Mat3x3_ApplyToVector(&var18, &var15, &var18);
                Vector3fix_Add(&var12, &var18, &var12);
                Nitro3DRenderConfig::SetObjectPosition(&var12);
                Matrix3x3 var19;
                fix32_t var20 = fix32cos(var14);
                fix32_t var21 = fix32sin(var14);
                Mat3x3_WriteRotationX(&var19, var21, var20);
                Matrix3x3 var22;
                Mat3x3_Multiply(&var19, &var15, &var22);
                func_02016d8c(&var22);
                Nitro3DRenderConfig::SubmitToFifo();
                arg0->models_498_[1].DrawMeshWithMaterial(true, 0, 0, 1);
            }
        }
    }
}
