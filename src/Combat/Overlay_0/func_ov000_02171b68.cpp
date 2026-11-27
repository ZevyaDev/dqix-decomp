#include <globaldefs.h>

extern "C" int CountPanelItems_ov000_02171bc0(void*);

#if defined(jpn)
enum { Enum_ov000_02171b68_1008 = 0x430, Enum_ov000_02171b68_134 = 0xc6 };
#else
enum { Enum_ov000_02171b68_1008 = 0x3f0, Enum_ov000_02171b68_134 = 0x86 };
#endif

// USA: SetPanelItem_ov000_02171b68
extern "C" ARM void SetPanelItem_ov000_02171b68(void* panel, int itemIndex, void* item) {
    if (itemIndex < 0) return;
    if (itemIndex >= 0x10) return;
    if (item == 0) return;
    *(void**)((char*)panel + itemIndex * 4 + Enum_ov000_02171b68_1008) = item;
    *(unsigned char*)((char*)panel + Enum_ov000_02171b68_134) = (unsigned char)CountPanelItems_ov000_02171bc0(panel);
}
