#include <globaldefs.h>

// USA: SetWeaponBoneIndex_02053ec0
extern "C" ARM void SetWeaponBoneIndex_02053ec0(unsigned char* object, int boneIndex) {
#if defined(jpn)
    object[0x19b] = boneIndex;
#else
    object[0x1a7] = boneIndex;
#endif
}
