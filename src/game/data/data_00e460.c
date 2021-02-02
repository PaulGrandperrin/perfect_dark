#include <ultra64.h>
#include "game/chr/chraicommands.h"
#include "game/game_000000.h"
#include "game/prop.h"
#include "game/game_015470.h"
#include "game/hudmsg.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "stagesetup.h"
#include "types.h"

u32 var8006abb0 = 0x00000000;
u32 var8006abb4 = 0x00000000;
u32 var8006abb8 = 0x00000000;
u32 var8006abbc = 0x00000000;
u32 var8006abc0 = 0x00000000;
u32 var8006abc4 = 0x00000000;
u32 var8006abc8 = 0x00000000;
u32 var8006abcc = 0x00000000;
u32 var8006abd0 = 0x00000000;
u32 var8006abd4 = 0x00000000;
u32 var8006abd8 = 0x00000000;
u32 var8006abdc = 0x00000000;
u32 var8006abe0 = 0x00000000;
u32 var8006abe4 = 0x00000000;
u32 var8006abe8 = 0x00000000;
u32 var8006abec = 0x00000000;
u32 var8006abf0 = 0x00000000;
u32 var8006abf4 = 0x00000000;
u32 var8006abf8 = 0x00000000;
u32 var8006abfc = 0x00000000;
u32 var8006ac00 = 0x00000000;
u32 var8006ac04 = 0x00000000;
u32 var8006ac08 = 0x01000007;
u32 var8006ac0c = 0x0000ffff;
u32 var8006ac10 = 0x00000001;
u32 var8006ac14 = 0x00000000;
u32 var8006ac18 = 0x00000000;
u32 var8006ac1c = 0x00000000;
u32 var8006ac20 = 0x00000000;
u32 var8006ac24 = 0x3f800000;
u32 var8006ac28 = 0x00000000;
u32 var8006ac2c = 0x00000000;
u32 var8006ac30 = 0x00000000;
u32 var8006ac34 = 0x3f800000;
u32 var8006ac38 = 0x00000000;
u32 var8006ac3c = 0x00000000;
u32 var8006ac40 = 0x00000000;
u32 var8006ac44 = 0x3f800000;
u32 var8006ac48 = 0x00000000;
u32 var8006ac4c = 0x00000000;
u32 var8006ac50 = 0x00000000;
u32 var8006ac54 = 0x000003e8;
u32 var8006ac58 = 0xffffff00;
u32 var8006ac5c = 0xffffff00;
u32 var8006ac60 = 0x0fff0000;
u8 g_CiTaggedTerminals[] = { 0x0e, 0x0f, 0x10, 0x47, 0x46, 0x45, 0x1b, 0x7f };
u32 var8006ac6c = 0x01000011;
u32 var8006ac70 = 0x00000000;
u32 var8006ac74 = 0x00004000;
u32 var8006ac78 = 0x00000000;
u32 var8006ac7c = 0x00000000;
u32 var8006ac80 = 0x00000000;
u32 var8006ac84 = 0x00000000;
u32 var8006ac88 = 0x3f800000;
u32 var8006ac8c = 0x00000000;
u32 var8006ac90 = 0x00000000;
u32 var8006ac94 = 0x00000000;
u32 var8006ac98 = 0x3f800000;
u32 var8006ac9c = 0x00000000;
u32 var8006aca0 = 0x00000000;
u32 var8006aca4 = 0x00000000;
u32 var8006aca8 = 0x3f800000;
u32 var8006acac = 0x00000000;
u32 var8006acb0 = 0x00000000;
u32 var8006acb4 = 0x00000000;
u32 var8006acb8 = 0x000003e8;
u32 var8006acbc = 0xffffff00;
u32 var8006acc0 = 0xffffff00;
u32 var8006acc4 = 0x0fff0000;
u32 var8006acc8 = 0x0100000d;
u32 var8006accc = 0x00000001;
u32 var8006acd0 = 0x00000000;
u32 var8006acd4 = 0x00000000;
u32 var8006acd8 = 0x00000000;
u32 var8006acdc = 0x00000000;
u32 var8006ace0 = 0x00000000;
u32 var8006ace4 = 0x3f800000;
u32 var8006ace8 = 0x00000000;
u32 var8006acec = 0x00000000;
u32 var8006acf0 = 0x00000000;
u32 var8006acf4 = 0x3f800000;
u32 var8006acf8 = 0x00000000;
u32 var8006acfc = 0x00000000;
u32 var8006ad00 = 0x00000000;
u32 var8006ad04 = 0x3f800000;
u32 var8006ad08 = 0x00000000;
u32 var8006ad0c = 0x00000000;
u32 var8006ad10 = 0x00000000;
u32 var8006ad14 = 0x000003e8;
u32 var8006ad18 = 0xffffff00;
u32 var8006ad1c = 0xffffff00;
u32 var8006ad20 = 0x0fff0000;
u32 var8006ad24 = 0x01000008;
u32 var8006ad28 = 0x0000ffff;
u32 var8006ad2c = 0x00000001;
u32 var8006ad30 = 0x00000000;
u32 var8006ad34 = 0x00000000;
u32 var8006ad38 = 0x00000000;
u32 var8006ad3c = 0x00000000;
u32 var8006ad40 = 0x3f800000;
u32 var8006ad44 = 0x00000000;
u32 var8006ad48 = 0x00000000;
u32 var8006ad4c = 0x00000000;
u32 var8006ad50 = 0x3f800000;
u32 var8006ad54 = 0x00000000;
u32 var8006ad58 = 0x00000000;
u32 var8006ad5c = 0x00000000;
u32 var8006ad60 = 0x3f800000;
u32 var8006ad64 = 0x00000000;
u32 var8006ad68 = 0x00000000;
u32 var8006ad6c = 0x00000000;
u32 var8006ad70 = 0x000003e8;
u32 var8006ad74 = 0xffffff00;
u32 var8006ad78 = 0xffffff00;
u32 var8006ad7c = 0x0fff0000;
u32 var8006ad80 = 0x00000000;
u32 var8006ad84 = 0x00ffffff;
u32 var8006ad88 = 0x00000000;
u32 var8006ad8c = 0x00000000;
u32 var8006ad90 = 0x01000008;
u32 var8006ad94 = 0x00000000;
u32 var8006ad98 = 0x00004001;
u32 var8006ad9c = 0x00000000;
u32 var8006ada0 = 0x00000000;
u32 var8006ada4 = 0x00000000;
u32 var8006ada8 = 0x00000000;
u32 var8006adac = 0x3f800000;
u32 var8006adb0 = 0x00000000;
u32 var8006adb4 = 0x00000000;
u32 var8006adb8 = 0x00000000;
u32 var8006adbc = 0x3f800000;
u32 var8006adc0 = 0x00000000;
u32 var8006adc4 = 0x00000000;
u32 var8006adc8 = 0x00000000;
u32 var8006adcc = 0x3f800000;
u32 var8006add0 = 0x00000000;
u32 var8006add4 = 0x00000000;
u32 var8006add8 = 0x00000000;
u32 var8006addc = 0x000003e8;
u32 var8006ade0 = 0xffffff00;
u32 var8006ade4 = 0xffffff00;
u32 var8006ade8 = 0x0fff0000;
u32 var8006adec = 0x00000000;
u32 var8006adf0 = 0x00ffffff;
u32 var8006adf4 = 0x00000000;
u32 var8006adf8 = 0x00000000;
u32 var8006adfc = 0x00000000;
u32 var8006ae00 = 0x00000000;
u32 var8006ae04 = 0x00000000;
u32 var8006ae08 = 0x00000000;
u32 var8006ae0c = 0x00000000;
struct audiochannel *g_AudioChannels = NULL;
u32 g_AudioPrevUuid = 0x00000000;
s8 var8006ae18 = 0;
s8 var8006ae1c = 0;
s8 var8006ae20 = 0;
s8 var8006ae24 = 0;
s8 var8006ae28 = 0;
u32 var8006ae2c = 0x00000000;
u32 var8006ae30 = 0x00000000;
u32 var8006ae34 = 0x00000000;
u32 var8006ae38 = 0x00000000;
u32 var8006ae3c = 0x00000000;
u32 var8006ae40 = 0x00000000;
u32 var8006ae44 = 0x00000000;
u32 var8006ae48 = 0x00000001;
u32 var8006ae4c = 0x00000000;
u32 var8006ae50 = 0xffff0000;
u32 var8006ae54 = 0x000003e7;
u32 var8006ae58 = 0x00000000;
u32 var8006ae5c = 0x80b080b1;
u32 var8006ae60 = 0x80b280b3;
u32 var8006ae64 = 0x80b480b5;
u32 var8006ae68 = 0x00000000;
u32 var8006ae6c = 0x00000000;
s32 g_ObjectiveLastIndex = -1;
bool g_ObjectiveChecksDisabled = false;
u32 var8006ae78 = 0x00000000;
u32 var8006ae7c = 0x00000000;
u32 var8006ae80 = 0x00000000;
u32 var8006ae84 = 0x00000000;
u32 var8006ae88 = 0x00000000;
u32 var8006ae8c = 0x00000000;

