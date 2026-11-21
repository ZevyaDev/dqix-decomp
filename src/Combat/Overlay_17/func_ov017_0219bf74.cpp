#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_02013750 func_02013518
#endif

extern "C" void* GetZone3D_02012fe4(void);
extern "C" void func_02013750(void* arg0, int arg1);

// USA: UnloadZone_ov017_0219bf74
extern "C" ARM void* UnloadZone_ov017_0219bf74(void) {
	unsigned char* gameResources = (unsigned char*)GetGameResources();
	func_02013750(GetZone3D_02012fe4(), 1);
	((SafeAllocator*)(gameResources + 0x38))->Reset();
	SetFlags04((GameResources*)gameResources, 2);
	SetFlags00((GameResources*)gameResources, 4);
	return gameResources + 0x38;
}
