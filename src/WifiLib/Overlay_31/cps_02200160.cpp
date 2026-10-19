#include <globaldefs.h>
#include "System/ProcessorContext.h"
#include "System/Timing.h"
#include "System/Interrupts.h"
#include "System/Memory.h"

typedef unsigned long CPSInAddr;

struct MATHRandContext32 {
    unsigned long long x;
    unsigned long long mul;
    unsigned long long add;
};

struct ArpEntry {
    unsigned int address;
    unsigned char hardware[6];
    unsigned short timestamp;
};

struct CpsSocket {
    unsigned char pad0[0xa];
    unsigned short localPort;
    unsigned char padc[0x18 - 0xc];
    unsigned short remotePort;
    unsigned char pad1a[2];
    unsigned int remoteAddress;
    unsigned char pad20[4];
    unsigned int ackNumber;
    unsigned int seqNumber;
    unsigned char pad2c[0x3c - 0x2c];
    int recvCapacity;
    void* recvBuffer;
    unsigned char pad44[4];
    int sendCapacity;
    void* sendBuffer;
    unsigned char pad50[0x64 - 0x50];
};

struct IpFragment {
    unsigned long source;
    unsigned short count;
    unsigned short identification;
    unsigned short totalBlocks;
    unsigned short totalLength;
    unsigned short starts[8];
    unsigned short ends[8];
    unsigned long timestamp;
    unsigned char* payload;
    unsigned char* allocation;
};

extern unsigned char data_ov031_0224968c[8];
extern unsigned char data_ov031_0224ce68[6];
extern unsigned char data_ov031_0224ced6[0x12c] __attribute__((aligned(2)));

unsigned char data_ov031_0224c980;
static unsigned char ip_conflict;
static unsigned short ipid;
static inline unsigned short NextPingSequence(void) {
    static unsigned short pingseq = 0;
    return pingseq++;
}
static unsigned short ephemeral_port;
static unsigned short mymss;
static unsigned short unk_0a;
static volatile unsigned int lan_buflen;
static unsigned int dhcp_server;
static ProcessorContext* volatile recv_waiter;
unsigned int data_ov031_0224c9d0;
static void (*dhcp_callback)(void);
static unsigned int cps_mode;
static int calm_down;
void (*data_ov031_0224c9c0)(void*);
static void (*scavenger)(void);
unsigned int data_ov031_0224c9ac;
static unsigned int requested_ip;
static unsigned int dhcp_retry;
static unsigned int lease_time;
static unsigned char* lan_buf;
static unsigned int yield_wait;
static int cps_state;
unsigned int data_ov031_0224c99c;
void* (*data_ov031_0224c994)(unsigned long);
static volatile unsigned int recv_head;
static volatile unsigned int recv_tail;
static int (*link_is_on)(void);
unsigned int data_ov031_0224c9e0[2];
MATHRandContext32 data_ov031_0224c9e8;
ArpEntry data_ov031_0224ca00[8];
CpsSocket data_ov031_0224ca60;
CpsSocket data_ov031_0224cac4;
ProcessorContext data_ov031_0224cb28;
ProcessorContext data_ov031_0224cbe8;
IpFragment data_ov031_0224cca8[8];

struct PendingRequest {
    void* context;
    int type;
    unsigned char status;
};

void ZeroGlobalBuffer0224e3b8_ov031_0220ab78();

// USA: func_ov031_02200160
extern "C" ARM void func_ov031_02200160(int state) {
    int wasConfigured = data_ov031_0224c9d0 != 0;

    cps_state = state;
    data_ov031_0224c9d0 = 0;
    data_ov031_0224c99c = 0;
    data_ov031_0224c9ac = 0;
    data_ov031_0224c9e0[0] = 0;
    data_ov031_0224c9e0[1] = 0;
    dhcp_server = 0;
    if (!wasConfigured) {
        return;
    }

    VectorizedMemset(data_ov031_0224ca00, 0, 0x60);

    ProcessorContext* ctx = data_02111304.firstContext;
    if (ctx != NULL) {
        do {
            PendingRequest* p = (PendingRequest*)ctx->unknown_A4;
            if (p != NULL && p->context != NULL) {
                if (p->status != 0xa && p->status != 0xb) {
                    p->status = 0;
                }
                if (p->type != 0) {
                    p->type = 0;
                    MarkContextReadyAndSwitch((ProcessorContext*)p->context);
                }
            }
            ctx = ctx->pNext;
        } while (ctx != NULL);
    }

    int i = 0;
    IpFragment* fragment = data_ov031_0224cca8;
    do {
        if (fragment->count != 0) {
            data_ov031_0224c9c0(fragment->allocation);
            fragment->count = 0;
        }
        i++;
        fragment++;
    } while (i < 8);

    ZeroGlobalBuffer0224e3b8_ov031_0220ab78();
}

void CycleCurrentPriorityContexts();
void SleepCurrentContext(unsigned int);

// USA: func_ov031_02200264
ARM void DispatchContext02200264(void) {
    unsigned int v = yield_wait;
    if (v == 0) {
        CycleCurrentPriorityContexts();
    } else {
        SleepCurrentContext(v);
    }
}

// USA: func_ov031_0220028c  (semantic: EmptyStub_0220028c)
extern "C" ARM void func_ov031_0220028c(void) {
}

// USA: func_ov031_02200290  (semantic: AlwaysTrue_02200290)
extern "C" ARM int func_ov031_02200290() {
    return 1;
}

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef int BOOL;

typedef struct {
    u32 mode;
    void* (*alloc)(u32);
    void (*free)(void*);
    void (*dhcp_callback)(void);
    BOOL (*link_is_on)(void);
    unsigned long long random_seed;
    u8* lan_buf;
    u32 lan_buflen;
    u32 mymss;
    u32 requested_ip;
    u32 yield_wait;
} CPSConfig;

extern unsigned int data_ov031_02249680;
extern unsigned char data_ov031_0224e1c0[];
extern unsigned char data_ov031_0224d9c0[];
#define CPS_MIDDLEWARE ((const void*)0x02000c04)
extern "C" void func_02000b9c(const void*);

extern "C" void func_ov031_02203008(void);
extern "C" void func_ov031_02203c6c(void);
extern "C" void CopyFrom027ffcf4_020c99ac(void*);

static inline void MATH_InitRand32(MATHRandContext32* context, u64 seed) {
    context->x = seed;
    context->mul = (1566083941LL << 32) + 1812433253LL;
    context->add = 2531011;
}

static inline u32 MATH_Rand32(MATHRandContext32* context, u32 max) {
    context->x = context->mul * context->x + context->add;
    if (max == 0) {
        return (u32)(context->x >> 32);
    } else {
        return (u32)(((context->x >> 32) * max) >> 32);
    }
}

// USA: func_ov031_02200298
extern "C" ARM void func_ov031_02200298(CPSConfig* options) {
    func_02000b9c(CPS_MIDDLEWARE);
    u64 seed = options->random_seed;
    if (seed) {
        MATH_InitRand32(&data_ov031_0224c9e8, seed);
    } else {
        MATH_InitRand32(&data_ov031_0224c9e8, GetCurrentTimestamp());
    }
    if (options->alloc && options->free) {
        data_ov031_0224c994 = options->alloc;
        data_ov031_0224c9c0 = options->free;
    } else {
        data_ov031_0224c994 = (void* (*)(u32))func_ov031_0220028c;
        data_ov031_0224c9c0 = (void (*)(void*))func_ov031_0220028c;
    }
    cps_mode = options->mode;
    if (options->mymss) mymss = options->mymss;
    else mymss = 0x5b4;
    requested_ip = options->requested_ip;
    yield_wait = options->yield_wait;
    if (options->dhcp_callback) dhcp_callback = options->dhcp_callback;
    else dhcp_callback = func_ov031_0220028c;
    if (options->link_is_on) link_is_on = options->link_is_on;
    else link_is_on = func_ov031_02200290;
    lan_buf = options->lan_buf;
    lan_buflen = options->lan_buflen;
    recv_tail = 0;
    recv_head = 0;
    ephemeral_port = 0x400 + MATH_Rand32(&data_ov031_0224c9e8, 0xf88);
    CopyFrom027ffcf4_020c99ac(data_ov031_0224ce68);
    ip_conflict = 0;
    PopulateContext(&data_ov031_0224cbe8, (unsigned int)func_ov031_02203008, 0, (unsigned int)data_ov031_0224e1c0, 0x800, data_ov031_02249680);
    PopulateContext(&data_ov031_0224cb28, (unsigned int)func_ov031_02203c6c, 0, (unsigned int)data_ov031_0224d9c0, 0x800, data_ov031_02249680);
    MarkContextReadyAndSwitch(&data_ov031_0224cbe8);
    MarkContextReadyAndSwitch(&data_ov031_0224cb28);
}

bool IsContextInactive(ProcessorContext* context);

// USA: func_ov031_022004d4
ARM int MarkContextReadyIfInactive_022004d4(void) {
	int oldIRQ = DisableIRQInterrupts();
	int inactive = IsContextInactive(&data_ov031_0224cb28);
	if (inactive == 0) {
		if (calm_down == 0) {
			calm_down = 1;
			MarkContextReadyAndSwitch(&data_ov031_0224cb28);
		}
	}
	SetIRQInterruptState(oldIRQ);
	return inactive;
}

// USA: func_ov031_02200524
ARM void SetGlobal0224c980Field3c_02200524(int v) {
	scavenger = (void (*)(void))v;
}

// USA: func_ov031_02200534  (semantic: ShutdownAndResetContexts_02200534)
extern "C" ARM void func_ov031_02200534(void) {
    MarkContextReadyIfInactive_022004d4();
    AwaitContextCompletion(&data_ov031_0224cb28);
    ShutdownContext(&data_ov031_0224cbe8);
    recv_waiter = 0;
    func_ov031_02200160(0);
    lan_buf = 0;
    lan_buflen = 0;
}

extern unsigned int data_ov031_02249680;

// USA: func_ov031_0220057c
ARM void SetPriorityAndApplyToContexts_0220057c(unsigned int priority) {
	data_ov031_02249680 = priority;
	ChangeContextPriority(&data_ov031_0224cbe8, priority);
	ChangeContextPriority(&data_ov031_0224cb28, priority);
}

// USA: func_ov031_022005b4
extern "C" ARM unsigned int func_ov031_022005b4(unsigned char* addr, unsigned int len, unsigned int sum) {
	if ((unsigned int)addr & 1) {
		if (len > 1) {
			do {
				unsigned short v = ((unsigned int)addr[0] << 8) | addr[1];
				sum += v;
				addr += 2;
				len -= 2;
			} while (len > 1);
		}
	} else {
		unsigned short s = (unsigned short)sum;
		sum = (unsigned short)((s >> 8) | (s << 8));
		if (len > 1) {
			do {
				sum += *(unsigned short*)addr;
				addr += 2;
				len -= 2;
			} while (len > 1);
		}
		unsigned int t1 = (sum >> 8) & 0xff00ff;
		unsigned int t2 = (sum << 8) & 0xff00ff00;
		sum = t1 | t2;
		sum = (sum >> 16) | (sum << 16);
	}
	if (len != 0) {
		sum += (unsigned int)addr[0] << 8;
	}
	sum = (sum & 0xffff) + (sum >> 16);
	sum += sum >> 16;
	return (unsigned short)sum;
}

// USA: func_ov031_02200668
ARM unsigned int NormalizeChecksum_02200668(unsigned int value) {
	unsigned short v = (unsigned short)(value ^ 0xffff);
	if (v == 0) {
		return 0xffff;
	}
	return v;
}

// USA: func_ov031_02200684
ARM unsigned int ComputeNormalizedChecksum_02200684(void* p, unsigned int len) {
	unsigned int sum = func_ov031_022005b4((unsigned char*)p, len, 0);
	return NormalizeChecksum_02200668((unsigned short)sum);
}

// USA: func_ov031_022006a0
ARM int IsChecksumValid_022006a0(void* a, unsigned int len, void* c, unsigned int seed) {
	unsigned int sum = func_ov031_022005b4((unsigned char*)a, len, seed);
	sum = func_ov031_022005b4((unsigned char*)((char*)c + 0xc), 8, sum);
	unsigned int v = sum + len;
	if (v & 0x10000) {
		v = (unsigned short)(v + 1);
	}
	return v != 0xffff;
}

// USA: func_ov031_022006f0
ARM int IsSpecialOrMaskMatch_022006f0(int a) {
	int result = 1;
	if (a != -1 && a != 0x7F000001) {
		unsigned int mask = data_ov031_0224c99c;
		if ((a & mask) != (data_ov031_0224c9d0 & mask)) result = 0;
	}
	return result;
}

// USA: func_ov031_02200730  (semantic: SelectFieldOrValue_02200730)
extern "C" ARM int func_ov031_02200730(int a) {
	int result = a;
	if (IsSpecialOrMaskMatch_022006f0(a) == 0) {
		result = data_ov031_0224c9ac;
	}
	return result;
}

// USA: func_ov031_02200754
ARM int IsMaskComplementSet_02200754(unsigned int a) {
	int result = 0;
	if (IsSpecialOrMaskMatch_022006f0(a) != 0) {
		unsigned int inv = ~data_ov031_0224c99c;
		if (inv == (inv & a)) {
			result = 1;
		}
	}
	return result;
}

// USA: func_ov031_02200790
ARM int IsHighNibbleE_02200790(unsigned int v) {
	return (v & 0xf0000000) == 0xe0000000;
}

// USA: func_ov031_022007a4  (semantic: IsIdAllowed_022007a4)
extern "C" ARM int func_ov031_022007a4(int id) {
	int cur = data_ov031_0224c9d0;
	int allowed = 1;
	int stageB = 1;
	int stageA = 1;
	int fieldOk = 1;
	if (cur != 0 && id != cur) fieldOk = 0;
	if (!fieldOk) {
		if (id != 0x7f000001) stageA = 0;
	}
	if (!stageA) {
		if (IsMaskComplementSet_02200754(id) == 0) stageB = 0;
	}
	if (!stageB) {
		if (IsHighNibbleE_02200790(id) == 0) allowed = 0;
	}
	return allowed;
}

// USA: func_ov031_02200824
ARM int CompareThreeU16sDiffer02200824(unsigned short* a, unsigned short* b) {
	int i = 0;
	do {
		if (*a++ != *b++) return 1;
		i++;
	} while (i < 3);
	return 0;
}

extern "C" int func_ov031_0220f104(void* a, void* b, unsigned int c, void* d, unsigned int e);

// USA: func_ov031_02200850
ARM void CopyHeaderAndDispatch_02200850(void* a, unsigned int b, void* c, unsigned int d) {
	VectorizedInvertedMemcpy(data_ov031_0224968c, (char*)a + 6, 6);
	int result = func_ov031_0220f104(a, (char*)a + 6, b - 6, c, d);
	data_ov031_0224c980 = result < 0;
}

