#include <globaldefs.h>

// USA: AppendActorResult_ov000_0215fe84
extern "C" ARM void AppendActorResult_ov000_0215fe84(void* actor, void* result, int listIndex) {
	void** link = (void**)((char*)actor + listIndex * 4);
	while (*link != 0) {
		link = (void**)((char*)(*link) + 0x20);
	}
	*link = result;
	{
		unsigned char* resultCounts = (unsigned char*)actor + 0x26;
		resultCounts[listIndex]++;
	}
}
