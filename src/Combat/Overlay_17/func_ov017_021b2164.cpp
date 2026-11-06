#include <globaldefs.h>

struct Struct_ov017_021d83f0 { int unknown_0_; int pCurrentMenu_4_; };
extern Struct_ov017_021d83f0 data_ov017_021d83f0;

// USA: GetCurrentMenu_ov017_021b2164
extern "C" ARM int GetCurrentMenu_ov017_021b2164(void) {
	return data_ov017_021d83f0.pCurrentMenu_4_;
}
