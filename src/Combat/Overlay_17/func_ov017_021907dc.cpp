#include <globaldefs.h>

struct PartyOrder_ov017_021907dc { int memberIndices_0_[4]; };
extern "C" void func_ov017_02190884(int arg0, PartyOrder_ov017_021907dc* arg1, int* arg2, int arg3, int arg4, int arg5);

// USA: LinkPartyFollowers_ov017_021907dc
extern "C" ARM void LinkPartyFollowers_ov017_021907dc(int gameResources, int leaderIndex, int resumeFollowing, int updatePlayerControl, int clearFollowTrails) {
	PartyOrder_ov017_021907dc partyOrder;
	int partyCount = 0;
	func_ov017_02190884(leaderIndex, &partyOrder, &partyCount, resumeFollowing, updatePlayerControl, clearFollowTrails);
}
