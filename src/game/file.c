#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/file.h"
#include "game/stubs/game_175f50.h"
#include "gvars/gvars.h"
#include "lib/lib_074f0.h"
#include "lib/lib_0d0a0.h"
#include "lib/memory.h"
#include "lib/rng.h"
#include "types.h"

void *fileGetRomAddress(s32 filenum)
{
	return filetable[filenum];
}

u32 fileGetRomSizeByTableAddress(u32 *filetableaddr)
{
	u32 difference;

	if (filetableaddr[1]) {
		difference = filetableaddr[1] - filetableaddr[0];
	} else {
		difference = 0;
	}

	return difference;
}

s32 fileGetRomSizeByFileNum(s32 filenum)
{
	return fileGetRomSizeByTableAddress((u32 *)&filetable[filenum]);
}

GLOBAL_ASM(
glabel func0f166ea8
/*  f166ea8:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f166eac:	03e00008 */ 	jr	$ra
/*  f166eb0:	00001025 */ 	or	$v0,$zero,$zero
);

GLOBAL_ASM(
glabel func0f166eb4
/*  f166eb4:	27bdebd0 */ 	addiu	$sp,$sp,-5168
/*  f166eb8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f166ebc:	afa41430 */ 	sw	$a0,0x1430($sp)
/*  f166ec0:	afa51434 */ 	sw	$a1,0x1434($sp)
/*  f166ec4:	afa61438 */ 	sw	$a2,0x1438($sp)
/*  f166ec8:	afa7143c */ 	sw	$a3,0x143c($sp)
/*  f166ecc:	0fc59b95 */ 	jal	fileGetRomSizeByTableAddress
/*  f166ed0:	00c02025 */ 	or	$a0,$a2,$zero
/*  f166ed4:	8fa41434 */ 	lw	$a0,0x1434($sp)
/*  f166ed8:	8fa71430 */ 	lw	$a3,0x1430($sp)
/*  f166edc:	8fa91438 */ 	lw	$t1,0x1438($sp)
/*  f166ee0:	14800006 */ 	bnez	$a0,.L0f166efc
/*  f166ee4:	00403025 */ 	or	$a2,$v0,$zero
/*  f166ee8:	00e02025 */ 	or	$a0,$a3,$zero
/*  f166eec:	0c003504 */ 	jal	func0000d410
/*  f166ef0:	8d250000 */ 	lw	$a1,0x0($t1)
/*  f166ef4:	1000001c */ 	b	.L0f166f68
/*  f166ef8:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f166efc:
/*  f166efc:	2408fff8 */ 	addiu	$t0,$zero,-8
/*  f166f00:	244e0007 */ 	addiu	$t6,$v0,0x7
/*  f166f04:	01c87824 */ 	and	$t7,$t6,$t0
/*  f166f08:	00e41821 */ 	addu	$v1,$a3,$a0
/*  f166f0c:	006fc023 */ 	subu	$t8,$v1,$t7
/*  f166f10:	0307c823 */ 	subu	$t9,$t8,$a3
/*  f166f14:	2f210008 */ 	sltiu	$at,$t9,0x8
/*  f166f18:	10200004 */ 	beqz	$at,.L0f166f2c
/*  f166f1c:	24cb0007 */ 	addiu	$t3,$a2,0x7
/*  f166f20:	8faa143c */ 	lw	$t2,0x143c($sp)
/*  f166f24:	1000000f */ 	b	.L0f166f64
/*  f166f28:	ad400000 */ 	sw	$zero,0x0($t2)
.L0f166f2c:
/*  f166f2c:	01686024 */ 	and	$t4,$t3,$t0
/*  f166f30:	006c2023 */ 	subu	$a0,$v1,$t4
/*  f166f34:	8d250000 */ 	lw	$a1,0x0($t1)
/*  f166f38:	0c003504 */ 	jal	func0000d410
/*  f166f3c:	afa4001c */ 	sw	$a0,0x1c($sp)
/*  f166f40:	8fa4001c */ 	lw	$a0,0x1c($sp)
/*  f166f44:	8fa51430 */ 	lw	$a1,0x1430($sp)
/*  f166f48:	0c001d3c */ 	jal	func000074f0
/*  f166f4c:	27a6002c */ 	addiu	$a2,$sp,0x2c
/*  f166f50:	8fb8143c */ 	lw	$t8,0x143c($sp)
/*  f166f54:	244d000f */ 	addiu	$t5,$v0,0xf
/*  f166f58:	35ae000f */ 	ori	$t6,$t5,0xf
/*  f166f5c:	39cf000f */ 	xori	$t7,$t6,0xf
/*  f166f60:	af0f0000 */ 	sw	$t7,0x0($t8)
.L0f166f64:
/*  f166f64:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f166f68:
/*  f166f68:	27bd1430 */ 	addiu	$sp,$sp,0x1430
/*  f166f6c:	03e00008 */ 	jr	$ra
/*  f166f70:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f166f74
/*  f166f74:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f166f78:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f166f7c:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f166f80:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f166f84:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f166f88:	3c11800a */ 	lui	$s1,%hi(g_FileInfo)
/*  f166f8c:	3c128008 */ 	lui	$s2,%hi(filetable)
/*  f166f90:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f166f94:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f166f98:	26522060 */ 	addiu	$s2,$s2,%lo(filetable)
/*  f166f9c:	26316680 */ 	addiu	$s1,$s1,%lo(g_FileInfo)
/*  f166fa0:	24100001 */ 	addiu	$s0,$zero,0x1
/*  f166fa4:	241407de */ 	addiu	$s4,$zero,0x7de
/*  f166fa8:	001070c0 */ 	sll	$t6,$s0,0x3
.L0f166fac:
/*  f166fac:	022e1021 */ 	addu	$v0,$s1,$t6
/*  f166fb0:	00107880 */ 	sll	$t7,$s0,0x2
/*  f166fb4:	ac400000 */ 	sw	$zero,0x0($v0)
/*  f166fb8:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f166fbc:	0fc59b95 */ 	jal	fileGetRomSizeByTableAddress
/*  f166fc0:	024f2021 */ 	addu	$a0,$s2,$t7
/*  f166fc4:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f166fc8:	5614fff8 */ 	bnel	$s0,$s4,.L0f166fac
/*  f166fcc:	001070c0 */ 	sll	$t6,$s0,0x3
/*  f166fd0:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f166fd4:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f166fd8:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f166fdc:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f166fe0:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f166fe4:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f166fe8:	03e00008 */ 	jr	$ra
/*  f166fec:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

void func0f166ff0(u16 filenum, void *memaddr, s32 offset, u32 len)
{
	u32 stack[2];

	if (fileGetRomSizeByTableAddress((u32 *)&filetable[filenum])) {
		func0000d410(memaddr, (void *)((u32)filetable[filenum] + offset), len);
	}
}

GLOBAL_ASM(
glabel func0f167054
/*  f167054:	27bdff78 */ 	addiu	$sp,$sp,-136
/*  f167058:	3c0f8008 */ 	lui	$t7,%hi(filetable)
/*  f16705c:	25ef2060 */ 	addiu	$t7,$t7,%lo(filetable)
/*  f167060:	00047080 */ 	sll	$t6,$a0,0x2
/*  f167064:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f167068:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f16706c:	01cf2021 */ 	addu	$a0,$t6,$t7
/*  f167070:	8c850000 */ 	lw	$a1,0x0($a0)
/*  f167074:	27b00044 */ 	addiu	$s0,$sp,0x44
/*  f167078:	2401fff0 */ 	addiu	$at,$zero,-16
/*  f16707c:	14a0000c */ 	bnez	$a1,.L0f1670b0
/*  f167080:	24060040 */ 	addiu	$a2,$zero,0x40
/*  f167084:	0fc59baa */ 	jal	func0f166ea8
/*  f167088:	00000000 */ 	nop
/*  f16708c:	27b00044 */ 	addiu	$s0,$sp,0x44
/*  f167090:	2401fff0 */ 	addiu	$at,$zero,-16
/*  f167094:	02012824 */ 	and	$a1,$s0,$at
/*  f167098:	00a08025 */ 	or	$s0,$a1,$zero
/*  f16709c:	00402025 */ 	or	$a0,$v0,$zero
/*  f1670a0:	0fc5d7d6 */ 	jal	stub0f175f58
/*  f1670a4:	24060010 */ 	addiu	$a2,$zero,0x10
/*  f1670a8:	10000004 */ 	b	.L0f1670bc
/*  f1670ac:	00000000 */ 	nop
.L0f1670b0:
/*  f1670b0:	02012024 */ 	and	$a0,$s0,$at
/*  f1670b4:	0c003504 */ 	jal	func0000d410
/*  f1670b8:	00808025 */ 	or	$s0,$a0,$zero
.L0f1670bc:
/*  f1670bc:	0c002277 */ 	jal	func000089dc
/*  f1670c0:	02002025 */ 	or	$a0,$s0,$zero
/*  f1670c4:	10400009 */ 	beqz	$v0,.L0f1670ec
/*  f1670c8:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f1670cc:	92090002 */ 	lbu	$t1,0x2($s0)
/*  f1670d0:	92080004 */ 	lbu	$t0,0x4($s0)
/*  f1670d4:	920c0003 */ 	lbu	$t4,0x3($s0)
/*  f1670d8:	00095400 */ 	sll	$t2,$t1,0x10
/*  f1670dc:	010a5825 */ 	or	$t3,$t0,$t2
/*  f1670e0:	000c6a00 */ 	sll	$t5,$t4,0x8
/*  f1670e4:	10000002 */ 	b	.L0f1670f0
/*  f1670e8:	016d1025 */ 	or	$v0,$t3,$t5
.L0f1670ec:
/*  f1670ec:	00001025 */ 	or	$v0,$zero,$zero
.L0f1670f0:
/*  f1670f0:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f1670f4:	03e00008 */ 	jr	$ra
/*  f1670f8:	27bd0088 */ 	addiu	$sp,$sp,0x88
);

