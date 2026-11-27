#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0201b600_1052 = 0x43c };
#else
enum { Enum_0201b600_1052 = 0x41c };
#endif

struct BMDJEntry_0201b600 { unsigned short id_0_; unsigned char unknown_2_[0x6e]; };
struct BMDJStruct_0201b600_2 {
    int id_0_;
    unsigned char unknown_4_[0x10];
    int entryCount_14_;
    unsigned char unknown_18_[0x2c];
    struct BMDJEntry_0201b600* pEntries_44_;
    unsigned char unknown_48_[0xc];
    struct BMDJStruct_0201b600_2* pNext_54_;
};
struct Struct_02017a94 {
    unsigned char unknown_0_[Enum_0201b600_1052];
    struct BMDJStruct_0201b600_2* pFirstBMDJStruct_41c_;
    unsigned char unknown_420_[4];
    int isLoadPending_424_;
};

// USA: FindFirstBMDJEntry_0201b600
extern "C" ARM struct BMDJEntry_0201b600* FindFirstBMDJEntry_0201b600(Struct_02017a94* zone, int bmdjId, unsigned short entryId) {
    struct BMDJStruct_0201b600_2* bmdj;
    int entryCount;
    int i;
    if (zone->isLoadPending_424_ != 0) return NULL;
    bmdj = zone->pFirstBMDJStruct_41c_;
    while (bmdj != NULL) {
        if (bmdj->id_0_ == bmdjId) break;
        bmdj = bmdj->pNext_54_;
    }
    if (bmdj != NULL) {
        struct BMDJEntry_0201b600* entry = NULL;
        entryCount = bmdj->entryCount_14_;
        for (i = 0; i < entryCount; i++) {
            if (entryId == bmdj->pEntries_44_[i].id_0_) { entry = &bmdj->pEntries_44_[i]; break; }
        }
        return entry;
    }
    return NULL;
}
