#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae24 func_0202a9dc
#endif

extern "C" void* func_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct NoticeBody_ov017_021d1810 {
    unsigned short noticeId_0_;
    unsigned short unknown_2_;
    unsigned char memberIndex_4_;
};

struct NoticePacket_ov017_021d1810_2 {
    unsigned char kind_0_;
    unsigned char unknown_1_[3];
    NoticeBody_ov017_021d1810 body_4_;
    unsigned char unknown_a_[10];
};

// USA: SendNotice_ov017_021d1810
extern "C" ARM void SendNotice_ov017_021d1810(int noticeId, int arg1, signed char memberIndex) {
    NoticePacket_ov017_021d1810_2 packet;
    void* packetQueue = func_0202ae24();
    packet.kind_0_ = 0xad;
    NoticeBody_ov017_021d1810* body = &packet.body_4_;
    body->noticeId_0_ = noticeId;
    body->unknown_2_ = arg1;
    body->memberIndex_4_ = memberIndex;
    QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
}
