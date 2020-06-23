#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "gvars/gvars.h"
#include "lib/lib_4a5e0.h"
#include "lib/lib_4a680.h"
#include "lib/lib_4ae00.h"
#include "types.h"

GLOBAL_ASM(
glabel func00052070
/*    52070:	3c03a460 */ 	lui	$v1,0xa460
/*    52074:	34630010 */ 	ori	$v1,$v1,0x10
/*    52078:	8c620000 */ 	lw	$v0,0x0($v1)
/*    5207c:	3c188000 */ 	lui	$t8,0x8000
/*    52080:	304e0003 */ 	andi	$t6,$v0,0x3
/*    52084:	11c00005 */ 	beqz	$t6,.L0005209c
/*    52088:	00000000 */ 	nop
/*    5208c:	8c620000 */ 	lw	$v0,0x0($v1)
.L00052090:
/*    52090:	304f0003 */ 	andi	$t7,$v0,0x3
/*    52094:	55e0fffe */ 	bnezl	$t7,.L00052090
/*    52098:	8c620000 */ 	lw	$v0,0x0($v1)
.L0005209c:
/*    5209c:	8f180308 */ 	lw	$t8,0x308($t8)
/*    520a0:	3c01a000 */ 	lui	$at,0xa000
/*    520a4:	00001025 */ 	or	$v0,$zero,$zero
/*    520a8:	0304c825 */ 	or	$t9,$t8,$a0
/*    520ac:	03214025 */ 	or	$t0,$t9,$at
/*    520b0:	8d090000 */ 	lw	$t1,0x0($t0)
/*    520b4:	03e00008 */ 	jr	$ra
/*    520b8:	aca90000 */ 	sw	$t1,0x0($a1)
/*    520bc:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func000520c0
/*    520c0:	27bdff70 */ 	addiu	$sp,$sp,-144
/*    520c4:	afb10020 */ 	sw	$s1,0x20($sp)
/*    520c8:	30a200ff */ 	andi	$v0,$a1,0xff
/*    520cc:	24030058 */ 	addiu	$v1,$zero,0x58
/*    520d0:	00808825 */ 	or	$s1,$a0,$zero
/*    520d4:	afbf002c */ 	sw	$ra,0x2c($sp)
/*    520d8:	afb30028 */ 	sw	$s3,0x28($sp)
/*    520dc:	afb20024 */ 	sw	$s2,0x24($sp)
/*    520e0:	afb0001c */ 	sw	$s0,0x1c($sp)
/*    520e4:	14620004 */ 	bne	$v1,$v0,.L000520f8
/*    520e8:	afa50094 */ 	sw	$a1,0x94($sp)
/*    520ec:	3c138006 */ 	lui	$s3,%hi(var80061344)
/*    520f0:	10000003 */ 	b	.L00052100
/*    520f4:	26731344 */ 	addiu	$s3,$s3,%lo(var80061344)
.L000520f8:
/*    520f8:	3c138006 */ 	lui	$s3,%hi(var80061330)
/*    520fc:	26731330 */ 	addiu	$s3,$s3,%lo(var80061330)
.L00052100:
/*    52100:	2401006f */ 	addiu	$at,$zero,0x6f
/*    52104:	14410003 */ 	bne	$v0,$at,.L00052114
/*    52108:	24100018 */ 	addiu	$s0,$zero,0x18
/*    5210c:	10000009 */ 	b	.L00052134
/*    52110:	24090008 */ 	addiu	$t1,$zero,0x8
.L00052114:
/*    52114:	24010078 */ 	addiu	$at,$zero,0x78
/*    52118:	10410005 */ 	beq	$v0,$at,.L00052130
/*    5211c:	24080010 */ 	addiu	$t0,$zero,0x10
/*    52120:	10620003 */ 	beq	$v1,$v0,.L00052130
/*    52124:	00000000 */ 	nop
/*    52128:	10000001 */ 	b	.L00052130
/*    5212c:	2408000a */ 	addiu	$t0,$zero,0xa
.L00052130:
/*    52130:	01004825 */ 	or	$t1,$t0,$zero
.L00052134:
/*    52134:	8e380000 */ 	lw	$t8,0x0($s1)
/*    52138:	8e390004 */ 	lw	$t9,0x4($s1)
/*    5213c:	24010064 */ 	addiu	$at,$zero,0x64
/*    52140:	afb80060 */ 	sw	$t8,0x60($sp)
/*    52144:	afb80040 */ 	sw	$t8,0x40($sp)
/*    52148:	afb90044 */ 	sw	$t9,0x44($sp)
/*    5214c:	10410004 */ 	beq	$v0,$at,.L00052160
/*    52150:	afb90064 */ 	sw	$t9,0x64($sp)
/*    52154:	24010069 */ 	addiu	$at,$zero,0x69
/*    52158:	54410010 */ 	bnel	$v0,$at,.L0005219c
/*    5215c:	8faa0060 */ 	lw	$t2,0x60($sp)
.L00052160:
/*    52160:	8fac0040 */ 	lw	$t4,0x40($sp)
/*    52164:	5d80000d */ 	bgtzl	$t4,.L0005219c
/*    52168:	8faa0060 */ 	lw	$t2,0x60($sp)
/*    5216c:	05800003 */ 	bltz	$t4,.L0005217c
/*    52170:	8fae0060 */ 	lw	$t6,0x60($sp)
/*    52174:	10000009 */ 	b	.L0005219c
/*    52178:	8faa0060 */ 	lw	$t2,0x60($sp)
.L0005217c:
/*    5217c:	8faf0064 */ 	lw	$t7,0x64($sp)
/*    52180:	01c0c027 */ 	nor	$t8,$t6,$zero
/*    52184:	2de10001 */ 	sltiu	$at,$t7,0x1
/*    52188:	0301c021 */ 	addu	$t8,$t8,$at
/*    5218c:	000fc823 */ 	negu	$t9,$t7
/*    52190:	afb90064 */ 	sw	$t9,0x64($sp)
/*    52194:	afb80060 */ 	sw	$t8,0x60($sp)
/*    52198:	8faa0060 */ 	lw	$t2,0x60($sp)
.L0005219c:
/*    5219c:	8fab0064 */ 	lw	$t3,0x64($sp)
/*    521a0:	24080017 */ 	addiu	$t0,$zero,0x17
/*    521a4:	15400006 */ 	bnez	$t2,.L000521c0
/*    521a8:	8fa40060 */ 	lw	$a0,0x60($sp)
/*    521ac:	55600005 */ 	bnezl	$t3,.L000521c4
/*    521b0:	24100017 */ 	addiu	$s0,$zero,0x17
/*    521b4:	8e2c0024 */ 	lw	$t4,0x24($s1)
/*    521b8:	51800010 */ 	beqzl	$t4,.L000521fc
/*    521bc:	27b20078 */ 	addiu	$s2,$sp,0x78
.L000521c0:
/*    521c0:	24100017 */ 	addiu	$s0,$zero,0x17
.L000521c4:
/*    521c4:	8fa50064 */ 	lw	$a1,0x64($sp)
/*    521c8:	01203825 */ 	or	$a3,$t1,$zero
/*    521cc:	000937c3 */ 	sra	$a2,$t1,0x1f
/*    521d0:	afa8004c */ 	sw	$t0,0x4c($sp)
/*    521d4:	0c012b8b */ 	jal	func0004ae2c
/*    521d8:	afa90070 */ 	sw	$t1,0x70($sp)
/*    521dc:	8fa8004c */ 	lw	$t0,0x4c($sp)
/*    521e0:	00737021 */ 	addu	$t6,$v1,$s3
/*    521e4:	91cf0000 */ 	lbu	$t7,0x0($t6)
/*    521e8:	27b20078 */ 	addiu	$s2,$sp,0x78
/*    521ec:	8fa90070 */ 	lw	$t1,0x70($sp)
/*    521f0:	0248c021 */ 	addu	$t8,$s2,$t0
/*    521f4:	a30f0000 */ 	sb	$t7,0x0($t8)
/*    521f8:	27b20078 */ 	addiu	$s2,$sp,0x78
.L000521fc:
/*    521fc:	8fa40060 */ 	lw	$a0,0x60($sp)
/*    52200:	8fa50064 */ 	lw	$a1,0x64($sp)
/*    52204:	01203825 */ 	or	$a3,$t1,$zero
/*    52208:	000937c3 */ 	sra	$a2,$t1,0x1f
/*    5220c:	0c012b9a */ 	jal	func0004ae68
/*    52210:	afa90070 */ 	sw	$t1,0x70($sp)
/*    52214:	8fa90070 */ 	lw	$t1,0x70($sp)
/*    52218:	ae230004 */ 	sw	$v1,0x4($s1)
/*    5221c:	0440002b */ 	bltz	$v0,.L000522cc
/*    52220:	ae220000 */ 	sw	$v0,0x0($s1)
/*    52224:	1c400003 */ 	bgtz	$v0,.L00052234
/*    52228:	00000000 */ 	nop
/*    5222c:	50600028 */ 	beqzl	$v1,.L000522d0
/*    52230:	240c0018 */ 	addiu	$t4,$zero,0x18
.L00052234:
/*    52234:	1a000025 */ 	blez	$s0,.L000522cc
/*    52238:	000967c3 */ 	sra	$t4,$t1,0x1f
/*    5223c:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*    52240:	8e2b0004 */ 	lw	$t3,0x4($s1)
/*    52244:	afa9003c */ 	sw	$t1,0x3c($sp)
/*    52248:	afac0038 */ 	sw	$t4,0x38($sp)
/*    5224c:	afaa0040 */ 	sw	$t2,0x40($sp)
/*    52250:	afab0044 */ 	sw	$t3,0x44($sp)
/*    52254:	8fae0038 */ 	lw	$t6,0x38($sp)
.L00052258:
/*    52258:	8faf003c */ 	lw	$t7,0x3c($sp)
/*    5225c:	27a40050 */ 	addiu	$a0,$sp,0x50
/*    52260:	8fa60040 */ 	lw	$a2,0x40($sp)
/*    52264:	8fa70044 */ 	lw	$a3,0x44($sp)
/*    52268:	afae0010 */ 	sw	$t6,0x10($sp)
/*    5226c:	0c0129a0 */ 	jal	func0004a680
/*    52270:	afaf0014 */ 	sw	$t7,0x14($sp)
/*    52274:	8fb80050 */ 	lw	$t8,0x50($sp)
/*    52278:	8fb90054 */ 	lw	$t9,0x54($sp)
/*    5227c:	2604ffff */ 	addiu	$a0,$s0,-1
/*    52280:	ae380000 */ 	sw	$t8,0x0($s1)
/*    52284:	ae390004 */ 	sw	$t9,0x4($s1)
/*    52288:	8fab005c */ 	lw	$t3,0x5c($sp)
/*    5228c:	02447821 */ 	addu	$t7,$s2,$a0
/*    52290:	00808025 */ 	or	$s0,$a0,$zero
/*    52294:	01736821 */ 	addu	$t5,$t3,$s3
/*    52298:	91ae0000 */ 	lbu	$t6,0x0($t5)
/*    5229c:	a1ee0000 */ 	sb	$t6,0x0($t7)
/*    522a0:	8e380000 */ 	lw	$t8,0x0($s1)
/*    522a4:	8e390004 */ 	lw	$t9,0x4($s1)
/*    522a8:	afb80040 */ 	sw	$t8,0x40($sp)
/*    522ac:	07000007 */ 	bltz	$t8,.L000522cc
/*    522b0:	afb90044 */ 	sw	$t9,0x44($sp)
/*    522b4:	1f000003 */ 	bgtz	$t8,.L000522c4
/*    522b8:	00000000 */ 	nop
/*    522bc:	53200004 */ 	beqzl	$t9,.L000522d0
/*    522c0:	240c0018 */ 	addiu	$t4,$zero,0x18
.L000522c4:
/*    522c4:	5e00ffe4 */ 	bgtzl	$s0,.L00052258
/*    522c8:	8fae0038 */ 	lw	$t6,0x38($sp)
.L000522cc:
/*    522cc:	240c0018 */ 	addiu	$t4,$zero,0x18
.L000522d0:
/*    522d0:	01903023 */ 	subu	$a2,$t4,$s0
/*    522d4:	ae260014 */ 	sw	$a2,0x14($s1)
/*    522d8:	8e240008 */ 	lw	$a0,0x8($s1)
/*    522dc:	0c012978 */ 	jal	memcpy
/*    522e0:	02502821 */ 	addu	$a1,$s2,$s0
/*    522e4:	8e250014 */ 	lw	$a1,0x14($s1)
/*    522e8:	8e240024 */ 	lw	$a0,0x24($s1)
/*    522ec:	00a4082a */ 	slt	$at,$a1,$a0
/*    522f0:	10200002 */ 	beqz	$at,.L000522fc
/*    522f4:	00856823 */ 	subu	$t5,$a0,$a1
/*    522f8:	ae2d0010 */ 	sw	$t5,0x10($s1)
.L000522fc:
/*    522fc:	04830010 */ 	bgezl	$a0,.L00052340
/*    52300:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*    52304:	8e2e0030 */ 	lw	$t6,0x30($s1)
/*    52308:	24010010 */ 	addiu	$at,$zero,0x10
/*    5230c:	31cf0014 */ 	andi	$t7,$t6,0x14
/*    52310:	55e1000b */ 	bnel	$t7,$at,.L00052340
/*    52314:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*    52318:	8e380028 */ 	lw	$t8,0x28($s1)
/*    5231c:	8e39000c */ 	lw	$t9,0xc($s1)
/*    52320:	8e220010 */ 	lw	$v0,0x10($s1)
/*    52324:	03195023 */ 	subu	$t2,$t8,$t9
/*    52328:	01425823 */ 	subu	$t3,$t2,$v0
/*    5232c:	01658023 */ 	subu	$s0,$t3,$a1
/*    52330:	1a000002 */ 	blez	$s0,.L0005233c
/*    52334:	00506021 */ 	addu	$t4,$v0,$s0
/*    52338:	ae2c0010 */ 	sw	$t4,0x10($s1)
.L0005233c:
/*    5233c:	8fbf002c */ 	lw	$ra,0x2c($sp)
.L00052340:
/*    52340:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*    52344:	8fb10020 */ 	lw	$s1,0x20($sp)
/*    52348:	8fb20024 */ 	lw	$s2,0x24($sp)
/*    5234c:	8fb30028 */ 	lw	$s3,0x28($sp)
/*    52350:	03e00008 */ 	jr	$ra
/*    52354:	27bd0090 */ 	addiu	$sp,$sp,0x90
/*    52358:	00000000 */ 	nop
/*    5235c:	00000000 */ 	nop
);