GLOBAL_ASM(
glabel func0f1670fc
/*  f1670fc:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f167100:	24010011 */ 	addiu	$at,$zero,0x11
/*  f167104:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f167108:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f16710c:	afa40030 */ 	sw	$a0,0x30($sp)
/*  f167110:	10a10004 */ 	beq	$a1,$at,.L0f167124
/*  f167114:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f167118:	24010022 */ 	addiu	$at,$zero,0x22
/*  f16711c:	14a1002c */ 	bne	$a1,$at,.L0f1671d0
/*  f167120:	00000000 */ 	nop
.L0f167124:
/*  f167124:	8faf0030 */ 	lw	$t7,0x30($sp)
/*  f167128:	3c19800a */ 	lui	$t9,%hi(g_FileInfo)
/*  f16712c:	27396680 */ 	addiu	$t9,$t9,%lo(g_FileInfo)
/*  f167130:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f167134:	03198021 */ 	addu	$s0,$t8,$t9
/*  f167138:	8e080000 */ 	lw	$t0,0x0($s0)
/*  f16713c:	5500000e */ 	bnezl	$t0,.L0f167178
/*  f167140:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f167144:	0fc59c15 */ 	jal	func0f167054
/*  f167148:	01e02025 */ 	or	$a0,$t7,$zero
/*  f16714c:	24490020 */ 	addiu	$t1,$v0,0x20
/*  f167150:	2401fff0 */ 	addiu	$at,$zero,-16
/*  f167154:	01215024 */ 	and	$t2,$t1,$at
/*  f167158:	ae0a0000 */ 	sw	$t2,0x0($s0)
/*  f16715c:	8fab0034 */ 	lw	$t3,0x34($sp)
/*  f167160:	24010011 */ 	addiu	$at,$zero,0x11
/*  f167164:	15610003 */ 	bne	$t3,$at,.L0f167174
/*  f167168:	34018000 */ 	dli	$at,0x8000
/*  f16716c:	01416821 */ 	addu	$t5,$t2,$at
/*  f167170:	ae0d0000 */ 	sw	$t5,0x0($s0)
.L0f167174:
/*  f167174:	8e040000 */ 	lw	$a0,0x0($s0)
.L0f167178:
/*  f167178:	0c0048f2 */ 	jal	malloc
/*  f16717c:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f167180:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f167184:	8e050000 */ 	lw	$a1,0x0($s0)
/*  f167188:	3c198008 */ 	lui	$t9,%hi(filetable)
/*  f16718c:	27392060 */ 	addiu	$t9,$t9,%lo(filetable)
/*  f167190:	ae050004 */ 	sw	$a1,0x4($s0)
/*  f167194:	8fae0030 */ 	lw	$t6,0x30($sp)
/*  f167198:	00402025 */ 	or	$a0,$v0,$zero
/*  f16719c:	02003825 */ 	or	$a3,$s0,$zero
/*  f1671a0:	000ec080 */ 	sll	$t8,$t6,0x2
/*  f1671a4:	0fc59bad */ 	jal	func0f166eb4
/*  f1671a8:	03193021 */ 	addu	$a2,$t8,$t9
/*  f1671ac:	8fa80034 */ 	lw	$t0,0x34($sp)
/*  f1671b0:	24010011 */ 	addiu	$at,$zero,0x11
/*  f1671b4:	8fa40024 */ 	lw	$a0,0x24($sp)
/*  f1671b8:	11010007 */ 	beq	$t0,$at,.L0f1671d8
/*  f1671bc:	24060004 */ 	addiu	$a2,$zero,0x4
/*  f1671c0:	0c00490c */ 	jal	memReallocate
/*  f1671c4:	8e050000 */ 	lw	$a1,0x0($s0)
/*  f1671c8:	10000004 */ 	b	.L0f1671dc
/*  f1671cc:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f1671d0:
/*  f1671d0:	1000ffff */ 	b	.L0f1671d0
/*  f1671d4:	00000000 */ 	nop
.L0f1671d8:
/*  f1671d8:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f1671dc:
/*  f1671dc:	8fa20024 */ 	lw	$v0,0x24($sp)
/*  f1671e0:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f1671e4:	03e00008 */ 	jr	$ra
/*  f1671e8:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f1671ec:	00047080 */ 	sll	$t6,$a0,0x2
/*  f1671f0:	3c018008 */ 	lui	$at,%hi(filetable)
/*  f1671f4:	002e0821 */ 	addu	$at,$at,$t6
/*  f1671f8:	03e00008 */ 	jr	$ra
/*  f1671fc:	ac202060 */ 	sw	$zero,%lo(filetable)($at)
);