u16 var8006ae90[] = {
	0x8000, 0x7eba, 0x7d74, 0x7c2d, 0x7ae7, 0x79a0, 0x7859, 0x7711,
	0x75c9, 0x7480, 0x7337, 0x71ec, 0x70a1, 0x6f55, 0x6e07, 0x6cb8,
	0x6b68, 0x6a17, 0x68c4, 0x6770, 0x661a, 0x64c1, 0x6367, 0x620b,
	0x60ad, 0x5f4c, 0x5de9, 0x5c83, 0x5b1a, 0x59ae, 0x583e, 0x56cb,
	0x5555, 0x53db, 0x525c, 0x50d9, 0x4f51, 0x4dc5, 0x4c32, 0x4a9a,
	0x48fc, 0x4757, 0x45ab, 0x43f7, 0x423a, 0x4075, 0x3ea5, 0x3ccb,
	0x3ae5, 0x38f1, 0x36ef, 0x34dc, 0x32b7, 0x307d, 0x2e2b, 0x2bbd,
	0x292e, 0x2678, 0x2391, 0x206c, 0x1cf6, 0x0000,
};

u16 var8006af0c[] = {
	0x1cf6, 0x1cbb, 0x1c80, 0x1c45, 0x1c08, 0x1bcc, 0x1b8f, 0x1b51,
	0x1b13, 0x1ad4, 0x1a95, 0x1a55, 0x1a14, 0x19d3, 0x1992, 0x194f,
	0x190c, 0x18c9, 0x1884, 0x183f, 0x17f9, 0x17b3, 0x176b, 0x1723,
	0x16da, 0x1690, 0x1645, 0x15f9, 0x15ac, 0x155e, 0x150f, 0x14be,
	0x146d, 0x141a, 0x13c6, 0x1370, 0x1319, 0x12c1, 0x1267, 0x120b,
	0x11ad, 0x114e, 0x10ec, 0x1088, 0x1022, 0x0fb9, 0x0f4d, 0x0ede,
	0x0e6c, 0x0df7, 0x0d7d, 0x0d00, 0x0c7d, 0x0bf4, 0x0b66, 0x0ad0,
	0x0a31, 0x0989, 0x08d3, 0x080e, 0x0734, 0x063d, 0x0518, 0x039a,
};

u16 var8006af8c[] = {
	0x039a, 0x031e, 0x028c, 0x01cd,
};

u32 var8006af94 = 0x00000000;
u32 var8006af98 = 0x00000000;
u32 var8006af9c = 0x00000000;
u32 var8006afa0 = 0x00000001;
u32 var8006afa4 = 0x00000002;
u32 var8006afa8 = 0x00000000;
u32 var8006afac = 0x00000000;
