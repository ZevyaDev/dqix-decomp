#include <globaldefs.h>
#include "std_library_functions.h"

extern char data_ov031_02249b48;

// USA: func_ov031_022157c4
extern "C" ARM int func_ov031_022157c4(void *arg0) {
	return memcmp(arg0, &data_ov031_02249b48, 8) == 0;
}
