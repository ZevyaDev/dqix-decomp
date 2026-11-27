#include <globaldefs.h>

struct Struct_ov023_021d8c60 { char unknown_0_[0x11a]; unsigned char unknown_11a_; };

struct TextWindowManager_0205d1e0;
extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0*);
struct TextWindowManager_0205d228;
extern "C" void DrawTextWindows_0205d228(TextWindowManager_0205d228*);
struct TextWindowManager_0205d274;
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274*);

// USA: RedrawTextWindows_ov023_021d8c60
extern "C" ARM void RedrawTextWindows_ov023_021d8c60(struct Struct_ov023_021d8c60* panel) {
	unsigned char state = panel->unknown_11a_;
	if (state == 0 || state == 3) return;
	ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)((char*)panel + 0x20));
	DrawTextWindows_0205d228((TextWindowManager_0205d228*)((char*)panel + 0x20));
	FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)((char*)panel + 0x20));
}