//void *func0f1670fc(u32 filenum, u32 arg1)
//{
//	struct fileinfo *info;
//	u32 stack;
//	void *ptr;
//
//	if (arg1 == 0x11 || arg1 == 0x22) {
//		// 124
//		info = &g_FileInfo[filenum];
//
//		// 13c
//		if (info->unk00 == 0) {
//			info->unk00 = (func0f167054(filenum) + 0x20) & 0xfffffff0;
//
//			// 164
//			if (arg1 == 0x11) {
//				info->unk00 += 0x8000;
//			}
//		}
//
//		// 174
//		ptr = malloc(info->unk00, MEMPOOL_STAGE);
//		info->unk04 = info->unk00;
//		func0f166eb4(ptr, info->unk00, &filetable[filenum], info);
//
//		if (arg1 != 0x11) {
//			memReallocate(ptr, info->unk00, MEMPOOL_STAGE);
//		}
//	} else {
//		while (true) {
//			// empty
//		}
//	}
//
//	return ptr;
//}

GLOBAL_ASM(
glabel func0f167200
/*  f167200:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f167204:	24010011 */ 	addiu	$at,$zero,0x11
/*  f167208:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16720c:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f167210:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f167214:	10a10004 */ 	beq	$a1,$at,.L0f167228
/*  f167218:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f16721c:	24010022 */ 	addiu	$at,$zero,0x22
/*  f167220:	14a10012 */ 	bne	$a1,$at,.L0f16726c
/*  f167224:	00000000 */ 	nop
.L0f167228:
/*  f167228:	8fae0018 */ 	lw	$t6,0x18($sp)
/*  f16722c:	8fb90024 */ 	lw	$t9,0x24($sp)
/*  f167230:	3c18800a */ 	lui	$t8,%hi(g_FileInfo)
/*  f167234:	27186680 */ 	addiu	$t8,$t8,%lo(g_FileInfo)
/*  f167238:	000e78c0 */ 	sll	$t7,$t6,0x3
/*  f16723c:	01f83821 */ 	addu	$a3,$t7,$t8
/*  f167240:	acf90004 */ 	sw	$t9,0x4($a3)
/*  f167244:	8fa80018 */ 	lw	$t0,0x18($sp)
/*  f167248:	3c0a8008 */ 	lui	$t2,%hi(filetable)
/*  f16724c:	254a2060 */ 	addiu	$t2,$t2,%lo(filetable)
/*  f167250:	00084880 */ 	sll	$t1,$t0,0x2
/*  f167254:	012a3021 */ 	addu	$a2,$t1,$t2
/*  f167258:	8fa50024 */ 	lw	$a1,0x24($sp)
/*  f16725c:	0fc59bad */ 	jal	func0f166eb4
/*  f167260:	8fa40020 */ 	lw	$a0,0x20($sp)
/*  f167264:	10000003 */ 	b	.L0f167274
/*  f167268:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16726c:
/*  f16726c:	1000ffff */ 	b	.L0f16726c
/*  f167270:	00000000 */ 	nop
.L0f167274:
/*  f167274:	8fa20020 */ 	lw	$v0,0x20($sp)
/*  f167278:	03e00008 */ 	jr	$ra
/*  f16727c:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

// Mismatch: Reordered instructions, most likely related to debug ifdefs.
//void *func0f167200(s32 filenum, s32 arg1, u8 *ptr, u32 size)
//{
//	if (arg1 == 0x11 || arg1 == 0x22) {
//		g_FileInfo[filenum].unk04 = size;
//
//		func0f166eb4(ptr, size, &filetable[filenum], &g_FileInfo[filenum]);
//	} else {
//		while (1);
//	}
//
//	return ptr;
//}

u32 fileGetSize(s32 filenum)
{
	return g_FileInfo[filenum].size;
}

u32 fileGetUnk04(s32 filenum)
{
	return g_FileInfo[filenum].unk04;
}

void func0f1672a8(s32 filenum, void *ptr, u32 size, bool resizing)
{
	g_FileInfo[filenum].size = size;
	g_FileInfo[filenum].unk04 = size;

	if (resizing) {
		memReallocate((u32) ptr, g_FileInfo[filenum].size, MEMPOOL_STAGE);
	}
}

void func0f1672f0(u8 arg0)
{
	s32 i;

	for (i = 1; i < 2014; i++) {
		if (arg0 == 4) {
			g_FileInfo[i].size = 0;
		}
	}
}

void func0f167330(void)
{
	func0f1672f0(5);
}