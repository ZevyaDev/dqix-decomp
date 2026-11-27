#include <globaldefs.h>
#include <std_library_functions.h>

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif
#if defined(jpn)
extern "C" int func_020d2ff0(const char*);
#endif
struct EquipData_0208358c { int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_; };
struct ItemData_0208358c_2 { EquipData_0208358c* unknown_0_; char* unknown_4_; unsigned int unknown_8_0_:4; unsigned int unknown_8_4_:28; char unknown_c_[20]; };
struct PartyMemberData_0208358c_3 { char unknown_0_[0x194]; ItemData_0208358c_2 equipment_194_[11];
#if defined(jpn)
    char unknown_2f4_[0x364];
#else
    char unknown1_2f4_[0x3fc];
#endif
    EquipData_0208358c equipData_6f0_[11]; };
struct ItemData_02083508_2;
extern "C" void InitItemData_020de1d4(ItemData_02083508_2*);
extern "C" void func_020836e4(ItemData_0208358c_2*, ItemData_0208358c_2*);
extern "C" unsigned char* func_0208349c(unsigned char*, int);
// USA: SetEquipment_0208358c
extern "C" ARM void SetEquipment_0208358c(PartyMemberData_0208358c_3* memberData, ItemData_0208358c_2* item, int explicitRecordIndex) {
    if (!item) return;
    int recordIndex = -1;
    switch (item->unknown_8_0_) {
    case 0: recordIndex = 8; break;
    case 1: recordIndex = 9; break;
    case 4: recordIndex = 7; break;
    case 2: recordIndex = 0; break;
    case 5: recordIndex = 5; break;
    case 3: recordIndex = 1; break;
    case 6: recordIndex = 6; break;
    case 7: recordIndex = 10; break;
    case 11: recordIndex = explicitRecordIndex; break;
    }
    if (recordIndex < 0) return;
    ItemData_0208358c_2* equippedItem = &memberData->equipment_194_[recordIndex];
    EquipData_0208358c* slotEquipData = equippedItem->unknown_0_;
    char* name = equippedItem->unknown_4_;
    EquipData_0208358c* itemEquipData = item->unknown_0_;
    slotEquipData->unknown_0_ = itemEquipData->unknown_0_; slotEquipData->unknown_4_ = itemEquipData->unknown_4_; slotEquipData->unknown_8_ = itemEquipData->unknown_8_; slotEquipData->unknown_c_ = itemEquipData->unknown_c_;
    slotEquipData->unknown_10_ = itemEquipData->unknown_10_; slotEquipData->unknown_14_ = itemEquipData->unknown_14_; slotEquipData->unknown_18_ = itemEquipData->unknown_18_; slotEquipData->unknown_1c_ = itemEquipData->unknown_1c_;
#if defined(jpn)
    memset(name, 0, 0x14);
    if (item->unknown_4_) { memcpy(name, item->unknown_4_, func_020d2ff0(item->unknown_4_)); }
#else
    *name = 0;
    if (item->unknown_4_) { memset(name, 0, 0x30); sprintf(name, item->unknown_4_); }
#endif
    InitItemData_020de1d4((ItemData_02083508_2*)equippedItem);
    func_020836e4(equippedItem, item);
    equippedItem->unknown_0_ = &memberData->equipData_6f0_[recordIndex];
#if defined(jpn)
    equippedItem->unknown_4_ = (char*)memberData + 0x56f + recordIndex * 0x15;
#else
    equippedItem->unknown_4_ = (char*)func_0208349c((unsigned char*)memberData, recordIndex);
#endif
}
