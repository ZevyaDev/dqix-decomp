#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov017_021a4e70 { char unknown_0_[0x34]; signed char inputCooldown_54_; };
#else
struct Struct_ov017_021a4e70 { char unknown_0_[0x54]; signed char inputCooldown_54_; };
#endif

// USA: IsInputCooldownOver_ov017_021a4e70
extern "C" ARM int IsInputCooldownOver_ov017_021a4e70(unsigned char* gameResources) {
#if defined(jpn)
	Struct_ov017_021a4e70* cooldownBase = (Struct_ov017_021a4e70*)(gameResources + 0x4100);
#else
	Struct_ov017_021a4e70* cooldownBase = (Struct_ov017_021a4e70*)(gameResources + 0x4300);
#endif
	return cooldownBase->inputCooldown_54_ <= 0;
}
