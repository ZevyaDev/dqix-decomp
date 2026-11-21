#include <globaldefs.h>

extern "C" int func_ov017_02191fec(int arg0, int arg1, int arg2);
extern "C" int func_ov017_0218fd34(int arg0, int arg1, int arg2);

// USA: TintPartyMemberPalettes_ov017_0218fcf8
extern "C" ARM int TintPartyMemberPalettes_ov017_0218fcf8(int gameResources, int memberIndex, int color) {
	int isTintAllowed = func_ov017_02191fec(gameResources, memberIndex, color) != 0;
	if (!isTintAllowed) {
		return isTintAllowed;
	}
	return func_ov017_0218fd34(gameResources, memberIndex, color);
}
