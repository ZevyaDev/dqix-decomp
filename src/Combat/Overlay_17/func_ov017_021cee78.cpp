#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae24 func_0202a9dc
#endif

extern "C" void* func_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);
struct Vector3i;

struct ObjectPositionPacket_ov017_021cee78 {
	unsigned char kind_0_;
	unsigned char unknown_1_[3];
	int position_4_[3];
	unsigned short facing_10_;
	unsigned char objectIndex_12_;
	unsigned char isFacingInstant_13_;
};

// USA: SendObjectPosition_ov017_021cee78
extern "C" ARM void SendObjectPosition_ov017_021cee78(int objectIndex, unsigned char isFacingInstant) {
	GameObject* object = GameState::GetInstance()->GetGameObjectByIndex(objectIndex);
	if (object == NULL) {
		return;
	}
	void* packetQueue = func_0202ae24();
	ObjectPositionPacket_ov017_021cee78 packet;
	packet.kind_0_ = 0x14;
	packet.objectIndex_12_ = objectIndex;
	*(Vector3i*)packet.position_4_ = *(Vector3i const*)(&object->obj3D_.position_.x);
	packet.facing_10_ = object->obj3D_.rotation_.y;
	packet.isFacingInstant_13_ = isFacingInstant;
	QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
}

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
