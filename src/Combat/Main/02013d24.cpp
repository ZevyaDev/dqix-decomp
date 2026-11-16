#include <globaldefs.h>

#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "World/LootableContainer.h"
#include "Resource/GameResources.h"
#include "Graphics/SPRSprite.h"

#if defined(usa)
#endif

// USA: func_02013d24
extern "C" ARM void func_02013d24(Zone3D* arg0)
{
    LootableContainerManager* var0 = LootableContainerManager::GetMainInstance();
    for (int var1 = 0; var1 < (unsigned char)arg0->unknown_476_; ++var1)
    {
        Struct_020133cc* var2 = &((Struct_020133cc*)arg0->unknown_478_)[var1];
        LootableContainerManager::Container* var3 =
            var0->GetContainerByID(var2->unknown_0_, NULL);
        if (var3 == NULL)
            continue;

        int var4 = var3->containerType;
        if (var4 == 1)
        {
            ((SPRSprite*)(((Struct_02012fa4**)arg0->unk_480)[0]))->CloneTo((SPRSprite*)(&var2->unknown_8_[0]));
            ((SPRSprite*)(((Struct_02012fa4**)arg0->unk_480)[1]))->CloneTo((SPRSprite*)(&var2->unknown_8_[1]));
            Struct_02012fa4* var5 = var2->unknown_118_;
            for (int var6 = 0; var6 < 4; ++var6)
                ((SPRSprite*)(((Struct_02012fa4**)arg0->unk_480)[2]))->CloneTo((SPRSprite*)(var5 + var6));
        }
        else if (var4 == 2)
        {
            ((SPRSprite*)(((Struct_02012fa4**)arg0->unk_480)[3]))->CloneTo((SPRSprite*)(&var2->unknown_8_[0]));
            ((SPRSprite*)(((Struct_02012fa4**)arg0->unk_480)[4]))->CloneTo((SPRSprite*)(&var2->unknown_8_[1]));
            Struct_02012fa4* var7 = var2->unknown_118_;
            for (int var8 = 0; var8 < 4; ++var8)
                ((SPRSprite*)(((Struct_02012fa4**)arg0->unk_480)[5]))->CloneTo((SPRSprite*)(var7 + var8));
        }
    }
}