// USA: func_ov031_022008ac
extern "C" ARM void func_ov031_022008ac(void* dstAddr, void* srcAddr, unsigned char* frame, unsigned int len, void* extra, unsigned int extraLen) {
	if (lan_buf == NULL || lan_buflen == 0) {
		return;
	}
	unsigned int total = len + extraLen;
	if (total < 8 || total > 0x5e4) {
		return;
	}
	if (frame[0] != data_ov031_0224968c[0] || frame[1] != data_ov031_0224968c[1] ||
	    frame[2] != data_ov031_0224968c[2] || frame[6] != 8) {
		return;
	}
	if (frame[7] != 0 && frame[7] != 6) {
		return;
	}
	unsigned short size = (total + 9) & ~1;
	unsigned int next = recv_head + size;
	if (recv_head < recv_tail && recv_tail <= next) {
		return;
	}
	if (next == lan_buflen) {
		next = 0;
		if (recv_tail == 0) {
			return;
		}
	} else if (next > lan_buflen) {
		next = size;
		if (recv_tail <= size) {
			return;
		}
	}
	if (recv_head + size > lan_buflen) {
		if (lan_buflen - recv_head >= 2) {
			*(unsigned short*)(lan_buf + recv_head) = 0;
		}
		recv_head = 0;
	}
	*(unsigned short*)(lan_buf + recv_head) = size;
	VectorizedInvertedMemcpy(srcAddr, lan_buf + recv_head + 2, 6);
	VectorizedInvertedMemcpy(dstAddr, lan_buf + recv_head + 8, 6);
	VectorizedInvertedMemcpy(frame + 6, lan_buf + recv_head + 0xe, len - 6);
	if (extra != NULL && extraLen != 0) {
		VectorizedInvertedMemcpy(extra, lan_buf + recv_head + 8 + len, extraLen);
	}
	recv_head = next;
}

bool IsContextInactive(ProcessorContext* context);
void MarkContextReadyAndSwitch(ProcessorContext* context);

// USA: func_ov031_02200aa0  (semantic: CheckAndReadyContext_02200aa0)
extern "C" ARM void func_ov031_02200aa0(void* a, int b, void* c, void* d) {
	func_ov031_022008ac(a, (void*)b, (unsigned char*)c, (unsigned int)d, (void*)0, 0);
	if (recv_waiter == NULL) return;
	if (IsContextInactive(recv_waiter)) return;
	MarkContextReadyAndSwitch(recv_waiter);
}

// USA: func_ov031_02200af8  (semantic: DequeueOrBlockUntilAvailable_02200af8)  (semantic: DequeueOrBlockUntilAvailable_02200af8)
extern "C" ARM void* func_ov031_02200af8(unsigned int* outLen) {
	int oldIRQ = DisableIRQInterrupts();
	if (recv_tail == recv_head) {
		do {
			recv_waiter = data_02111304.activeContext;
			BlockCurrentContext(NULL);
			recv_waiter = 0;
		} while (recv_tail == recv_head);
	}
	SetIRQInterruptState(oldIRQ);

	unsigned char* base = lan_buf;
	unsigned int value;
	do {
		if (lan_buflen - recv_tail < 2) {
			recv_tail = 0;
		}
		value = *(unsigned short*)(base + recv_tail);
		if (value == 0) {
			recv_tail = 0;
		}
	} while (value == 0);

	*outLen = value - 2;
	return lan_buf + recv_tail + 2;
}

// USA: func_ov031_02200bb8
ARM void AdvanceAndClampField30_02200bb8(void) {
	int oldIRQ = DisableIRQInterrupts();
	recv_tail = recv_tail +
		*(unsigned short*)(lan_buf + recv_tail);
	if (recv_tail >= lan_buflen) {
		recv_tail = 0;
	}
	SetIRQInterruptState(oldIRQ);
}

struct AddressEntry02200bfc { unsigned int address; unsigned char hardware[6]; unsigned short timestamp; };
extern unsigned char data_ov031_02249684[6];

// USA: func_ov031_02200bfc
extern "C" ARM unsigned char* func_ov031_02200bfc(unsigned int address) {
    unsigned int index;
    int irqState = DisableIRQInterrupts();
    unsigned char* hardware = NULL;
    if (address == 0x7f000001 || address == data_ov031_0224c9d0) hardware = data_ov031_0224ce68;
    else if (IsMaskComplementSet_02200754(address) || IsHighNibbleE_02200790(address)) hardware = data_ov031_02249684;
    else {
        AddressEntry02200bfc* entry = (AddressEntry02200bfc*)data_ov031_0224ca00;
        index = 0;
        do {
            if (address == entry->address) {
                unsigned int time = GetCurrentTimestamp() >> 16;
                data_ov031_0224ca00[index].timestamp = time;
                hardware = data_ov031_0224ca00[index].hardware;
                break;
            }
            index++;
            entry++;
        } while (index < 8);
    }
    SetIRQInterruptState(irqState);
    return hardware;
}

struct AddressPacket02200ccc {
    unsigned char destination[6];
    unsigned char source[6];
    unsigned short type;
    unsigned char hardwareHigh;
    unsigned char hardwareLow;
    unsigned char protocolHigh;
    unsigned char protocolLow;
    unsigned short lengths;
    unsigned char operationHigh;
    unsigned char operationLow;
    unsigned char sender[6];
    unsigned short senderHigh;
    unsigned short senderLow;
    unsigned char target[6];
    unsigned short targetHigh;
    unsigned short targetLow;
};

#define Swap16_02200ccc(value) (unsigned short)(((value) >> 8) | ((value) << 8))

// USA: func_ov031_02200ccc
extern "C" ARM void func_ov031_02200ccc(unsigned int address) {
    AddressPacket02200ccc packet;
    VectorizedMemset(&packet, 0, 42);
    VectorizedMemset(packet.destination, 255, 6);
    VectorizedInvertedMemcpy(data_ov031_0224ce68, packet.source, 6);
    packet.type = 0x0608;
    packet.hardwareLow = 1;
    packet.protocolHigh = 8;
    packet.lengths = 0x0406;
    packet.operationLow = 1;
    VectorizedInvertedMemcpy(data_ov031_0224ce68, packet.sender, 6);
    unsigned short targetHigh;
    unsigned short targetLow;
    unsigned int source = data_ov031_0224c9d0;
    unsigned short sourceHigh = source >> 16;
    unsigned short sourceLow = source;
    targetHigh = address >> 16;
    targetLow = address;
    packet.senderHigh = Swap16_02200ccc(sourceHigh);
    packet.senderLow = Swap16_02200ccc(sourceLow);
    packet.targetHigh = Swap16_02200ccc(targetHigh);
    packet.targetLow = Swap16_02200ccc(targetLow);
    CopyHeaderAndDispatch_02200850(&packet, 42, NULL, 0);
}

// USA: func_ov031_02200dc8
ARM int LoopSleepAndCheck_02200dc8(int a) {
	unsigned int i = 0;
	do {
		func_ov031_02200ccc(a);
		unsigned int j = 0;
		do {
			if (data_ov031_0224c9d0 == 0) {
				return 0;
			}
			SleepCurrentContext(100);
			int r = (int)func_ov031_02200bfc(a);
			if (r != 0) {
				return r;
			}
			j++;
		} while (j < 20);
		i++;
	} while (i < 8);
	return 0;
}

struct Overlay31AddressEntry {
    unsigned int address;
    unsigned char identifier[6];
    unsigned short timestamp;
};
extern "C" ARM void func_ov031_02200e38(const void* identifier, unsigned int address, int allowInsert) {
    if (address == 0x7f000001 || address == data_ov031_0224c9d0) return;
    if (!IsSpecialOrMaskMatch_022006f0(address)) return;
    if (IsHighNibbleE_02200790(address)) return;
    unsigned short timestamp = GetCurrentTimestamp() >> 16;
    {
    unsigned int i = 0;
    Overlay31AddressEntry* entry = (Overlay31AddressEntry*)data_ov031_0224ca00;
    do {
        if (address == entry->address) {
            data_ov031_0224ca00[i].timestamp = timestamp;
            VectorizedInvertedMemcpy(identifier, data_ov031_0224ca00[i].hardware, 6);
            return;
        }
        ++i;
        ++entry;
    } while (i < 8);
    }
    if (!allowInsert) return;
    unsigned int selected;
    unsigned short oldestAge = 0;
    selected = oldestAge;
    Overlay31AddressEntry* entry = (Overlay31AddressEntry*)data_ov031_0224ca00;
    unsigned int i = 0;
    do {
        if (!entry->address) {
            selected = i;
            break;
        }
        unsigned int age = timestamp - entry->timestamp;
        if (oldestAge < (short)age) {
            selected = i;
            oldestAge = age;
        }
        ++i;
        ++entry;
    } while (i < 8);
    data_ov031_0224ca00[selected].address = address;
    VectorizedInvertedMemcpy(identifier, data_ov031_0224ca00[selected].hardware, 6);
    data_ov031_0224ca00[selected].timestamp = timestamp;
}

// USA: func_ov031_02200f74  (semantic: BuildAndSendPacket_02200f74)
extern "C" ARM void func_ov031_02200f74(unsigned char* buf, unsigned int totalLen, int arg2, int arg3, unsigned int arg4, unsigned short arg5) {
	unsigned short swapped = (unsigned short)((arg5 >> 8) | (arg5 << 8));
	*(unsigned short*)(buf - 2) = swapped;

	if (IsHighNibbleE_02200790(arg4) == 0) {
		int v = func_ov031_02200730((int)arg4);
		if (v == 0) return;
		int r = (int)func_ov031_02200bfc(v);
		if (r == 0) {
			r = LoopSleepAndCheck_02200dc8(v);
		}
		if (r == 0) return;
		VectorizedInvertedMemcpy((const void*)r, buf - 0xe, 6);
	} else {
		buf[-0xe] = 1;
		buf[-0xd] = 0;
		buf[-0xc] = 0x5e;
		buf[-0xb] = (arg4 >> 16) & 0x7f;
		buf[-0xa] = (unsigned char)(arg4 >> 8);
		buf[-9] = (unsigned char)arg4;
	}

	VectorizedInvertedMemcpy(data_ov031_0224ce68, buf - 8, 6);
	CopyHeaderAndDispatch_02200850(buf - 0xe, totalLen + 0xe, (void*)arg2, arg3);
}

struct PacketHeader {
    unsigned short format;
    unsigned short length;
    unsigned short flags;
    unsigned short identifier;
    unsigned short protocol;
    unsigned short checksum;
    unsigned int source;
    unsigned int destination;
};
struct Packet {
    unsigned char prefix[8];
    PacketHeader header;
};

static inline int SwapHalfword(int value) { return (value >> 8) | (value << 8); }

// USA: func_ov031_02201044
extern "C" ARM void func_ov031_02201044(unsigned char* payload, int headerLength, void* data, int dataLength, unsigned int destination, int identifier) {
    unsigned short length = headerLength + 0x14 + dataLength;
    ((PacketHeader*)payload)[-1].length = SwapHalfword(length);
    ((PacketHeader*)payload)[-1].identifier = SwapHalfword((unsigned short)identifier);
    ((PacketHeader*)payload)[-1].checksum = 0;
    int checksum = ComputeNormalizedChecksum_02200684((PacketHeader*)payload - 1, 0x14);
    ((PacketHeader*)payload)[-1].checksum = SwapHalfword(checksum);
    if (destination != 0x7f000001 && destination != data_ov031_0224c9d0) {
        func_ov031_02200f74((unsigned char*)((PacketHeader*)payload - 1), headerLength + 0x14, (int)data, dataLength, destination, 0x800);
    }
    if (destination != 0x7f000001 && destination != data_ov031_0224c9d0) {
        if (!IsHighNibbleE_02200790(destination)) return;
    }
    VectorizedInvertedMemcpy(data_ov031_0224968c, ((Packet*)payload)[-1].prefix, 8);
    int irqState = DisableIRQInterrupts();
    func_ov031_022008ac(data_ov031_0224ce68, data_ov031_0224ce68, (unsigned char*)((Packet*)payload - 1), headerLength + 0x1c, data, dataLength);
    SetIRQInterruptState(irqState);
}

struct InternetHeader0220116c {
    unsigned char version, service;
    unsigned short length, identification, fragment;
    unsigned char ttl, protocol;
    unsigned short checksum, sourceHigh, sourceLow, destinationHigh, destinationLow;
};

static inline unsigned short Swap16_0220116c(unsigned short value) {
    return (value >> 8) | (value << 8);
}
// USA: func_ov031_0220116c
extern "C" ARM void func_ov031_0220116c(unsigned char* payload, unsigned int length,
    const unsigned char* extra, unsigned int extraLength, unsigned int destination,
    unsigned char protocol) {
    InternetHeader0220116c* headerEnd = (InternetHeader0220116c*)payload;
    headerEnd[-1].version = 0x45;
    headerEnd[-1].service = 0;
    ipid++;
    headerEnd[-1].identification = Swap16_0220116c(ipid);
    headerEnd[-1].ttl = 0x80;
    headerEnd[-1].protocol = protocol;
    unsigned short sourceHigh = data_ov031_0224c9d0 >> 16;
    headerEnd[-1].sourceHigh = Swap16_0220116c(sourceHigh);
    unsigned short sourceLow = data_ov031_0224c9d0;
    headerEnd[-1].sourceLow = Swap16_0220116c(sourceLow);
    unsigned short destinationHigh = destination >> 16;
    headerEnd[-1].destinationHigh = Swap16_0220116c(destinationHigh);
    unsigned short destinationLow = destination;
    headerEnd[-1].destinationLow = Swap16_0220116c(destinationLow);
    unsigned short fragment = 0;
    if (length > 0x5c8) {
        const unsigned char* cursor = payload;
        if (length > 0x5c8) do {
            func_ov031_02201044(payload, 0, (void*)cursor, 0x5c8, destination, fragment | 0x2000);
            cursor += 0x5c8;
            length -= 0x5c8;
            fragment += 0xb9;
        } while (length > 0x5c8);
        if (length != 0) {
            if (extraLength != 0)
                func_ov031_02201044(payload, 0, (void*)cursor, length, destination, fragment | 0x2000);
            else
                func_ov031_02201044(payload, 0, (void*)cursor, length, destination, fragment);
            fragment += length >> 3;
            length = 0;
        }
    }
    if (length + extraLength > 0x5c8) do {
        unsigned int count = 0x5c8 - length;
        func_ov031_02201044(payload, length, (void*)extra, count, destination, fragment | 0x2000);
        extraLength -= count;
        length = 0;
        extra += count;
        fragment += 0xb9;
    } while (extraLength > 0x5c8);
    if (length + extraLength == 0) return;
    func_ov031_02201044(payload, length, (void*)extra, extraLength, destination, fragment);
}

