#include <globaldefs.h>

struct MenuObjectList_021f6bb8 {
	int unknown_0_;
	int loadTaskId_4_;
};

// USA: GetMenuLoadTaskId_ov023_021f6bb8
extern "C" ARM int GetMenuLoadTaskId_ov023_021f6bb8(struct MenuObjectList_021f6bb8* objectList) {
	return objectList->loadTaskId_4_;
}
