#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"

// USA: InitCharacterModel_ov023_021e4e8c
extern "C" ARM void InitCharacterModel_ov023_021e4e8c(void* model) {
	char *modelBytes = (char*)model;
	modelBytes[0xc11] = 0;
	for (int part = 0; part < 10; part++) {
		((Object3D*)(modelBytes + part * 0xac))->Initialize();
		((SafeAllocator*)(modelBytes + 0x6b8 + part * 0x14))->ResetAllocatorPointer();
	}
	((SafeAllocator*)(modelBytes + 0x780))->ResetAllocatorPointer();
	modelBytes[0xc10] = 0;

#if defined(jpn)
	memset(modelBytes + 0xbf4, 0, 0x18);
#else
	for (int i = 0; i < 12; i++) {
		*(short*)(modelBytes + 0xbf4 + i * 2) = -1;
	}
#endif
	modelBytes[0xc12] = 0;
	modelBytes[0xc15] = 0;
	*(int*)(modelBytes + 0xc18) = 0;
	modelBytes[0xc14] = 1;
}
