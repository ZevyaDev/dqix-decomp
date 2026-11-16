#include <globaldefs.h>

#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "World/LootableContainer.h"
#include "Graphics/LightingManager.h"
#include "Graphics/SPRSprite.h"

extern "C" void func_020133cc(Struct_020133cc* arg0);
extern "C" void func_02013d24(Zone3D* arg0);

// USA: func_02013b70
extern "C" ARM void func_02013b70(Zone3D* arg0, SafeAllocator* arg1)
{
    LootableContainerManager* var0 = LootableContainerManager::GetMainInstance();
    const unsigned short var1 = LightingManager::GetInstance()->maybePotBarrelDiffuseColor_;
    LootableContainerManager::Container* var2 = var0->pContainerList_;
    unsigned int var3 = 0;

    for (; var2 != NULL; var2 = var2->pNext)
    {
        if (var2->containerType == 1 || var2->containerType == 2)
            var3++;
    }

    arg0->unknown_478_ = (int)static_cast<Struct_020133cc*>(
        arg1->Allocate(var3 * sizeof(Struct_020133cc)));
    if (arg0->unknown_478_ == NULL)
        return;

    for (var2 = var0->pContainerList_; var2 != NULL; var2 = var2->pNext)
    {
        if (var2->containerType != 1 && var2->containerType != 2)
            continue;

        Struct_020133cc* var4 = &((Struct_020133cc*)arg0->unknown_478_)[(unsigned char)arg0->unknown_476_];

        func_020133cc((Struct_020133cc*)((int)(var4)));
        ((SPRSprite*)(&var4->unknown_8_[0]))->Reset();
        var4->unknown_8_[0].unknown_80_ = var1;
        ((SPRSprite*)(&var4->unknown_8_[1]))->Reset();
        var4->unknown_8_[1].unknown_80_ = var1;

        for (int var5 = 0; var5 < 4; ++var5)
        {
            ((SPRSprite*)(&var4->unknown_118_[var5]))->Reset();
            var4->unknown_118_[var5].unknown_80_ = var1;
        }

        Vector3fix* var6 = reinterpret_cast<Vector3fix*>(&var4->unknown_8_[0].unknown_1c_[0]);
        *var6 = var2->position;

        var4->unknown_8_[0].unknown_1c_[6] = 0x80;
        var4->unknown_8_[0].unknown_1c_[7] = 0x80;
        var4->unknown_8_[0].unknown_1c_[8] = 0x80;
        var4->unknown_0_ = var2->uniqueID;
        var4->unknown_2_ = 0;
        arg0->unknown_476_ = (char)((unsigned char)arg0->unknown_476_ + 1);
    }

    func_02013d24(arg0);
}

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
