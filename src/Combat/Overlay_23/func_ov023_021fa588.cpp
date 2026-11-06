#include <globaldefs.h>

struct StringList_020727d8;
extern "C" void ResetStringList_020727d8(StringList_020727d8* stringList);

// USA: func_ov023_021fa588
extern "C" ARM void func_ov023_021fa588(void* arg0) {
	ResetStringList_020727d8((StringList_020727d8*)((char*)arg0 + 0x20));
}
