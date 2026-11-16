#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov031_0221b6f0(int, int, int);

// USA: func_ov031_0221b7fc
extern "C" ARM int func_ov031_0221b7fc(int arg0, int arg1, int arg2, int arg3) {
	if (func_ov031_0221b6f0(arg1, arg2, arg3) == 0) return 0;
	return memcmp((const void*)(arg0), (const void*)(arg3), arg2) == 0;
}
