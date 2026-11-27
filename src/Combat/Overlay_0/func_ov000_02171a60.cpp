#include <globaldefs.h>

// USA: IsPanelMemberDead_ov000_02171a60
extern "C" ARM int IsPanelMemberDead_ov000_02171a60(void* panel) {
	return (*(int*)((char*)panel + 0x28) & 1) != 0;
}
