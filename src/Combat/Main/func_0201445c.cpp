#include <globaldefs.h>

#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "Filesystem/FileIO.h"
#include "std_library_functions.h"
#include "Graphics/TextureArena.h"
#include "NitroSDK/Graphics3D/Graphics3D.h"


// USA: func_0201445c
extern "C" ARM bool func_0201445c(Zone3D* arg0, const void* arg1, unsigned int arg2, const char* arg3)
{
    SafeAllocator* var0 = arg0->pAllocator_68_;
    char* var1 = (char*)arg0->textureArena_50_;
    unsigned int var2;
    void* var3;
    Zone3D::Model3DListNode* var4 =
        (Zone3D::Model3DListNode*)var0->Allocate(sizeof(Zone3D::Model3DListNode));
    Model3D* var5;

    if (var4) {
        var5 = &var4->model_;
        var5->Clear();
        var4->filename_ = 0;
        var4->pNext_ = 0;
        var4->filename_ = (char*)var0->Allocate(strlen(arg3) + 1);
        if (var4->filename_) {
            strcpy((char*)var4->filename_, arg3);
            var4->pNext_ = arg0->firstModel_418_;
            arg0->firstModel_418_ = var4;
            var3 = DecompressLZ77FileIntoScratchSpace(&(*var0), arg1, &var2);
            if (var3) {
                ((TextureArena*)(var1))->Restore();
                var5->SetRawFile(var3, var2);
                var5->ClearRawFileCache();
                var5->ProcessRawFile(Model3D::TextureStagingMode_Immediate);
                ((TextureArena*)(var1))->Save();

                Nitro3DTextureSet* var6 = var5->GetTEX0();
                if (var6) {
                    arg0->textureImageMemory_ += Nitro3D_GetTextureBlock1Length((const Nitro3DTextureSet*)(var6));
                    arg0->texturePaletteMemory_ += Nitro3D_GetTextureBlock4Length((const Nitro3DTextureSet*)(var6));
                }
                bool var7 = false;
                if (var6) {
                    unsigned int var8 = var6->block1Offset;
                    void* var9 = var0->Allocate(var8);
                    if (var9) {
                        memcpy(var9, var6, var8);
                        var5->SetTEX0((Nitro3DTextureSet*)var9);
                        var7 = true;
                    }
                }
                if (!var7) {
                    var5->Clear();
                }
            }
        }
    }
    return true;
}
