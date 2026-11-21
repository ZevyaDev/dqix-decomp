#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02019508_1052 = 0x43c };
#else
enum { Enum_02019508_1052 = 0x41c };
#endif


struct BMDJEntry_02019508 {
    unsigned short id_0_;
    unsigned char unknown_2_[0x6e];
};

struct BMDJStruct_02019508_2 {
    int id_0_;
    unsigned char unknown_4_[0x10];
    int entryCount_14_;
    unsigned char unknown_18_[0x2c];
    struct BMDJEntry_02019508* pEntries_44_;
    unsigned char unknown_48_[0xc];
    struct BMDJStruct_02019508_2* pNext_54_;
};

struct Zone3D_02019508_3 {
    unsigned char unknown_0_[Enum_02019508_1052];
    struct BMDJStruct_02019508_2* pFirstBMDJStruct_41c_;
};

// USA: FindBMDJEntry_02019508
extern "C" ARM struct BMDJEntry_02019508* FindBMDJEntry_02019508(struct Zone3D_02019508_3* zone, int bmdjId, int entryId) {
    struct BMDJEntry_02019508* foundEntry;
    struct BMDJStruct_02019508_2* bmdj;
    foundEntry = 0;
    bmdj = zone->pFirstBMDJStruct_41c_;
    while (bmdj != 0) {
        if (bmdj->id_0_ == bmdjId) {
            int entryCount = bmdj->entryCount_14_;
            struct BMDJEntry_02019508* entry = bmdj->pEntries_44_;
            int i;
            for (i = 0; i < entryCount; i++, entry++) {
                if (entry->id_0_ == entryId) {
                    foundEntry = entry;
                    break;
                }
            }
        }
        bmdj = bmdj->pNext_54_;
    }
    return foundEntry;
}
