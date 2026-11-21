#include <globaldefs.h>
#include "Graphics/BGLayer.h"

struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(struct TextWindowManager_0205d2bc*);
struct BGLayer_02020cb8_5;
#if defined(jpn)
#define func_ov023_021ed44c func_ov023_021ed394
#endif
extern "C" void func_ov023_021ed44c(void*);

// USA: CopyAccoladeDisplayToVRAM_ov023_021eb4f4
extern "C" ARM void CopyAccoladeDisplayToVRAM_ov023_021eb4f4(char* display) {
	if (*(unsigned char*)(display + 0x431) == 0) return;
	CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((struct TextWindowManager_0205d2bc*)(display + 0xc4));
	unsigned short displayFlags = *(unsigned short*)(display + 0x400 + 0x38);
	if ((displayFlags & 0x40) || (displayFlags & 0x200)) {
		short offsetY = *(short*)(display + 0x400 + 0x3a);
		((BGLayer*)((struct BGLayer_02020cb8_5*)(display + 0x64)))->SetOffset(0, offsetY);
		((BGLayer*)(display + 0x64))->UploadIndexBuffer((const void*)(0));
		unsigned short updatedFlags = *(unsigned short*)(display + 0x400 + 0x38);
		updatedFlags &= ~0x200;
		*(unsigned short*)(display + 0x400 + 0x38) = updatedFlags;
	}
	func_ov023_021ed44c(display);
}
