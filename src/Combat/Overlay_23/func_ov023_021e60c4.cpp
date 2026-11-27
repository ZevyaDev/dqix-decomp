#include <globaldefs.h>

struct Struct_ov009_02188454 { unsigned int unknown_0_, unknown_4_, unknown_8_; };

// USA: SetObject3DRotationFromVector_ov023_021e60c4
extern "C" ARM void SetObject3DRotationFromVector_ov023_021e60c4(void* object, struct Struct_ov009_02188454* rotation) {
	struct Struct_ov009_02188454* objectRotation = (struct Struct_ov009_02188454*)((char*)object + 0x50);
	objectRotation->unknown_0_ = rotation->unknown_0_;
	objectRotation->unknown_4_ = rotation->unknown_4_;
	objectRotation->unknown_8_ = rotation->unknown_8_;
}