struct EchoHeader02201364 {
    unsigned short typeAndCode;
    unsigned short checksum;
    unsigned short identifier;
    unsigned short sequence;
};
struct EchoPacket02201364 {
    unsigned char prefix[0x22];
    EchoHeader02201364 echo;
};
struct EchoSocket02201364 {
    unsigned char prefix[0xa];
    unsigned short localPort;
    unsigned char paddingC[0x1c - 0xc];
    unsigned int destination;
    unsigned char padding20[0x4c - 0x20];
    EchoPacket02201364* packet;
};

// USA: func_ov031_02201364
extern "C" ARM void func_ov031_02201364(unsigned char* payload, unsigned int length, EchoSocket02201364* socket) {
    EchoPacket02201364* packet = socket->packet;
    packet->echo.typeAndCode = 8;
    packet->echo.identifier = (unsigned int)data_02111304.activeContext;
    packet->echo.checksum = 0;
    unsigned short sequence = NextPingSequence();
    socket->localPort = sequence;
    packet->echo.sequence = sequence;
    unsigned char* headerBytes = (unsigned char*)&packet->echo;
    unsigned int sum = func_ov031_022005b4(headerBytes, 8, 0);
    sum = func_ov031_022005b4(payload, length, sum);
    int checksum = NormalizeChecksum_02200668((unsigned short)sum);
    int swapped = checksum << 8;
    packet->echo.checksum = (checksum >> 8) | swapped;
    func_ov031_0220116c(headerBytes, 8, payload, length, socket->destination, 1);
}

struct Socket02201414 {
    unsigned char pad0[0xa];
    unsigned short localPort;
    unsigned char padc[0xc];
    unsigned short remotePort;
    unsigned char pad1a[2];
    unsigned int remoteAddress;
    unsigned char pad20[0x2c];
    unsigned char* buffer;
};

#define SwapBytes16_02201414(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201414
extern "C" ARM void func_ov031_02201414(void* data, unsigned int length, Socket02201414* socket) {
    unsigned char* udp = socket->buffer + 0x22;
    int high = (unsigned short)(data_ov031_0224c9d0 >> 16);
    *(unsigned short*)(udp - 0xc) = SwapBytes16_02201414(high);
    int low = (unsigned short)data_ov031_0224c9d0;
    *(unsigned short*)(udp - 0xa) = SwapBytes16_02201414(low);
    high = (unsigned short)(socket->remoteAddress >> 16);
    *(unsigned short*)(udp - 0x8) = SwapBytes16_02201414(high);
    low = (unsigned short)socket->remoteAddress;
    *(unsigned short*)(udp - 0x6) = SwapBytes16_02201414(low);
    *(unsigned short*)(udp - 0x4) = 0x1100;
    unsigned short total = (unsigned short)(length + 8);
    *(unsigned short*)(udp + 0x4) = SwapBytes16_02201414(total);
    *(unsigned short*)(udp - 0x2) = *(unsigned short*)(udp + 0x4);
    *(unsigned short*)(udp + 0x2) = SwapBytes16_02201414(socket->remotePort);
    *(unsigned short*)(udp + 0x0) = SwapBytes16_02201414(socket->localPort);
    *(unsigned short*)(udp + 0x6) = 0;
    unsigned int sum = func_ov031_022005b4(udp - 0xc, 0x14, 0);
    sum = func_ov031_022005b4((unsigned char*)data, length, sum);
    int checksum = NormalizeChecksum_02200668((unsigned short)sum);
    *(unsigned short*)(udp + 0x6) = SwapBytes16_02201414(checksum);
    func_ov031_0220116c(udp, 8, (unsigned char*)data, length, socket->remoteAddress, 0x11);
}

extern unsigned char data_ov031_0224ce92[];

struct Socket02201550 {
    unsigned char pad0[0x8];
    unsigned char state;
    unsigned char pad9;
    unsigned short localPort;
    unsigned char padc[0xc];
    unsigned short remotePort;
    unsigned char pad1a[2];
    unsigned int remoteAddress;
    unsigned char pad20[4];
    unsigned int ackNumber;
    unsigned int seqNumber;
    unsigned char pad2c[0x10];
    unsigned int windowLimit;
    unsigned char pad40[4];
    unsigned int windowUsed;
    unsigned char pad48[4];
    unsigned char* buffer;
};

#define SwapBytes16_02201550(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201550
extern "C" ARM void func_ov031_02201550(unsigned char* data, unsigned int length, Socket02201550* socket, int flags, int opt) {
    unsigned char* tcp;
    unsigned int headerLength;
    if (socket->state == 0) return;
    if (data_02111304.activeContext == &data_ov031_0224cbe8) {
        tcp = data_ov031_0224ce92;
    } else {
        tcp = socket->buffer + 0x22;
    }
    if (flags & 2) {
        headerLength = 0x18;
    } else {
        headerLength = 0x14;
    }
    unsigned short total = (unsigned short)(headerLength + length);
    int high = (unsigned short)(data_ov031_0224c9d0 >> 16);
    *(unsigned short*)(tcp - 0xc) = SwapBytes16_02201550(high);
    int low = (unsigned short)data_ov031_0224c9d0;
    *(unsigned short*)(tcp - 0xa) = SwapBytes16_02201550(low);
    high = (unsigned short)(socket->remoteAddress >> 16);
    *(unsigned short*)(tcp - 0x8) = SwapBytes16_02201550(high);
    low = (unsigned short)socket->remoteAddress;
    *(unsigned short*)(tcp - 0x6) = SwapBytes16_02201550(low);
    *(unsigned short*)(tcp - 0x4) = 0x600;
    *(unsigned short*)(tcp - 0x2) = SwapBytes16_02201550(total);
    *(unsigned short*)(tcp + 0x0) = SwapBytes16_02201550(socket->localPort);
    *(unsigned short*)(tcp + 0x2) = SwapBytes16_02201550(socket->remotePort);
    high = (unsigned short)(socket->seqNumber >> 16);
    *(unsigned short*)(tcp + 0x4) = SwapBytes16_02201550(high);
    low = (unsigned short)socket->seqNumber;
    *(unsigned short*)(tcp + 0x6) = SwapBytes16_02201550(low);
    high = (unsigned short)(socket->ackNumber >> 16);
    *(unsigned short*)(tcp + 0x8) = SwapBytes16_02201550(high);
    low = (unsigned short)socket->ackNumber;
    *(unsigned short*)(tcp + 0xa) = SwapBytes16_02201550(low);
    tcp[0xc] = (headerLength >> 2) << 4;
    tcp[0xd] = flags;
    unsigned short window = (unsigned short)(socket->windowLimit - socket->windowUsed);
    *(unsigned short*)(tcp + 0xe) = SwapBytes16_02201550(window);
    *(unsigned short*)(tcp + 0x10) = 0;
    *(unsigned short*)(tcp + 0x12) = 0;
    if (flags & 2) {
        high = (unsigned short)((0x02040000u + mymss) >> 16);
        *(unsigned short*)(tcp + 0x14) = SwapBytes16_02201550(high);
        low = (unsigned short)(0x02040000u + mymss);
        *(unsigned short*)(tcp + 0x16) = SwapBytes16_02201550(low);
    }
    unsigned int sum = func_ov031_022005b4(tcp - 0xc, headerLength + 0xc, 0);
    sum = func_ov031_022005b4(data, length, sum);
    int checksum = NormalizeChecksum_02200668((unsigned short)sum);
    *(unsigned short*)(tcp + 0x10) = SwapBytes16_02201550(checksum);
    func_ov031_0220116c(tcp, headerLength, data, length, socket->remoteAddress, 6);
    socket->seqNumber += length;
    if (flags & 3) {
        socket->seqNumber++;
    }
}

// USA: func_ov031_022017c4
extern "C" ARM void func_ov031_022017c4(void* a) {
    char* obj = (char*)a;
    *(unsigned short*)(obj + 0x6) = 0x200;
    VectorizedInvertedMemcpy(obj + 0x8, obj + 0x12, 0xa);
    VectorizedInvertedMemcpy(data_ov031_0224ce68, obj + 0x8, 6);

    unsigned int v = data_ov031_0224c9d0;
    unsigned short hi = (unsigned short)(v >> 16);
    hi = (unsigned short)((hi >> 8) | (hi << 8));
    *(unsigned short*)(obj + 0xe) = hi;

    unsigned int v2 = data_ov031_0224c9d0;
    unsigned short lo = (unsigned short)v2;
    lo = (unsigned short)((lo >> 8) | (lo << 8));
    *(unsigned short*)(obj + 0x10) = lo;

    VectorizedInvertedMemcpy(obj + 0x12, obj - 0xe, 6);
    VectorizedInvertedMemcpy(data_ov031_0224ce68, obj - 0x8, 6);
    CopyHeaderAndDispatch_02200850(obj - 0xe, 0x2a, NULL, 0);
}

struct Struct0220186c {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
    unsigned char pad8[6];
    unsigned short fe;
    unsigned short f10;
    unsigned char pad12[6];
    unsigned short f18;
    unsigned short f1a;
};

#define SwapBytes16_0220186c(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_0220186c
extern "C" ARM void func_ov031_0220186c(Struct0220186c* a, unsigned int b) {
    if (b < 0x1c) return;
    if (CompareThreeU16sDiffer02200824((unsigned short*)a->pad8, (unsigned short*)data_ov031_0224ce68) == 0 ||
        data_ov031_0224c9d0 == 0) return;

    if (a->f0 != 0x100 || a->f2 != 8 || a->f4 != 0x406) return;

    unsigned short type = SwapBytes16_0220186c(a->f6);
    if (type != 1 && type != 2) return;

    unsigned int combined = ((unsigned int)SwapBytes16_0220186c(a->fe) << 16) | SwapBytes16_0220186c(a->f10);
    unsigned int combined2 = ((unsigned int)SwapBytes16_0220186c(a->f18) << 16) | SwapBytes16_0220186c(a->f1a);
    const unsigned int* myIp = &data_ov031_0224c9d0;
    int match1 = combined == *myIp;
    int match2 = *myIp == combined2;

    if (!match1) func_ov031_02200e38(a->pad8, combined, match2);

    if (type == 1 && match2) {
        func_ov031_022017c4(a);
        return;
    }
    if (type != 2) return;
    if (match2 && match1) ip_conflict = 1;
}

struct Struct022019b0 { unsigned char pad0[0xc]; unsigned short f0c; unsigned short f0e; };

#define SwapBytes16_022019b0(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_022019b0  (semantic: HandlePacketType8_022019b0)

extern "C" ARM void func_ov031_022019b0(Struct022019b0* a0, void* a1, int a2) {
	unsigned int combined = ((unsigned int)SwapBytes16_022019b0(a0->f0c) << 16) | SwapBytes16_022019b0(a0->f0e);

	int r = func_ov031_02200730(combined);
	if (r == 0) return;

	if (func_ov031_02200bfc(r) == 0) {
		func_ov031_02200ccc(r);
		return;
	}

	*(unsigned char*)a1 = 0;
	*(unsigned short*)((char*)a1 + 2) = 0;
	int cs = (int)ComputeNormalizedChecksum_02200684(a1, a2);
	*(unsigned short*)((char*)a1 + 2) = (unsigned short)((cs >> 8) | (cs << 8));

	unsigned int combined2 = ((unsigned int)SwapBytes16_022019b0(a0->f0c) << 16) | SwapBytes16_022019b0(a0->f0e);

	func_ov031_0220116c((unsigned char*)a1, a2, (unsigned char*)0, 0, combined2, 1);
}

struct Header02201a94 {
    unsigned char pad0[0xc];
    unsigned short f0c;
    unsigned short f0e;
};

#define SwapBytes16_02201a94(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201a94
extern "C" ARM void func_ov031_02201a94(Header02201a94* a, void* b, void* c) {
    unsigned char* entry;
    int priorState = DisableIRQInterrupts();
    ProcessorContext* context = data_02111304.firstContext;
    if (context != NULL) {
        do {
            entry = (unsigned char*)context->unknown_A4;
            if (entry != NULL && *(unsigned int*)entry != 0 && entry[8] == 0xb &&
                *(unsigned short*)((unsigned char*)b + 4) == (unsigned short)*(unsigned int*)entry &&
                *(unsigned short*)(entry + 0xa) == *(unsigned short*)((unsigned char*)b + 6) &&
                *(unsigned int*)(entry + 0x44) == 0) {
                unsigned int seq = ((unsigned int)SwapBytes16_02201a94(a->f0c) << 16) | SwapBytes16_02201a94(a->f0e);
                if (*(unsigned int*)(entry + 0x1c) == seq) {
                    unsigned int capacity = *(unsigned int*)(entry + 0x3c);
                    if ((unsigned int)c - 8 > capacity) {
                        *(unsigned int*)(entry + 0x44) = capacity;
                    } else {
                        *(unsigned int*)(entry + 0x44) = (unsigned int)c - 8;
                    }
                    VectorizedInvertedMemcpy((unsigned char*)b + 8, *(void**)(entry + 0x40), *(unsigned int*)(entry + 0x44));
                    if (*(unsigned int*)(entry + 4) == 3) {
                        *(unsigned int*)(entry + 4) = 0;
                        MarkContextReadyAndSwitch(*(ProcessorContext**)entry);
                    }
                    break;
                }
            }
            context = context->pNext;
        } while (context != NULL);
    }
    SetIRQInterruptState(priorState);
}

// USA: func_ov031_02201b94
ARM int IsNonzeroAndNotNeg1_02201b94(int a, int b) {
	return a != 0 && a != -1 && b != 0 && b != -1;
}

struct Header02201bb4 {
	char pad0[0xc];
	unsigned short seqHi;
	unsigned short seqLo;
	unsigned short ackHi;
	unsigned short ackLo;
};

#define SwapBytes16_02201bb4(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201bb4  (semantic: ProcessHeader_02201bb4)
extern "C" ARM void func_ov031_02201bb4(Header02201bb4* obj, void* type, void* len) {
	unsigned int checksum = ComputeNormalizedChecksum_02200684(type, (unsigned int)len);
	if (checksum != 0xffff) {
		return;
	}
	unsigned short a = obj->ackLo;
	unsigned short b = obj->ackHi;
	unsigned short c = obj->seqLo;
	unsigned short d = obj->seqHi;
	unsigned int seq = ((unsigned int)SwapBytes16_02201bb4(d) << 16) | SwapBytes16_02201bb4(c);
	unsigned int ack = ((unsigned int)SwapBytes16_02201bb4(b) << 16) | SwapBytes16_02201bb4(a);
	if (!IsNonzeroAndNotNeg1_02201b94((int)seq, (int)ack)) {
		return;
	}
	unsigned char kind = *(unsigned char*)type;
	switch (kind) {
	case 0:
		func_ov031_02201a94((Header02201a94*)obj, type, len);
		return;
	case 8:
		func_ov031_022019b0((Struct022019b0*)obj, type, (int)len);
		return;
	}
}

