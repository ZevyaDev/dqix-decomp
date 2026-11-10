#include <globaldefs.h>

// USA: AppendTargetResult_ov000_0215ffc4
extern "C" ARM void AppendTargetResult_ov000_0215ffc4(void* target, void* result, int listIndex) {
	void** link = (void**)((char*)target + listIndex * 4);
	while (*link != 0) {
		link = (void**)((char*)(*link) + 0x20);
	}
	*link = result;
	{
		unsigned char* resultCounts = (unsigned char*)target + 0x18;
		resultCounts[listIndex]++;
	}
}
