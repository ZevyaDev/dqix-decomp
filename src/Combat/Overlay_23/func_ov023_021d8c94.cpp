#include <globaldefs.h>

struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(struct TextWindowManager_0205d2bc*);

struct Struct_ov000_02160ad0 { char unknown_0_[0x11a]; unsigned char unknown_11a_; };

// USA: CopyTextWindowsToVRAM_ov023_021d8c94
extern "C" ARM void CopyTextWindowsToVRAM_ov023_021d8c94(struct Struct_ov000_02160ad0* panel) {
	unsigned char state = panel->unknown_11a_;
	if (state == 0 || state == 3) return;
	CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((struct TextWindowManager_0205d2bc*)((char*)panel + 0x20));
}
