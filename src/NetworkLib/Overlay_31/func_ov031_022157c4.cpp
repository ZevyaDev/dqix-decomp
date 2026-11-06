#include <globaldefs.h>

extern "C" int CompareBytes_02001aec(void* left, void* right, int count);
extern char data_ov031_02249b48;

// USA: func_ov031_022157c4
extern "C" ARM int func_ov031_022157c4(void *arg0) {
	return CompareBytes_02001aec(arg0, &data_ov031_02249b48, 8) == 0;
}
