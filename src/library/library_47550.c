#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_020df0.h"
#include "gvars/gvars.h"
#include "types.h"

GLOBAL_ASM(
glabel func00047550
/*    47550:	27bdff30 */ 	addiu	$sp,$sp,-208
/*    47554:	03a04025 */ 	or	$t0,$sp,$zero
/*    47558:	250900d0 */ 	addiu	$t1,$t0,0xd0
.L0004755c:
/*    4755c:	ad000000 */ 	sw	$zero,0x0($t0)
/*    47560:	ad000004 */ 	sw	$zero,0x4($t0)
/*    47564:	ad000008 */ 	sw	$zero,0x8($t0)
/*    47568:	ad00000c */ 	sw	$zero,0xc($t0)
/*    4756c:	25080010 */ 	addiu	$t0,$t0,0x10
/*    47570:	1509fffa */ 	bne	$t0,$t1,.L0004755c
/*    47574:	00000000 */ 	sll	$zero,$zero,0x0
/*    47578:	00805025 */ 	or	$t2,$a0,$zero
/*    4757c:	03a05825 */ 	or	$t3,$sp,$zero
/*    47580:	256c0040 */ 	addiu	$t4,$t3,0x40
/*    47584:	01807025 */ 	or	$t6,$t4,$zero
/*    47588:	240d0003 */ 	addiu	$t5,$zero,0x3
.L0004758c:
/*    4758c:	c5440014 */ 	lwc1	$f4,0x14($t2)
/*    47590:	c5460010 */ 	lwc1	$f6,0x10($t2)
/*    47594:	46062100 */ 	add.s	$f4,$f4,$f6
/*    47598:	c5480010 */ 	lwc1	$f8,0x10($t2)
/*    4759c:	c54a000c */ 	lwc1	$f10,0xc($t2)
/*    475a0:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    475a4:	e5440014 */ 	swc1	$f4,0x14($t2)
/*    475a8:	e5480010 */ 	swc1	$f8,0x10($t2)
/*    475ac:	c544000c */ 	lwc1	$f4,0xc($t2)
/*    475b0:	c5460008 */ 	lwc1	$f6,0x8($t2)
/*    475b4:	46062100 */ 	add.s	$f4,$f4,$f6
/*    475b8:	c5480008 */ 	lwc1	$f8,0x8($t2)
/*    475bc:	c54a0004 */ 	lwc1	$f10,0x4($t2)
/*    475c0:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    475c4:	e544000c */ 	swc1	$f4,0xc($t2)
/*    475c8:	e5480008 */ 	swc1	$f8,0x8($t2)
/*    475cc:	c5440004 */ 	lwc1	$f4,0x4($t2)
/*    475d0:	c5460000 */ 	lwc1	$f6,0x0($t2)
/*    475d4:	46062100 */ 	add.s	$f4,$f4,$f6
/*    475d8:	c5480014 */ 	lwc1	$f8,0x14($t2)
/*    475dc:	c54a000c */ 	lwc1	$f10,0xc($t2)
/*    475e0:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    475e4:	e5440004 */ 	swc1	$f4,0x4($t2)
/*    475e8:	e5480014 */ 	swc1	$f8,0x14($t2)
/*    475ec:	c544000c */ 	lwc1	$f4,0xc($t2)
/*    475f0:	c5460004 */ 	lwc1	$f6,0x4($t2)
/*    475f4:	46062100 */ 	add.s	$f4,$f4,$f6
/*    475f8:	e544000c */ 	swc1	$f4,0xc($t2)
/*    475fc:	c5440008 */ 	lwc1	$f4,0x8($t2)
/*    47600:	3c017006 */ 	lui	$at,0x7006
/*    47604:	c4269d9c */ 	lwc1	$f6,-0x6264($at)
/*    47608:	46062182 */ 	mul.s	$f6,$f4,$f6
/*    4760c:	00000000 */ 	sll	$zero,$zero,0x0
/*    47610:	c5480010 */ 	lwc1	$f8,0x10($t2)
/*    47614:	3c013f00 */ 	lui	$at,0x3f00
/*    47618:	44815000 */ 	mtc1	$at,$f10
/*    4761c:	00000000 */ 	sll	$zero,$zero,0x0
/*    47620:	c5500000 */ 	lwc1	$f16,0x0($t2)
/*    47624:	460a4282 */ 	mul.s	$f10,$f8,$f10
/*    47628:	00000000 */ 	sll	$zero,$zero,0x0
/*    4762c:	460a8480 */ 	add.s	$f18,$f16,$f10
/*    47630:	46088001 */ 	sub.s	$f0,$f16,$f8
/*    47634:	e5600004 */ 	swc1	$f0,0x4($t3)
/*    47638:	46069000 */ 	add.s	$f0,$f18,$f6
/*    4763c:	e5600000 */ 	swc1	$f0,0x0($t3)
/*    47640:	46069001 */ 	sub.s	$f0,$f18,$f6
/*    47644:	e5600008 */ 	swc1	$f0,0x8($t3)
/*    47648:	c544000c */ 	lwc1	$f4,0xc($t2)
/*    4764c:	3c017006 */ 	lui	$at,0x7006
/*    47650:	c4269da0 */ 	lwc1	$f6,-0x6260($at)
/*    47654:	46062182 */ 	mul.s	$f6,$f4,$f6
/*    47658:	00000000 */ 	sll	$zero,$zero,0x0
/*    4765c:	c5480014 */ 	lwc1	$f8,0x14($t2)
/*    47660:	3c013f00 */ 	lui	$at,0x3f00
/*    47664:	44815000 */ 	mtc1	$at,$f10
/*    47668:	00000000 */ 	sll	$zero,$zero,0x0
/*    4766c:	c5500004 */ 	lwc1	$f16,0x4($t2)
/*    47670:	460a4282 */ 	mul.s	$f10,$f8,$f10
/*    47674:	00000000 */ 	sll	$zero,$zero,0x0
/*    47678:	460a8480 */ 	add.s	$f18,$f16,$f10
/*    4767c:	46088001 */ 	sub.s	$f0,$f16,$f8
/*    47680:	e5600010 */ 	swc1	$f0,0x10($t3)
/*    47684:	46069000 */ 	add.s	$f0,$f18,$f6
/*    47688:	e5600014 */ 	swc1	$f0,0x14($t3)
/*    4768c:	46069001 */ 	sub.s	$f0,$f18,$f6
/*    47690:	e560000c */ 	swc1	$f0,0xc($t3)
/*    47694:	c564000c */ 	lwc1	$f4,0xc($t3)
/*    47698:	3c017006 */ 	lui	$at,0x7006
/*    4769c:	c4269da4 */ 	lwc1	$f6,-0x625c($at)
/*    476a0:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    476a4:	00000000 */ 	sll	$zero,$zero,0x0
/*    476a8:	c5680010 */ 	lwc1	$f8,0x10($t3)
/*    476ac:	3c017006 */ 	lui	$at,0x7006
/*    476b0:	c42a9da8 */ 	lwc1	$f10,-0x6258($at)
/*    476b4:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    476b8:	00000000 */ 	sll	$zero,$zero,0x0
/*    476bc:	e564000c */ 	swc1	$f4,0xc($t3)
/*    476c0:	e5680010 */ 	swc1	$f8,0x10($t3)
/*    476c4:	c5640014 */ 	lwc1	$f4,0x14($t3)
/*    476c8:	3c017006 */ 	lui	$at,0x7006
/*    476cc:	c4269dac */ 	lwc1	$f6,-0x6254($at)
/*    476d0:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    476d4:	00000000 */ 	sll	$zero,$zero,0x0
/*    476d8:	e5640014 */ 	swc1	$f4,0x14($t3)
/*    476dc:	c5640000 */ 	lwc1	$f4,0x0($t3)
/*    476e0:	c5660014 */ 	lwc1	$f6,0x14($t3)
/*    476e4:	46062200 */ 	add.s	$f8,$f4,$f6
/*    476e8:	e5680000 */ 	swc1	$f8,0x0($t3)
/*    476ec:	46062281 */ 	sub.s	$f10,$f4,$f6
/*    476f0:	e56a0014 */ 	swc1	$f10,0x14($t3)
/*    476f4:	c5640004 */ 	lwc1	$f4,0x4($t3)
/*    476f8:	c5660010 */ 	lwc1	$f6,0x10($t3)
/*    476fc:	46062200 */ 	add.s	$f8,$f4,$f6
/*    47700:	e5680004 */ 	swc1	$f8,0x4($t3)
/*    47704:	46062201 */ 	sub.s	$f8,$f4,$f6
/*    47708:	e5680010 */ 	swc1	$f8,0x10($t3)
/*    4770c:	c5640008 */ 	lwc1	$f4,0x8($t3)
/*    47710:	c566000c */ 	lwc1	$f6,0xc($t3)
/*    47714:	46062200 */ 	add.s	$f8,$f4,$f6
/*    47718:	e5680008 */ 	swc1	$f8,0x8($t3)
/*    4771c:	46062201 */ 	sub.s	$f8,$f4,$f6
/*    47720:	e568000c */ 	swc1	$f8,0xc($t3)
/*    47724:	c5640000 */ 	lwc1	$f4,0x0($t3)
/*    47728:	3c017006 */ 	lui	$at,0x7006
/*    4772c:	c4269db0 */ 	lwc1	$f6,-0x6250($at)
/*    47730:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    47734:	00000000 */ 	sll	$zero,$zero,0x0
/*    47738:	c5680004 */ 	lwc1	$f8,0x4($t3)
/*    4773c:	3c017006 */ 	lui	$at,0x7006
/*    47740:	c42a9db4 */ 	lwc1	$f10,-0x624c($at)
/*    47744:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    47748:	00000000 */ 	sll	$zero,$zero,0x0
/*    4774c:	e5640000 */ 	swc1	$f4,0x0($t3)
/*    47750:	e5680004 */ 	swc1	$f8,0x4($t3)
/*    47754:	c5640008 */ 	lwc1	$f4,0x8($t3)
/*    47758:	3c017006 */ 	lui	$at,0x7006
/*    4775c:	c4269db8 */ 	lwc1	$f6,-0x6248($at)
/*    47760:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    47764:	00000000 */ 	sll	$zero,$zero,0x0
/*    47768:	c568000c */ 	lwc1	$f8,0xc($t3)
/*    4776c:	3c017006 */ 	lui	$at,0x7006
/*    47770:	c42a9dbc */ 	lwc1	$f10,-0x6244($at)
/*    47774:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    47778:	00000000 */ 	sll	$zero,$zero,0x0
/*    4777c:	e5640008 */ 	swc1	$f4,0x8($t3)
/*    47780:	e568000c */ 	swc1	$f8,0xc($t3)
/*    47784:	c5640010 */ 	lwc1	$f4,0x10($t3)
/*    47788:	3c017006 */ 	lui	$at,0x7006
/*    4778c:	c4269dc0 */ 	lwc1	$f6,-0x6240($at)
/*    47790:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    47794:	00000000 */ 	sll	$zero,$zero,0x0
/*    47798:	c5680014 */ 	lwc1	$f8,0x14($t3)
/*    4779c:	3c017006 */ 	lui	$at,0x7006
/*    477a0:	c42a9dc4 */ 	lwc1	$f10,-0x623c($at)
/*    477a4:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    477a8:	00000000 */ 	sll	$zero,$zero,0x0
/*    477ac:	e5640010 */ 	swc1	$f4,0x10($t3)
/*    477b0:	e5680014 */ 	swc1	$f8,0x14($t3)
/*    477b4:	c5640000 */ 	lwc1	$f4,0x0($t3)
/*    477b8:	3c017006 */ 	lui	$at,0x7006
/*    477bc:	c4269dc8 */ 	lwc1	$f6,-0x6238($at)
/*    477c0:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    477c4:	00000000 */ 	sll	$zero,$zero,0x0
/*    477c8:	c5680000 */ 	lwc1	$f8,0x0($t3)
/*    477cc:	3c017006 */ 	lui	$at,0x7006
/*    477d0:	c42a9dcc */ 	lwc1	$f10,-0x6234($at)
/*    477d4:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    477d8:	00000000 */ 	sll	$zero,$zero,0x0
/*    477dc:	e5640020 */ 	swc1	$f4,0x20($t3)
/*    477e0:	e5680024 */ 	swc1	$f8,0x24($t3)
/*    477e4:	c5640004 */ 	lwc1	$f4,0x4($t3)
/*    477e8:	3c017006 */ 	lui	$at,0x7006
/*    477ec:	c4269dd0 */ 	lwc1	$f6,-0x6230($at)
/*    477f0:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    477f4:	00000000 */ 	sll	$zero,$zero,0x0
/*    477f8:	c5680004 */ 	lwc1	$f8,0x4($t3)
/*    477fc:	3c017006 */ 	lui	$at,0x7006
/*    47800:	c42a9dd4 */ 	lwc1	$f10,-0x622c($at)
/*    47804:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    47808:	00000000 */ 	sll	$zero,$zero,0x0
/*    4780c:	e564001c */ 	swc1	$f4,0x1c($t3)
/*    47810:	e5680028 */ 	swc1	$f8,0x28($t3)
/*    47814:	c5640008 */ 	lwc1	$f4,0x8($t3)
/*    47818:	3c017006 */ 	lui	$at,0x7006
/*    4781c:	c4269dd8 */ 	lwc1	$f6,-0x6228($at)
/*    47820:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    47824:	00000000 */ 	sll	$zero,$zero,0x0
/*    47828:	c5680008 */ 	lwc1	$f8,0x8($t3)
/*    4782c:	3c017006 */ 	lui	$at,0x7006
/*    47830:	c42a9ddc */ 	lwc1	$f10,-0x6224($at)
/*    47834:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    47838:	00000000 */ 	sll	$zero,$zero,0x0
/*    4783c:	e5640018 */ 	swc1	$f4,0x18($t3)
/*    47840:	e568002c */ 	swc1	$f8,0x2c($t3)
/*    47844:	c564000c */ 	lwc1	$f4,0xc($t3)
/*    47848:	3c013f80 */ 	lui	$at,0x3f80
/*    4784c:	44813000 */ 	mtc1	$at,$f6
/*    47850:	00000000 */ 	sll	$zero,$zero,0x0
/*    47854:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    47858:	00000000 */ 	sll	$zero,$zero,0x0
/*    4785c:	c5680010 */ 	lwc1	$f8,0x10($t3)
/*    47860:	3c017006 */ 	lui	$at,0x7006
/*    47864:	c42a9de0 */ 	lwc1	$f10,-0x6220($at)
/*    47868:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    4786c:	00000000 */ 	sll	$zero,$zero,0x0
/*    47870:	e5640000 */ 	swc1	$f4,0x0($t3)
/*    47874:	e5680004 */ 	swc1	$f8,0x4($t3)
/*    47878:	c5640014 */ 	lwc1	$f4,0x14($t3)
/*    4787c:	3c017006 */ 	lui	$at,0x7006
/*    47880:	c4269de4 */ 	lwc1	$f6,-0x621c($at)
/*    47884:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    47888:	00000000 */ 	sll	$zero,$zero,0x0
/*    4788c:	c5680014 */ 	lwc1	$f8,0x14($t3)
/*    47890:	3c017006 */ 	lui	$at,0x7006
/*    47894:	c42a9de8 */ 	lwc1	$f10,-0x6218($at)
/*    47898:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    4789c:	00000000 */ 	sll	$zero,$zero,0x0
/*    478a0:	e5640008 */ 	swc1	$f4,0x8($t3)
/*    478a4:	e568000c */ 	swc1	$f8,0xc($t3)
/*    478a8:	c5640010 */ 	lwc1	$f4,0x10($t3)
/*    478ac:	3c017006 */ 	lui	$at,0x7006
/*    478b0:	c4269dec */ 	lwc1	$f6,-0x6214($at)
/*    478b4:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    478b8:	00000000 */ 	sll	$zero,$zero,0x0
/*    478bc:	c5680000 */ 	lwc1	$f8,0x0($t3)
/*    478c0:	3c017006 */ 	lui	$at,0x7006
/*    478c4:	c42a9df0 */ 	lwc1	$f10,-0x6210($at)
/*    478c8:	460a4202 */ 	mul.s	$f8,$f8,$f10
/*    478cc:	00000000 */ 	sll	$zero,$zero,0x0
/*    478d0:	e5640010 */ 	swc1	$f4,0x10($t3)
/*    478d4:	e5680014 */ 	swc1	$f8,0x14($t3)
/*    478d8:	c5640000 */ 	lwc1	$f4,0x0($t3)
/*    478dc:	3c017006 */ 	lui	$at,0x7006
/*    478e0:	c4269df4 */ 	lwc1	$f6,-0x620c($at)
/*    478e4:	46062102 */ 	mul.s	$f4,$f4,$f6
/*    478e8:	00000000 */ 	sll	$zero,$zero,0x0
/*    478ec:	e5640000 */ 	swc1	$f4,0x0($t3)
/*    478f0:	c5840018 */ 	lwc1	$f4,0x18($t4)
/*    478f4:	c5660000 */ 	lwc1	$f6,0x0($t3)
/*    478f8:	46062100 */ 	add.s	$f4,$f4,$f6
/*    478fc:	c588001c */ 	lwc1	$f8,0x1c($t4)
/*    47900:	c56a0004 */ 	lwc1	$f10,0x4($t3)
/*    47904:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    47908:	e5840018 */ 	swc1	$f4,0x18($t4)
/*    4790c:	e588001c */ 	swc1	$f8,0x1c($t4)
/*    47910:	c5840020 */ 	lwc1	$f4,0x20($t4)
/*    47914:	c5660008 */ 	lwc1	$f6,0x8($t3)
/*    47918:	46062100 */ 	add.s	$f4,$f4,$f6
/*    4791c:	c5880024 */ 	lwc1	$f8,0x24($t4)
/*    47920:	c56a000c */ 	lwc1	$f10,0xc($t3)
/*    47924:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    47928:	e5840020 */ 	swc1	$f4,0x20($t4)
/*    4792c:	e5880024 */ 	swc1	$f8,0x24($t4)
/*    47930:	c5840028 */ 	lwc1	$f4,0x28($t4)
/*    47934:	c5660010 */ 	lwc1	$f6,0x10($t3)
/*    47938:	46062100 */ 	add.s	$f4,$f4,$f6
/*    4793c:	c588002c */ 	lwc1	$f8,0x2c($t4)
/*    47940:	c56a0014 */ 	lwc1	$f10,0x14($t3)
/*    47944:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    47948:	e5840028 */ 	swc1	$f4,0x28($t4)
/*    4794c:	e588002c */ 	swc1	$f8,0x2c($t4)
/*    47950:	c5840030 */ 	lwc1	$f4,0x30($t4)
/*    47954:	c5660018 */ 	lwc1	$f6,0x18($t3)
/*    47958:	46062100 */ 	add.s	$f4,$f4,$f6
/*    4795c:	c5880034 */ 	lwc1	$f8,0x34($t4)
/*    47960:	c56a001c */ 	lwc1	$f10,0x1c($t3)
/*    47964:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    47968:	e5840030 */ 	swc1	$f4,0x30($t4)
/*    4796c:	e5880034 */ 	swc1	$f8,0x34($t4)
/*    47970:	c5840038 */ 	lwc1	$f4,0x38($t4)
/*    47974:	c5660020 */ 	lwc1	$f6,0x20($t3)
/*    47978:	46062100 */ 	add.s	$f4,$f4,$f6
/*    4797c:	c588003c */ 	lwc1	$f8,0x3c($t4)
/*    47980:	c56a0024 */ 	lwc1	$f10,0x24($t3)
/*    47984:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    47988:	e5840038 */ 	swc1	$f4,0x38($t4)
/*    4798c:	e588003c */ 	swc1	$f8,0x3c($t4)
/*    47990:	c5840040 */ 	lwc1	$f4,0x40($t4)
/*    47994:	c5660028 */ 	lwc1	$f6,0x28($t3)
/*    47998:	46062100 */ 	add.s	$f4,$f4,$f6
/*    4799c:	c5880044 */ 	lwc1	$f8,0x44($t4)
/*    479a0:	c56a002c */ 	lwc1	$f10,0x2c($t3)
/*    479a4:	460a4200 */ 	add.s	$f8,$f8,$f10
/*    479a8:	e5840040 */ 	swc1	$f4,0x40($t4)
/*    479ac:	e5880044 */ 	swc1	$f8,0x44($t4)
/*    479b0:	214a0018 */ 	addi	$t2,$t2,0x18
/*    479b4:	218c0018 */ 	addi	$t4,$t4,0x18
/*    479b8:	21adffff */ 	addi	$t5,$t5,-1
/*    479bc:	15a0fef3 */ 	bnez	$t5,.L0004758c
/*    479c0:	00000000 */ 	sll	$zero,$zero,0x0
/*    479c4:	00c04025 */ 	or	$t0,$a2,$zero
/*    479c8:	00e04825 */ 	or	$t1,$a3,$zero
/*    479cc:	01c06025 */ 	or	$t4,$t6,$zero
/*    479d0:	30a50001 */ 	andi	$a1,$a1,0x1
/*    479d4:	10a00013 */ 	beqz	$a1,.L00047a24
/*    479d8:	00000000 */ 	sll	$zero,$zero,0x0
/*    479dc:	240d0009 */ 	addiu	$t5,$zero,0x9
.L000479e0:
/*    479e0:	c5840000 */ 	lwc1	$f4,0x0($t4)
/*    479e4:	c5260000 */ 	lwc1	$f6,0x0($t1)
/*    479e8:	46062180 */ 	add.s	$f6,$f4,$f6
/*    479ec:	c5880004 */ 	lwc1	$f8,0x4($t4)
/*    479f0:	46004207 */ 	neg.s	$f8,$f8
/*    479f4:	c52a0004 */ 	lwc1	$f10,0x4($t1)
/*    479f8:	460a4281 */ 	sub.s	$f10,$f8,$f10
/*    479fc:	e5060000 */ 	swc1	$f6,0x0($t0)
/*    47a00:	e50a0004 */ 	swc1	$f10,0x4($t0)
/*    47a04:	21080008 */ 	addi	$t0,$t0,0x8
/*    47a08:	21290008 */ 	addi	$t1,$t1,0x8
/*    47a0c:	218c0008 */ 	addi	$t4,$t4,0x8
/*    47a10:	21adffff */ 	addi	$t5,$t5,-1
/*    47a14:	15a0fff2 */ 	bnez	$t5,.L000479e0
/*    47a18:	00000000 */ 	sll	$zero,$zero,0x0
/*    47a1c:	1000000c */ 	beqz	$zero,.L00047a50
/*    47a20:	00000000 */ 	sll	$zero,$zero,0x0
.L00047a24:
/*    47a24:	240d0012 */ 	addiu	$t5,$zero,0x12
.L00047a28:
/*    47a28:	c5840000 */ 	lwc1	$f4,0x0($t4)
/*    47a2c:	c5260000 */ 	lwc1	$f6,0x0($t1)
/*    47a30:	46062100 */ 	add.s	$f4,$f4,$f6
/*    47a34:	e5040000 */ 	swc1	$f4,0x0($t0)
/*    47a38:	21080004 */ 	addi	$t0,$t0,0x4
/*    47a3c:	21290004 */ 	addi	$t1,$t1,0x4
/*    47a40:	218c0004 */ 	addi	$t4,$t4,0x4
/*    47a44:	21adffff */ 	addi	$t5,$t5,-1
/*    47a48:	15a0fff7 */ 	bnez	$t5,.L00047a28
/*    47a4c:	00000000 */ 	sll	$zero,$zero,0x0
.L00047a50:
/*    47a50:	00e04825 */ 	or	$t1,$a3,$zero
/*    47a54:	21cc0048 */ 	addi	$t4,$t6,0x48
/*    47a58:	240d0012 */ 	addiu	$t5,$zero,0x12
.L00047a5c:
/*    47a5c:	c5840000 */ 	lwc1	$f4,0x0($t4)
/*    47a60:	e5240000 */ 	swc1	$f4,0x0($t1)
/*    47a64:	21290004 */ 	addi	$t1,$t1,0x4
/*    47a68:	218c0004 */ 	addi	$t4,$t4,0x4
/*    47a6c:	21adffff */ 	addi	$t5,$t5,-1
/*    47a70:	15a0fffa */ 	bnez	$t5,.L00047a5c
/*    47a74:	00000000 */ 	sll	$zero,$zero,0x0
/*    47a78:	27bd00d0 */ 	addiu	$sp,$sp,0xd0
/*    47a7c:	03e00008 */ 	jr	$ra
/*    47a80:	00000000 */ 	sll	$zero,$zero,0x0
/*    47a84:	00000000 */ 	sll	$zero,$zero,0x0
/*    47a88:	00000000 */ 	sll	$zero,$zero,0x0
/*    47a8c:	00000000 */ 	sll	$zero,$zero,0x0
);