struct Entry02201c84 {
	int flag0;
	unsigned char pad0[0x8 - 4];
	unsigned char flag8;
	unsigned char pad1;
	unsigned short f0a;
	unsigned char pad2[0x18 - 0xc];
	unsigned short f18;
	unsigned char pad3[0x1c - 0x1a];
	int f1c;
};

struct Node02201c84 {
	unsigned char pad0[0x68];
	Node02201c84* next;
	unsigned char pad1[0xa4 - 0x68 - 4];
	Entry02201c84* field;
};

struct RootStruct02111304 { unsigned char pad[0x8]; void* head; };

struct ArgA02201c84 { unsigned char pad0[0xc]; unsigned short f0c; unsigned short f0e; };
struct ArgB02201c84 { unsigned short f00; unsigned short f02; };

// USA: func_ov031_02201c84
extern "C" ARM void* func_ov031_02201c84(ArgA02201c84* a, ArgB02201c84* b) {
	Entry02201c84* field;
	Node02201c84* node = (Node02201c84*)data_02111304.firstContext;
	if (node) {
	do {
		field = node->field;
		if (field && field->flag0 != 0) {
			if (field->flag8 == 1) {
				unsigned short v = b->f02;
				unsigned short sw = (unsigned short)((v >> 8) | (v << 8));
				if (field->f0a == sw) {
					if (field->f18 != 0) {
						unsigned short v2 = b->f00;
						unsigned short sw2 = (unsigned short)((v2 >> 8) | (v2 << 8));
						if (field->f18 != sw2) goto next;
					}
					if (field->f1c != 0) {
						unsigned short ve = a->f0e;
						unsigned short vc = a->f0c;
						unsigned short swc = (unsigned short)((vc >> 8) | (vc << 8));
						unsigned short swe = (unsigned short)((ve >> 8) | (ve << 8));
						unsigned int combined = ((unsigned int)swc << 0x10) | swe;
						if (field->f1c != (int)combined) goto next;
					}
					return field;
				}
			}
		}
	next:
		node = node->next;
	} while (node);
	}
	return NULL;
}

// USA: func_ov031_02201d58  (semantic: CompareEncodedFields_02201d58)
extern "C" ARM int func_ov031_02201d58(void* r0, unsigned short* r1, void* r2) {
	int result = 0;
	int flag1 = 0;
	int flag3 = 0;
	int flag2 = 0;
	unsigned char type = *(unsigned char*)((char*)r2 + 0x8);
	if (type != 0xa && type != 0xb) flag1 = 1;
	if (flag1) {
		unsigned short v = r1[1];
		unsigned short target = *(unsigned short*)((char*)r2 + 0xa);
		if (target == (unsigned short)((v >> 8) | (v << 8))) flag2 = 1;
	}
	if (flag2) {
		unsigned short v2 = r1[0];
		unsigned short target2 = *(unsigned short*)((char*)r2 + 0x18);
		if (target2 == (unsigned short)((v2 >> 8) | (v2 << 8))) flag3 = 1;
	}
	if (flag3) {
		unsigned short lo = *(unsigned short*)((char*)r0 + 0xe);
		unsigned short hi = *(unsigned short*)((char*)r0 + 0xc);
		unsigned int targetD = *(unsigned int*)((char*)r2 + 0x1c);
		unsigned int combined = ((unsigned int)(unsigned short)((hi >> 8) | (hi << 8)) << 16) | (unsigned short)((lo >> 8) | (lo << 8));
		if (targetD == combined) result = 1;
	}
	return result;
}

struct RootStruct02201e0c { unsigned char pad[0x8]; void* head; };
struct Node02201e0c { unsigned char pad0[0x68]; Node02201e0c* next; unsigned char pad1[0xa4-0x68-4]; void* field; };

// USA: func_ov031_02201e0c  (semantic: FindMatchingNode_02201e0c)
extern "C" ARM void* func_ov031_02201e0c(void* a, void* b) {
    int* field;
    Node02201e0c* node = (Node02201e0c*)data_02111304.firstContext;
    if (node) {
        do {
            field = (int*)node->field;
            if (field && *field != 0) {
                if (func_ov031_02201d58(a, (unsigned short*)b, field) != 0) return field;
            }
            node = node->next;
        } while (node);
    }
    return NULL;
}

// USA: func_ov031_02201e70
extern "C" ARM void func_ov031_02201e70(void *source, void *destination) {
    unsigned char *bytes  = (unsigned char *)source;
    unsigned short *value = (unsigned short *)((unsigned char *)destination + 0x2e);
    *value                = 0x218;
    int length            = (bytes[0xc] & 0xf0) / 4 - 0x14;
    int remaining         = length - 1;
    unsigned char *cursor = bytes + 0x14;
    if (length == 0) {
        return;
    }
    do {
        int tag = *cursor++;
        switch (tag) {
            case 0: return;
            case 1: break;
            case 2:
                *value = (cursor[1] << 8) | cursor[2];
                cursor += 3;
                remaining -= 3;
                break;
            default:
                int skip = *cursor - 1;
                remaining -= skip;
                cursor += skip;
                break;
        }
    } while (remaining-- != 0);
}

// USA: func_ov031_02201ef4
ARM int CheckOrDispatch_02201ef4(CPSInAddr address) {
    CPSInAddr targetAddress = func_ov031_02200730(address);
    if (targetAddress == 0) return 1;
    return (int)func_ov031_02200bfc(targetAddress);
}

struct CpsSocket02201f10 {
    char padding[0x1c];
    CPSInAddr remoteIp;
};

// USA: func_ov031_02201f10
extern "C" ARM void func_ov031_02201f10(CpsSocket02201f10* socket, int type, int flags) {
    if (CheckOrDispatch_02201ef4(socket->remoteIp) ||
        data_02111304.activeContext != &data_ov031_0224cbe8) {
        func_ov031_02201550((unsigned char*)0, 0, (Socket02201550*)socket, type, flags);
    } else {
        func_ov031_02200ccc(func_ov031_02200730(socket->remoteIp));
    }
}

// USA: func_ov031_02201f84
ARM void TailCallType16_02201f84(int a, int b) {
	func_ov031_02201f10((CpsSocket02201f10*)a, 0x10, b);
}

// USA: func_ov031_02201f98
ARM void TailCallType17_02201f98(int a, int b) {
	func_ov031_02201f10((CpsSocket02201f10*)a, 0x11, b);
}

struct Header02201fac { unsigned char pad0[0xc]; unsigned short f0c; unsigned short f0e; };
struct Src02201fac { unsigned short f0; unsigned short f2; unsigned short f4; unsigned short f6; unsigned short f8; unsigned short fa; unsigned char pad0; unsigned char flags; };
struct Dst02201fac { unsigned char pad0[0x24]; unsigned int f24; unsigned int f28; };

#define SW16_02201fac(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201fac
extern "C" ARM void func_ov031_02201fac(Header02201fac* hdr, Src02201fac* src, unsigned int a, int b) {
	Dst02201fac* dst = (Dst02201fac*)&data_ov031_0224cac4;
	VectorizedMemset(dst, 0, 0x64);
	data_ov031_0224cac4.localPort = SW16_02201fac(src->f2);
	data_ov031_0224cac4.remotePort = SW16_02201fac(src->f0);
	data_ov031_0224cac4.remoteAddress = ((unsigned int)SW16_02201fac(hdr->f0c) << 16) | SW16_02201fac(hdr->f0e);
	if (src->flags & 0x10) {
		dst->f28 = ((unsigned int)SW16_02201fac(src->f8) << 16) | SW16_02201fac(src->fa);
		return func_ov031_02201f10((CpsSocket02201f10*)dst, 4, b);
	}
	dst->f28 = 0;
	unsigned int v = a + (((unsigned int)SW16_02201fac(src->f4) << 16) | SW16_02201fac(src->f6));
	dst->f24 = v;
	if (src->flags & 3) {
		dst->f24 = v + 1;
	}
	return func_ov031_02201f10((CpsSocket02201f10*)dst, 0x14, b);
}

struct Hdr022020e8 { unsigned char pad[0xc]; unsigned short f0c; unsigned short f0e; unsigned short f10; unsigned short f12; };
struct Src022020e8 { unsigned short f0; unsigned char pad1[2]; unsigned short f4; unsigned short f6; };
struct Dst022020e8 {
	unsigned char pad0[8];
	unsigned char f8;
	unsigned char pad1[0x10 - 0x8 - 1];
	unsigned int f10;
	unsigned int f14;
	unsigned short f18;
	unsigned char pad2[0x1c - 0x18 - 2];
	unsigned int f1c;
	unsigned char pad3[0x24 - 0x1c - 4];
	unsigned int f24;
};

#define SW16_022020e8(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_022020e8  (semantic: BuildAndDispatchPacket_022020e8)
extern "C" ARM void func_ov031_022020e8(Hdr022020e8* hdr, Src022020e8* src, Dst022020e8* dst) {
	dst->f8 = 3;
	dst->f10 = (unsigned int)(GetCurrentTimestamp() >> 16);
	dst->f14 = ((unsigned int)SW16_022020e8(hdr->f10) << 16) | SW16_022020e8(hdr->f12);
	dst->f18 = SW16_022020e8(src->f0);
	dst->f1c = ((unsigned int)SW16_022020e8(hdr->f0c) << 16) | SW16_022020e8(hdr->f0e);
	dst->f24 = (((unsigned int)SW16_022020e8(src->f4) << 16) | SW16_022020e8(src->f6)) + 1;
	func_ov031_02201e70(src, dst);
	func_ov031_02201f10((CpsSocket02201f10*)dst, 0x12, 0);
}

struct PacketNode022021d4 {
    char padding[8];
    unsigned char kind;
    char padding9[0x28 - 9];
    unsigned int counter;
};
struct Hdr022020e8;
struct Src022020e8;
struct Dst022020e8;
struct Header02201fac;
struct Src02201fac;

// USA: func_ov031_022021d4
extern "C" ARM int func_ov031_022021d4(void* header, void* data, int length) {
    PacketNode022021d4* node = (PacketNode022021d4*)func_ov031_02201e0c(header, data);
    if (node != NULL) {
        if (node->kind == 1) {
            func_ov031_022020e8((Hdr022020e8*)header, (Src022020e8*)data, (Dst022020e8*)node);
        } else if ((unsigned char)(node->kind + 0xfd) <= 1) {
            --node->counter;
            func_ov031_022020e8((Hdr022020e8*)header, (Src022020e8*)data, (Dst022020e8*)node);
        } else {
            func_ov031_02201fac((Header02201fac*)header, (Src02201fac*)data, length, 0);
        }
        return 1;
    }
    return 0;
}

void CycleCurrentPriorityContexts(void);

struct Header0220225c { unsigned char pad0[0xc]; unsigned short fc; unsigned short fe; unsigned short f10; unsigned short f12; };

// USA: func_ov031_0220225c
extern "C" ARM void func_ov031_0220225c(Header0220225c* header, void* data, int length) {
	unsigned short v12 = header->f12;
	unsigned short v10 = header->f10;
	unsigned short ve = header->fe;
	unsigned short vc = header->fc;
	unsigned short swc = (unsigned short)((vc >> 8) | (vc << 8));
	unsigned short swe = (unsigned short)((ve >> 8) | (ve << 8));
	unsigned short sw10 = (unsigned short)((v10 >> 8) | (v10 << 8));
	unsigned short sw12 = (unsigned short)((v12 >> 8) | (v12 << 8));
	int a = ((unsigned int)swc << 0x10) | swe;
	int b = ((unsigned int)sw10 << 0x10) | sw12;

	if (!IsNonzeroAndNotNeg1_02201b94(a, b)) {
		return;
	}
	if (func_ov031_022021d4(header, data, length) != 0) {
		return;
	}
	void* field = func_ov031_02201c84((ArgA02201c84*)header, (ArgB02201c84*)data);
	if (field != NULL) {
		func_ov031_022020e8((Hdr022020e8*)header, (Src022020e8*)data, (Dst022020e8*)field);
		return;
	}
	CycleCurrentPriorityContexts();
	field = func_ov031_02201c84((ArgA02201c84*)header, (ArgB02201c84*)data);
	if (field == NULL) {
		return;
	}
	func_ov031_022020e8((Hdr022020e8*)header, (Src022020e8*)data, (Dst022020e8*)field);
}

struct Connection02202334 {
    ProcessorContext* context;
    int pending;
    unsigned char state;
    char pad9[0x1b];
    unsigned int sequence;
    char pad28[4];
    unsigned short window;
    char pad2e[2];
    unsigned int acknowledgement;
};
struct Packet02202334 { unsigned short pad[2]; unsigned short sequenceHigh; unsigned short sequenceLow; unsigned short acknowledgementHigh; unsigned short acknowledgementLow; unsigned short fieldC; unsigned short window; };

#define Swap16_02202334(value) (unsigned short)(((value) >> 8) | ((value) << 8))

// USA: func_ov031_02202334
extern "C" ARM void func_ov031_02202334(void* obj, Packet02202334* packet, int length) {
    Connection02202334* connection = (Connection02202334*)func_ov031_02201e0c(obj, packet);
    if (!connection || connection->state != 2) {
        func_ov031_02201fac((Header02201fac*)obj, (Src02201fac*)packet, length, 0);
        return;
    }
    CycleCurrentPriorityContexts();
    connection->sequence = (((unsigned int)Swap16_02202334(packet->sequenceHigh) << 16) | Swap16_02202334(packet->sequenceLow)) + 1;
    connection->acknowledgement = ((unsigned int)Swap16_02202334(packet->acknowledgementHigh) << 16) | Swap16_02202334(packet->acknowledgementLow);
    connection->window = Swap16_02202334(packet->window);
    func_ov031_02201e70(packet, connection);
    TailCallType16_02201f84((int)connection, 0);
    connection->state = 4;
    if (connection->pending == 1) {
        connection->pending = 0;
        MarkContextReadyAndSwitch(connection->context);
    }
}

struct TcpConnection {
    ProcessorContext* context;
    int pending;
    unsigned char state;
    unsigned char padding9[0x1b];
    unsigned int sequence;
    unsigned char padding28[4];
    unsigned short window;
    unsigned short padding2e;
    unsigned int acknowledgement;
    unsigned int receivedPackets;
    unsigned char padding38[4];
    unsigned int receiveCapacity;
    unsigned char* receiveBuffer;
    unsigned int receivedBytes;
};

