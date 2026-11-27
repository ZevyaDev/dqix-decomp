#include <globaldefs.h>
#include "World/ZoneChest.h"

// USA: FindDoorEntry_02018b34
extern "C" ARM BMDJEntry_02016874_2* FindDoorEntry_02018b34(Zone3D* zone, Struct_020134e0::Struct_02018300* door) {
    BMDJStruct_02013454* bmdj;
    BMDJEntry_02016874_2* doorEntry;
    int entryCount;
    int i;
    if (door->unknown_4_ != 2) return NULL;
    if (zone->unknown_424_ != 0) return NULL;
    bmdj = (BMDJStruct_02013454*)(zone->firstBMDJStruct_41c_);
    while (bmdj != NULL) {
        if (bmdj->id_0_ == door->unknown_2c_.unknown1_0_.unknown_0_) break;
        bmdj = bmdj->pNext_54_;
    }
    doorEntry = NULL;
    if (bmdj == NULL) return doorEntry;
    entryCount = bmdj->unknown_4_.entryCount_10_;
    for (i = 0; i < entryCount; i++) {
        if (door->unknown_2c_.unknown1_0_.unknown_1_ == bmdj->pEntries_44_[i].id_0_) {
            doorEntry = &bmdj->pEntries_44_[i];
            break;
        }
    }
    return doorEntry;
}
