#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"


extern unsigned char data_ov023_021fdc90;

struct LayoutFile_ov023_021e20f0_4 {
    char unknown_0_[4];
    int groupsOffset_4_;
    char unknown_8_[0xc - 0x8];
    int unknown_c_;
    char unknown_10_[0x14 - 0x10];
    int unknown_14_;
    int groupCount_18_;
};

struct Layout_ov023_021e20f0_5 {
    char unknown_0_[8];
    void* pGroups_8_;   // 0x8
    void* pElements_c_;   // 0xc
    char unknown_10_[0x14 - 0x10];
    unsigned short groupCount_14_; // 0x14
    unsigned short elementCount_16_;    // 0x16
};

struct Struct_ov023_021e20f0_6 {
    char unknown_0_[4];
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    char unknown_c_[0xe - 0xc];
    unsigned short unknown_e_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    unsigned short unknown_18_;
};

struct LayoutGroup_ov023_021e20f0_7 {
    signed short id_0_;
    unsigned short elementCount_2_;
    void* pElementIds_4_;
    signed short x_8_;
    signed short y_a_;
    signed short unknown_c_;
    signed short unknown_e_;
    signed short unknown_10_;
    signed short unknown_12_;
    unsigned short unknown_14_;
    unsigned char unknown_16_;
    unsigned char unknown_17_;
};

struct Struct_ov023_021e20f0 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    signed short unknown_8_;
    char unknown_a_[0x10 - 0xa];
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};

struct Struct_ov023_021e20f0_2 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };

struct LayoutElement_ov023_021e20f0_3 {
    short id_0_;
    unsigned char type_2_;
    unsigned char unknown_3_;
    signed short x_4_;
    signed short y_6_;
    signed short width_8_;
    signed short height_a_;
    int unknown_c_;
    unsigned char unknown_10_;
};

// USA: LoadLayout_ov023_021e20f0
extern "C" ARM int LoadLayout_ov023_021e20f0(struct Layout_ov023_021e20f0_5* layout, SafeAllocator* allocator,
        struct LayoutFile_ov023_021e20f0_4* fileData, void* fileSize) {
    short invalidId = -1;
    if (allocator == 0) return 1;
    if (fileData == 0) return 1;
    if (fileSize == 0) return 1;

    if (memcmp((unsigned char*)((char*)fileData + 8), &data_ov023_021fdc90, 3) != 0) {
        return 1;
    }

    fileData->unknown_c_ = (int)((char*)fileData + fileData->unknown_c_);
    fileData->unknown_14_ = (int)((char*)fileData + fileData->unknown_14_);
    layout->groupCount_14_ = 0;
    layout->elementCount_16_ = 0;
    layout->groupCount_14_ = fileData->groupCount_18_;
    layout->pGroups_8_ = allocator->Allocate(layout->groupCount_14_ * 0x18);
    struct Struct_ov023_021e20f0_6* fileGroups = (struct Struct_ov023_021e20f0_6*)((char*)fileData + fileData->groupsOffset_4_);
    unsigned short groupCount = layout->groupCount_14_;

    unsigned short groupIndex;
    for (groupIndex = 0; groupIndex < groupCount; groupIndex++) {
        struct Struct_ov023_021e20f0_6* fileGroup = (struct Struct_ov023_021e20f0_6*)((char*)fileGroups + groupIndex * 0x1c);
        struct LayoutGroup_ov023_021e20f0_7* group = (struct LayoutGroup_ov023_021e20f0_7*)((char*)layout->pGroups_8_ + groupIndex * 0x18);

        group->id_0_ = invalidId;
        group->elementCount_2_ = 0;
        group->pElementIds_4_ = 0;
        group->y_a_ = 0;
        group->x_8_ = group->y_a_;
        group->unknown_c_ = invalidId;
        group->unknown_e_ = invalidId;
        group->unknown_10_ = invalidId;
        group->unknown_12_ = invalidId;
        group->unknown_14_ = 0;
        group->unknown_16_ = 3;
        group->unknown_17_ = 0xff;

        group->x_8_ = fileGroup->unknown_8_;
        group->y_a_ = fileGroup->unknown_a_;
        group->elementCount_2_ = fileGroup->unknown_e_;
        group->pElementIds_4_ = allocator->Allocate(fileGroup->unknown_e_ * 2);
        char* fileElementIds = (char*)fileData->unknown_14_ + fileGroup->unknown_4_;
        if (fileElementIds != 0) {
            memcpy(group->pElementIds_4_, fileElementIds, fileGroup->unknown_e_ * 2);
        }
        group->id_0_ = fileGroup->unknown_10_;
        group->unknown_c_ = fileGroup->unknown_12_;
        group->unknown_e_ = fileGroup->unknown_14_;
        group->unknown_10_ = fileGroup->unknown_16_;
        group->unknown_12_ = fileGroup->unknown_18_;
        layout->elementCount_16_ = layout->elementCount_16_ + group->elementCount_2_;
    }

    layout->pElements_c_ = allocator->Allocate(layout->elementCount_16_ * 0x14);
    struct Struct_ov023_021e20f0* fileElements = (struct Struct_ov023_021e20f0*)fileData->unknown_c_;

    unsigned short elementIndex;
    for (elementIndex = 0; elementIndex < layout->elementCount_16_; elementIndex++) {
        struct Struct_ov023_021e20f0* fileElement = (struct Struct_ov023_021e20f0*)((char*)fileElements + elementIndex * 0x28);
        struct LayoutElement_ov023_021e20f0_3* element = (struct LayoutElement_ov023_021e20f0_3*)((char*)layout->pElements_c_ + elementIndex * 0x14);

        element->id_0_ = -1;
        element->type_2_ = 0;
        struct Struct_ov023_021e20f0_2* textFormat = (struct Struct_ov023_021e20f0_2*)&element->unknown_3_;
        textFormat->unknown_0_0_ = 0xa;
        textFormat->unknown_0_4_ = 0xf;
        element->y_6_ = 0;
        element->x_4_ = element->y_6_;
        element->height_a_ = 0;
        element->width_8_ = element->height_a_;
        element->unknown_c_ = 0;
        element->unknown_10_ = 0;

        element->x_4_ = fileElement->unknown_4_;
        element->y_6_ = fileElement->unknown_6_;
        element->id_0_ = fileElement->unknown_8_;

        switch (fileElement->unknown_0_) {
        case 0:
            element->type_2_ = 2;
            element->width_8_ = *(unsigned short*)((char*)fileElement + 0xc);
            element->height_a_ = *(unsigned short*)((char*)fileElement + 0xe);
            break;
        case 1:
            element->type_2_ = 1;
            element->width_8_ = *(unsigned short*)((char*)fileElement + 0xc);
            element->height_a_ = *(unsigned short*)((char*)fileElement + 0xe);
            break;
        case 3:
            if (*(int*)((char*)fileElement + 0xc) == 0) {
                element->width_8_ = fileElement->unknown_10_;
                element->height_a_ = fileElement->unknown_12_;
            }
            break;
        case 2:
        default:
            break;
        }
    }

    return 0;
}