struct TcpPacket {
    unsigned short ports[2];
    unsigned short sequenceHigh;
    unsigned short sequenceLow;
    unsigned short acknowledgementHigh;
    unsigned short acknowledgementLow;
    unsigned char headerLength;
    unsigned char flags;
    unsigned short window;
};

#define Swap16_0220242c(value) (unsigned short)(((value) >> 8) | ((value) << 8))

// USA: func_ov031_0220242c
extern "C" ARM void func_ov031_0220242c(void* object, TcpPacket* packet, unsigned int length) {
    TcpConnection* connection = (TcpConnection*)func_ov031_02201e0c(object, packet);
    if (!connection) {
        func_ov031_02201fac((Header02201fac*)object, (Src02201fac*)packet, length, 0);
        return;
    }
    unsigned int acknowledgement = ((unsigned int)Swap16_0220242c(packet->acknowledgementHigh) << 16) | Swap16_0220242c(packet->acknowledgementLow);
    unsigned char flags = packet->flags;
    if ((int)(acknowledgement - connection->acknowledgement) > 0)
        connection->acknowledgement = acknowledgement;
    unsigned int sequence = ((unsigned int)Swap16_0220242c(packet->sequenceHigh) << 16) | Swap16_0220242c(packet->sequenceLow);
    if (connection->state == 4 && connection->sequence != sequence) {
        TailCallType16_02201f84((int)connection, 0);
        return;
    }
    connection->window = Swap16_0220242c(packet->window);
    switch (connection->state) {
    case 0:
    case 2:
        func_ov031_02201fac((Header02201fac*)object, (Src02201fac*)packet, length, 0);
        break;
    case 3:
        connection->state = 4;
        if (connection->pending == 1) {
            connection->pending = 0;
            MarkContextReadyAndSwitch(connection->context);
        }
        if (!length)
            break;
    case 4:
        ++connection->receivedPackets;
        unsigned int capacity = connection->receiveCapacity;
        unsigned int remaining = capacity - connection->receivedBytes;
        int complete;
        if (length > remaining) {
            complete = 0;
            length = remaining;
        } else {
            complete = 1;
        }
        if (length) {
            int irqState = DisableIRQInterrupts();
            int headerBytes = (packet->headerLength & 0xf0) / 4;
            VectorizedInvertedMemcpy((unsigned char*)packet + headerBytes, connection->receiveBuffer + connection->receivedBytes, length);
            connection->receivedBytes += length;
            connection->sequence += length;
            SetIRQInterruptState(irqState);
            if (connection->pending == 2) {
                connection->pending = 0;
                MarkContextReadyAndSwitch(connection->context);
            }
        }
        if (complete && (flags & 1)) {
            connection->state = 6;
            ++connection->sequence;
            TailCallType17_02201f98((int)connection, 0);
            if (!length && connection->pending == 2) {
                connection->pending = 0;
                MarkContextReadyAndSwitch(connection->context);
            }
        } else if (length) {
            TailCallType16_02201f84((int)connection, 0);
        }
        break;
    case 7:
    case 8:
        if (flags & 1) {
            connection->sequence += length + 1;
            TailCallType16_02201f84((int)connection, 0);
            connection->state = 0;
            if (connection->pending == 2) {
                connection->pending = 0;
                MarkContextReadyAndSwitch(connection->context);
            }
        } else {
            if (length) {
                connection->sequence += length;
                TailCallType16_02201f84((int)connection, 0);
            }
            connection->state = 8;
        }
        break;
    case 6:
    case 9:
        connection->state = 0;
        if (connection->pending == 2) {
            connection->pending = 0;
            MarkContextReadyAndSwitch(connection->context);
        }
        break;
    default:
        if (flags & 1)
            ++connection->sequence;
        TailCallType16_02201f84((int)connection, 0);
        break;
    }
    CycleCurrentPriorityContexts();
}

struct ContextEntry02202744 {
	ProcessorContext* field0;
	int field4;
	unsigned char field8;
	unsigned char pad[0x24 - 0x9];
	int field24;
};

// USA: func_ov031_02202744
extern "C" ARM void func_ov031_02202744(int a, int b, int c) {
	ContextEntry02202744* node = (ContextEntry02202744*)func_ov031_02201e0c((void*)a, (void*)b);
	if (!node) return;
	switch (node->field8) {
	case 7:
		node->field24++;
		TailCallType16_02201f84((int)node, 0);
		node->field8 = 9;
		return;
	case 8:
		node->field24++;
		TailCallType16_02201f84((int)node, 0);
		node->field8 = 0;
		if (node->field4 != 2) return;
		node->field4 = 0;
		MarkContextReadyAndSwitch(node->field0);
		return;
	case 4:
		node->field24++;
		TailCallType17_02201f98((int)node, 0);
		node->field8 = 6;
		return;
	default:
		func_ov031_02201fac((Header02201fac*)a, (Src02201fac*)b, c, 0);
		return;
	}
}

struct ContextEntry_02202810 {
	ProcessorContext* field0;
	int field4;
	unsigned char field8;
};

// USA: func_ov031_02202810
ARM int FindAndRescheduleContext_02202810(int a, int b) {
	ContextEntry_02202810* p = (ContextEntry_02202810*)func_ov031_02201e0c((void*)a, (void*)b);
	if (p == NULL) {
		return (int)p;
	}
	CycleCurrentPriorityContexts();
	p->field8 = 0;
	if ((unsigned int)(p->field4 - 1) > 1) {
		return p->field4 - 1;
	}
	p->field4 = 0;
	MarkContextReadyAndSwitch(p->field0);
}

struct Header0220225c;

struct Buf0220284c { unsigned char pad[0xc]; unsigned char byte0xc; unsigned char byte0xd; };

// USA: func_ov031_0220284c  (semantic: DispatchByFlagsNibbleAndCode_0220284c)
extern "C" ARM void func_ov031_0220284c(void* c, Buf0220284c* buf, int len) {
    if (IsChecksumValid_022006a0(buf, len, c, 6)) return;

    int v = buf->byte0xc & 0xf0;
    len -= v / 4;
    switch (buf->byte0xd & 0x17) {
    case 0x2:
        if (buf->byte0xd & 0x28) return;
        func_ov031_0220225c((Header0220225c*)c, buf, len);
        return;
    case 0x12:
        if (buf->byte0xd & 0x28) return;
        func_ov031_02202334(c, (Packet02202334*)buf, len);
        return;
    case 0x10:
    case 0x11:
        func_ov031_0220242c(c, (TcpPacket*)buf, len);
        return;
    case 0x1:
        func_ov031_02202744((int)c, (int)buf, len);
        return;
    }
    if (buf->byte0xd & 0x4) {
        FindAndRescheduleContext_02202810((int)c, (int)buf);
    } else {
        func_ov031_02201fac((Header02201fac*)c, (Src02201fac*)buf, len, 0);
    }
}

struct Header0220296c {
    unsigned char pad0[0xc];
    unsigned short f0c;
    unsigned short f0e;
    unsigned short f10;
    unsigned short f12;
};

typedef int (*Callback0220296c)(void*, unsigned int, void*);

#define SwapBytes16_0220296c(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_0220296c
extern "C" ARM void func_ov031_0220296c(Header0220296c* a, void* b, unsigned int c) {
    unsigned char* entry;
    if (*(unsigned short*)((unsigned char*)b + 6) != 0) {
        if (IsChecksumValid_022006a0(b, c, a, 0x11)) return;
    }
    int priorState = DisableIRQInterrupts();
    ProcessorContext* context = data_02111304.firstContext;
    if (context != NULL) {
        do {
            entry = (unsigned char*)context->unknown_A4;
            if (entry != NULL && *(unsigned int*)entry != 0 && entry[8] == 0xa &&
                *(unsigned short*)(entry + 0xa) == SwapBytes16_0220296c(*(unsigned short*)((unsigned char*)b + 2)) &&
                (*(unsigned short*)(entry + 0x18) == 0 ||
                 *(unsigned short*)(entry + 0x18) == SwapBytes16_0220296c(*(unsigned short*)b)) &&
                (*(unsigned int*)(entry + 0x1c) == 0 || *(unsigned int*)(entry + 0x1c) == 0xffffffff ||
                 *(unsigned int*)(entry + 0x1c) == (((unsigned int)SwapBytes16_0220296c(a->f0c) << 16) | SwapBytes16_0220296c(a->f0e)))) {
                *(unsigned int*)(entry + 0x14) = ((unsigned int)SwapBytes16_0220296c(a->f10) << 16) | SwapBytes16_0220296c(a->f12);
                if (*(unsigned int*)(entry + 0x1c) == 0) {
                    *(unsigned int*)(entry + 0x1c) = ((unsigned int)SwapBytes16_0220296c(a->f0c) << 16) | SwapBytes16_0220296c(a->f0e);
                    *(unsigned short*)(entry + 0x18) = SwapBytes16_0220296c(*(unsigned short*)b);
                }
                if (*(unsigned int*)(entry + 0x44) == 0) {
                    unsigned int capacity = *(unsigned int*)(entry + 0x3c);
                    if (c - 8 > capacity) {
                        *(unsigned int*)(entry + 0x44) = capacity;
                    } else {
                        *(unsigned int*)(entry + 0x44) = c - 8;
                    }
                    VectorizedInvertedMemcpy((unsigned char*)b + 8, *(void**)(entry + 0x40), *(unsigned int*)(entry + 0x44));
                    if (*(unsigned int*)(entry + 4) == 3) {
                        *(unsigned int*)(entry + 4) = 0;
                        MarkContextReadyAndSwitch(*(ProcessorContext**)entry);
                    } else if (*(Callback0220296c*)(entry + 0x38) != NULL) {
                        if ((*(Callback0220296c*)(entry + 0x38))(*(void**)(entry + 0x40), *(unsigned int*)(entry + 0x44), entry) != 0) {
                            *(unsigned int*)(entry + 0x44) = 0;
                        }
                    }
                }
                break;
            }
            context = context->pNext;
        } while (context != NULL);
    }
    SetIRQInterruptState(priorState);
}

struct IPv4Packet02202b78 {
    unsigned char header;
    unsigned char service;
    unsigned short length;
    unsigned short identification;
    unsigned short fragment;
    unsigned char ttl;
    unsigned char protocol;
    unsigned short checksum;
    unsigned short sourceHigh;
    unsigned short sourceLow;
    unsigned short destinationHigh;
    unsigned short destinationLow;
};

static inline unsigned short Swap16_02202b78(unsigned short value) {
    return (value >> 8) | (value << 8);
}

// USA: func_ov031_02202b78
extern "C" ARM IPv4Packet02202b78* func_ov031_02202b78(IPv4Packet02202b78* packet, int* release) {
    unsigned short identification;
    unsigned long headerLength;
    IpFragment* available = NULL;
    IpFragment* assembly;
    unsigned long offset;
    unsigned long flags, payloadLength, end, source, endBlock, index;
    unsigned long count;
    unsigned long total;
    unsigned long rangeIndex;
    unsigned long covered;
    *release = 0;
    flags = Swap16_02202b78(packet->fragment);
    if (!(flags & 0x3fff)) return packet;
    identification = packet->header;
    unsigned short sourceLow = packet->sourceLow;
    unsigned short sourceHigh = packet->sourceHigh;
    headerLength = (identification & 15) * 4;
    source = ((unsigned long)Swap16_02202b78(sourceHigh) << 16) | Swap16_02202b78(sourceLow);
    identification = packet->identification;
    index = 0;
    assembly = data_ov031_0224cca8;
    do {
        if (assembly->count && assembly->source == source && assembly->identification == identification) break;
        ++index;
        if (!assembly->count && !available) available = assembly;
        ++assembly;
    } while (index < 8);
    payloadLength = Swap16_02202b78(packet->length) - headerLength;
    offset = flags & 0x1fff;
    end = payloadLength + (offset << 3);
    if (index == 8) {
        if (!available || end > 4096) return NULL;
        assembly = available;
        assembly->allocation = static_cast<unsigned char*>(data_ov031_0224c994(headerLength + 14 + 4096));
        if (!assembly->allocation) return NULL;
        assembly->source = source;
        assembly->identification = identification;
        assembly->totalBlocks = 0;
        assembly->timestamp = GetCurrentTimestamp() >> 16;
        assembly->payload = assembly->allocation + 14 + headerLength;
        VectorizedInvertedMemcpy(packet, assembly->allocation + 14, headerLength);
    }
    if (assembly->count == 8 || end > 4096) {
        assembly->count = 0;
        data_ov031_0224c9c0(assembly->allocation);
        return NULL;
    }
    endBlock = offset + ((payloadLength + 7) >> 3);
    if (!(flags & 0x2000)) {
        assembly->totalLength = end;
        assembly->totalBlocks = endBlock;
    }
    assembly->starts[assembly->count] = offset;
    assembly->ends[assembly->count] = endBlock;
    assembly->count++;
    VectorizedInvertedMemcpy((unsigned char*)packet + headerLength, assembly->payload + (offset << 3), payloadLength);
    total = assembly->totalBlocks;
    if (!total) return NULL;
    count = assembly->count;
    covered = 0;
    rangeIndex = 0;
    if (rangeIndex < count) do {
        if (assembly->starts[rangeIndex] <= covered && covered < assembly->ends[rangeIndex]) {
            covered = assembly->ends[rangeIndex];
            rangeIndex = 0;
        } else {
            rangeIndex++;
        }
    } while (rangeIndex < count);
    if (covered < total) return NULL;
    unsigned char* allocation = assembly->allocation;
    IPv4Packet02202b78* result = (IPv4Packet02202b78*)(allocation + 14);
    unsigned short length = assembly->totalLength + ((result->header & 15) * 4);
    result->length = (length >> 8) | (length << 8);
    assembly->count = 0;
    *release = 1;
    return result;
}

static inline unsigned short Swap16_02202e44(unsigned short value) { return (value >> 8) | (value << 8); }
#define SourceAddress02202e44(packet) (((unsigned short)((packet->sourceHigh >> 8) | (packet->sourceHigh << 8)) << 16) | (unsigned short)((packet->sourceLow >> 8) | (packet->sourceLow << 8)))
#define DestinationAddress02202e44(packet) (((unsigned short)((packet->destinationHigh >> 8) | (packet->destinationHigh << 8)) << 16) | (unsigned short)((packet->destinationLow >> 8) | (packet->destinationLow << 8)))

