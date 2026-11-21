#include <globaldefs.h>
#include <std_library_functions.h>

struct ItemData_02083738_2 {
    void* unknown_0_;
    void* pName_4_;
    char unknown_8_[0x18];
};

struct Struct_0200f3a4_14 {
    char unknown_0_[0x20];
};

struct PartyMemberData_02083738 {
    char unknown_0_[0x194];
    struct ItemData_02083738_2 unknown_194_[11];
    #if defined(jpn)
    char unknown_2f4_[0x364];
#else
    char unknown1_2f4_[0x3fc];
#endif
    struct Struct_0200f3a4_14 unknown_6f0_[11];
};

struct ItemData_02083508_2;
extern "C" void InitItemData_020de1d4(struct ItemData_02083508_2*);
extern "C" unsigned char* func_0208349c(unsigned char* arg0, int arg1);

// USA: UnequipCategory_02083738
extern "C" ARM void UnequipCategory_02083738(struct PartyMemberData_02083738* memberData, int arg1) {
    int recordIndex = -1;
    int slot = -1;
    switch (arg1) {
    case 0: recordIndex = 8; slot = 7; break;
    case 1: recordIndex = 9; slot = 8; break;
    case 4: recordIndex = 7; slot = 6; break;
    case 2: recordIndex = 0; slot = 0; break;
    case 5: recordIndex = 5; slot = 4; break;
    case 3: recordIndex = 1; slot = 1; break;
    case 6: recordIndex = 6; slot = 5; break;
    case 7: recordIndex = 10; slot = 9; break;
    }
    if (recordIndex >= 0 && slot >= 0) {
        struct ItemData_02083738_2* equippedItem = &memberData->unknown_194_[recordIndex];
        void* itemParameters = equippedItem->unknown_0_;
        void* name = equippedItem->pName_4_;
        *(short*)((char*)memberData + slot * 2 + 0x488) = -1;
        memset(itemParameters, 0, 0x20);
#if defined(jpn)
        memset(name, 0, 0x14);
#else
        *(unsigned char*)name = 0;
#endif
        InitItemData_020de1d4((struct ItemData_02083508_2*)equippedItem);
        equippedItem->unknown_0_ = &memberData->unknown_6f0_[recordIndex];
#if defined(jpn)
        equippedItem->pName_4_ = (unsigned char*)memberData + 0x56f + recordIndex * 0x15;
#else
        equippedItem->pName_4_ = func_0208349c((unsigned char*)memberData, recordIndex);
#endif
    }
}