// USA: func_ov031_02202e44
extern "C" ARM void func_ov031_02202e44(IPv4Packet02202b78* packet, unsigned int available) {
    unsigned int source = (Swap16_02202e44(packet->sourceHigh) << 16) | Swap16_02202e44(packet->sourceLow);
    unsigned int destination = (Swap16_02202e44(packet->destinationHigh) << 16) | Swap16_02202e44(packet->destinationLow);
    if (destination != source) {
        if (!func_ov031_022007a4(destination)) return;
        if (available < Swap16_02202e44(packet->length)) return;
        if (ComputeNormalizedChecksum_02200684(packet, (packet->header & 15) << 2) != 0xffff) return;
        if (data_ov031_0224c9d0 == DestinationAddress02202e44(packet))
            func_ov031_02200e38((char*)packet - 8, SourceAddress02202e44(packet), 1);
    }
    int release;
    packet = func_ov031_02202b78(packet, &release);
    if (!packet) return;
    void* payload = (char*)packet + ((packet->header & 15) << 2);
    unsigned int payloadLength = Swap16_02202e44(packet->length) - ((packet->header & 15) << 2);
    if (packet->protocol == 17) func_ov031_0220296c((Header0220296c*)packet, payload, payloadLength);
    else if (data_ov031_0224c9d0) {
        if (packet->protocol == 1) func_ov031_02201bb4((Header02201bb4*)packet, payload, (void*)payloadLength);
        else if (packet->protocol == 6) func_ov031_0220284c(packet, (Buf0220284c*)payload, payloadLength);
    }
    if (release) data_ov031_0224c9c0((char*)packet - 14);
}

// USA: func_ov031_02203008  (semantic: DispatchByTagLoop_02203008)
extern "C" ARM void func_ov031_02203008(void) {
    unsigned int count;
    for (;;) {
        char* p = (char*)func_ov031_02200af8(&count);
        if (count > 0x22) {
            unsigned short tag = *(unsigned short*)(p + 0xc);
            unsigned short swapped = (tag >> 8) | (tag << 8);
            switch (swapped) {
            case 0x800:
                func_ov031_02202e44((IPv4Packet02202b78*)(p + 0xe), count - 0xe);
                break;
            case 0x806:
                func_ov031_0220186c((Struct0220186c*)(p + 0xe), count - 0xe);
                break;
            }
        }
        AdvanceAndClampField30_02200bb8();
    }
}

struct ContextIdentifierRecord {
    int active;
    char unknown4[6];
    unsigned short identifier;
};

// USA: func_ov031_02203078
extern "C" ARM unsigned short func_ov031_02203078(void) {
    int duplicate;
    ProcessorContext* context;
    unsigned short identifier;
    ProcessorContext* firstContext = data_02111304.firstContext;
    do {
        duplicate = 0;
        ++ephemeral_port;
        if (ephemeral_port < 1024 ||
            ephemeral_port >= 5000) {
            ephemeral_port = 1024;
        }
        context = firstContext;
        if (context != NULL) {
            identifier = ephemeral_port;
            do {
                ContextIdentifierRecord* record = (ContextIdentifierRecord*)context->unknown_A4;
                if (record != NULL && record->active != 0 &&
                    record->identifier == identifier) {
                    duplicate = 1;
                    break;
                }
                context = context->pNext;
            } while (context != NULL);
        }
    } while (duplicate != 0);
    return ephemeral_port;
}

// USA: func_ov031_02203120  (semantic: AdvanceEmbeddedRandom_02203120)
extern "C" ARM unsigned int func_ov031_02203120(void) {
	return MATH_Rand32(&data_ov031_0224c9e8, 0);
}

// USA: func_ov031_02203164
ARM void SetField164_02203164(int v) {
	data_02111304.activeContext->unknown_A4 = v;
}

// USA: func_ov031_02203178
ARM void ClearField164_02203178(void) {
	data_02111304.activeContext->unknown_A4 = 0;
}

// USA: func_ov031_02203190
ARM void ResetSessionState02203190(void) {
	void* session = (void*)data_02111304.activeContext->unknown_A4;
	if (session == NULL) return;
	*(unsigned char*)((char*)session + 0x8) = 10;
	*(int*)((char*)session + 0x44) = 0;
}

struct SomeObj_022031bc {
	char pad0[0xa];
	unsigned short fieldA;
	char pad1[0x18 - 0xa - 2];
	unsigned short field18;
	unsigned short field1a;
	unsigned int field1c;
	unsigned int field20;
};

// USA: func_ov031_022031bc
ARM void UpdateObjFromContext_022031bc(int a, unsigned short b, unsigned int c) {
	SomeObj_022031bc* obj = (SomeObj_022031bc*)data_02111304.activeContext->unknown_A4;
	if (obj == NULL) {
		return;
	}
	unsigned int val = (c == 0x7f000001) ? data_ov031_0224c9d0 : c;
	obj->field1a = b;
	obj->field18 = obj->field1a;
	obj->field20 = val;
	obj->field1c = val;
	if (a != 0) {
		obj->fieldA = (unsigned short)a;
		return;
	}
	obj->fieldA = func_ov031_02203078();
}

// USA: func_ov031_0220321c
ARM void InitSessionFields_0220321c(void) {
    ProcessorContext* mgr = data_02111304.activeContext;
    void* session = (void*)mgr->unknown_A4;
    if (session == NULL) return;
    *(void**)((char*)session + 0x0) = mgr;
    *(unsigned char*)((char*)session + 0x8) = 0;
    *(int*)((char*)session + 0x44) = 0;
    *(int*)((char*)session + 0x60) = 0;
    *(int*)((char*)session + 0x38) = 0;
}

// USA: func_ov031_02203250
ARM void ZeroField164_02203250(void) {
	int* q = (int*)data_02111304.activeContext->unknown_A4;
	if (q) *q = 0;
}

// USA: func_ov031_02203270
ARM void CopyField164_02203270(void* obj) {
	*(int*)((char*)obj + 0xa4) = data_02111304.activeContext->unknown_A4;
}

// USA: func_ov031_02203288
ARM void SetField38IfPresent_02203288(int value) {
	void* obj = (void*)data_02111304.activeContext->unknown_A4;
	if (obj != NULL) {
		*(int*)((char*)obj + 0x38) = value;
	}
}

struct Obj_022032a4 {
	char pad0[0x4];
	int field4;
	char pad1[0x8 - 0x4 - 0x4];
	unsigned char field8;
	char pad2[0x10 - 0x8 - 0x1];
	unsigned int field10;
	char pad3[0x28 - 0x10 - 0x4];
	int field28;
};

// USA: func_ov031_022032a4
extern "C" ARM int func_ov031_022032a4(Obj_022032a4* obj) {
	unsigned int tries;
	int result28 = func_ov031_02203120();
	int mode = 2;
	tries = 0;
	do {
		obj->field28 = result28;
		obj->field8 = (unsigned char)mode;
		obj->field10 = (unsigned int)(GetCurrentTimestamp() >> 16);
		func_ov031_02201f10((CpsSocket02201f10*)obj, mode, 0x18);

		int oldIRQ = DisableIRQInterrupts();
		if (obj->field8 == 2 && data_ov031_0224c9d0 != 0) {
			obj->field4 = 1;
			BlockCurrentContext(NULL);
		}
		SetIRQInterruptState(oldIRQ);

		if (obj->field8 == 4) {
			return 0;
		}
		if (data_ov031_0224c9d0 == 0) break;
		tries = tries + 1;
	} while (tries < 3);
	return 1;
}

extern "C" int func_ov031_0220a540(void* self);

// USA: func_ov031_02203358  (semantic: PollOrRelease_02203358)
extern "C" ARM int func_ov031_02203358(void) {
	void* mgr = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (mgr) {
		if (*((unsigned char*)mgr + 9) != 0) {
			return func_ov031_0220a540(mgr);
		}
		return func_ov031_022032a4((Obj_022032a4*)mgr);
	}
	return 1;
}

struct Struct0_02203398 {
	char pad[0x8];
	unsigned char field0x8;
};

// USA: func_ov031_02203398
ARM void CycleAndAdvanceState_02203398(Struct0_02203398* obj) {
	CycleCurrentPriorityContexts();
	unsigned char field8 = obj->field0x8;
	if (field8 == 3 || field8 == 4) {
		TailCallType17_02201f98((int)obj, 0x19);
		obj->field0x8 = 7;
	} else if (field8 != 0) {
		TailCallType16_02201f84((int)obj, 0x1a);
	}
}

void ResetStatusIfEight_0220a9b0(void*);

// USA: func_ov031_022033e8  (semantic: ResetOrAdvanceContext_022033e8)
extern "C" ARM void func_ov031_022033e8(void) {
	void* mgr = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (mgr == NULL) return;
	if (*((unsigned char*)mgr + 9) != 0) {
		ResetStatusIfEight_0220a9b0(mgr);
	}
	CycleAndAdvanceState_02203398((Struct0_02203398*)mgr);
}

extern "C" void func_ov031_0220aa30(void*);

// USA: func_ov031_02203424
ARM void UpdateAndWaitOnContext_02203424(void) {
	void* mgr = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (mgr == NULL) return;
	if (*((unsigned char*)mgr + 9) != 0) {
		func_ov031_0220aa30(mgr);
	}
	int start = (int)(GetCurrentTimestamp() >> 16);
	while (link_is_on() != 0 && *((unsigned char*)mgr + 8) != 0
	       && (int)(GetCurrentTimestamp() >> 16) - start < 0x27) {
		DispatchContext02200264();
	}
	*((unsigned char*)mgr + 8) = 0;
}

// USA: func_ov031_022034ac
ARM int WaitForField44_022034ac(unsigned int* out, void* obj) {
	unsigned int v;
	int priorState;
	priorState = DisableIRQInterrupts();
	v = *(unsigned int*)((char*)obj + 0x44);
	if (v == 0) {
		do {
			*(unsigned int*)((char*)obj + 4) = 3;
			BlockCurrentContext(NULL);
			v = *(unsigned int*)((char*)obj + 0x44);
		} while (v == 0);
	}
	SetIRQInterruptState(priorState);
	*out = v;
	return *(int*)((char*)obj + 0x40);
}

// USA: func_ov031_02203500
ARM int WaitOrCycle_02203500(unsigned int* out, void* obj) {
	if (*(unsigned int*)((char*)obj + 0x44) == 0 && *(unsigned char*)((char*)obj + 8) == 4) {
		int priorState = DisableIRQInterrupts();
		while (*(unsigned int*)((char*)obj + 0x44) == 0 && *(unsigned char*)((char*)obj + 8) == 4) {
			*(unsigned int*)((char*)obj + 4) = 2;
			BlockCurrentContext(NULL);
		}
		SetIRQInterruptState(priorState);
	} else {
		CycleCurrentPriorityContexts();
	}
	unsigned int v = *(unsigned int*)((char*)obj + 0x44);
	*out = v;
	return v != 0 ? *(int*)((char*)obj + 0x40) : 0;
}

struct NodeStruct0220357c { unsigned char pad[8]; unsigned char type; unsigned char flag9; };

extern "C" int func_ov031_0220a594(unsigned int* out, void* obj);

// USA: func_ov031_0220357c  (semantic: DispatchByNodeType_0220357c)
extern "C" ARM int func_ov031_0220357c(unsigned int* out) {
    NodeStruct0220357c* node = (NodeStruct0220357c*)data_02111304.activeContext->unknown_A4;
    if (node) {
        if ((unsigned char)(node->type + 0xf6) <= 1) return WaitForField44_022034ac(out, node);
        if (node->flag9) return func_ov031_0220a594(out, node);
        return WaitOrCycle_02203500(out, node);
    }
    *out = 0;
    return 0;
}

struct StructOv31_022035e0 {
	unsigned char pad[0x8];
	unsigned char field8;
	unsigned char pad2[0x33];
	int field3c;
	void* field40;
	int field44;
};

extern "C" void* memmove(void*, const void*, unsigned int);

// USA: func_ov031_022035e0  (semantic: AdvanceRingBufferAndMaybeTailCall_022035e0)
extern "C" ARM void func_ov031_022035e0(int amount, StructOv31_022035e0* obj) {
	int state = DisableIRQInterrupts();
	int end = obj->field44;
	int limit = obj->field3c;
	int flag = 0;
	if (end == limit) {
		if (amount != 0) flag = 1;
	}
	if ((unsigned int)amount >= (unsigned int)end) {
		obj->field44 = 0;
	} else {
		void* base = obj->field40;
		int rem = end - amount;
		obj->field44 = rem;
		memmove(base, (char*)base + amount, rem);
	}
	SetIRQInterruptState(state);
	if (obj->field8 == 10) return;
	if (obj->field8 == 11) return;
	if (obj->field44 != 0 && flag == 0) return;
	TailCallType16_02201f84((int)obj, 0x1b);
}

void ReleaseHandleIfFull_0220a66c(int count, char* self);

// USA: func_ov031_02203670  (semantic: ReleaseOrEnqueueHandle_02203670)
extern "C" ARM void func_ov031_02203670(int count) {
	void* mgr = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (mgr == NULL) return;
	if (*((unsigned char*)mgr + 9) != 0) {
		ReleaseHandleIfFull_0220a66c(count, (char*)mgr);
	} else {
		func_ov031_022035e0(count, (StructOv31_022035e0*)mgr);
	}
}

struct Soc022036a8 {
	unsigned char pad0[0x8];
	unsigned char state;
	unsigned char pad9[0x2c - 0x9];
	unsigned short f2c;
	unsigned short f2e;
	unsigned char pad30[0x34 - 0x30];
	unsigned int f34;
};

// USA: func_ov031_022036a8
extern "C" ARM int func_ov031_022036a8(unsigned char* buf, unsigned int len, Soc022036a8* soc, int flag) {
	unsigned int n;
	unsigned int win;
	unsigned int prev = soc->f34;
	int cnt;
	if (flag != 0) {
		win = 1;
	} else {
		win = soc->f2c;
	}
	cnt = prev * 2 + 4;
	while (len != 0 && soc->state == 4) {
		unsigned int cur;
		n = soc->f2e;
		if (n >= win) n = win;
		if (mymss < n) n = mymss;
		if (flag == 0) n &= ~1;
		if (len < n) n = len;
		cur = soc->f34;
		cnt += cur - prev;
		prev = cur;
		if (cnt-- == 0) n = 0;
		if (n == 0) break;
		win -= n;
		func_ov031_02201550(buf, n, (Socket02201550*)soc, 0x18, 0);
		CycleCurrentPriorityContexts();
		buf += n;
		len -= n;
	}
	return n;
}

// USA: func_ov031_0220376c
ARM int Wrapper0220376c(int a, int b, int c, int d, int e, int f) {
	int result = func_ov031_022036a8((unsigned char*)a, b, (Soc022036a8*)e, f);
	if (result != 0 && d != 0) {
		return func_ov031_022036a8((unsigned char*)c, d, (Soc022036a8*)e, 0);
	}
	return result;
}

struct TransferChannel {
    unsigned char padding[8];
    unsigned char status;
    unsigned char padding2[0x1f];
    unsigned int sentOffset;
    unsigned short available;
    unsigned short padding3;
    unsigned int acknowledgedOffset;
    int pending;
};

// USA: func_ov031_022037a8
extern "C" ARM unsigned int func_ov031_022037a8(unsigned char* first, unsigned int firstLength, unsigned char* second, unsigned int secondLength, TransferChannel* channel) {
    unsigned int total = 0;
    unsigned int transferred;
    int retry = 0;
    channel->pending = 0;
    int lastProgress = GetCurrentTimestamp() >> 16;
    while (link_is_on() != 0 && firstLength != 0 && channel->status == 4 && (int)(GetCurrentTimestamp() >> 16) - lastProgress < 159) {
        unsigned int initialOffset = channel->sentOffset;
        Wrapper0220376c((int)first, firstLength, (int)second, secondLength, (int)channel, retry);
        int start = GetCurrentTimestamp() >> 16;
        while (1) {
            DispatchContext02200264();
            if (link_is_on() == 0 || channel->status != 4 || channel->sentOffset == channel->acknowledgedOffset || (int)(GetCurrentTimestamp() >> 16) - start >= 15) break;
            if (retry != 0 && channel->available != 0) break;
        }
        transferred = channel->acknowledgedOffset - initialOffset;
        if (transferred > channel->sentOffset - initialOffset) transferred = 0;
        total += transferred;
        if (transferred != 0) lastProgress = GetCurrentTimestamp() >> 16;
        channel->sentOffset = channel->acknowledgedOffset;
        if (channel->status == 4 && channel->available == 0 && transferred == 0) {
            if (retry == 0) {
                int waitStart = GetCurrentTimestamp() >> 16;
                while (link_is_on() != 0 && (int)(GetCurrentTimestamp() >> 16) - waitStart < 15) {
                    DispatchContext02200264();
                    if (channel->available != 0) break;
                }
                if (channel->available == 0) retry = 1;
            }
        } else {
            retry = 0;
        }
        {
            if (transferred < firstLength) {
                first += transferred;
                firstLength -= transferred;
            } else {
                unsigned int remainder = transferred - firstLength;
                first = second + remainder;
                second = NULL;
                firstLength = secondLength - remainder;
                secondLength = 0;
            }
        }
    }
    return total;
}

struct Node022039b0 { unsigned char pad0[0x8]; unsigned char type; unsigned char hasExtra; };

extern "C" int func_ov031_0220a87c(void* a0, int a1, void* a2, int a3, Node022039b0* n);

// USA: func_ov031_022039b0
extern "C" ARM int func_ov031_022039b0(void* a0, int a1, void* a2, int a3) {
	Node022039b0* n = (Node022039b0*)data_02111304.activeContext->unknown_A4;
	if (n) {
		int result;
		if (n->type == 0xa) {
			if (a1 != 0) func_ov031_02201414(a0, a1, (Socket02201414*)n);
			if (a3 != 0) func_ov031_02201414(a2, a3, (Socket02201414*)n);
			result = a1 + a3;
		} else if (n->type == 0xb) {
			if (a1 != 0) func_ov031_02201364((unsigned char*)a0, a1, (EchoSocket02201364*)n);
			if (a3 != 0) func_ov031_02201364((unsigned char*)a2, a3, (EchoSocket02201364*)n);
			result = a1 + a3;
		} else {
			if (n->hasExtra != 0) {
				result = func_ov031_0220a87c(a0, a1, a2, a3, n);
			} else {
				result = func_ov031_022037a8((unsigned char*)a0, a1, (unsigned char*)a2, a3, (TransferChannel*)n);
			}
		}
		if (data_ov031_0224c980 == 0) {
			return result;
		}
	}
	return 0;
}

// USA: func_ov031_02203a84  (semantic: DispatchOrDrainBuffer_02203a84)
extern "C" ARM int func_ov031_02203a84(void* p0, int p1) {
	void* mgr = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (mgr == NULL) goto ret0;
	int v = *(int*)((char*)mgr + 0x60);
	if (v == 0) goto zero_case;
	v = func_ov031_022039b0(*(void**)((char*)mgr + 0x5c), v, p0, p1);
	{
		int size = *(int*)((char*)mgr + 0x60);
		if ((unsigned int)v < (unsigned int)size) {
			memmove(*(void**)((char*)mgr + 0x5c), (char*)*(void**)((char*)mgr + 0x5c) + v, size - v);
			size = *(int*)((char*)mgr + 0x60);
			*(int*)((char*)mgr + 0x60) = size - v;
			return 0;
		}
		*(int*)((char*)mgr + 0x60) = 0;
		return v - size;
	}
zero_case:
	return func_ov031_022039b0(p0, p1, (void*)0, 0);
ret0:
	return 0;
}

int GetRemainingOrStatus_0220a800(char* self);

// USA: func_ov031_02203b1c  (semantic: GetActiveContextRemainingOrStatus_02203b1c)
extern "C" ARM int func_ov031_02203b1c(void) {
	char* mgr = (char*)data_02111304.activeContext->unknown_A4;
	if (mgr == NULL) {
		goto ret_zero;
	}
	if (*(unsigned char*)(mgr + 9) != 0) {
		return GetRemainingOrStatus_0220a800(mgr);
	}
	{
		int f44 = *(int*)(mgr + 0x44);
		if (f44 != 0) {
			goto ret_f44;
		}
		if (*(unsigned char*)(mgr + 8) == 4) {
			goto ret_f44;
		}
		{
			unsigned char t = (unsigned char)(*(unsigned char*)(mgr + 8) + 0xf6);
			if (t > 1) {
				goto ret_neg1;
			}
		}
	ret_f44:
		return f44;
	}
ret_neg1:
	return -1;
ret_zero:
	return 0;
}

// USA: func_ov031_02203b8c
ARM void ClearField60_02203b8c(void) {
	void* mgr = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (mgr == NULL) return;
	int field60 = *(int*)((char*)mgr + 0x60);
	if (field60 == 0) return;
	func_ov031_022039b0(*(void**)((char*)mgr + 0x5c), field60, 0, 0);
	*(int*)((char*)mgr + 0x60) = 0;
}

// USA: func_ov031_02203bcc
extern "C" ARM void func_ov031_02203bcc(void) {
	dhcp_callback();
	if (data_ov031_0224c9d0 == 0) {
		return;
	}
	func_ov031_02200ccc(data_ov031_0224c9d0);
	SleepCurrentContext(0x64);
	func_ov031_02200ccc(data_ov031_0224c9d0);
	unsigned int start = (unsigned int)(GetCurrentTimestamp() >> 16);
	while (link_is_on() && (int)((unsigned int)(GetCurrentTimestamp() >> 16) - start) < 0x17) {
		if (ip_conflict) {
			func_ov031_02200160(4);
			return;
		}
		SleepCurrentContext(0x64);
	}
}

struct MaintenanceConnection {
    ProcessorContext* context;
    int pending;
    unsigned char state;
    unsigned char padding9[7];
    int timestamp;
    int field14;
    unsigned short currentPort, savedPort;
    unsigned int currentAddress, savedAddress;
};
extern unsigned char data_ov031_0224d02c[], data_ov031_0224ceac[];
extern "C" int func_ov031_022046b8(void);
extern "C" int func_ov031_02204710(int* out, int mode);
extern "C" void func_ov031_0220480c(void);
extern "C" void func_ov031_0220aa98(int);

// USA: func_ov031_02203c6c
extern "C" ARM void func_ov031_02203c6c() {
    int i;
    int stage;
    int timestamp;
    ArpEntry* entry;
    int watchdog;
    int first;
    calm_down = 0;
    VectorizedMemset(&data_ov031_0224ca60, 0, sizeof(CpsSocket));
    data_ov031_0224ca60.recvCapacity = 0x180;
    data_ov031_0224ca60.recvBuffer = data_ov031_0224d02c;
    data_ov031_0224ca60.sendCapacity = 0x180;
    data_ov031_0224ca60.sendBuffer = data_ov031_0224ceac;
    SetField164_02203164((int)&data_ov031_0224ca60);
    watchdog = 1;
    first = 1;
    unsigned int retry = 1;
    cps_state = 1;
    stage = 0;
    while (1) {
        SleepCurrentContext(1000);
        if (calm_down) break;
        timestamp = (int)(GetCurrentTimestamp() >> 16);
        if (link_is_on()) {
            if (--retry == 0) {
                if (cps_mode & 1) {
                    if (stage == 0) {
                        func_ov031_02203bcc();
                        stage = 1;
                    }
                } else {
                    switch (stage) {
                    case 0:
                        if (first) {
                            cps_state = 2;
                            first = 0;
                        }
                        if (!func_ov031_022046b8() || func_ov031_02204710((int*)&retry, 0) == 0) {
                            func_ov031_02203bcc();
                            stage = 3;
                        } else {
                            stage = 1;
                        }
                        break;
                    case 1:
                        if (func_ov031_02204710((int*)&retry, 1) == 0 && retry < 60) stage = 2;
                        break;
                    case 2:
                        if (func_ov031_02204710((int*)&retry, 2)) stage = 1;
                        else if (retry < 60) {
                            func_ov031_02200160(3);
                            watchdog = 1;
                            retry = 1;
                            stage = 0;
                        }
                        break;
                    case 3:
                        break;
                    }
                }
            }
        } else {
            func_ov031_02200160(1);
            watchdog = 1;
            retry = 1;
            stage = 0;
        }
        entry = data_ov031_0224ca00;
        i = 0;
        do {
            if (entry->address && (short)(timestamp - entry->timestamp) > 957) entry->address = 0;
            entry++;
        } while (++i < 8);
        if (data_ov031_0224c9ac && --watchdog == 0) {
            func_ov031_02200ccc(data_ov031_0224c9ac);
            watchdog = 105;
        }
        ProcessorContext* context = data_02111304.firstContext;
        if (context) do {
            MaintenanceConnection* connection = (MaintenanceConnection*)context->unknown_A4;
            if (connection && connection->context) {
                int state = connection->state;
                if (state == 3 && timestamp - connection->timestamp > 39) {
                    connection->state = 1;
                    connection->currentPort = connection->savedPort;
                    connection->currentAddress = connection->savedAddress;
                } else if (state == 2 && timestamp - connection->timestamp > 39) {
                    if (connection->pending == 1) {
                        connection->state = 0;
                        connection->pending = 0;
                        MarkContextReadyAndSwitch(connection->context);
                    }
                } else if (state != 4 && connection->pending == 2) {
                    connection->pending = 0;
                    MarkContextReadyAndSwitch(connection->context);
                }
            }
            context = context->pNext;
        } while (context);
        IpFragment* fragment = data_ov031_0224cca8;
        int fragmentIndex = 0;
        do {
            if (fragment->count && (int)(timestamp - fragment->timestamp) > 239) {
                data_ov031_0224c9c0(fragment->allocation);
                fragment->count = 0;
            }
            fragment++;
        } while (++fragmentIndex < 8);
        func_ov031_0220aa98(timestamp);
        if (scavenger) scavenger();
    }
    if (!(cps_mode & 1) && stage != 3) func_ov031_0220480c();
    ClearField164_02203178();
}

struct Network32 {
    unsigned short high;
    unsigned short low;
};
struct BootpHeader {
    unsigned short operationAndHardwareType;
    unsigned char hardwareAddressLength;
    unsigned char hops;
    Network32 transactionId;
    unsigned short seconds;
    unsigned short flags;
    Network32 clientAddress;
    Network32 offeredAddress;
    Network32 serverAddress;
    Network32 relayAddress;
    unsigned char clientHardwareAddress[16];
    char serverName[64];
    char bootFile[128];
};
extern const char data_ov031_02249698[];

enum DhcpOption {
    DhcpHostName = 12,
    DhcpMessageType = 53,
    DhcpParameterRequestList = 55,
    DhcpClientIdentifier = 61
};

// USA: func_ov031_02203fdc
extern "C" ARM unsigned char* func_ov031_02203fdc(void* buffer, int messageType, int* output) {
    unsigned char* bytes = (unsigned char*)buffer;
    BootpHeader* header = (BootpHeader*)buffer;
    VectorizedMemset(buffer, 0, sizeof(BootpHeader));
    header->operationAndHardwareType = 0x101;
    header->hardwareAddressLength = 6;
    unsigned int random = MATH_Rand32(&data_ov031_0224c9e8, 0);
    if (output) *output = random;
    int randomHigh = (unsigned short)(random / 0x10000U);
    header->transactionId.high = (randomHigh >> 8) | (randomHigh << 8);
    int randomLow = (unsigned short)random;
    header->transactionId.low = (randomLow >> 8) | (randomLow << 8);
    int addressHigh = (unsigned short)(data_ov031_0224c9d0 / 0x10000U);
    header->clientAddress.high = (addressHigh >> 8) | (addressHigh << 8);
    int addressLow = (unsigned short)data_ov031_0224c9d0;
    header->clientAddress.low = (addressLow >> 8) | (addressLow << 8);
    VectorizedInvertedMemcpy(data_ov031_0224ce68, header->clientHardwareAddress, 6);
    ((unsigned short*)(bytes + sizeof(BootpHeader)))[0] = 0x8263;
    ((unsigned short*)(bytes + sizeof(BootpHeader)))[1] = 0x6353;
    ((unsigned short*)(bytes + sizeof(BootpHeader)))[2] = DhcpMessageType | (1 << 8);
    bytes[0xf2] = messageType;
    bytes[0xf3] = DhcpClientIdentifier;
    bytes[0xf4] = 7;
    bytes[0xf5] = 1;
    VectorizedInvertedMemcpy(data_ov031_0224ce68, bytes + 0xf6, 6);
    bytes[0xfc] = DhcpHostName;
    bytes[0xfd] = 10;
    VectorizedInvertedMemcpy(data_ov031_02249698, bytes + 0xfe, 10);
    bytes[0x108] = DhcpParameterRequestList;
    bytes[0x109] = 3;
    bytes[0x10a] = 1;
    bytes[0x10b] = 3;
    bytes[0x10c] = 6;
    return bytes + 0x10d;
}

// USA: func_ov031_02204168
ARM void* FillRemainder_02204168(int value, unsigned int end, void* dst, unsigned int start) {
    if (start < end) {
        unsigned int len = end - start;
        VectorizedMemset(dst, value, len);
        dst = (char*)dst + len;
    }
    return dst;
}

// USA: func_ov031_0220419c
extern "C" ARM int func_ov031_0220419c(void) {
    int outVal;
    unsigned char* buf = data_ov031_0224ced6;
    unsigned char* ip = func_ov031_02203fdc(buf, 1, &outVal);
    if (requested_ip != 0) {
        ip[0] = 0x32;
        ip[1] = 4;
        ip[2] = (unsigned char)((unsigned short)(requested_ip >> 16) >> 8);
        ip[3] = (unsigned char)(requested_ip >> 16);
        ip[4] = (unsigned char)((unsigned short)requested_ip >> 8);
        ip[5] = (unsigned char)requested_ip;
        ip += 6;
    }
    ip[0] = 0xff;
    unsigned char* dst = (unsigned char*)FillRemainder_02204168(0, 0x12c, ip + 1, (unsigned int)((ip + 1) - buf));
    func_ov031_02203a84(buf, (int)(dst - buf));
    return outVal;
}

// USA: func_ov031_02204260  (semantic: BuildAndDrainHeader_02204260)
extern "C" ARM int func_ov031_02204260(int flag) {
    int outVal;
    unsigned char* buf = data_ov031_0224ced6;
    unsigned char* ip = func_ov031_02203fdc(buf, 3, &outVal);
    if (flag == 0) {
        ip[0] = 0x32;
        ip[1] = 4;
        ip[2] = (unsigned char)((unsigned short)(requested_ip >> 16) >> 8);
        ip[3] = (unsigned char)(requested_ip >> 16);
        ip[4] = (unsigned char)((unsigned short)requested_ip >> 8);
        ip[5] = (unsigned char)requested_ip;
        ip[6] = 0x36;
        ip[7] = 4;
        ip[8] = (unsigned char)((unsigned short)(dhcp_server >> 16) >> 8);
        ip[9] = (unsigned char)(dhcp_server >> 16);
        ip[0xa] = (unsigned char)((unsigned short)dhcp_server >> 8);
        ip[0xb] = (unsigned char)dhcp_server;
        ip += 0xc;
    }
    ip[0] = 0xff;
    unsigned char* dst = (unsigned char*)FillRemainder_02204168(0, 0x12c, ip + 1, (unsigned int)((ip + 1) - buf));
    func_ov031_02203a84(buf, (int)(dst - buf));
    return outVal;
}

struct BootpPacket02204368 {
    unsigned char type;
    unsigned char unknown1[3];
    unsigned short transactionHigh;
    unsigned short transactionLow;
    unsigned char unknown8[8];
    unsigned char assignedAddress[4];
    unsigned char unknown14[8];
    unsigned short hardwareAddress[3];
    unsigned char unknown22[0xec - 0x22];
    unsigned char cookie[4];
    unsigned char options[1];
};
#define READ_NETWORK32_02204368(p) (((unsigned int)(unsigned short)(((p)[0] << 8) | (p)[1]) << 16) | (unsigned short)(((p)[2] << 8) | (p)[3]))
#define SWAP_NETWORK16_02204368(v) ((unsigned short)(((v) >> 8) | ((v) << 8)))

// USA: func_ov031_02204368
extern "C" ARM int func_ov031_02204368(int transaction, int retry) {
    int timeout = (retry + 1) * 15;
    int start = (int)(GetCurrentTimestamp() >> 16);
    int result = 0;
    while (link_is_on() != 0 && result == 0 && (int)(GetCurrentTimestamp() >> 16) - start < timeout) {
        if (!func_ov031_02203b1c()) {
            DispatchContext02200264();
            continue;
        }
        unsigned int length;
        unsigned char* buffer = (unsigned char*)func_ov031_0220357c(&length);
        BootpPacket02204368* packet = (BootpPacket02204368*)buffer;
        if (length > 0xf0 && packet->type == 2 &&
            transaction == ((unsigned int)SWAP_NETWORK16_02204368(packet->transactionHigh) << 16 |
                             SWAP_NETWORK16_02204368(packet->transactionLow)) &&
            !CompareThreeU16sDiffer02200824(packet->hardwareAddress, (unsigned short*)data_ov031_0224ce68)) {
            unsigned char* end;
            unsigned int address = READ_NETWORK32_02204368(packet->assignedAddress);
            end = buffer + length;
            result = 3;
            unsigned char* option = buffer + 0xec;
            if (*option++ == 0x63 && *option++ == 0x82 && *option++ == 0x53 && *option++ == 0x63) {
                int type;
                while (option < end && (type = *option++) != 0xff) {
                    if (type == 0) continue;
                    switch (type) {
                    case 1:
                        data_ov031_0224c99c = READ_NETWORK32_02204368(option + 1);
                        break;
                    case 3:
                        data_ov031_0224c9ac = READ_NETWORK32_02204368(option + 1);
                        break;
                    case 6:
                        if (option[0] < 8) data_ov031_0224c9e0[1] = 0;
                        else data_ov031_0224c9e0[1] = READ_NETWORK32_02204368(option + 5);
                        data_ov031_0224c9e0[0] = READ_NETWORK32_02204368(option + 1);
                        break;
                    case 51:
                        lease_time = READ_NETWORK32_02204368(option + 1);
                        break;
                    case 53:
                        switch (option[1]) {
                        case 2:
                            result = 1;
                            requested_ip = address;
                            break;
                        case 5:
                            result = 2;
                            data_ov031_0224c9d0 = address;
                            break;
                        default:
                            break;
                        }
                        break;
                    case 54:
                        dhcp_server = READ_NETWORK32_02204368(option + 1);
                        break;
                    default:
                        break;
                    }
                    option += option[0] + 1;
                }
            }
        }
        func_ov031_02203670(length);
    }
    return result;
}

// USA: func_ov031_022046b8
extern "C" ARM int func_ov031_022046b8(void) {
	InitSessionFields_0220321c();
	ResetSessionState02203190();
	UpdateObjFromContext_022031bc(0x44, 0x43, (unsigned int)-1);
	int result;
	int i = 0;
	do {
		int v = func_ov031_0220419c();
		result = func_ov031_02204368(v, i);
		if (result == 1) {
			break;
		}
		i++;
	} while (i < 4);
	ZeroField164_02203250();
	return result == 1;
}

// USA: func_ov031_02204710  (semantic: StartSessionAndDispatch_02204710)
extern "C" ARM int func_ov031_02204710(int* out, int mode) {
	InitSessionFields_0220321c();
	ResetSessionState02203190();

	if (mode == 1) {
		UpdateObjFromContext_022031bc(0x44, 0x43, dhcp_server);
	} else {
		UpdateObjFromContext_022031bc(0x44, 0x43, 0x43 - 0x44);
	}

	int result = 0;
	int i = 0;
	do {
		result = func_ov031_02204368(func_ov031_02204260(mode), i);
		if (result != 0) break;
		i++;
	} while (i < 4);

	ZeroField164_02203250();

	if (result == 2) {
		*out = lease_time >> 1;
		dhcp_retry = (lease_time + (lease_time << 1)) >> 3;
		return 1;
	}

	unsigned int half = dhcp_retry >> 1;
	dhcp_retry = half;
	*out = half;

	switch (mode) {
	case 1:
		if (half < 0x3c) {
			*out = 1;
			dhcp_retry = lease_time >> 3;
		}
		break;
	case 2:
		if (half < 0x3c) {
			*out = 1;
		}
		break;
	}

	return 0;
}

// USA: func_ov031_0220480c
extern "C" ARM void func_ov031_0220480c() {
    InitSessionFields_0220321c();
    ResetSessionState02203190();
    UpdateObjFromContext_022031bc(0x44, 0x43, dhcp_server);
    unsigned char* buffer = data_ov031_0224ced6;
    unsigned char* end = func_ov031_02203fdc(buffer, 7, 0);
    unsigned char terminator = 0xff;
    unsigned char* remainder = end + 1;
    *end = terminator;
    end = remainder;
    end = (unsigned char*)FillRemainder_02204168(0, 0x12c, end, end - buffer);
    func_ov031_02203a84(buffer, end - buffer);
    ZeroField164_02203250();
}

// USA: func_ov031_02204878
ARM char* SkipControlSeq_02204878(char* p) {
    unsigned char c = *p++;
    if (c != 0) {
        do {
            if ((c & 0xc0) == 0xc0) {
                return p + 1;
            }
            p += c;
            c = *p++;
        } while (c != 0);
    }
    return p;
}

struct DnsHeader022048a8 {
    unsigned short identifier, flags, questionCount, answerCount, authorityCount, additionalCount;
    unsigned char data[48];
};
struct DnsResponse022048a8 {
    unsigned short identifier;
    unsigned char flags, status;
    unsigned char questionCount[2];
    unsigned char counts[6];
};
struct DnsRecordHeader022048a8 {
    unsigned char type[2], recordClass[2];
    unsigned char ttl[4];
    unsigned char length[2];
};

#define CPS_GETUSHORT1(p) ((unsigned short)(((unsigned char*)(p))[0] << 8 | ((unsigned char*)(p))[1]))
#define CPS_GETULONG1(p) (((unsigned long)CPS_GETUSHORT1(p) << 16) | CPS_GETUSHORT1((p) + 2))

// USA: func_ov031_022048a8
extern "C" ARM int func_ov031_022048a8(const unsigned char* name, unsigned int type, int identifier, void* output, unsigned int capacity) {
    DnsHeader022048a8 packet;
    unsigned int length;
    packet.identifier = (identifier >> 8) | (identifier << 8);
    if (type != 32) packet.flags = 1;
    else packet.flags = 0x1001;
    packet.questionCount = 0x100;
    packet.answerCount = 0;
    packet.authorityCount = 0;
    packet.additionalCount = 0;
    length = 0;
    unsigned char character = *name++;
    unsigned char* label = packet.data;
    unsigned char* cursor = label + 1;
    int count = 0;
    if (character) do {
        if (character != '.') {
            count = cursor - (unsigned char*)&packet;
            if (count >= 60) return -1;
            count = ++length;
            *cursor++ = character;
        } else {
            *label = count;
            label = cursor;
            length = 0;
            count = 0;
            ++cursor;
        }
        character = *name++;
    } while (character);
    *label = length;
    cursor[0] = 0;
    cursor[1] = type >> 8;
    cursor[2] = type;
    cursor[3] = 0;
    cursor[4] = 1;
    func_ov031_02203a84(&packet, cursor + 5 - (unsigned char*)&packet);
    int result = 0;
    unsigned int start = GetCurrentTimestamp() >> 16;
    while (link_is_on() && !result &&
           (int)((unsigned int)(GetCurrentTimestamp() >> 16) - start) < 15) {
        if (!func_ov031_02203b1c()) DispatchContext02200264();
        else {
            DnsResponse022048a8* response = (DnsResponse022048a8*)func_ov031_0220357c(&length);
            if (length > 12 && identifier == (unsigned short)((response->identifier >> 8) | (response->identifier << 8))) {
                int status = response->status & 15;
                if (status == 3) result = -1;
                else if (status == 0) {
                    unsigned char* end = (unsigned char*)response + length;
                    char* position = (char*)(response + 1);
                    int remaining = (unsigned short)(response->questionCount[1] | (response->questionCount[0] << 8));
                    while (remaining--) {
                        position = SkipControlSeq_02204878(position) + 4;
                    }
                    if ((unsigned char*)position < end) do {
                        DnsRecordHeader022048a8* record = (DnsRecordHeader022048a8*)SkipControlSeq_02204878(position);
                        unsigned short dataLength = CPS_GETUSHORT1(record->length);
                        if (type == CPS_GETUSHORT1(record->type)) {
                            if (type != 12) {
                                result = CPS_GETULONG1((unsigned char*)record + sizeof(*record) - 4 + dataLength);
                            } else if (dataLength > capacity) result = 2;
                            else {
                                VectorizedInvertedMemcpy(record + 1, output, dataLength);
                                result = 1;
                            }
                            break;
                        }
                        position = (char*)record + (sizeof(*record) + dataLength);
                    } while ((unsigned char*)position < end);
                }
            }
            func_ov031_02203670(length);
        }
    }
    return result;
}

// USA: func_ov031_02204b50
ARM int ParseDigits_02204b50(char* str, char** endptr) {
    *endptr = str;
    unsigned int result = 0;
    unsigned int digit;
    do {
        digit = ((unsigned char)*str - 0x30) & 0xff;
        if (digit > 9) break;
        result = result * 10 + digit;
        str++;
        *endptr = str;
    } while (1);
    return result;
}

// USA: func_ov031_02204b84  (semantic: ParseIPv4Address_02204b84)
extern "C" ARM int func_ov031_02204b84(char* str, unsigned int* out) {
    unsigned int accum = 0;
    char* p = str;
    int octetIndex = 0;
    do {
        char* next;
        int val = ParseDigits_02204b50(p, &next);
        if (p == next)
            return 0;
        p = next;
        if ((unsigned int)val > 0xff)
            goto fail;
        if (octetIndex != 3) {
            unsigned char c = *p;
            p = p + 1;
            if (c != '.')
                goto fail;
        }
        if (octetIndex == 3) {
            if (*(unsigned char*)p != 0)
                goto fail;
        }
        goto accumulate;
fail:
        return 0;
accumulate:
        octetIndex++;
        accum = val | (accum << 8);
    } while (octetIndex < 4);
    *out = accum;
    return 1;
}

// USA: func_ov031_02204c20  (semantic: StartSession_02204c20)
extern "C" ARM int func_ov031_02204c20(char* name, unsigned int server, unsigned short identifier) {
    if (server == 0) return -1;
    InitSessionFields_0220321c();
    ResetSessionState02203190();
    UpdateObjFromContext_022031bc(0, 0x35, server);
    int result = func_ov031_022048a8((const unsigned char*)name, 1, identifier, 0, 0);
    ZeroField164_02203250();
    return result;
}

// USA: func_ov031_02204c84
extern "C" ARM CPSInAddr func_ov031_02204c84(char* name) {
    unsigned int ip;
    unsigned short id[2];
    unsigned char askServer[2];
    int retries;
    int server;

    id[0] = MATH_Rand32(&data_ov031_0224c9e8, 65536);
    id[1] = MATH_Rand32(&data_ov031_0224c9e8, 65536);

    if (func_ov031_02204b84(name, &ip)) {
        return ip;
    }

    askServer[0] = 1;
    askServer[1] = 1;

    for (retries = 0; retries < 3; retries++) {
        for (server = 0; server < 2; server++) {
            if (askServer[server]) {
                ip = func_ov031_02204c20(name, data_ov031_0224c9e0[server], id[server]);
                if (ip != 0 && ip != 0xffffffff) {
                    goto exit;
                }
                if (ip == 0xffffffff) {
                    askServer[server] = 0;
                }
            }
        }
    }
exit:
    if (ip == 0xffffffff) {
        ip = 0;
    }
    return ip;
}
