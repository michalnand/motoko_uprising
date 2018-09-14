
bin/main.elf:     file format elf32-littlearm


Disassembly of section .isr_vector:

08000000 <InterruptVector>:
 8000000:	20008000 	andcs	r8, r0, r0
 8000004:	080001b9 	stmdaeq	r0, {r0, r3, r4, r5, r7, r8}
 8000008:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800000c:	080001a9 	stmdaeq	r0, {r0, r3, r5, r7, r8}
 8000010:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000014:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000018:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800001c:	00000000 	andeq	r0, r0, r0
 8000020:	00000000 	andeq	r0, r0, r0
 8000024:	00000000 	andeq	r0, r0, r0
 8000028:	00000000 	andeq	r0, r0, r0
 800002c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000030:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000034:	00000000 	andeq	r0, r0, r0
 8000038:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800003c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000040:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000044:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000048:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800004c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000050:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000054:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000058:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800005c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000060:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000064:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000068:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800006c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000070:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000074:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000078:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800007c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000080:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000084:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000088:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800008c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000090:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000094:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000098:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800009c:	08002b89 	stmdaeq	r0, {r0, r3, r7, r8, r9, fp, sp}
 80000a0:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000a4:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000a8:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000ac:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000b0:	08002001 	stmdaeq	r0, {r0, sp}
 80000b4:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000b8:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000bc:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000c0:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000c4:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000c8:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000cc:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000d0:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000d4:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000d8:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000dc:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000e0:	08002bb9 	stmdaeq	r0, {r0, r3, r4, r5, r7, r8, r9, fp, sp}
 80000e4:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000e8:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000ec:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000f0:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000f4:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000f8:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 80000fc:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000100:	00000000 	andeq	r0, r0, r0
 8000104:	00000000 	andeq	r0, r0, r0
 8000108:	00000000 	andeq	r0, r0, r0
 800010c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000110:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000114:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000118:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800011c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000120:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000124:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000128:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800012c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000130:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000134:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000138:	00000000 	andeq	r0, r0, r0
 800013c:	00000000 	andeq	r0, r0, r0
 8000140:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000144:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000148:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800014c:	00000000 	andeq	r0, r0, r0
 8000150:	00000000 	andeq	r0, r0, r0
 8000154:	00000000 	andeq	r0, r0, r0
 8000158:	00000000 	andeq	r0, r0, r0
 800015c:	00000000 	andeq	r0, r0, r0
 8000160:	00000000 	andeq	r0, r0, r0
 8000164:	00000000 	andeq	r0, r0, r0
 8000168:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 800016c:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000170:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}
 8000174:	00000000 	andeq	r0, r0, r0
 8000178:	00000000 	andeq	r0, r0, r0
 800017c:	00000000 	andeq	r0, r0, r0
 8000180:	00000000 	andeq	r0, r0, r0
 8000184:	08000189 	stmdaeq	r0, {r0, r3, r7, r8}

Disassembly of section .text:

08000188 <Default_Handler>:
 8000188:	4668      	mov	r0, sp
 800018a:	f020 0107 	bic.w	r1, r0, #7
 800018e:	468d      	mov	sp, r1
 8000190:	4a03      	ldr	r2, [pc, #12]	; (80001a0 <Default_Handler+0x18>)
 8000192:	4904      	ldr	r1, [pc, #16]	; (80001a4 <Default_Handler+0x1c>)
 8000194:	bf00      	nop
 8000196:	8d13      	ldrh	r3, [r2, #40]	; 0x28
 8000198:	430b      	orrs	r3, r1
 800019a:	b29b      	uxth	r3, r3
 800019c:	8513      	strh	r3, [r2, #40]	; 0x28
 800019e:	e7f9      	b.n	8000194 <Default_Handler+0xc>
 80001a0:	48000400 	stmdami	r0, {sl}
 80001a4:	ffff8000 			; <UNDEFINED> instruction: 0xffff8000

080001a8 <HardFault_Handler>:
 80001a8:	4668      	mov	r0, sp
 80001aa:	f020 0107 	bic.w	r1, r0, #7
 80001ae:	468d      	mov	sp, r1
 80001b0:	b508      	push	{r3, lr}
 80001b2:	f7ff ffe9 	bl	8000188 <Default_Handler>
 80001b6:	0000      	movs	r0, r0

080001b8 <Reset_Handler>:
 80001b8:	4914      	ldr	r1, [pc, #80]	; (800020c <Reset_Handler+0x54>)
 80001ba:	4a15      	ldr	r2, [pc, #84]	; (8000210 <Reset_Handler+0x58>)
 80001bc:	4815      	ldr	r0, [pc, #84]	; (8000214 <Reset_Handler+0x5c>)
 80001be:	1a52      	subs	r2, r2, r1
 80001c0:	1092      	asrs	r2, r2, #2
 80001c2:	2300      	movs	r3, #0
 80001c4:	429a      	cmp	r2, r3
 80001c6:	d115      	bne.n	80001f4 <Reset_Handler+0x3c>
 80001c8:	4a13      	ldr	r2, [pc, #76]	; (8000218 <Reset_Handler+0x60>)
 80001ca:	4e14      	ldr	r6, [pc, #80]	; (800021c <Reset_Handler+0x64>)
 80001cc:	f8d2 3088 	ldr.w	r3, [r2, #136]	; 0x88
 80001d0:	4c13      	ldr	r4, [pc, #76]	; (8000220 <Reset_Handler+0x68>)
 80001d2:	f443 0370 	orr.w	r3, r3, #15728640	; 0xf00000
 80001d6:	f8c2 3088 	str.w	r3, [r2, #136]	; 0x88
 80001da:	f8d2 3234 	ldr.w	r3, [r2, #564]	; 0x234
 80001de:	1ba4      	subs	r4, r4, r6
 80001e0:	f043 4340 	orr.w	r3, r3, #3221225472	; 0xc0000000
 80001e4:	f8c2 3234 	str.w	r3, [r2, #564]	; 0x234
 80001e8:	10a4      	asrs	r4, r4, #2
 80001ea:	2500      	movs	r5, #0
 80001ec:	42ac      	cmp	r4, r5
 80001ee:	d107      	bne.n	8000200 <Reset_Handler+0x48>
 80001f0:	f001 b92c 	b.w	800144c <main>
 80001f4:	f850 4023 	ldr.w	r4, [r0, r3, lsl #2]
 80001f8:	f841 4023 	str.w	r4, [r1, r3, lsl #2]
 80001fc:	3301      	adds	r3, #1
 80001fe:	e7e1      	b.n	80001c4 <Reset_Handler+0xc>
 8000200:	f856 3025 	ldr.w	r3, [r6, r5, lsl #2]
 8000204:	4798      	blx	r3
 8000206:	3501      	adds	r5, #1
 8000208:	e7f0      	b.n	80001ec <Reset_Handler+0x34>
 800020a:	bf00      	nop
 800020c:	20000000 	andcs	r0, r0, r0
 8000210:	20000000 	andcs	r0, r0, r0
 8000214:	080039d0 	stmdaeq	r0, {r4, r6, r7, r8, fp, ip, sp}
 8000218:	e000ed00 	and	lr, r0, r0, lsl #26
 800021c:	080039d0 	stmdaeq	r0, {r4, r6, r7, r8, fp, ip, sp}
 8000220:	080039d8 	stmdaeq	r0, {r3, r4, r6, r7, r8, fp, ip, sp}

08000224 <SystemInit>:
 8000224:	4a38      	ldr	r2, [pc, #224]	; (8000308 <SystemInit+0xe4>)
 8000226:	f8d2 3088 	ldr.w	r3, [r2, #136]	; 0x88
 800022a:	f443 0370 	orr.w	r3, r3, #15728640	; 0xf00000
 800022e:	f8c2 3088 	str.w	r3, [r2, #136]	; 0x88
 8000232:	4b36      	ldr	r3, [pc, #216]	; (800030c <SystemInit+0xe8>)
 8000234:	681a      	ldr	r2, [r3, #0]
 8000236:	f042 0201 	orr.w	r2, r2, #1
 800023a:	601a      	str	r2, [r3, #0]
 800023c:	6859      	ldr	r1, [r3, #4]
 800023e:	4a34      	ldr	r2, [pc, #208]	; (8000310 <SystemInit+0xec>)
 8000240:	400a      	ands	r2, r1
 8000242:	605a      	str	r2, [r3, #4]
 8000244:	681a      	ldr	r2, [r3, #0]
 8000246:	f022 7284 	bic.w	r2, r2, #17301504	; 0x1080000
 800024a:	f422 3280 	bic.w	r2, r2, #65536	; 0x10000
 800024e:	601a      	str	r2, [r3, #0]
 8000250:	681a      	ldr	r2, [r3, #0]
 8000252:	f422 2280 	bic.w	r2, r2, #262144	; 0x40000
 8000256:	601a      	str	r2, [r3, #0]
 8000258:	685a      	ldr	r2, [r3, #4]
 800025a:	f422 02fe 	bic.w	r2, r2, #8323072	; 0x7f0000
 800025e:	605a      	str	r2, [r3, #4]
 8000260:	6ada      	ldr	r2, [r3, #44]	; 0x2c
 8000262:	f022 020f 	bic.w	r2, r2, #15
 8000266:	62da      	str	r2, [r3, #44]	; 0x2c
 8000268:	6b19      	ldr	r1, [r3, #48]	; 0x30
 800026a:	4a2a      	ldr	r2, [pc, #168]	; (8000314 <SystemInit+0xf0>)
 800026c:	b082      	sub	sp, #8
 800026e:	400a      	ands	r2, r1
 8000270:	631a      	str	r2, [r3, #48]	; 0x30
 8000272:	2200      	movs	r2, #0
 8000274:	609a      	str	r2, [r3, #8]
 8000276:	9200      	str	r2, [sp, #0]
 8000278:	9201      	str	r2, [sp, #4]
 800027a:	681a      	ldr	r2, [r3, #0]
 800027c:	f442 3280 	orr.w	r2, r2, #65536	; 0x10000
 8000280:	601a      	str	r2, [r3, #0]
 8000282:	681a      	ldr	r2, [r3, #0]
 8000284:	f402 3200 	and.w	r2, r2, #131072	; 0x20000
 8000288:	9201      	str	r2, [sp, #4]
 800028a:	9a00      	ldr	r2, [sp, #0]
 800028c:	3201      	adds	r2, #1
 800028e:	9200      	str	r2, [sp, #0]
 8000290:	9a01      	ldr	r2, [sp, #4]
 8000292:	b91a      	cbnz	r2, 800029c <SystemInit+0x78>
 8000294:	9a00      	ldr	r2, [sp, #0]
 8000296:	f5b2 4fa0 	cmp.w	r2, #20480	; 0x5000
 800029a:	d1f2      	bne.n	8000282 <SystemInit+0x5e>
 800029c:	681a      	ldr	r2, [r3, #0]
 800029e:	f412 3200 	ands.w	r2, r2, #131072	; 0x20000
 80002a2:	bf18      	it	ne
 80002a4:	2201      	movne	r2, #1
 80002a6:	9201      	str	r2, [sp, #4]
 80002a8:	9a01      	ldr	r2, [sp, #4]
 80002aa:	2a01      	cmp	r2, #1
 80002ac:	d126      	bne.n	80002fc <SystemInit+0xd8>
 80002ae:	4a1a      	ldr	r2, [pc, #104]	; (8000318 <SystemInit+0xf4>)
 80002b0:	2112      	movs	r1, #18
 80002b2:	6011      	str	r1, [r2, #0]
 80002b4:	685a      	ldr	r2, [r3, #4]
 80002b6:	605a      	str	r2, [r3, #4]
 80002b8:	685a      	ldr	r2, [r3, #4]
 80002ba:	605a      	str	r2, [r3, #4]
 80002bc:	685a      	ldr	r2, [r3, #4]
 80002be:	f442 6280 	orr.w	r2, r2, #1024	; 0x400
 80002c2:	605a      	str	r2, [r3, #4]
 80002c4:	685a      	ldr	r2, [r3, #4]
 80002c6:	f422 127c 	bic.w	r2, r2, #4128768	; 0x3f0000
 80002ca:	605a      	str	r2, [r3, #4]
 80002cc:	685a      	ldr	r2, [r3, #4]
 80002ce:	f442 12e8 	orr.w	r2, r2, #1900544	; 0x1d0000
 80002d2:	605a      	str	r2, [r3, #4]
 80002d4:	681a      	ldr	r2, [r3, #0]
 80002d6:	f042 7280 	orr.w	r2, r2, #16777216	; 0x1000000
 80002da:	601a      	str	r2, [r3, #0]
 80002dc:	681a      	ldr	r2, [r3, #0]
 80002de:	0192      	lsls	r2, r2, #6
 80002e0:	d5fc      	bpl.n	80002dc <SystemInit+0xb8>
 80002e2:	685a      	ldr	r2, [r3, #4]
 80002e4:	f022 0203 	bic.w	r2, r2, #3
 80002e8:	605a      	str	r2, [r3, #4]
 80002ea:	685a      	ldr	r2, [r3, #4]
 80002ec:	f042 0202 	orr.w	r2, r2, #2
 80002f0:	605a      	str	r2, [r3, #4]
 80002f2:	685a      	ldr	r2, [r3, #4]
 80002f4:	f002 020c 	and.w	r2, r2, #12
 80002f8:	2a08      	cmp	r2, #8
 80002fa:	d1fa      	bne.n	80002f2 <SystemInit+0xce>
 80002fc:	4b02      	ldr	r3, [pc, #8]	; (8000308 <SystemInit+0xe4>)
 80002fe:	f04f 6200 	mov.w	r2, #134217728	; 0x8000000
 8000302:	609a      	str	r2, [r3, #8]
 8000304:	b002      	add	sp, #8
 8000306:	4770      	bx	lr
 8000308:	e000ed00 	and	lr, r0, r0, lsl #26
 800030c:	40021000 	andmi	r1, r2, r0
 8000310:	f87fc00c 			; <UNDEFINED> instruction: 0xf87fc00c
 8000314:	ff00fccc 			; <UNDEFINED> instruction: 0xff00fccc
 8000318:	40022000 	andmi	r2, r2, r0

0800031c <_ZN12NetReluLayer7forwardEPaS0_>:
 800031c:	2300      	movs	r3, #0
 800031e:	b530      	push	{r4, r5, lr}
 8000320:	461d      	mov	r5, r3
 8000322:	6a84      	ldr	r4, [r0, #40]	; 0x28
 8000324:	429c      	cmp	r4, r3
 8000326:	d906      	bls.n	8000336 <_ZN12NetReluLayer7forwardEPaS0_+0x1a>
 8000328:	56d4      	ldrsb	r4, [r2, r3]
 800032a:	2c00      	cmp	r4, #0
 800032c:	bfb4      	ite	lt
 800032e:	54cd      	strblt	r5, [r1, r3]
 8000330:	54cc      	strbge	r4, [r1, r3]
 8000332:	3301      	adds	r3, #1
 8000334:	e7f5      	b.n	8000322 <_ZN12NetReluLayer7forwardEPaS0_+0x6>
 8000336:	bd30      	pop	{r4, r5, pc}

08000338 <_ZN12NetReluLayerD1Ev>:
 8000338:	b510      	push	{r4, lr}
 800033a:	4b03      	ldr	r3, [pc, #12]	; (8000348 <_ZN12NetReluLayerD1Ev+0x10>)
 800033c:	6003      	str	r3, [r0, #0]
 800033e:	4604      	mov	r4, r0
 8000340:	f000 fdfc 	bl	8000f3c <_ZN12NetworkLayerD1Ev>
 8000344:	4620      	mov	r0, r4
 8000346:	bd10      	pop	{r4, pc}
 8000348:	080031e4 	stmdaeq	r0, {r2, r5, r6, r7, r8, ip, sp}

0800034c <_ZN12NetReluLayerD0Ev>:
 800034c:	b510      	push	{r4, lr}
 800034e:	4604      	mov	r4, r0
 8000350:	f7ff fff2 	bl	8000338 <_ZN12NetReluLayerD1Ev>
 8000354:	4620      	mov	r0, r4
 8000356:	212c      	movs	r1, #44	; 0x2c
 8000358:	f001 fc7e 	bl	8001c58 <_ZdlPvj>
 800035c:	4620      	mov	r0, r4
 800035e:	bd10      	pop	{r4, pc}

08000360 <_ZN12NetReluLayerC1E14sLayerGeometryS0_S0_>:
 8000360:	b530      	push	{r4, r5, lr}
 8000362:	b085      	sub	sp, #20
 8000364:	4604      	mov	r4, r0
 8000366:	ad01      	add	r5, sp, #4
 8000368:	e885 000e 	stmia.w	r5, {r1, r2, r3}
 800036c:	f000 fdf0 	bl	8000f50 <_ZN12NetworkLayerC1Ev>
 8000370:	4623      	mov	r3, r4
 8000372:	4a0d      	ldr	r2, [pc, #52]	; (80003a8 <_ZN12NetReluLayerC1E14sLayerGeometryS0_S0_+0x48>)
 8000374:	f843 2b1c 	str.w	r2, [r3], #28
 8000378:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 800037c:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 8000380:	aa08      	add	r2, sp, #32
 8000382:	ca07      	ldmia	r2, {r0, r1, r2}
 8000384:	1d23      	adds	r3, r4, #4
 8000386:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 800038a:	aa0b      	add	r2, sp, #44	; 0x2c
 800038c:	ca07      	ldmia	r2, {r0, r1, r2}
 800038e:	f104 0310 	add.w	r3, r4, #16
 8000392:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 8000396:	e9d4 2301 	ldrd	r2, r3, [r4, #4]
 800039a:	435a      	muls	r2, r3
 800039c:	68e3      	ldr	r3, [r4, #12]
 800039e:	4620      	mov	r0, r4
 80003a0:	4353      	muls	r3, r2
 80003a2:	62a3      	str	r3, [r4, #40]	; 0x28
 80003a4:	b005      	add	sp, #20
 80003a6:	bd30      	pop	{r4, r5, pc}
 80003a8:	080031e4 	stmdaeq	r0, {r2, r5, r6, r7, r8, ip, sp}

080003ac <_ZN24NetDenseConvolutionLayerD1Ev>:
 80003ac:	b510      	push	{r4, lr}
 80003ae:	4b03      	ldr	r3, [pc, #12]	; (80003bc <_ZN24NetDenseConvolutionLayerD1Ev+0x10>)
 80003b0:	6003      	str	r3, [r0, #0]
 80003b2:	4604      	mov	r4, r0
 80003b4:	f000 fdc2 	bl	8000f3c <_ZN12NetworkLayerD1Ev>
 80003b8:	4620      	mov	r0, r4
 80003ba:	bd10      	pop	{r4, pc}
 80003bc:	080031f8 	stmdaeq	r0, {r3, r4, r5, r6, r7, r8, ip, sp}

080003c0 <_ZN24NetDenseConvolutionLayerD0Ev>:
 80003c0:	b510      	push	{r4, lr}
 80003c2:	4604      	mov	r4, r0
 80003c4:	f7ff fff2 	bl	80003ac <_ZN24NetDenseConvolutionLayerD1Ev>
 80003c8:	4620      	mov	r0, r4
 80003ca:	2138      	movs	r1, #56	; 0x38
 80003cc:	f001 fc44 	bl	8001c58 <_ZdlPvj>
 80003d0:	4620      	mov	r0, r4
 80003d2:	bd10      	pop	{r4, pc}

080003d4 <_ZN24NetDenseConvolutionLayer7forwardEPaS0_>:
 80003d4:	b570      	push	{r4, r5, r6, lr}
 80003d6:	4616      	mov	r6, r2
 80003d8:	f100 021c 	add.w	r2, r0, #28
 80003dc:	4604      	mov	r4, r0
 80003de:	460d      	mov	r5, r1
 80003e0:	ca07      	ldmia	r2, {r0, r1, r2}
 80003e2:	b088      	sub	sp, #32
 80003e4:	ab05      	add	r3, sp, #20
 80003e6:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 80003ea:	1d22      	adds	r2, r4, #4
 80003ec:	ca07      	ldmia	r2, {r0, r1, r2}
 80003ee:	ab02      	add	r3, sp, #8
 80003f0:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 80003f4:	6b63      	ldr	r3, [r4, #52]	; 0x34
 80003f6:	9301      	str	r3, [sp, #4]
 80003f8:	6b23      	ldr	r3, [r4, #48]	; 0x30
 80003fa:	9300      	str	r3, [sp, #0]
 80003fc:	4631      	mov	r1, r6
 80003fe:	e9d4 230a 	ldrd	r2, r3, [r4, #40]	; 0x28
 8000402:	4628      	mov	r0, r5
 8000404:	f000 fd1a 	bl	8000e3c <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_>
 8000408:	e9d4 3101 	ldrd	r3, r1, [r4, #4]
 800040c:	4359      	muls	r1, r3
 800040e:	6a63      	ldr	r3, [r4, #36]	; 0x24
 8000410:	fb03 5101 	mla	r1, r3, r1, r5
 8000414:	3e01      	subs	r6, #1
 8000416:	460b      	mov	r3, r1
 8000418:	e9d4 5001 	ldrd	r5, r0, [r4, #4]
 800041c:	4345      	muls	r5, r0
 800041e:	68e0      	ldr	r0, [r4, #12]
 8000420:	1a5a      	subs	r2, r3, r1
 8000422:	4368      	muls	r0, r5
 8000424:	4290      	cmp	r0, r2
 8000426:	d904      	bls.n	8000432 <_ZN24NetDenseConvolutionLayer7forwardEPaS0_+0x5e>
 8000428:	f916 2f01 	ldrsb.w	r2, [r6, #1]!
 800042c:	f803 2b01 	strb.w	r2, [r3], #1
 8000430:	e7f2      	b.n	8000418 <_ZN24NetDenseConvolutionLayer7forwardEPaS0_+0x44>
 8000432:	b008      	add	sp, #32
 8000434:	bd70      	pop	{r4, r5, r6, pc}
 8000436:	0000      	movs	r0, r0

08000438 <_ZN24NetDenseConvolutionLayerC1E14sLayerGeometryS0_S0_PKaS2_ii>:
 8000438:	b530      	push	{r4, r5, lr}
 800043a:	b085      	sub	sp, #20
 800043c:	4604      	mov	r4, r0
 800043e:	ad01      	add	r5, sp, #4
 8000440:	e885 000e 	stmia.w	r5, {r1, r2, r3}
 8000444:	f000 fd84 	bl	8000f50 <_ZN12NetworkLayerC1Ev>
 8000448:	4623      	mov	r3, r4
 800044a:	4a0e      	ldr	r2, [pc, #56]	; (8000484 <_ZN24NetDenseConvolutionLayerC1E14sLayerGeometryS0_S0_PKaS2_ii+0x4c>)
 800044c:	f843 2b1c 	str.w	r2, [r3], #28
 8000450:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 8000454:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 8000458:	aa08      	add	r2, sp, #32
 800045a:	ca07      	ldmia	r2, {r0, r1, r2}
 800045c:	1d23      	adds	r3, r4, #4
 800045e:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 8000462:	aa0b      	add	r2, sp, #44	; 0x2c
 8000464:	ca07      	ldmia	r2, {r0, r1, r2}
 8000466:	f104 0310 	add.w	r3, r4, #16
 800046a:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 800046e:	9b0e      	ldr	r3, [sp, #56]	; 0x38
 8000470:	62a3      	str	r3, [r4, #40]	; 0x28
 8000472:	9b0f      	ldr	r3, [sp, #60]	; 0x3c
 8000474:	62e3      	str	r3, [r4, #44]	; 0x2c
 8000476:	9b10      	ldr	r3, [sp, #64]	; 0x40
 8000478:	6323      	str	r3, [r4, #48]	; 0x30
 800047a:	9b11      	ldr	r3, [sp, #68]	; 0x44
 800047c:	6363      	str	r3, [r4, #52]	; 0x34
 800047e:	4620      	mov	r0, r4
 8000480:	b005      	add	sp, #20
 8000482:	bd30      	pop	{r4, r5, pc}
 8000484:	080031f8 	stmdaeq	r0, {r3, r4, r5, r6, r7, r8, ip, sp}

08000488 <_ZN18NetMaxPoolingLayerD1Ev>:
 8000488:	b510      	push	{r4, lr}
 800048a:	4b03      	ldr	r3, [pc, #12]	; (8000498 <_ZN18NetMaxPoolingLayerD1Ev+0x10>)
 800048c:	6003      	str	r3, [r0, #0]
 800048e:	4604      	mov	r4, r0
 8000490:	f000 fd54 	bl	8000f3c <_ZN12NetworkLayerD1Ev>
 8000494:	4620      	mov	r0, r4
 8000496:	bd10      	pop	{r4, pc}
 8000498:	0800320c 	stmdaeq	r0, {r2, r3, r9, ip, sp}

0800049c <_ZN18NetMaxPoolingLayerD0Ev>:
 800049c:	b510      	push	{r4, lr}
 800049e:	4604      	mov	r4, r0
 80004a0:	f7ff fff2 	bl	8000488 <_ZN18NetMaxPoolingLayerD1Ev>
 80004a4:	4620      	mov	r0, r4
 80004a6:	2128      	movs	r1, #40	; 0x28
 80004a8:	f001 fbd6 	bl	8001c58 <_ZdlPvj>
 80004ac:	4620      	mov	r0, r4
 80004ae:	bd10      	pop	{r4, pc}

080004b0 <_ZN18NetMaxPoolingLayer7forwardEPaS0_>:
 80004b0:	e92d 4ff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, lr}
 80004b4:	69c3      	ldr	r3, [r0, #28]
 80004b6:	b08b      	sub	sp, #44	; 0x2c
 80004b8:	9301      	str	r3, [sp, #4]
 80004ba:	3b02      	subs	r3, #2
 80004bc:	9202      	str	r2, [sp, #8]
 80004be:	2b03      	cmp	r3, #3
 80004c0:	f200 8136 	bhi.w	8000730 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x280>
 80004c4:	e8df f013 	tbh	[pc, r3, lsl #1]
 80004c8:	00530004 	subseq	r0, r3, r4
 80004cc:	00ea00a2 	rsceq	r0, sl, r2, lsr #1
 80004d0:	e9d0 4e04 	ldrd	r4, lr, [r0, #16]
 80004d4:	6983      	ldr	r3, [r0, #24]
 80004d6:	9305      	str	r3, [sp, #20]
 80004d8:	0063      	lsls	r3, r4, #1
 80004da:	9301      	str	r3, [sp, #4]
 80004dc:	fb0e f304 	mul.w	r3, lr, r4
 80004e0:	0062      	lsls	r2, r4, #1
 80004e2:	9304      	str	r3, [sp, #16]
 80004e4:	ea4f 034e 	mov.w	r3, lr, lsl #1
 80004e8:	4353      	muls	r3, r2
 80004ea:	9303      	str	r3, [sp, #12]
 80004ec:	00a3      	lsls	r3, r4, #2
 80004ee:	9a02      	ldr	r2, [sp, #8]
 80004f0:	9302      	str	r3, [sp, #8]
 80004f2:	f04f 0c00 	mov.w	ip, #0
 80004f6:	9b05      	ldr	r3, [sp, #20]
 80004f8:	459c      	cmp	ip, r3
 80004fa:	f000 8119 	beq.w	8000730 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x280>
 80004fe:	9b01      	ldr	r3, [sp, #4]
 8000500:	2000      	movs	r0, #0
 8000502:	4413      	add	r3, r2
 8000504:	4688      	mov	r8, r1
 8000506:	4681      	mov	r9, r0
 8000508:	9306      	str	r3, [sp, #24]
 800050a:	45f1      	cmp	r9, lr
 800050c:	d028      	beq.n	8000560 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0xb0>
 800050e:	9d06      	ldr	r5, [sp, #24]
 8000510:	2300      	movs	r3, #0
 8000512:	eb02 0b00 	add.w	fp, r2, r0
 8000516:	eb05 0a00 	add.w	sl, r5, r0
 800051a:	42a3      	cmp	r3, r4
 800051c:	d01a      	beq.n	8000554 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0xa4>
 800051e:	f91a 6013 	ldrsb.w	r6, [sl, r3, lsl #1]
 8000522:	f91b 5013 	ldrsb.w	r5, [fp, r3, lsl #1]
 8000526:	005f      	lsls	r7, r3, #1
 8000528:	42ae      	cmp	r6, r5
 800052a:	bfb8      	it	lt
 800052c:	462e      	movlt	r6, r5
 800052e:	eb0b 0507 	add.w	r5, fp, r7
 8000532:	ea26 76e6 	bic.w	r6, r6, r6, asr #31
 8000536:	f995 5001 	ldrsb.w	r5, [r5, #1]
 800053a:	4457      	add	r7, sl
 800053c:	42b5      	cmp	r5, r6
 800053e:	bfb8      	it	lt
 8000540:	4635      	movlt	r5, r6
 8000542:	f997 6001 	ldrsb.w	r6, [r7, #1]
 8000546:	42b5      	cmp	r5, r6
 8000548:	bfb8      	it	lt
 800054a:	4635      	movlt	r5, r6
 800054c:	f808 5003 	strb.w	r5, [r8, r3]
 8000550:	3301      	adds	r3, #1
 8000552:	e7e2      	b.n	800051a <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x6a>
 8000554:	9b02      	ldr	r3, [sp, #8]
 8000556:	f109 0901 	add.w	r9, r9, #1
 800055a:	44a0      	add	r8, r4
 800055c:	4418      	add	r0, r3
 800055e:	e7d4      	b.n	800050a <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x5a>
 8000560:	9b04      	ldr	r3, [sp, #16]
 8000562:	4419      	add	r1, r3
 8000564:	9b03      	ldr	r3, [sp, #12]
 8000566:	f10c 0c01 	add.w	ip, ip, #1
 800056a:	441a      	add	r2, r3
 800056c:	e7c3      	b.n	80004f6 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x46>
 800056e:	e9d0 4604 	ldrd	r4, r6, [r0, #16]
 8000572:	6983      	ldr	r3, [r0, #24]
 8000574:	9304      	str	r3, [sp, #16]
 8000576:	fb04 f306 	mul.w	r3, r4, r6
 800057a:	eb04 0544 	add.w	r5, r4, r4, lsl #1
 800057e:	9306      	str	r3, [sp, #24]
 8000580:	eb06 0346 	add.w	r3, r6, r6, lsl #1
 8000584:	436b      	muls	r3, r5
 8000586:	9307      	str	r3, [sp, #28]
 8000588:	2000      	movs	r0, #0
 800058a:	eb05 0345 	add.w	r3, r5, r5, lsl #1
 800058e:	468a      	mov	sl, r1
 8000590:	9305      	str	r3, [sp, #20]
 8000592:	4607      	mov	r7, r0
 8000594:	9b04      	ldr	r3, [sp, #16]
 8000596:	429f      	cmp	r7, r3
 8000598:	f000 80ca 	beq.w	8000730 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x280>
 800059c:	4684      	mov	ip, r0
 800059e:	46d6      	mov	lr, sl
 80005a0:	f04f 0800 	mov.w	r8, #0
 80005a4:	45b0      	cmp	r8, r6
 80005a6:	d02b      	beq.n	8000600 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x150>
 80005a8:	9b02      	ldr	r3, [sp, #8]
 80005aa:	4463      	add	r3, ip
 80005ac:	2200      	movs	r2, #0
 80005ae:	9308      	str	r3, [sp, #32]
 80005b0:	42a2      	cmp	r2, r4
 80005b2:	d01f      	beq.n	80005f4 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x144>
 80005b4:	9908      	ldr	r1, [sp, #32]
 80005b6:	eb02 0342 	add.w	r3, r2, r2, lsl #1
 80005ba:	440b      	add	r3, r1
 80005bc:	9901      	ldr	r1, [sp, #4]
 80005be:	9103      	str	r1, [sp, #12]
 80005c0:	f04f 0900 	mov.w	r9, #0
 80005c4:	f993 1000 	ldrsb.w	r1, [r3]
 80005c8:	f993 b001 	ldrsb.w	fp, [r3, #1]
 80005cc:	4559      	cmp	r1, fp
 80005ce:	bfb8      	it	lt
 80005d0:	4659      	movlt	r1, fp
 80005d2:	f993 b002 	ldrsb.w	fp, [r3, #2]
 80005d6:	4559      	cmp	r1, fp
 80005d8:	bfb8      	it	lt
 80005da:	4659      	movlt	r1, fp
 80005dc:	4589      	cmp	r9, r1
 80005de:	bfb8      	it	lt
 80005e0:	4689      	movlt	r9, r1
 80005e2:	9903      	ldr	r1, [sp, #12]
 80005e4:	3901      	subs	r1, #1
 80005e6:	442b      	add	r3, r5
 80005e8:	9103      	str	r1, [sp, #12]
 80005ea:	d1eb      	bne.n	80005c4 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x114>
 80005ec:	f80e 9002 	strb.w	r9, [lr, r2]
 80005f0:	3201      	adds	r2, #1
 80005f2:	e7dd      	b.n	80005b0 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x100>
 80005f4:	9b05      	ldr	r3, [sp, #20]
 80005f6:	f108 0801 	add.w	r8, r8, #1
 80005fa:	44a6      	add	lr, r4
 80005fc:	449c      	add	ip, r3
 80005fe:	e7d1      	b.n	80005a4 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0xf4>
 8000600:	9b06      	ldr	r3, [sp, #24]
 8000602:	449a      	add	sl, r3
 8000604:	9b07      	ldr	r3, [sp, #28]
 8000606:	3701      	adds	r7, #1
 8000608:	4418      	add	r0, r3
 800060a:	e7c3      	b.n	8000594 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0xe4>
 800060c:	e9d0 a904 	ldrd	sl, r9, [r0, #16]
 8000610:	6983      	ldr	r3, [r0, #24]
 8000612:	9304      	str	r3, [sp, #16]
 8000614:	fb0a f309 	mul.w	r3, sl, r9
 8000618:	ea4f 0b8a 	mov.w	fp, sl, lsl #2
 800061c:	9307      	str	r3, [sp, #28]
 800061e:	ea4f 0389 	mov.w	r3, r9, lsl #2
 8000622:	fb0b f303 	mul.w	r3, fp, r3
 8000626:	9308      	str	r3, [sp, #32]
 8000628:	2200      	movs	r2, #0
 800062a:	ea4f 130a 	mov.w	r3, sl, lsl #4
 800062e:	4688      	mov	r8, r1
 8000630:	9306      	str	r3, [sp, #24]
 8000632:	9203      	str	r2, [sp, #12]
 8000634:	e9dd 1303 	ldrd	r1, r3, [sp, #12]
 8000638:	4299      	cmp	r1, r3
 800063a:	d079      	beq.n	8000730 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x280>
 800063c:	4614      	mov	r4, r2
 800063e:	4645      	mov	r5, r8
 8000640:	2600      	movs	r6, #0
 8000642:	45b1      	cmp	r9, r6
 8000644:	d022      	beq.n	800068c <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x1dc>
 8000646:	9902      	ldr	r1, [sp, #8]
 8000648:	4421      	add	r1, r4
 800064a:	2300      	movs	r3, #0
 800064c:	9109      	str	r1, [sp, #36]	; 0x24
 800064e:	459a      	cmp	sl, r3
 8000650:	d017      	beq.n	8000682 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x1d2>
 8000652:	9909      	ldr	r1, [sp, #36]	; 0x24
 8000654:	f8dd c004 	ldr.w	ip, [sp, #4]
 8000658:	eb01 0183 	add.w	r1, r1, r3, lsl #2
 800065c:	2700      	movs	r7, #0
 800065e:	1d08      	adds	r0, r1, #4
 8000660:	9005      	str	r0, [sp, #20]
 8000662:	468e      	mov	lr, r1
 8000664:	f91e 0b01 	ldrsb.w	r0, [lr], #1
 8000668:	4287      	cmp	r7, r0
 800066a:	bfb8      	it	lt
 800066c:	4607      	movlt	r7, r0
 800066e:	9805      	ldr	r0, [sp, #20]
 8000670:	4586      	cmp	lr, r0
 8000672:	d1f7      	bne.n	8000664 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x1b4>
 8000674:	f1bc 0c01 	subs.w	ip, ip, #1
 8000678:	4459      	add	r1, fp
 800067a:	d1f0      	bne.n	800065e <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x1ae>
 800067c:	54ef      	strb	r7, [r5, r3]
 800067e:	3301      	adds	r3, #1
 8000680:	e7e5      	b.n	800064e <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x19e>
 8000682:	9b06      	ldr	r3, [sp, #24]
 8000684:	3601      	adds	r6, #1
 8000686:	4455      	add	r5, sl
 8000688:	441c      	add	r4, r3
 800068a:	e7da      	b.n	8000642 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x192>
 800068c:	9b03      	ldr	r3, [sp, #12]
 800068e:	3301      	adds	r3, #1
 8000690:	9303      	str	r3, [sp, #12]
 8000692:	9b07      	ldr	r3, [sp, #28]
 8000694:	4498      	add	r8, r3
 8000696:	9b08      	ldr	r3, [sp, #32]
 8000698:	441a      	add	r2, r3
 800069a:	e7cb      	b.n	8000634 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x184>
 800069c:	e9d0 2504 	ldrd	r2, r5, [r0, #16]
 80006a0:	6983      	ldr	r3, [r0, #24]
 80006a2:	9304      	str	r3, [sp, #16]
 80006a4:	fb02 f305 	mul.w	r3, r2, r5
 80006a8:	eb02 0482 	add.w	r4, r2, r2, lsl #2
 80006ac:	9306      	str	r3, [sp, #24]
 80006ae:	eb05 0385 	add.w	r3, r5, r5, lsl #2
 80006b2:	4363      	muls	r3, r4
 80006b4:	9307      	str	r3, [sp, #28]
 80006b6:	2000      	movs	r0, #0
 80006b8:	eb04 0384 	add.w	r3, r4, r4, lsl #2
 80006bc:	468b      	mov	fp, r1
 80006be:	9305      	str	r3, [sp, #20]
 80006c0:	4607      	mov	r7, r0
 80006c2:	9b04      	ldr	r3, [sp, #16]
 80006c4:	42bb      	cmp	r3, r7
 80006c6:	d033      	beq.n	8000730 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x280>
 80006c8:	4684      	mov	ip, r0
 80006ca:	46de      	mov	lr, fp
 80006cc:	f04f 0800 	mov.w	r8, #0
 80006d0:	45a8      	cmp	r8, r5
 80006d2:	d027      	beq.n	8000724 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x274>
 80006d4:	9902      	ldr	r1, [sp, #8]
 80006d6:	4461      	add	r1, ip
 80006d8:	2300      	movs	r3, #0
 80006da:	9108      	str	r1, [sp, #32]
 80006dc:	4293      	cmp	r3, r2
 80006de:	d01b      	beq.n	8000718 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x268>
 80006e0:	9e08      	ldr	r6, [sp, #32]
 80006e2:	f8dd a004 	ldr.w	sl, [sp, #4]
 80006e6:	eb03 0183 	add.w	r1, r3, r3, lsl #2
 80006ea:	4431      	add	r1, r6
 80006ec:	9103      	str	r1, [sp, #12]
 80006ee:	f04f 0900 	mov.w	r9, #0
 80006f2:	2600      	movs	r6, #0
 80006f4:	9903      	ldr	r1, [sp, #12]
 80006f6:	5789      	ldrsb	r1, [r1, r6]
 80006f8:	3601      	adds	r6, #1
 80006fa:	4589      	cmp	r9, r1
 80006fc:	bfb8      	it	lt
 80006fe:	4689      	movlt	r9, r1
 8000700:	2e05      	cmp	r6, #5
 8000702:	d1f7      	bne.n	80006f4 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x244>
 8000704:	9903      	ldr	r1, [sp, #12]
 8000706:	f1ba 0a01 	subs.w	sl, sl, #1
 800070a:	4421      	add	r1, r4
 800070c:	9103      	str	r1, [sp, #12]
 800070e:	d1f0      	bne.n	80006f2 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x242>
 8000710:	f80e 9003 	strb.w	r9, [lr, r3]
 8000714:	3301      	adds	r3, #1
 8000716:	e7e1      	b.n	80006dc <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x22c>
 8000718:	9b05      	ldr	r3, [sp, #20]
 800071a:	f108 0801 	add.w	r8, r8, #1
 800071e:	4496      	add	lr, r2
 8000720:	449c      	add	ip, r3
 8000722:	e7d5      	b.n	80006d0 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x220>
 8000724:	9b06      	ldr	r3, [sp, #24]
 8000726:	449b      	add	fp, r3
 8000728:	9b07      	ldr	r3, [sp, #28]
 800072a:	3701      	adds	r7, #1
 800072c:	4418      	add	r0, r3
 800072e:	e7c8      	b.n	80006c2 <_ZN18NetMaxPoolingLayer7forwardEPaS0_+0x212>
 8000730:	b00b      	add	sp, #44	; 0x2c
 8000732:	e8bd 8ff0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, pc}
 8000736:	0000      	movs	r0, r0

08000738 <_ZN18NetMaxPoolingLayerC1E14sLayerGeometryS0_S0_>:
 8000738:	b530      	push	{r4, r5, lr}
 800073a:	b085      	sub	sp, #20
 800073c:	4605      	mov	r5, r0
 800073e:	ac01      	add	r4, sp, #4
 8000740:	e884 000e 	stmia.w	r4, {r1, r2, r3}
 8000744:	f000 fc04 	bl	8000f50 <_ZN12NetworkLayerC1Ev>
 8000748:	462b      	mov	r3, r5
 800074a:	4a0a      	ldr	r2, [pc, #40]	; (8000774 <_ZN18NetMaxPoolingLayerC1E14sLayerGeometryS0_S0_+0x3c>)
 800074c:	f843 2b1c 	str.w	r2, [r3], #28
 8000750:	e894 0007 	ldmia.w	r4, {r0, r1, r2}
 8000754:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 8000758:	aa08      	add	r2, sp, #32
 800075a:	ca07      	ldmia	r2, {r0, r1, r2}
 800075c:	1d2b      	adds	r3, r5, #4
 800075e:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 8000762:	aa0b      	add	r2, sp, #44	; 0x2c
 8000764:	ca07      	ldmia	r2, {r0, r1, r2}
 8000766:	f105 0310 	add.w	r3, r5, #16
 800076a:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 800076e:	4628      	mov	r0, r5
 8000770:	b005      	add	sp, #20
 8000772:	bd30      	pop	{r4, r5, pc}
 8000774:	0800320c 	stmdaeq	r0, {r2, r3, r9, ip, sp}

08000778 <_ZN19NetConvolutionLayerD1Ev>:
 8000778:	b510      	push	{r4, lr}
 800077a:	4b03      	ldr	r3, [pc, #12]	; (8000788 <_ZN19NetConvolutionLayerD1Ev+0x10>)
 800077c:	6003      	str	r3, [r0, #0]
 800077e:	4604      	mov	r4, r0
 8000780:	f000 fbdc 	bl	8000f3c <_ZN12NetworkLayerD1Ev>
 8000784:	4620      	mov	r0, r4
 8000786:	bd10      	pop	{r4, pc}
 8000788:	08003220 	stmdaeq	r0, {r5, r9, ip, sp}

0800078c <_ZN19NetConvolutionLayerD0Ev>:
 800078c:	b510      	push	{r4, lr}
 800078e:	4604      	mov	r4, r0
 8000790:	f7ff fff2 	bl	8000778 <_ZN19NetConvolutionLayerD1Ev>
 8000794:	4620      	mov	r0, r4
 8000796:	2138      	movs	r1, #56	; 0x38
 8000798:	f001 fa5e 	bl	8001c58 <_ZdlPvj>
 800079c:	4620      	mov	r0, r4
 800079e:	bd10      	pop	{r4, pc}

080007a0 <_ZN19NetConvolutionLayer7forwardEPaS0_>:
 80007a0:	b570      	push	{r4, r5, r6, lr}
 80007a2:	4616      	mov	r6, r2
 80007a4:	f100 021c 	add.w	r2, r0, #28
 80007a8:	4604      	mov	r4, r0
 80007aa:	460d      	mov	r5, r1
 80007ac:	ca07      	ldmia	r2, {r0, r1, r2}
 80007ae:	b088      	sub	sp, #32
 80007b0:	ab05      	add	r3, sp, #20
 80007b2:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 80007b6:	1d22      	adds	r2, r4, #4
 80007b8:	ca07      	ldmia	r2, {r0, r1, r2}
 80007ba:	ab02      	add	r3, sp, #8
 80007bc:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 80007c0:	6b63      	ldr	r3, [r4, #52]	; 0x34
 80007c2:	9301      	str	r3, [sp, #4]
 80007c4:	6b23      	ldr	r3, [r4, #48]	; 0x30
 80007c6:	9300      	str	r3, [sp, #0]
 80007c8:	4631      	mov	r1, r6
 80007ca:	e9d4 230a 	ldrd	r2, r3, [r4, #40]	; 0x28
 80007ce:	4628      	mov	r0, r5
 80007d0:	f000 fb34 	bl	8000e3c <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_>
 80007d4:	b008      	add	sp, #32
 80007d6:	bd70      	pop	{r4, r5, r6, pc}

080007d8 <_ZN19NetConvolutionLayerC1E14sLayerGeometryS0_S0_PKaS2_ii>:
 80007d8:	b530      	push	{r4, r5, lr}
 80007da:	b085      	sub	sp, #20
 80007dc:	4604      	mov	r4, r0
 80007de:	ad01      	add	r5, sp, #4
 80007e0:	e885 000e 	stmia.w	r5, {r1, r2, r3}
 80007e4:	f000 fbb4 	bl	8000f50 <_ZN12NetworkLayerC1Ev>
 80007e8:	4623      	mov	r3, r4
 80007ea:	4a0e      	ldr	r2, [pc, #56]	; (8000824 <_ZN19NetConvolutionLayerC1E14sLayerGeometryS0_S0_PKaS2_ii+0x4c>)
 80007ec:	f843 2b1c 	str.w	r2, [r3], #28
 80007f0:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 80007f4:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 80007f8:	aa08      	add	r2, sp, #32
 80007fa:	ca07      	ldmia	r2, {r0, r1, r2}
 80007fc:	1d23      	adds	r3, r4, #4
 80007fe:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 8000802:	aa0b      	add	r2, sp, #44	; 0x2c
 8000804:	ca07      	ldmia	r2, {r0, r1, r2}
 8000806:	f104 0310 	add.w	r3, r4, #16
 800080a:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 800080e:	9b0e      	ldr	r3, [sp, #56]	; 0x38
 8000810:	62a3      	str	r3, [r4, #40]	; 0x28
 8000812:	9b0f      	ldr	r3, [sp, #60]	; 0x3c
 8000814:	62e3      	str	r3, [r4, #44]	; 0x2c
 8000816:	9b10      	ldr	r3, [sp, #64]	; 0x40
 8000818:	6323      	str	r3, [r4, #48]	; 0x30
 800081a:	9b11      	ldr	r3, [sp, #68]	; 0x44
 800081c:	6363      	str	r3, [r4, #52]	; 0x34
 800081e:	4620      	mov	r0, r4
 8000820:	b005      	add	sp, #20
 8000822:	bd30      	pop	{r4, r5, pc}
 8000824:	08003220 	stmdaeq	r0, {r5, r9, ip, sp}

08000828 <_ZN10NetFcLayerD1Ev>:
 8000828:	b510      	push	{r4, lr}
 800082a:	4b03      	ldr	r3, [pc, #12]	; (8000838 <_ZN10NetFcLayerD1Ev+0x10>)
 800082c:	6003      	str	r3, [r0, #0]
 800082e:	4604      	mov	r4, r0
 8000830:	f000 fb84 	bl	8000f3c <_ZN12NetworkLayerD1Ev>
 8000834:	4620      	mov	r0, r4
 8000836:	bd10      	pop	{r4, pc}
 8000838:	08003234 	stmdaeq	r0, {r2, r4, r5, r9, ip, sp}

0800083c <_ZN10NetFcLayerD0Ev>:
 800083c:	b510      	push	{r4, lr}
 800083e:	4604      	mov	r4, r0
 8000840:	f7ff fff2 	bl	8000828 <_ZN10NetFcLayerD1Ev>
 8000844:	4620      	mov	r0, r4
 8000846:	2140      	movs	r1, #64	; 0x40
 8000848:	f001 fa06 	bl	8001c58 <_ZdlPvj>
 800084c:	4620      	mov	r0, r4
 800084e:	bd10      	pop	{r4, pc}

08000850 <_ZN10NetFcLayer7forwardEPaS0_>:
 8000850:	e92d 4ff8 	stmdb	sp!, {r3, r4, r5, r6, r7, r8, r9, sl, fp, lr}
 8000854:	4604      	mov	r4, r0
 8000856:	460e      	mov	r6, r1
 8000858:	4692      	mov	sl, r2
 800085a:	460d      	mov	r5, r1
 800085c:	f04f 0980 	mov.w	r9, #128	; 0x80
 8000860:	f44f 6880 	mov.w	r8, #1024	; 0x400
 8000864:	f06f 077e 	mvn.w	r7, #126	; 0x7e
 8000868:	6ba3      	ldr	r3, [r4, #56]	; 0x38
 800086a:	eba5 0b06 	sub.w	fp, r5, r6
 800086e:	455b      	cmp	r3, fp
 8000870:	d91b      	bls.n	80008aa <_ZN10NetFcLayer7forwardEPaS0_+0x5a>
 8000872:	6be2      	ldr	r2, [r4, #60]	; 0x3c
 8000874:	6aa0      	ldr	r0, [r4, #40]	; 0x28
 8000876:	4651      	mov	r1, sl
 8000878:	fb0b 0002 	mla	r0, fp, r2, r0
 800087c:	f000 f84c 	bl	8000918 <_Z18network_dot_kernelPaS_j>
 8000880:	6b23      	ldr	r3, [r4, #48]	; 0x30
 8000882:	6b62      	ldr	r2, [r4, #52]	; 0x34
 8000884:	4358      	muls	r0, r3
 8000886:	6ae3      	ldr	r3, [r4, #44]	; 0x2c
 8000888:	fb90 f0f9 	sdiv	r0, r0, r9
 800088c:	f913 300b 	ldrsb.w	r3, [r3, fp]
 8000890:	fb02 0003 	mla	r0, r2, r3, r0
 8000894:	fb90 f0f8 	sdiv	r0, r0, r8
 8000898:	42b8      	cmp	r0, r7
 800089a:	bfb8      	it	lt
 800089c:	4638      	movlt	r0, r7
 800089e:	287f      	cmp	r0, #127	; 0x7f
 80008a0:	bfa8      	it	ge
 80008a2:	207f      	movge	r0, #127	; 0x7f
 80008a4:	f805 0b01 	strb.w	r0, [r5], #1
 80008a8:	e7de      	b.n	8000868 <_ZN10NetFcLayer7forwardEPaS0_+0x18>
 80008aa:	e8bd 8ff8 	ldmia.w	sp!, {r3, r4, r5, r6, r7, r8, r9, sl, fp, pc}
 80008ae:	0000      	movs	r0, r0

080008b0 <_ZN10NetFcLayerC1E14sLayerGeometryS0_S0_PKaS2_ii>:
 80008b0:	b530      	push	{r4, r5, lr}
 80008b2:	b085      	sub	sp, #20
 80008b4:	4604      	mov	r4, r0
 80008b6:	ad01      	add	r5, sp, #4
 80008b8:	e885 000e 	stmia.w	r5, {r1, r2, r3}
 80008bc:	f000 fb48 	bl	8000f50 <_ZN12NetworkLayerC1Ev>
 80008c0:	4623      	mov	r3, r4
 80008c2:	4a14      	ldr	r2, [pc, #80]	; (8000914 <_ZN10NetFcLayerC1E14sLayerGeometryS0_S0_PKaS2_ii+0x64>)
 80008c4:	f843 2b1c 	str.w	r2, [r3], #28
 80008c8:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 80008cc:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 80008d0:	aa08      	add	r2, sp, #32
 80008d2:	ca07      	ldmia	r2, {r0, r1, r2}
 80008d4:	1d23      	adds	r3, r4, #4
 80008d6:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 80008da:	aa0b      	add	r2, sp, #44	; 0x2c
 80008dc:	ca07      	ldmia	r2, {r0, r1, r2}
 80008de:	f104 0310 	add.w	r3, r4, #16
 80008e2:	e883 0007 	stmia.w	r3, {r0, r1, r2}
 80008e6:	9b0e      	ldr	r3, [sp, #56]	; 0x38
 80008e8:	62a3      	str	r3, [r4, #40]	; 0x28
 80008ea:	9b0f      	ldr	r3, [sp, #60]	; 0x3c
 80008ec:	62e3      	str	r3, [r4, #44]	; 0x2c
 80008ee:	9b10      	ldr	r3, [sp, #64]	; 0x40
 80008f0:	6323      	str	r3, [r4, #48]	; 0x30
 80008f2:	9b11      	ldr	r3, [sp, #68]	; 0x44
 80008f4:	6363      	str	r3, [r4, #52]	; 0x34
 80008f6:	e9d4 2301 	ldrd	r2, r3, [r4, #4]
 80008fa:	435a      	muls	r2, r3
 80008fc:	68e3      	ldr	r3, [r4, #12]
 80008fe:	4353      	muls	r3, r2
 8000900:	63e3      	str	r3, [r4, #60]	; 0x3c
 8000902:	6963      	ldr	r3, [r4, #20]
 8000904:	4602      	mov	r2, r0
 8000906:	435a      	muls	r2, r3
 8000908:	69a3      	ldr	r3, [r4, #24]
 800090a:	4620      	mov	r0, r4
 800090c:	4353      	muls	r3, r2
 800090e:	63a3      	str	r3, [r4, #56]	; 0x38
 8000910:	b005      	add	sp, #20
 8000912:	bd30      	pop	{r4, r5, pc}
 8000914:	08003234 	stmdaeq	r0, {r2, r4, r5, r9, ip, sp}

08000918 <_Z18network_dot_kernelPaS_j>:
 8000918:	2300      	movs	r3, #0
 800091a:	b570      	push	{r4, r5, r6, lr}
 800091c:	4606      	mov	r6, r0
 800091e:	4618      	mov	r0, r3
 8000920:	4293      	cmp	r3, r2
 8000922:	d005      	beq.n	8000930 <_Z18network_dot_kernelPaS_j+0x18>
 8000924:	56f5      	ldrsb	r5, [r6, r3]
 8000926:	56cc      	ldrsb	r4, [r1, r3]
 8000928:	3301      	adds	r3, #1
 800092a:	fb15 0004 	smlabb	r0, r5, r4, r0
 800092e:	e7f7      	b.n	8000920 <_Z18network_dot_kernelPaS_j+0x8>
 8000930:	bd70      	pop	{r4, r5, r6, pc}

08000932 <_ZN13NeuralNetwork9set_inputEPa>:
 8000932:	e9d0 2322 	ldrd	r2, r3, [r0, #136]	; 0x88
 8000936:	b530      	push	{r4, r5, lr}
 8000938:	435a      	muls	r2, r3
 800093a:	f8d0 3090 	ldr.w	r3, [r0, #144]	; 0x90
 800093e:	435a      	muls	r2, r3
 8000940:	2300      	movs	r3, #0
 8000942:	4293      	cmp	r3, r2
 8000944:	d005      	beq.n	8000952 <_ZN13NeuralNetwork9set_inputEPa+0x20>
 8000946:	f8d0 40a8 	ldr.w	r4, [r0, #168]	; 0xa8
 800094a:	56cd      	ldrsb	r5, [r1, r3]
 800094c:	54e5      	strb	r5, [r4, r3]
 800094e:	3301      	adds	r3, #1
 8000950:	e7f7      	b.n	8000942 <_ZN13NeuralNetwork9set_inputEPa+0x10>
 8000952:	bd30      	pop	{r4, r5, pc}

08000954 <_ZN13NeuralNetworkD1Ev>:
 8000954:	4b07      	ldr	r3, [pc, #28]	; (8000974 <_ZN13NeuralNetworkD1Ev+0x20>)
 8000956:	b510      	push	{r4, lr}
 8000958:	4604      	mov	r4, r0
 800095a:	6003      	str	r3, [r0, #0]
 800095c:	f8d0 00a0 	ldr.w	r0, [r0, #160]	; 0xa0
 8000960:	b108      	cbz	r0, 8000966 <_ZN13NeuralNetworkD1Ev+0x12>
 8000962:	f001 f983 	bl	8001c6c <_ZdaPv>
 8000966:	f8d4 00a4 	ldr.w	r0, [r4, #164]	; 0xa4
 800096a:	b108      	cbz	r0, 8000970 <_ZN13NeuralNetworkD1Ev+0x1c>
 800096c:	f001 f97e 	bl	8001c6c <_ZdaPv>
 8000970:	4620      	mov	r0, r4
 8000972:	bd10      	pop	{r4, pc}
 8000974:	08003248 	stmdaeq	r0, {r3, r6, r9, ip, sp}

08000978 <_ZN13NeuralNetworkD0Ev>:
 8000978:	b510      	push	{r4, lr}
 800097a:	4604      	mov	r4, r0
 800097c:	f7ff ffea 	bl	8000954 <_ZN13NeuralNetworkD1Ev>
 8000980:	4620      	mov	r0, r4
 8000982:	21b0      	movs	r1, #176	; 0xb0
 8000984:	f001 f968 	bl	8001c58 <_ZdlPvj>
 8000988:	4620      	mov	r0, r4
 800098a:	bd10      	pop	{r4, pc}

0800098c <_ZN13NeuralNetworkC1Ev>:
 800098c:	4b0a      	ldr	r3, [pc, #40]	; (80009b8 <_ZN13NeuralNetworkC1Ev+0x2c>)
 800098e:	6003      	str	r3, [r0, #0]
 8000990:	2300      	movs	r3, #0
 8000992:	e9c0 3322 	strd	r3, r3, [r0, #136]	; 0x88
 8000996:	e9c0 3324 	strd	r3, r3, [r0, #144]	; 0x90
 800099a:	e9c0 3326 	strd	r3, r3, [r0, #152]	; 0x98
 800099e:	f100 0208 	add.w	r2, r0, #8
 80009a2:	f100 0188 	add.w	r1, r0, #136	; 0x88
 80009a6:	f842 3b04 	str.w	r3, [r2], #4
 80009aa:	428a      	cmp	r2, r1
 80009ac:	d1fb      	bne.n	80009a6 <_ZN13NeuralNetworkC1Ev+0x1a>
 80009ae:	6043      	str	r3, [r0, #4]
 80009b0:	e9c0 3328 	strd	r3, r3, [r0, #160]	; 0xa0
 80009b4:	4770      	bx	lr
 80009b6:	bf00      	nop
 80009b8:	08003248 	stmdaeq	r0, {r3, r6, r9, ip, sp}

080009bc <_ZN13NeuralNetwork7forwardEv>:
 80009bc:	e92d 41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
 80009c0:	2500      	movs	r5, #0
 80009c2:	4604      	mov	r4, r0
 80009c4:	f100 0608 	add.w	r6, r0, #8
 80009c8:	46a8      	mov	r8, r5
 80009ca:	6863      	ldr	r3, [r4, #4]
 80009cc:	42ab      	cmp	r3, r5
 80009ce:	d91d      	bls.n	8000a0c <_ZN13NeuralNetwork7forwardEv+0x50>
 80009d0:	2300      	movs	r3, #0
 80009d2:	6830      	ldr	r0, [r6, #0]
 80009d4:	f8d4 10ac 	ldr.w	r1, [r4, #172]	; 0xac
 80009d8:	6942      	ldr	r2, [r0, #20]
 80009da:	4617      	mov	r7, r2
 80009dc:	6902      	ldr	r2, [r0, #16]
 80009de:	fb07 fc02 	mul.w	ip, r7, r2
 80009e2:	6982      	ldr	r2, [r0, #24]
 80009e4:	fb02 f20c 	mul.w	r2, r2, ip
 80009e8:	4293      	cmp	r3, r2
 80009ea:	d203      	bcs.n	80009f4 <_ZN13NeuralNetwork7forwardEv+0x38>
 80009ec:	f801 8003 	strb.w	r8, [r1, r3]
 80009f0:	3301      	adds	r3, #1
 80009f2:	e7ee      	b.n	80009d2 <_ZN13NeuralNetwork7forwardEv+0x16>
 80009f4:	6803      	ldr	r3, [r0, #0]
 80009f6:	f8d4 20a8 	ldr.w	r2, [r4, #168]	; 0xa8
 80009fa:	689b      	ldr	r3, [r3, #8]
 80009fc:	4798      	blx	r3
 80009fe:	e9d4 322a 	ldrd	r3, r2, [r4, #168]	; 0xa8
 8000a02:	3501      	adds	r5, #1
 8000a04:	e9c4 232a 	strd	r2, r3, [r4, #168]	; 0xa8
 8000a08:	3604      	adds	r6, #4
 8000a0a:	e7de      	b.n	80009ca <_ZN13NeuralNetwork7forwardEv+0xe>
 8000a0c:	e9d4 322a 	ldrd	r3, r2, [r4, #168]	; 0xa8
 8000a10:	e9c4 232a 	strd	r2, r3, [r4, #168]	; 0xa8
 8000a14:	e8bd 81f0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, pc}

08000a18 <_ZN13NeuralNetwork12class_resultEv>:
 8000a18:	e9d0 3225 	ldrd	r3, r2, [r0, #148]	; 0x94
 8000a1c:	b530      	push	{r4, r5, lr}
 8000a1e:	4353      	muls	r3, r2
 8000a20:	f8d0 10ac 	ldr.w	r1, [r0, #172]	; 0xac
 8000a24:	f8d0 209c 	ldr.w	r2, [r0, #156]	; 0x9c
 8000a28:	f991 4000 	ldrsb.w	r4, [r1]
 8000a2c:	435a      	muls	r2, r3
 8000a2e:	2300      	movs	r3, #0
 8000a30:	4618      	mov	r0, r3
 8000a32:	4293      	cmp	r3, r2
 8000a34:	d006      	beq.n	8000a44 <_ZN13NeuralNetwork12class_resultEv+0x2c>
 8000a36:	56cd      	ldrsb	r5, [r1, r3]
 8000a38:	42a5      	cmp	r5, r4
 8000a3a:	bfc4      	itt	gt
 8000a3c:	4618      	movgt	r0, r3
 8000a3e:	462c      	movgt	r4, r5
 8000a40:	3301      	adds	r3, #1
 8000a42:	e7f6      	b.n	8000a32 <_ZN13NeuralNetwork12class_resultEv+0x1a>
 8000a44:	bd30      	pop	{r4, r5, pc}

08000a46 <_ZN13NeuralNetwork24get_required_buffer_sizeEv>:
 8000a46:	b570      	push	{r4, r5, r6, lr}
 8000a48:	6845      	ldr	r5, [r0, #4]
 8000a4a:	f100 0108 	add.w	r1, r0, #8
 8000a4e:	eb01 0585 	add.w	r5, r1, r5, lsl #2
 8000a52:	2000      	movs	r0, #0
 8000a54:	42a9      	cmp	r1, r5
 8000a56:	d012      	beq.n	8000a7e <_ZN13NeuralNetwork24get_required_buffer_sizeEv+0x38>
 8000a58:	f851 3b04 	ldr.w	r3, [r1], #4
 8000a5c:	e9d3 4201 	ldrd	r4, r2, [r3, #4]
 8000a60:	4354      	muls	r4, r2
 8000a62:	68da      	ldr	r2, [r3, #12]
 8000a64:	4362      	muls	r2, r4
 8000a66:	e9d3 6404 	ldrd	r6, r4, [r3, #16]
 8000a6a:	699b      	ldr	r3, [r3, #24]
 8000a6c:	4374      	muls	r4, r6
 8000a6e:	4363      	muls	r3, r4
 8000a70:	429a      	cmp	r2, r3
 8000a72:	bf38      	it	cc
 8000a74:	461a      	movcc	r2, r3
 8000a76:	4290      	cmp	r0, r2
 8000a78:	bf38      	it	cc
 8000a7a:	4610      	movcc	r0, r2
 8000a7c:	e7ea      	b.n	8000a54 <_ZN13NeuralNetwork24get_required_buffer_sizeEv+0xe>
 8000a7e:	bd70      	pop	{r4, r5, r6, pc}

08000a80 <_ZN13NeuralNetwork15allocate_bufferEv>:
 8000a80:	f8d0 30a0 	ldr.w	r3, [r0, #160]	; 0xa0
 8000a84:	b570      	push	{r4, r5, r6, lr}
 8000a86:	4605      	mov	r5, r0
 8000a88:	b9f3      	cbnz	r3, 8000ac8 <_ZN13NeuralNetwork15allocate_bufferEv+0x48>
 8000a8a:	f8d0 40a4 	ldr.w	r4, [r0, #164]	; 0xa4
 8000a8e:	b9dc      	cbnz	r4, 8000ac8 <_ZN13NeuralNetwork15allocate_bufferEv+0x48>
 8000a90:	f7ff ffd9 	bl	8000a46 <_ZN13NeuralNetwork24get_required_buffer_sizeEv>
 8000a94:	4606      	mov	r6, r0
 8000a96:	f001 f8e1 	bl	8001c5c <_Znaj>
 8000a9a:	f8c5 00a0 	str.w	r0, [r5, #160]	; 0xa0
 8000a9e:	4630      	mov	r0, r6
 8000aa0:	f001 f8dc 	bl	8001c5c <_Znaj>
 8000aa4:	f8d5 30a0 	ldr.w	r3, [r5, #160]	; 0xa0
 8000aa8:	f8c5 00a4 	str.w	r0, [r5, #164]	; 0xa4
 8000aac:	e9c5 302a 	strd	r3, r0, [r5, #168]	; 0xa8
 8000ab0:	4622      	mov	r2, r4
 8000ab2:	4623      	mov	r3, r4
 8000ab4:	429e      	cmp	r6, r3
 8000ab6:	d007      	beq.n	8000ac8 <_ZN13NeuralNetwork15allocate_bufferEv+0x48>
 8000ab8:	f8d5 10a0 	ldr.w	r1, [r5, #160]	; 0xa0
 8000abc:	54ca      	strb	r2, [r1, r3]
 8000abe:	f8d5 10a4 	ldr.w	r1, [r5, #164]	; 0xa4
 8000ac2:	54ca      	strb	r2, [r1, r3]
 8000ac4:	3301      	adds	r3, #1
 8000ac6:	e7f5      	b.n	8000ab4 <_ZN13NeuralNetwork15allocate_bufferEv+0x34>
 8000ac8:	bd70      	pop	{r4, r5, r6, pc}

08000aca <_Z28t_network_convolution_kernelILj3EEvPaS0_S0_S0_iijjjj>:
 8000aca:	e92d 4ff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, lr}
 8000ace:	b08b      	sub	sp, #44	; 0x2c
 8000ad0:	9109      	str	r1, [sp, #36]	; 0x24
 8000ad2:	e9dd 4116 	ldrd	r4, r1, [sp, #88]	; 0x58
 8000ad6:	1e8e      	subs	r6, r1, #2
 8000ad8:	4361      	muls	r1, r4
 8000ada:	9104      	str	r1, [sp, #16]
 8000adc:	1901      	adds	r1, r0, r4
 8000ade:	9d18      	ldr	r5, [sp, #96]	; 0x60
 8000ae0:	9102      	str	r1, [sp, #8]
 8000ae2:	9919      	ldr	r1, [sp, #100]	; 0x64
 8000ae4:	9605      	str	r6, [sp, #20]
 8000ae6:	1ea6      	subs	r6, r4, #2
 8000ae8:	1859      	adds	r1, r3, r1
 8000aea:	9606      	str	r6, [sp, #24]
 8000aec:	eb05 05c5 	add.w	r5, r5, r5, lsl #3
 8000af0:	f102 0609 	add.w	r6, r2, #9
 8000af4:	442e      	add	r6, r5
 8000af6:	9108      	str	r1, [sp, #32]
 8000af8:	0061      	lsls	r1, r4, #1
 8000afa:	9200      	str	r2, [sp, #0]
 8000afc:	9601      	str	r6, [sp, #4]
 8000afe:	9107      	str	r1, [sp, #28]
 8000b00:	9908      	ldr	r1, [sp, #32]
 8000b02:	428b      	cmp	r3, r1
 8000b04:	d07e      	beq.n	8000c04 <_Z28t_network_convolution_kernelILj3EEvPaS0_S0_S0_iijjjj+0x13a>
 8000b06:	f8dd e024 	ldr.w	lr, [sp, #36]	; 0x24
 8000b0a:	f8dd 8008 	ldr.w	r8, [sp, #8]
 8000b0e:	f04f 0c00 	mov.w	ip, #0
 8000b12:	f8cd 800c 	str.w	r8, [sp, #12]
 8000b16:	2700      	movs	r7, #0
 8000b18:	9900      	ldr	r1, [sp, #0]
 8000b1a:	eb07 000e 	add.w	r0, r7, lr
 8000b1e:	2600      	movs	r6, #0
 8000b20:	9a01      	ldr	r2, [sp, #4]
 8000b22:	3109      	adds	r1, #9
 8000b24:	4291      	cmp	r1, r2
 8000b26:	d03c      	beq.n	8000ba2 <_Z28t_network_convolution_kernelILj3EEvPaS0_S0_S0_iijjjj+0xd8>
 8000b28:	f990 b000 	ldrsb.w	fp, [r0]
 8000b2c:	f911 ac09 	ldrsb.w	sl, [r1, #-9]
 8000b30:	f911 9c07 	ldrsb.w	r9, [r1, #-7]
 8000b34:	9a07      	ldr	r2, [sp, #28]
 8000b36:	fb1a 660b 	smlabb	r6, sl, fp, r6
 8000b3a:	f990 b001 	ldrsb.w	fp, [r0, #1]
 8000b3e:	f911 ac08 	ldrsb.w	sl, [r1, #-8]
 8000b42:	fb1a 660b 	smlabb	r6, sl, fp, r6
 8000b46:	f990 b002 	ldrsb.w	fp, [r0, #2]
 8000b4a:	fb19 6b0b 	smlabb	fp, r9, fp, r6
 8000b4e:	f911 9c06 	ldrsb.w	r9, [r1, #-6]
 8000b52:	5706      	ldrsb	r6, [r0, r4]
 8000b54:	fb19 b606 	smlabb	r6, r9, r6, fp
 8000b58:	eb00 0904 	add.w	r9, r0, r4
 8000b5c:	f911 bc05 	ldrsb.w	fp, [r1, #-5]
 8000b60:	f999 a001 	ldrsb.w	sl, [r9, #1]
 8000b64:	fb1b 660a 	smlabb	r6, fp, sl, r6
 8000b68:	f999 b002 	ldrsb.w	fp, [r9, #2]
 8000b6c:	f911 ac04 	ldrsb.w	sl, [r1, #-4]
 8000b70:	f911 9c03 	ldrsb.w	r9, [r1, #-3]
 8000b74:	fb1a 6a0b 	smlabb	sl, sl, fp, r6
 8000b78:	f910 6014 	ldrsb.w	r6, [r0, r4, lsl #1]
 8000b7c:	f911 bc02 	ldrsb.w	fp, [r1, #-2]
 8000b80:	fb19 a606 	smlabb	r6, r9, r6, sl
 8000b84:	eb00 0902 	add.w	r9, r0, r2
 8000b88:	9a04      	ldr	r2, [sp, #16]
 8000b8a:	f999 a001 	ldrsb.w	sl, [r9, #1]
 8000b8e:	fb1b 660a 	smlabb	r6, fp, sl, r6
 8000b92:	f911 ac01 	ldrsb.w	sl, [r1, #-1]
 8000b96:	f999 b002 	ldrsb.w	fp, [r9, #2]
 8000b9a:	4410      	add	r0, r2
 8000b9c:	fb1a 660b 	smlabb	r6, sl, fp, r6
 8000ba0:	e7be      	b.n	8000b20 <_Z28t_network_convolution_kernelILj3EEvPaS0_S0_S0_iijjjj+0x56>
 8000ba2:	9a14      	ldr	r2, [sp, #80]	; 0x50
 8000ba4:	f993 1000 	ldrsb.w	r1, [r3]
 8000ba8:	4356      	muls	r6, r2
 8000baa:	2280      	movs	r2, #128	; 0x80
 8000bac:	fb96 f6f2 	sdiv	r6, r6, r2
 8000bb0:	9a15      	ldr	r2, [sp, #84]	; 0x54
 8000bb2:	fb02 6101 	mla	r1, r2, r1, r6
 8000bb6:	f44f 6280 	mov.w	r2, #1024	; 0x400
 8000bba:	fb91 f1f2 	sdiv	r1, r1, r2
 8000bbe:	f06f 027e 	mvn.w	r2, #126	; 0x7e
 8000bc2:	4291      	cmp	r1, r2
 8000bc4:	bfb8      	it	lt
 8000bc6:	4611      	movlt	r1, r2
 8000bc8:	297f      	cmp	r1, #127	; 0x7f
 8000bca:	9a03      	ldr	r2, [sp, #12]
 8000bcc:	bfa8      	it	ge
 8000bce:	217f      	movge	r1, #127	; 0x7f
 8000bd0:	f802 1f01 	strb.w	r1, [r2, #1]!
 8000bd4:	9203      	str	r2, [sp, #12]
 8000bd6:	9a06      	ldr	r2, [sp, #24]
 8000bd8:	3701      	adds	r7, #1
 8000bda:	42ba      	cmp	r2, r7
 8000bdc:	d29c      	bcs.n	8000b18 <_Z28t_network_convolution_kernelILj3EEvPaS0_S0_S0_iijjjj+0x4e>
 8000bde:	9a05      	ldr	r2, [sp, #20]
 8000be0:	f10c 0c01 	add.w	ip, ip, #1
 8000be4:	4562      	cmp	r2, ip
 8000be6:	44a0      	add	r8, r4
 8000be8:	44a6      	add	lr, r4
 8000bea:	d292      	bcs.n	8000b12 <_Z28t_network_convolution_kernelILj3EEvPaS0_S0_S0_iijjjj+0x48>
 8000bec:	9a00      	ldr	r2, [sp, #0]
 8000bee:	9904      	ldr	r1, [sp, #16]
 8000bf0:	442a      	add	r2, r5
 8000bf2:	9200      	str	r2, [sp, #0]
 8000bf4:	9a01      	ldr	r2, [sp, #4]
 8000bf6:	442a      	add	r2, r5
 8000bf8:	9201      	str	r2, [sp, #4]
 8000bfa:	9a02      	ldr	r2, [sp, #8]
 8000bfc:	440a      	add	r2, r1
 8000bfe:	3301      	adds	r3, #1
 8000c00:	9202      	str	r2, [sp, #8]
 8000c02:	e77d      	b.n	8000b00 <_Z28t_network_convolution_kernelILj3EEvPaS0_S0_S0_iijjjj+0x36>
 8000c04:	b00b      	add	sp, #44	; 0x2c
 8000c06:	e8bd 8ff0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, pc}

08000c0a <_Z28t_network_convolution_kernelILj5EEvPaS0_S0_S0_iijjjj>:
 8000c0a:	e92d 4ff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, lr}
 8000c0e:	b08f      	sub	sp, #60	; 0x3c
 8000c10:	e9dd 451a 	ldrd	r4, r5, [sp, #104]	; 0x68
 8000c14:	1f2e      	subs	r6, r5, #4
 8000c16:	960a      	str	r6, [sp, #40]	; 0x28
 8000c18:	1f26      	subs	r6, r4, #4
 8000c1a:	960b      	str	r6, [sp, #44]	; 0x2c
 8000c1c:	9e1c      	ldr	r6, [sp, #112]	; 0x70
 8000c1e:	9201      	str	r2, [sp, #4]
 8000c20:	2719      	movs	r7, #25
 8000c22:	437e      	muls	r6, r7
 8000c24:	443a      	add	r2, r7
 8000c26:	4432      	add	r2, r6
 8000c28:	9206      	str	r2, [sp, #24]
 8000c2a:	eb00 0244 	add.w	r2, r0, r4, lsl #1
 8000c2e:	9207      	str	r2, [sp, #28]
 8000c30:	9a1d      	ldr	r2, [sp, #116]	; 0x74
 8000c32:	9604      	str	r6, [sp, #16]
 8000c34:	189a      	adds	r2, r3, r2
 8000c36:	920c      	str	r2, [sp, #48]	; 0x30
 8000c38:	190a      	adds	r2, r1, r4
 8000c3a:	4365      	muls	r5, r4
 8000c3c:	9209      	str	r2, [sp, #36]	; 0x24
 8000c3e:	9a0c      	ldr	r2, [sp, #48]	; 0x30
 8000c40:	4293      	cmp	r3, r2
 8000c42:	f000 80f8 	beq.w	8000e36 <_Z28t_network_convolution_kernelILj5EEvPaS0_S0_S0_iijjjj+0x22c>
 8000c46:	9a09      	ldr	r2, [sp, #36]	; 0x24
 8000c48:	4252      	negs	r2, r2
 8000c4a:	9205      	str	r2, [sp, #20]
 8000c4c:	9a07      	ldr	r2, [sp, #28]
 8000c4e:	f04f 0900 	mov.w	r9, #0
 8000c52:	3201      	adds	r2, #1
 8000c54:	f8cd 900c 	str.w	r9, [sp, #12]
 8000c58:	920d      	str	r2, [sp, #52]	; 0x34
 8000c5a:	9a0d      	ldr	r2, [sp, #52]	; 0x34
 8000c5c:	444a      	add	r2, r9
 8000c5e:	9208      	str	r2, [sp, #32]
 8000c60:	9a09      	ldr	r2, [sp, #36]	; 0x24
 8000c62:	eb02 0809 	add.w	r8, r2, r9
 8000c66:	eb04 0608 	add.w	r6, r4, r8
 8000c6a:	19a0      	adds	r0, r4, r6
 8000c6c:	2200      	movs	r2, #0
 8000c6e:	9901      	ldr	r1, [sp, #4]
 8000c70:	9202      	str	r2, [sp, #8]
 8000c72:	eba8 0e04 	sub.w	lr, r8, r4
 8000c76:	1827      	adds	r7, r4, r0
 8000c78:	46c4      	mov	ip, r8
 8000c7a:	9a06      	ldr	r2, [sp, #24]
 8000c7c:	3119      	adds	r1, #25
 8000c7e:	4291      	cmp	r1, r2
 8000c80:	f000 809e 	beq.w	8000dc0 <_Z28t_network_convolution_kernelILj5EEvPaS0_S0_S0_iijjjj+0x1b6>
 8000c84:	f99e a000 	ldrsb.w	sl, [lr]
 8000c88:	f911 bc19 	ldrsb.w	fp, [r1, #-25]
 8000c8c:	9a02      	ldr	r2, [sp, #8]
 8000c8e:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000c92:	f99e a001 	ldrsb.w	sl, [lr, #1]
 8000c96:	f911 bc18 	ldrsb.w	fp, [r1, #-24]
 8000c9a:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000c9e:	f99e a002 	ldrsb.w	sl, [lr, #2]
 8000ca2:	f911 bc17 	ldrsb.w	fp, [r1, #-23]
 8000ca6:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000caa:	f99e a003 	ldrsb.w	sl, [lr, #3]
 8000cae:	f911 bc16 	ldrsb.w	fp, [r1, #-22]
 8000cb2:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000cb6:	f99e a004 	ldrsb.w	sl, [lr, #4]
 8000cba:	f911 bc15 	ldrsb.w	fp, [r1, #-21]
 8000cbe:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000cc2:	f99c a000 	ldrsb.w	sl, [ip]
 8000cc6:	f911 bc14 	ldrsb.w	fp, [r1, #-20]
 8000cca:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000cce:	f99c a001 	ldrsb.w	sl, [ip, #1]
 8000cd2:	f911 bc13 	ldrsb.w	fp, [r1, #-19]
 8000cd6:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000cda:	f99c a002 	ldrsb.w	sl, [ip, #2]
 8000cde:	f911 bc12 	ldrsb.w	fp, [r1, #-18]
 8000ce2:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000ce6:	f99c a003 	ldrsb.w	sl, [ip, #3]
 8000cea:	f911 bc11 	ldrsb.w	fp, [r1, #-17]
 8000cee:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000cf2:	f99c a004 	ldrsb.w	sl, [ip, #4]
 8000cf6:	f911 bc10 	ldrsb.w	fp, [r1, #-16]
 8000cfa:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000cfe:	f996 a000 	ldrsb.w	sl, [r6]
 8000d02:	f911 bc0f 	ldrsb.w	fp, [r1, #-15]
 8000d06:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d0a:	f996 a001 	ldrsb.w	sl, [r6, #1]
 8000d0e:	f911 bc0e 	ldrsb.w	fp, [r1, #-14]
 8000d12:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d16:	f996 a002 	ldrsb.w	sl, [r6, #2]
 8000d1a:	f911 bc0d 	ldrsb.w	fp, [r1, #-13]
 8000d1e:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d22:	f996 a003 	ldrsb.w	sl, [r6, #3]
 8000d26:	f911 bc0c 	ldrsb.w	fp, [r1, #-12]
 8000d2a:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d2e:	f911 bc0b 	ldrsb.w	fp, [r1, #-11]
 8000d32:	f996 a004 	ldrsb.w	sl, [r6, #4]
 8000d36:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d3a:	f911 bc0a 	ldrsb.w	fp, [r1, #-10]
 8000d3e:	f990 a000 	ldrsb.w	sl, [r0]
 8000d42:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d46:	f990 a001 	ldrsb.w	sl, [r0, #1]
 8000d4a:	f911 bc09 	ldrsb.w	fp, [r1, #-9]
 8000d4e:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d52:	f990 a002 	ldrsb.w	sl, [r0, #2]
 8000d56:	f911 bc08 	ldrsb.w	fp, [r1, #-8]
 8000d5a:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d5e:	f990 a003 	ldrsb.w	sl, [r0, #3]
 8000d62:	f911 bc07 	ldrsb.w	fp, [r1, #-7]
 8000d66:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d6a:	f990 a004 	ldrsb.w	sl, [r0, #4]
 8000d6e:	f911 bc06 	ldrsb.w	fp, [r1, #-6]
 8000d72:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d76:	f997 a000 	ldrsb.w	sl, [r7]
 8000d7a:	f911 bc05 	ldrsb.w	fp, [r1, #-5]
 8000d7e:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d82:	f997 a001 	ldrsb.w	sl, [r7, #1]
 8000d86:	f911 bc04 	ldrsb.w	fp, [r1, #-4]
 8000d8a:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d8e:	f997 a002 	ldrsb.w	sl, [r7, #2]
 8000d92:	f911 bc03 	ldrsb.w	fp, [r1, #-3]
 8000d96:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000d9a:	f997 a003 	ldrsb.w	sl, [r7, #3]
 8000d9e:	f911 bc02 	ldrsb.w	fp, [r1, #-2]
 8000da2:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000da6:	f997 a004 	ldrsb.w	sl, [r7, #4]
 8000daa:	f911 bc01 	ldrsb.w	fp, [r1, #-1]
 8000dae:	fb1b 220a 	smlabb	r2, fp, sl, r2
 8000db2:	9202      	str	r2, [sp, #8]
 8000db4:	44ae      	add	lr, r5
 8000db6:	44ac      	add	ip, r5
 8000db8:	442e      	add	r6, r5
 8000dba:	4428      	add	r0, r5
 8000dbc:	442f      	add	r7, r5
 8000dbe:	e75c      	b.n	8000c7a <_Z28t_network_convolution_kernelILj5EEvPaS0_S0_S0_iijjjj+0x70>
 8000dc0:	9902      	ldr	r1, [sp, #8]
 8000dc2:	9a18      	ldr	r2, [sp, #96]	; 0x60
 8000dc4:	2080      	movs	r0, #128	; 0x80
 8000dc6:	434a      	muls	r2, r1
 8000dc8:	f993 1000 	ldrsb.w	r1, [r3]
 8000dcc:	fb92 f2f0 	sdiv	r2, r2, r0
 8000dd0:	9819      	ldr	r0, [sp, #100]	; 0x64
 8000dd2:	fb00 2101 	mla	r1, r0, r1, r2
 8000dd6:	f44f 6280 	mov.w	r2, #1024	; 0x400
 8000dda:	fb91 f1f2 	sdiv	r1, r1, r2
 8000dde:	f06f 027e 	mvn.w	r2, #126	; 0x7e
 8000de2:	4291      	cmp	r1, r2
 8000de4:	bfb8      	it	lt
 8000de6:	4611      	movlt	r1, r2
 8000de8:	297f      	cmp	r1, #127	; 0x7f
 8000dea:	9a08      	ldr	r2, [sp, #32]
 8000dec:	bfa8      	it	ge
 8000dee:	217f      	movge	r1, #127	; 0x7f
 8000df0:	f802 1f01 	strb.w	r1, [r2, #1]!
 8000df4:	9208      	str	r2, [sp, #32]
 8000df6:	9a05      	ldr	r2, [sp, #20]
 8000df8:	990b      	ldr	r1, [sp, #44]	; 0x2c
 8000dfa:	f108 0801 	add.w	r8, r8, #1
 8000dfe:	4442      	add	r2, r8
 8000e00:	4291      	cmp	r1, r2
 8000e02:	f4bf af30 	bcs.w	8000c66 <_Z28t_network_convolution_kernelILj5EEvPaS0_S0_S0_iijjjj+0x5c>
 8000e06:	9a03      	ldr	r2, [sp, #12]
 8000e08:	3201      	adds	r2, #1
 8000e0a:	9203      	str	r2, [sp, #12]
 8000e0c:	9a05      	ldr	r2, [sp, #20]
 8000e0e:	9903      	ldr	r1, [sp, #12]
 8000e10:	1b12      	subs	r2, r2, r4
 8000e12:	9205      	str	r2, [sp, #20]
 8000e14:	9a0a      	ldr	r2, [sp, #40]	; 0x28
 8000e16:	428a      	cmp	r2, r1
 8000e18:	44a1      	add	r9, r4
 8000e1a:	f4bf af1e 	bcs.w	8000c5a <_Z28t_network_convolution_kernelILj5EEvPaS0_S0_S0_iijjjj+0x50>
 8000e1e:	9a01      	ldr	r2, [sp, #4]
 8000e20:	9904      	ldr	r1, [sp, #16]
 8000e22:	440a      	add	r2, r1
 8000e24:	9201      	str	r2, [sp, #4]
 8000e26:	9a06      	ldr	r2, [sp, #24]
 8000e28:	440a      	add	r2, r1
 8000e2a:	9206      	str	r2, [sp, #24]
 8000e2c:	9a07      	ldr	r2, [sp, #28]
 8000e2e:	442a      	add	r2, r5
 8000e30:	3301      	adds	r3, #1
 8000e32:	9207      	str	r2, [sp, #28]
 8000e34:	e703      	b.n	8000c3e <_Z28t_network_convolution_kernelILj5EEvPaS0_S0_S0_iijjjj+0x34>
 8000e36:	b00f      	add	sp, #60	; 0x3c
 8000e38:	e8bd 8ff0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, pc}

08000e3c <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_>:
 8000e3c:	e92d 4ff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, lr}
 8000e40:	b08f      	sub	sp, #60	; 0x3c
 8000e42:	4683      	mov	fp, r0
 8000e44:	f8dd e074 	ldr.w	lr, [sp, #116]	; 0x74
 8000e48:	910d      	str	r1, [sp, #52]	; 0x34
 8000e4a:	f1be 0f03 	cmp.w	lr, #3
 8000e4e:	e9dd 461a 	ldrd	r4, r6, [sp, #104]	; 0x68
 8000e52:	9d1c      	ldr	r5, [sp, #112]	; 0x70
 8000e54:	9f1f      	ldr	r7, [sp, #124]	; 0x7c
 8000e56:	d059      	beq.n	8000f0c <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0xd0>
 8000e58:	f1be 0f05 	cmp.w	lr, #5
 8000e5c:	d063      	beq.n	8000f26 <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0xea>
 8000e5e:	f1be 0f01 	cmp.w	lr, #1
 8000e62:	d15d      	bne.n	8000f20 <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0xe4>
 8000e64:	4251      	negs	r1, r2
 8000e66:	9108      	str	r1, [sp, #32]
 8000e68:	fb06 f104 	mul.w	r1, r6, r4
 8000e6c:	9109      	str	r1, [sp, #36]	; 0x24
 8000e6e:	19d9      	adds	r1, r3, r7
 8000e70:	910c      	str	r1, [sp, #48]	; 0x30
 8000e72:	9909      	ldr	r1, [sp, #36]	; 0x24
 8000e74:	4249      	negs	r1, r1
 8000e76:	910b      	str	r1, [sp, #44]	; 0x2c
 8000e78:	990c      	ldr	r1, [sp, #48]	; 0x30
 8000e7a:	428b      	cmp	r3, r1
 8000e7c:	d050      	beq.n	8000f20 <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0xe4>
 8000e7e:	2100      	movs	r1, #0
 8000e80:	f8dd c034 	ldr.w	ip, [sp, #52]	; 0x34
 8000e84:	9107      	str	r1, [sp, #28]
 8000e86:	46de      	mov	lr, fp
 8000e88:	2000      	movs	r0, #0
 8000e8a:	eb0c 0800 	add.w	r8, ip, r0
 8000e8e:	4691      	mov	r9, r2
 8000e90:	2100      	movs	r1, #0
 8000e92:	9f09      	ldr	r7, [sp, #36]	; 0x24
 8000e94:	44b8      	add	r8, r7
 8000e96:	9f08      	ldr	r7, [sp, #32]
 8000e98:	eb09 0a07 	add.w	sl, r9, r7
 8000e9c:	4555      	cmp	r5, sl
 8000e9e:	d909      	bls.n	8000eb4 <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0x78>
 8000ea0:	f919 7b01 	ldrsb.w	r7, [r9], #1
 8000ea4:	970a      	str	r7, [sp, #40]	; 0x28
 8000ea6:	9f0b      	ldr	r7, [sp, #44]	; 0x2c
 8000ea8:	f918 a007 	ldrsb.w	sl, [r8, r7]
 8000eac:	9f0a      	ldr	r7, [sp, #40]	; 0x28
 8000eae:	fb17 110a 	smlabb	r1, r7, sl, r1
 8000eb2:	e7ee      	b.n	8000e92 <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0x56>
 8000eb4:	9f18      	ldr	r7, [sp, #96]	; 0x60
 8000eb6:	f993 8000 	ldrsb.w	r8, [r3]
 8000eba:	4379      	muls	r1, r7
 8000ebc:	2780      	movs	r7, #128	; 0x80
 8000ebe:	fb91 f1f7 	sdiv	r1, r1, r7
 8000ec2:	9f19      	ldr	r7, [sp, #100]	; 0x64
 8000ec4:	fb07 1808 	mla	r8, r7, r8, r1
 8000ec8:	f44f 6180 	mov.w	r1, #1024	; 0x400
 8000ecc:	fb98 f8f1 	sdiv	r8, r8, r1
 8000ed0:	f06f 017e 	mvn.w	r1, #126	; 0x7e
 8000ed4:	4588      	cmp	r8, r1
 8000ed6:	bfb8      	it	lt
 8000ed8:	4688      	movlt	r8, r1
 8000eda:	f1b8 0f7f 	cmp.w	r8, #127	; 0x7f
 8000ede:	bfa8      	it	ge
 8000ee0:	f04f 087f 	movge.w	r8, #127	; 0x7f
 8000ee4:	f80e 8000 	strb.w	r8, [lr, r0]
 8000ee8:	3001      	adds	r0, #1
 8000eea:	4284      	cmp	r4, r0
 8000eec:	d2cd      	bcs.n	8000e8a <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0x4e>
 8000eee:	9907      	ldr	r1, [sp, #28]
 8000ef0:	3101      	adds	r1, #1
 8000ef2:	428e      	cmp	r6, r1
 8000ef4:	9107      	str	r1, [sp, #28]
 8000ef6:	44a6      	add	lr, r4
 8000ef8:	44a4      	add	ip, r4
 8000efa:	d2c5      	bcs.n	8000e88 <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0x4c>
 8000efc:	9908      	ldr	r1, [sp, #32]
 8000efe:	1b49      	subs	r1, r1, r5
 8000f00:	9108      	str	r1, [sp, #32]
 8000f02:	9909      	ldr	r1, [sp, #36]	; 0x24
 8000f04:	3301      	adds	r3, #1
 8000f06:	442a      	add	r2, r5
 8000f08:	448b      	add	fp, r1
 8000f0a:	e7b5      	b.n	8000e78 <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0x3c>
 8000f0c:	e9cd 4602 	strd	r4, r6, [sp, #8]
 8000f10:	9c19      	ldr	r4, [sp, #100]	; 0x64
 8000f12:	9401      	str	r4, [sp, #4]
 8000f14:	9c18      	ldr	r4, [sp, #96]	; 0x60
 8000f16:	9400      	str	r4, [sp, #0]
 8000f18:	e9cd 5704 	strd	r5, r7, [sp, #16]
 8000f1c:	f7ff fdd5 	bl	8000aca <_Z28t_network_convolution_kernelILj3EEvPaS0_S0_S0_iijjjj>
 8000f20:	b00f      	add	sp, #60	; 0x3c
 8000f22:	e8bd 8ff0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, pc}
 8000f26:	e9cd 4602 	strd	r4, r6, [sp, #8]
 8000f2a:	9c19      	ldr	r4, [sp, #100]	; 0x64
 8000f2c:	9401      	str	r4, [sp, #4]
 8000f2e:	9c18      	ldr	r4, [sp, #96]	; 0x60
 8000f30:	9400      	str	r4, [sp, #0]
 8000f32:	e9cd 5704 	strd	r5, r7, [sp, #16]
 8000f36:	f7ff fe68 	bl	8000c0a <_Z28t_network_convolution_kernelILj5EEvPaS0_S0_S0_iijjjj>
 8000f3a:	e7f1      	b.n	8000f20 <_Z26network_convolution_kernelPaS_S_S_ii14sLayerGeometryS0_+0xe4>

08000f3c <_ZN12NetworkLayerD1Ev>:
 8000f3c:	4770      	bx	lr

08000f3e <_ZN12NetworkLayer7forwardEPaS0_>:
 8000f3e:	4770      	bx	lr

08000f40 <_ZN12NetworkLayerD0Ev>:
 8000f40:	b510      	push	{r4, lr}
 8000f42:	2128      	movs	r1, #40	; 0x28
 8000f44:	4604      	mov	r4, r0
 8000f46:	f000 fe87 	bl	8001c58 <_ZdlPvj>
 8000f4a:	4620      	mov	r0, r4
 8000f4c:	bd10      	pop	{r4, pc}
 8000f4e:	0000      	movs	r0, r0

08000f50 <_ZN12NetworkLayerC1Ev>:
 8000f50:	4a06      	ldr	r2, [pc, #24]	; (8000f6c <_ZN12NetworkLayerC1Ev+0x1c>)
 8000f52:	6002      	str	r2, [r0, #0]
 8000f54:	2200      	movs	r2, #0
 8000f56:	e9c0 2201 	strd	r2, r2, [r0, #4]
 8000f5a:	e9c0 2203 	strd	r2, r2, [r0, #12]
 8000f5e:	e9c0 2205 	strd	r2, r2, [r0, #20]
 8000f62:	e9c0 2207 	strd	r2, r2, [r0, #28]
 8000f66:	6242      	str	r2, [r0, #36]	; 0x24
 8000f68:	4770      	bx	lr
 8000f6a:	bf00      	nop
 8000f6c:	08003260 	stmdaeq	r0, {r5, r6, r9, ip, sp}

08000f70 <_ZN11LineNetworkD1Ev>:
 8000f70:	b5f8      	push	{r3, r4, r5, r6, r7, lr}
 8000f72:	4604      	mov	r4, r0
 8000f74:	4b0b      	ldr	r3, [pc, #44]	; (8000fa4 <_ZN11LineNetworkD1Ev+0x34>)
 8000f76:	f844 3b08 	str.w	r3, [r4], #8
 8000f7a:	2600      	movs	r6, #0
 8000f7c:	4605      	mov	r5, r0
 8000f7e:	4637      	mov	r7, r6
 8000f80:	686b      	ldr	r3, [r5, #4]
 8000f82:	42b3      	cmp	r3, r6
 8000f84:	d908      	bls.n	8000f98 <_ZN11LineNetworkD1Ev+0x28>
 8000f86:	6820      	ldr	r0, [r4, #0]
 8000f88:	b110      	cbz	r0, 8000f90 <_ZN11LineNetworkD1Ev+0x20>
 8000f8a:	6803      	ldr	r3, [r0, #0]
 8000f8c:	685b      	ldr	r3, [r3, #4]
 8000f8e:	4798      	blx	r3
 8000f90:	f844 7b04 	str.w	r7, [r4], #4
 8000f94:	3601      	adds	r6, #1
 8000f96:	e7f3      	b.n	8000f80 <_ZN11LineNetworkD1Ev+0x10>
 8000f98:	4628      	mov	r0, r5
 8000f9a:	f7ff fcdb 	bl	8000954 <_ZN13NeuralNetworkD1Ev>
 8000f9e:	4628      	mov	r0, r5
 8000fa0:	bdf8      	pop	{r3, r4, r5, r6, r7, pc}
 8000fa2:	bf00      	nop
 8000fa4:	0800378c 	stmdaeq	r0, {r2, r3, r7, r8, r9, sl, ip, sp}

08000fa8 <_ZN11LineNetworkD0Ev>:
 8000fa8:	b510      	push	{r4, lr}
 8000faa:	4604      	mov	r4, r0
 8000fac:	f7ff ffe0 	bl	8000f70 <_ZN11LineNetworkD1Ev>
 8000fb0:	4620      	mov	r0, r4
 8000fb2:	21b0      	movs	r1, #176	; 0xb0
 8000fb4:	f000 fe50 	bl	8001c58 <_ZdlPvj>
 8000fb8:	4620      	mov	r0, r4
 8000fba:	bd10      	pop	{r4, pc}

08000fbc <_ZN11LineNetworkC1Ev>:
 8000fbc:	e92d 43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
 8000fc0:	4680      	mov	r8, r0
 8000fc2:	b095      	sub	sp, #84	; 0x54
 8000fc4:	f7ff fce2 	bl	800098c <_ZN13NeuralNetworkC1Ev>
 8000fc8:	4b80      	ldr	r3, [pc, #512]	; (80011cc <_ZN11LineNetworkC1Ev+0x210>)
 8000fca:	f8c8 3000 	str.w	r3, [r8]
 8000fce:	2201      	movs	r2, #1
 8000fd0:	2308      	movs	r3, #8
 8000fd2:	e9c8 2326 	strd	r2, r3, [r8, #152]	; 0x98
 8000fd6:	e9c8 3322 	strd	r3, r3, [r8, #136]	; 0x88
 8000fda:	4b7d      	ldr	r3, [pc, #500]	; (80011d0 <_ZN11LineNetworkC1Ev+0x214>)
 8000fdc:	e9c8 2224 	strd	r2, r2, [r8, #144]	; 0x90
 8000fe0:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8000fe4:	4b7b      	ldr	r3, [pc, #492]	; (80011d4 <_ZN11LineNetworkC1Ev+0x218>)
 8000fe6:	ac0b      	add	r4, sp, #44	; 0x2c
 8000fe8:	e884 0007 	stmia.w	r4, {r0, r1, r2}
 8000fec:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8000ff0:	4b79      	ldr	r3, [pc, #484]	; (80011d8 <_ZN11LineNetworkC1Ev+0x21c>)
 8000ff2:	ad0e      	add	r5, sp, #56	; 0x38
 8000ff4:	e885 0007 	stmia.w	r5, {r0, r1, r2}
 8000ff8:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8000ffc:	ae11      	add	r6, sp, #68	; 0x44
 8000ffe:	e886 0007 	stmia.w	r6, {r0, r1, r2}
 8001002:	2038      	movs	r0, #56	; 0x38
 8001004:	f000 fe20 	bl	8001c48 <_Znwj>
 8001008:	f240 43f1 	movw	r3, #1265	; 0x4f1
 800100c:	f240 32d2 	movw	r2, #978	; 0x3d2
 8001010:	e9cd 3208 	strd	r3, r2, [sp, #32]
 8001014:	4b71      	ldr	r3, [pc, #452]	; (80011dc <_ZN11LineNetworkC1Ev+0x220>)
 8001016:	9307      	str	r3, [sp, #28]
 8001018:	4b71      	ldr	r3, [pc, #452]	; (80011e0 <_ZN11LineNetworkC1Ev+0x224>)
 800101a:	9306      	str	r3, [sp, #24]
 800101c:	4681      	mov	r9, r0
 800101e:	e896 0007 	ldmia.w	r6, {r0, r1, r2}
 8001022:	af03      	add	r7, sp, #12
 8001024:	e887 0007 	stmia.w	r7, {r0, r1, r2}
 8001028:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 800102c:	e88d 0007 	stmia.w	sp, {r0, r1, r2}
 8001030:	4648      	mov	r0, r9
 8001032:	e894 000e 	ldmia.w	r4, {r1, r2, r3}
 8001036:	f7ff fbcf 	bl	80007d8 <_ZN19NetConvolutionLayerC1E14sLayerGeometryS0_S0_PKaS2_ii>
 800103a:	4b6a      	ldr	r3, [pc, #424]	; (80011e4 <_ZN11LineNetworkC1Ev+0x228>)
 800103c:	f8c8 9008 	str.w	r9, [r8, #8]
 8001040:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8001044:	4b68      	ldr	r3, [pc, #416]	; (80011e8 <_ZN11LineNetworkC1Ev+0x22c>)
 8001046:	e884 0007 	stmia.w	r4, {r0, r1, r2}
 800104a:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 800104e:	4b67      	ldr	r3, [pc, #412]	; (80011ec <_ZN11LineNetworkC1Ev+0x230>)
 8001050:	e885 0007 	stmia.w	r5, {r0, r1, r2}
 8001054:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8001058:	e886 0007 	stmia.w	r6, {r0, r1, r2}
 800105c:	202c      	movs	r0, #44	; 0x2c
 800105e:	f000 fdf3 	bl	8001c48 <_Znwj>
 8001062:	4681      	mov	r9, r0
 8001064:	e896 0007 	ldmia.w	r6, {r0, r1, r2}
 8001068:	e887 0007 	stmia.w	r7, {r0, r1, r2}
 800106c:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 8001070:	e88d 0007 	stmia.w	sp, {r0, r1, r2}
 8001074:	4648      	mov	r0, r9
 8001076:	e894 000e 	ldmia.w	r4, {r1, r2, r3}
 800107a:	f7ff f971 	bl	8000360 <_ZN12NetReluLayerC1E14sLayerGeometryS0_S0_>
 800107e:	4b5c      	ldr	r3, [pc, #368]	; (80011f0 <_ZN11LineNetworkC1Ev+0x234>)
 8001080:	f8c8 900c 	str.w	r9, [r8, #12]
 8001084:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8001088:	4b5a      	ldr	r3, [pc, #360]	; (80011f4 <_ZN11LineNetworkC1Ev+0x238>)
 800108a:	e884 0007 	stmia.w	r4, {r0, r1, r2}
 800108e:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8001092:	4b59      	ldr	r3, [pc, #356]	; (80011f8 <_ZN11LineNetworkC1Ev+0x23c>)
 8001094:	e885 0007 	stmia.w	r5, {r0, r1, r2}
 8001098:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 800109c:	e886 0007 	stmia.w	r6, {r0, r1, r2}
 80010a0:	2028      	movs	r0, #40	; 0x28
 80010a2:	f000 fdd1 	bl	8001c48 <_Znwj>
 80010a6:	4681      	mov	r9, r0
 80010a8:	e896 0007 	ldmia.w	r6, {r0, r1, r2}
 80010ac:	e887 0007 	stmia.w	r7, {r0, r1, r2}
 80010b0:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 80010b4:	e88d 0007 	stmia.w	sp, {r0, r1, r2}
 80010b8:	4648      	mov	r0, r9
 80010ba:	e894 000e 	ldmia.w	r4, {r1, r2, r3}
 80010be:	f7ff fb3b 	bl	8000738 <_ZN18NetMaxPoolingLayerC1E14sLayerGeometryS0_S0_>
 80010c2:	4b4e      	ldr	r3, [pc, #312]	; (80011fc <_ZN11LineNetworkC1Ev+0x240>)
 80010c4:	f8c8 9010 	str.w	r9, [r8, #16]
 80010c8:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 80010cc:	4b4c      	ldr	r3, [pc, #304]	; (8001200 <_ZN11LineNetworkC1Ev+0x244>)
 80010ce:	e884 0007 	stmia.w	r4, {r0, r1, r2}
 80010d2:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 80010d6:	4b4b      	ldr	r3, [pc, #300]	; (8001204 <_ZN11LineNetworkC1Ev+0x248>)
 80010d8:	e885 0007 	stmia.w	r5, {r0, r1, r2}
 80010dc:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 80010e0:	e886 0007 	stmia.w	r6, {r0, r1, r2}
 80010e4:	2038      	movs	r0, #56	; 0x38
 80010e6:	f000 fdaf 	bl	8001c48 <_Znwj>
 80010ea:	f240 7383 	movw	r3, #1923	; 0x783
 80010ee:	f240 21c6 	movw	r1, #710	; 0x2c6
 80010f2:	e9cd 3108 	strd	r3, r1, [sp, #32]
 80010f6:	4b44      	ldr	r3, [pc, #272]	; (8001208 <_ZN11LineNetworkC1Ev+0x24c>)
 80010f8:	9307      	str	r3, [sp, #28]
 80010fa:	4b44      	ldr	r3, [pc, #272]	; (800120c <_ZN11LineNetworkC1Ev+0x250>)
 80010fc:	9306      	str	r3, [sp, #24]
 80010fe:	4681      	mov	r9, r0
 8001100:	e896 0007 	ldmia.w	r6, {r0, r1, r2}
 8001104:	e887 0007 	stmia.w	r7, {r0, r1, r2}
 8001108:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 800110c:	e88d 0007 	stmia.w	sp, {r0, r1, r2}
 8001110:	4648      	mov	r0, r9
 8001112:	e894 000e 	ldmia.w	r4, {r1, r2, r3}
 8001116:	f7ff f98f 	bl	8000438 <_ZN24NetDenseConvolutionLayerC1E14sLayerGeometryS0_S0_PKaS2_ii>
 800111a:	4b3d      	ldr	r3, [pc, #244]	; (8001210 <_ZN11LineNetworkC1Ev+0x254>)
 800111c:	f8c8 9014 	str.w	r9, [r8, #20]
 8001120:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8001124:	4b3b      	ldr	r3, [pc, #236]	; (8001214 <_ZN11LineNetworkC1Ev+0x258>)
 8001126:	e884 0007 	stmia.w	r4, {r0, r1, r2}
 800112a:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 800112e:	4b3a      	ldr	r3, [pc, #232]	; (8001218 <_ZN11LineNetworkC1Ev+0x25c>)
 8001130:	e885 0007 	stmia.w	r5, {r0, r1, r2}
 8001134:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8001138:	e886 0007 	stmia.w	r6, {r0, r1, r2}
 800113c:	202c      	movs	r0, #44	; 0x2c
 800113e:	f000 fd83 	bl	8001c48 <_Znwj>
 8001142:	4681      	mov	r9, r0
 8001144:	e896 0007 	ldmia.w	r6, {r0, r1, r2}
 8001148:	e887 0007 	stmia.w	r7, {r0, r1, r2}
 800114c:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 8001150:	e88d 0007 	stmia.w	sp, {r0, r1, r2}
 8001154:	4648      	mov	r0, r9
 8001156:	e894 000e 	ldmia.w	r4, {r1, r2, r3}
 800115a:	f7ff f901 	bl	8000360 <_ZN12NetReluLayerC1E14sLayerGeometryS0_S0_>
 800115e:	4b2f      	ldr	r3, [pc, #188]	; (800121c <_ZN11LineNetworkC1Ev+0x260>)
 8001160:	f8c8 9018 	str.w	r9, [r8, #24]
 8001164:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8001168:	4b2d      	ldr	r3, [pc, #180]	; (8001220 <_ZN11LineNetworkC1Ev+0x264>)
 800116a:	e884 0007 	stmia.w	r4, {r0, r1, r2}
 800116e:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 8001172:	4b2c      	ldr	r3, [pc, #176]	; (8001224 <_ZN11LineNetworkC1Ev+0x268>)
 8001174:	e885 0007 	stmia.w	r5, {r0, r1, r2}
 8001178:	e893 0007 	ldmia.w	r3, {r0, r1, r2}
 800117c:	e886 0007 	stmia.w	r6, {r0, r1, r2}
 8001180:	2040      	movs	r0, #64	; 0x40
 8001182:	f000 fd61 	bl	8001c48 <_Znwj>
 8001186:	f240 430a 	movw	r3, #1034	; 0x40a
 800118a:	4681      	mov	r9, r0
 800118c:	20a3      	movs	r0, #163	; 0xa3
 800118e:	e9cd 3008 	strd	r3, r0, [sp, #32]
 8001192:	4b25      	ldr	r3, [pc, #148]	; (8001228 <_ZN11LineNetworkC1Ev+0x26c>)
 8001194:	9307      	str	r3, [sp, #28]
 8001196:	4b25      	ldr	r3, [pc, #148]	; (800122c <_ZN11LineNetworkC1Ev+0x270>)
 8001198:	9306      	str	r3, [sp, #24]
 800119a:	e896 0007 	ldmia.w	r6, {r0, r1, r2}
 800119e:	e887 0007 	stmia.w	r7, {r0, r1, r2}
 80011a2:	e895 0007 	ldmia.w	r5, {r0, r1, r2}
 80011a6:	e88d 0007 	stmia.w	sp, {r0, r1, r2}
 80011aa:	4648      	mov	r0, r9
 80011ac:	e894 000e 	ldmia.w	r4, {r1, r2, r3}
 80011b0:	f7ff fb7e 	bl	80008b0 <_ZN10NetFcLayerC1E14sLayerGeometryS0_S0_PKaS2_ii>
 80011b4:	2306      	movs	r3, #6
 80011b6:	4640      	mov	r0, r8
 80011b8:	f8c8 901c 	str.w	r9, [r8, #28]
 80011bc:	f8c8 3004 	str.w	r3, [r8, #4]
 80011c0:	f7ff fc5e 	bl	8000a80 <_ZN13NeuralNetwork15allocate_bufferEv>
 80011c4:	4640      	mov	r0, r8
 80011c6:	b015      	add	sp, #84	; 0x54
 80011c8:	e8bd 83f0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, r9, pc}
 80011cc:	0800378c 	stmdaeq	r0, {r2, r3, r7, r8, r9, sl, ip, sp}
 80011d0:	0800373c 	stmdaeq	r0, {r2, r3, r4, r5, r8, r9, sl, ip, sp}
 80011d4:	08003730 	stmdaeq	r0, {r4, r5, r8, r9, sl, ip, sp}
 80011d8:	08003748 	stmdaeq	r0, {r3, r6, r8, r9, sl, ip, sp}
 80011dc:	0800326c 	stmdaeq	r0, {r2, r3, r5, r6, r9, ip, sp}
 80011e0:	0800327c 	stmdaeq	r0, {r2, r3, r4, r5, r6, r9, ip, sp}
 80011e4:	08003748 	stmdaeq	r0, {r3, r6, r8, r9, sl, ip, sp}
 80011e8:	08003748 	stmdaeq	r0, {r3, r6, r8, r9, sl, ip, sp}
 80011ec:	08003748 	stmdaeq	r0, {r3, r6, r8, r9, sl, ip, sp}
 80011f0:	08003754 	stmdaeq	r0, {r2, r4, r6, r8, r9, sl, ip, sp}
 80011f4:	08003748 	stmdaeq	r0, {r3, r6, r8, r9, sl, ip, sp}
 80011f8:	08003760 	stmdaeq	r0, {r5, r6, r8, r9, sl, ip, sp}
 80011fc:	0800373c 	stmdaeq	r0, {r2, r3, r4, r5, r8, r9, sl, ip, sp}
 8001200:	08003760 	stmdaeq	r0, {r5, r6, r8, r9, sl, ip, sp}
 8001204:	0800376c 	stmdaeq	r0, {r2, r3, r5, r6, r8, r9, sl, ip, sp}
 8001208:	08003270 	stmdaeq	r0, {r4, r5, r6, r9, ip, sp}
 800120c:	080032a0 	stmdaeq	r0, {r5, r7, r9, ip, sp}
 8001210:	0800376c 	stmdaeq	r0, {r2, r3, r5, r6, r8, r9, sl, ip, sp}
 8001214:	0800376c 	stmdaeq	r0, {r2, r3, r5, r6, r8, r9, sl, ip, sp}
 8001218:	0800376c 	stmdaeq	r0, {r2, r3, r5, r6, r8, r9, sl, ip, sp}
 800121c:	0800376c 	stmdaeq	r0, {r2, r3, r5, r6, r8, r9, sl, ip, sp}
 8001220:	0800376c 	stmdaeq	r0, {r2, r3, r5, r6, r8, r9, sl, ip, sp}
 8001224:	08003778 	stmdaeq	r0, {r3, r4, r5, r6, r8, r9, sl, ip, sp}
 8001228:	08003274 	stmdaeq	r0, {r2, r4, r5, r6, r9, ip, sp}
 800122c:	08003330 	stmdaeq	r0, {r4, r5, r8, r9, ip, sp}

08001230 <_ZN13LinePredictorD1Ev>:
 8001230:	4770      	bx	lr

08001232 <_ZN13LinePredictorD0Ev>:
 8001232:	b510      	push	{r4, lr}
 8001234:	214c      	movs	r1, #76	; 0x4c
 8001236:	4604      	mov	r4, r0
 8001238:	f000 fd0e 	bl	8001c58 <_ZdlPvj>
 800123c:	4620      	mov	r0, r4
 800123e:	bd10      	pop	{r4, pc}

08001240 <_ZN13LinePredictorC1ER13NeuralNetwork>:
 8001240:	4603      	mov	r3, r0
 8001242:	4a07      	ldr	r2, [pc, #28]	; (8001260 <_ZN13LinePredictorC1ER13NeuralNetwork+0x20>)
 8001244:	b510      	push	{r4, lr}
 8001246:	f843 2b04 	str.w	r2, [r3], #4
 800124a:	f100 0444 	add.w	r4, r0, #68	; 0x44
 800124e:	2200      	movs	r2, #0
 8001250:	f803 2b01 	strb.w	r2, [r3], #1
 8001254:	42a3      	cmp	r3, r4
 8001256:	d1fb      	bne.n	8001250 <_ZN13LinePredictorC1ER13NeuralNetwork+0x10>
 8001258:	e9c0 1211 	strd	r1, r2, [r0, #68]	; 0x44
 800125c:	bd10      	pop	{r4, pc}
 800125e:	bf00      	nop
 8001260:	080037a4 	stmdaeq	r0, {r2, r5, r7, r8, r9, sl, ip, sp}

08001264 <_ZN13LinePredictor7processEPi>:
 8001264:	b570      	push	{r4, r5, r6, lr}
 8001266:	4604      	mov	r4, r0
 8001268:	f104 0238 	add.w	r2, r4, #56	; 0x38
 800126c:	3030      	adds	r0, #48	; 0x30
 800126e:	2300      	movs	r3, #0
 8001270:	18c5      	adds	r5, r0, r3
 8001272:	f995 6004 	ldrsb.w	r6, [r5, #4]
 8001276:	18d5      	adds	r5, r2, r3
 8001278:	3301      	adds	r3, #1
 800127a:	2b08      	cmp	r3, #8
 800127c:	712e      	strb	r6, [r5, #4]
 800127e:	d1f7      	bne.n	8001270 <_ZN13LinePredictor7processEPi+0xc>
 8001280:	3a08      	subs	r2, #8
 8001282:	42a2      	cmp	r2, r4
 8001284:	f1a0 0008 	sub.w	r0, r0, #8
 8001288:	d1f1      	bne.n	800126e <_ZN13LinePredictor7processEPi+0xa>
 800128a:	1f0d      	subs	r5, r1, #4
 800128c:	4b23      	ldr	r3, [pc, #140]	; (800131c <_ZN13LinePredictor7processEPi+0xb8>)
 800128e:	4a24      	ldr	r2, [pc, #144]	; (8001320 <_ZN13LinePredictor7processEPi+0xbc>)
 8001290:	311c      	adds	r1, #28
 8001292:	4628      	mov	r0, r5
 8001294:	f850 6f04 	ldr.w	r6, [r0, #4]!
 8001298:	42b2      	cmp	r2, r6
 800129a:	bfb8      	it	lt
 800129c:	4632      	movlt	r2, r6
 800129e:	42b3      	cmp	r3, r6
 80012a0:	bfa8      	it	ge
 80012a2:	4633      	movge	r3, r6
 80012a4:	4281      	cmp	r1, r0
 80012a6:	d1f5      	bne.n	8001294 <_ZN13LinePredictor7processEPi+0x30>
 80012a8:	4293      	cmp	r3, r2
 80012aa:	da31      	bge.n	8001310 <_ZN13LinePredictor7processEPi+0xac>
 80012ac:	1ad3      	subs	r3, r2, r3
 80012ae:	ee07 3a90 	vmov	s15, r3
 80012b2:	ed9f 7a1c 	vldr	s14, [pc, #112]	; 8001324 <_ZN13LinePredictor7processEPi+0xc0>
 80012b6:	eef8 7ae7 	vcvt.f32.s32	s15, s15
 80012ba:	eec7 6a27 	vdiv.f32	s13, s14, s15
 80012be:	ee07 2a90 	vmov	s15, r2
 80012c2:	eef8 7ae7 	vcvt.f32.s32	s15, s15
 80012c6:	ee07 7ae6 	vmls.f32	s14, s15, s13
 80012ca:	eef0 7a47 	vmov.f32	s15, s14
 80012ce:	1d23      	adds	r3, r4, #4
 80012d0:	4619      	mov	r1, r3
 80012d2:	f855 2f04 	ldr.w	r2, [r5, #4]!
 80012d6:	ee07 2a10 	vmov	s14, r2
 80012da:	eeb8 7ac7 	vcvt.f32.s32	s14, s14
 80012de:	eeb0 6a67 	vmov.f32	s12, s15
 80012e2:	ee07 6a26 	vmla.f32	s12, s14, s13
 80012e6:	4285      	cmp	r5, r0
 80012e8:	eebd 7ac6 	vcvt.s32.f32	s14, s12
 80012ec:	ee17 2a10 	vmov	r2, s14
 80012f0:	f803 2b01 	strb.w	r2, [r3], #1
 80012f4:	d1ed      	bne.n	80012d2 <_ZN13LinePredictor7processEPi+0x6e>
 80012f6:	6c60      	ldr	r0, [r4, #68]	; 0x44
 80012f8:	6803      	ldr	r3, [r0, #0]
 80012fa:	689b      	ldr	r3, [r3, #8]
 80012fc:	4798      	blx	r3
 80012fe:	6c60      	ldr	r0, [r4, #68]	; 0x44
 8001300:	f7ff fb5c 	bl	80009bc <_ZN13NeuralNetwork7forwardEv>
 8001304:	6c60      	ldr	r0, [r4, #68]	; 0x44
 8001306:	f7ff fb87 	bl	8000a18 <_ZN13NeuralNetwork12class_resultEv>
 800130a:	64a0      	str	r0, [r4, #72]	; 0x48
 800130c:	2000      	movs	r0, #0
 800130e:	bd70      	pop	{r4, r5, r6, pc}
 8001310:	eddf 7a05 	vldr	s15, [pc, #20]	; 8001328 <_ZN13LinePredictor7processEPi+0xc4>
 8001314:	eef0 6a67 	vmov.f32	s13, s15
 8001318:	e7d9      	b.n	80012ce <_ZN13LinePredictor7processEPi+0x6a>
 800131a:	bf00      	nop
 800131c:	000f4240 	andeq	r4, pc, r0, asr #4
 8001320:	fff0bdc0 			; <UNDEFINED> instruction: 0xfff0bdc0
 8001324:	42fe0000 	rscsmi	r0, lr, #0
 8001328:	00000000 	andeq	r0, r0, r0

0800132c <_Z17cnn_line_followerR13LinePredictor>:
 800132c:	b5f0      	push	{r4, r5, r6, r7, lr}
 800132e:	ed2d 8b04 	vpush	{d8-d9}
 8001332:	493a      	ldr	r1, [pc, #232]	; (800141c <_Z17cnn_line_followerR13LinePredictor+0xf0>)
 8001334:	ed9f 8a3a 	vldr	s16, [pc, #232]	; 8001420 <_Z17cnn_line_followerR13LinePredictor+0xf4>
 8001338:	eddf 8a3a 	vldr	s17, [pc, #232]	; 8001424 <_Z17cnn_line_followerR13LinePredictor+0xf8>
 800133c:	4d3a      	ldr	r5, [pc, #232]	; (8001428 <_Z17cnn_line_followerR13LinePredictor+0xfc>)
 800133e:	4c3b      	ldr	r4, [pc, #236]	; (800142c <_Z17cnn_line_followerR13LinePredictor+0x100>)
 8001340:	b08f      	sub	sp, #60	; 0x3c
 8001342:	4607      	mov	r7, r0
 8001344:	483a      	ldr	r0, [pc, #232]	; (8001430 <_Z17cnn_line_followerR13LinePredictor+0x104>)
 8001346:	f000 ff93 	bl	8002270 <_ZN8Terminal4putsEPKc>
 800134a:	4b3a      	ldr	r3, [pc, #232]	; (8001434 <_Z17cnn_line_followerR13LinePredictor+0x108>)
 800134c:	9300      	str	r3, [sp, #0]
 800134e:	2200      	movs	r2, #0
 8001350:	4b39      	ldr	r3, [pc, #228]	; (8001438 <_Z17cnn_line_followerR13LinePredictor+0x10c>)
 8001352:	493a      	ldr	r1, [pc, #232]	; (800143c <_Z17cnn_line_followerR13LinePredictor+0x110>)
 8001354:	a803      	add	r0, sp, #12
 8001356:	f000 fdb1 	bl	8001ebc <_ZN3PIDC1Effff>
 800135a:	ee18 6a10 	vmov	r6, s16
 800135e:	eef0 9a48 	vmov.f32	s19, s16
 8001362:	4831      	ldr	r0, [pc, #196]	; (8001428 <_Z17cnn_line_followerR13LinePredictor+0xfc>)
 8001364:	f001 f8ac 	bl	80024c0 <_ZN10LineSensor5readyEv>
 8001368:	2800      	cmp	r0, #0
 800136a:	d0fa      	beq.n	8001362 <_Z17cnn_line_followerR13LinePredictor+0x36>
 800136c:	f895 30b0 	ldrb.w	r3, [r5, #176]	; 0xb0
 8001370:	2b00      	cmp	r3, #0
 8001372:	d044      	beq.n	80013fe <_Z17cnn_line_followerR13LinePredictor+0xd2>
 8001374:	4932      	ldr	r1, [pc, #200]	; (8001440 <_Z17cnn_line_followerR13LinePredictor+0x114>)
 8001376:	4638      	mov	r0, r7
 8001378:	f7ff ff74 	bl	8001264 <_ZN13LinePredictor7processEPi>
 800137c:	6cbb      	ldr	r3, [r7, #72]	; 0x48
 800137e:	2b07      	cmp	r3, #7
 8001380:	d807      	bhi.n	8001392 <_Z17cnn_line_followerR13LinePredictor+0x66>
 8001382:	e8df f003 	tbb	[pc, r3]
 8001386:	39390404 	ldmdbcc	r9!, {r2, sl}
 800138a:	04040404 	streq	r0, [r4], #-1028	; 0xfffffbfc
 800138e:	eddf 8a25 	vldr	s17, [pc, #148]	; 8001424 <_Z17cnn_line_followerR13LinePredictor+0xf8>
 8001392:	edd5 7a2e 	vldr	s15, [r5, #184]	; 0xb8
 8001396:	4628      	mov	r0, r5
 8001398:	eeb8 9ae7 	vcvt.f32.s32	s18, s15
 800139c:	f001 f898 	bl	80024d0 <_ZN10LineSensor7get_maxEv>
 80013a0:	ee07 0a90 	vmov	s15, r0
 80013a4:	eeb8 7ae7 	vcvt.f32.s32	s14, s15
 80013a8:	a803      	add	r0, sp, #12
 80013aa:	eec9 7a07 	vdiv.f32	s15, s18, s14
 80013ae:	ee17 2a90 	vmov	r2, s15
 80013b2:	ee79 7ae7 	vsub.f32	s15, s19, s15
 80013b6:	ee17 1a90 	vmov	r1, s15
 80013ba:	f000 fd23 	bl	8001e04 <_ZN3PID7processEff>
 80013be:	ee07 0a90 	vmov	s15, r0
 80013c2:	eef4 8ac8 	vcmpe.f32	s17, s16
 80013c6:	ee37 7a88 	vadd.f32	s14, s15, s16
 80013ca:	eef1 fa10 	vmrs	APSR_nzcv, fpscr
 80013ce:	ee38 9a67 	vsub.f32	s18, s16, s15
 80013d2:	bfc8      	it	gt
 80013d4:	eddf 7a1b 	vldrgt	s15, [pc, #108]	; 8001444 <_Z17cnn_line_followerR13LinePredictor+0x118>
 80013d8:	ee17 1a10 	vmov	r1, s14
 80013dc:	4620      	mov	r0, r4
 80013de:	bfcc      	ite	gt
 80013e0:	ee38 8a27 	vaddgt.f32	s16, s16, s15
 80013e4:	eeb0 8a68 	vmovle.f32	s16, s17
 80013e8:	f000 ff14 	bl	8002214 <_ZN13MotorControll14set_left_speedEf>
 80013ec:	ee19 1a10 	vmov	r1, s18
 80013f0:	4620      	mov	r0, r4
 80013f2:	f000 ff11 	bl	8002218 <_ZN13MotorControll15set_right_speedEf>
 80013f6:	e7b4      	b.n	8001362 <_Z17cnn_line_followerR13LinePredictor+0x36>
 80013f8:	eddf 8a13 	vldr	s17, [pc, #76]	; 8001448 <_Z17cnn_line_followerR13LinePredictor+0x11c>
 80013fc:	e7c9      	b.n	8001392 <_Z17cnn_line_followerR13LinePredictor+0x66>
 80013fe:	4631      	mov	r1, r6
 8001400:	4620      	mov	r0, r4
 8001402:	f000 ff07 	bl	8002214 <_ZN13MotorControll14set_left_speedEf>
 8001406:	4631      	mov	r1, r6
 8001408:	4620      	mov	r0, r4
 800140a:	f000 ff05 	bl	8002218 <_ZN13MotorControll15set_right_speedEf>
 800140e:	a803      	add	r0, sp, #12
 8001410:	f000 fd38 	bl	8001e84 <_ZN3PID5resetEv>
 8001414:	ed9f 8a02 	vldr	s16, [pc, #8]	; 8001420 <_Z17cnn_line_followerR13LinePredictor+0xf4>
 8001418:	e7a3      	b.n	8001362 <_Z17cnn_line_followerR13LinePredictor+0x36>
 800141a:	bf00      	nop
 800141c:	080037ac 	stmdaeq	r0, {r2, r3, r5, r7, r8, r9, sl, ip, sp}
 8001420:	00000000 	andeq	r0, r0, r0
 8001424:	3ecccccd 	cdpcc	12, 12, cr12, cr12, cr13, {6}
 8001428:	200000c8 	andcs	r0, r0, r8, asr #1
 800142c:	20000184 	andcs	r0, r0, r4, lsl #3
 8001430:	20000214 	andcs	r0, r0, r4, lsl r2
 8001434:	41200000 			; <UNDEFINED> instruction: 0x41200000
 8001438:	3fe66666 	svccc	0x00e66666
 800143c:	3ecccccd 	cdpcc	12, 12, cr12, cr12, cr13, {6}
 8001440:	20000138 	andcs	r0, r0, r8, lsr r1
 8001444:	3b03126f 	blcc	80c5e08 <_sidata+0xc2430>
 8001448:	3f333333 	svccc	0x00333333

0800144c <main>:
 800144c:	b500      	push	{lr}
 800144e:	4808      	ldr	r0, [pc, #32]	; (8001470 <main+0x24>)
 8001450:	b0c1      	sub	sp, #260	; 0x104
 8001452:	f000 f97b 	bl	800174c <_ZN7Drivers4initEv>
 8001456:	a814      	add	r0, sp, #80	; 0x50
 8001458:	f7ff fdb0 	bl	8000fbc <_ZN11LineNetworkC1Ev>
 800145c:	a914      	add	r1, sp, #80	; 0x50
 800145e:	a801      	add	r0, sp, #4
 8001460:	f7ff feee 	bl	8001240 <_ZN13LinePredictorC1ER13NeuralNetwork>
 8001464:	4803      	ldr	r0, [pc, #12]	; (8001474 <main+0x28>)
 8001466:	f001 f905 	bl	8002674 <_ZN3Key4readEv>
 800146a:	a801      	add	r0, sp, #4
 800146c:	f7ff ff5e 	bl	800132c <_Z17cnn_line_followerR13LinePredictor>
 8001470:	20000000 	andcs	r0, r0, r0
 8001474:	200000b0 	strhcs	r0, [r0], -r0	; <UNPREDICTABLE>

08001478 <_GLOBAL__sub_I_drivers>:
 8001478:	b510      	push	{r4, lr}
 800147a:	4c05      	ldr	r4, [pc, #20]	; (8001490 <_GLOBAL__sub_I_drivers+0x18>)
 800147c:	4620      	mov	r0, r4
 800147e:	f000 f837 	bl	80014f0 <_ZN7DriversC1Ev>
 8001482:	4620      	mov	r0, r4
 8001484:	4a03      	ldr	r2, [pc, #12]	; (8001494 <_GLOBAL__sub_I_drivers+0x1c>)
 8001486:	4904      	ldr	r1, [pc, #16]	; (8001498 <_GLOBAL__sub_I_drivers+0x20>)
 8001488:	e8bd 4010 	ldmia.w	sp!, {r4, lr}
 800148c:	f001 b883 	b.w	8002596 <__aeabi_atexit>
 8001490:	20000000 	andcs	r0, r0, r0
 8001494:	20000364 	andcs	r0, r0, r4, ror #6
 8001498:	0800149d 	stmdaeq	r0, {r0, r2, r3, r4, r7, sl, ip}

0800149c <_ZN7DriversD1Ev>:
 800149c:	4770      	bx	lr

0800149e <_ZN7DriversD0Ev>:
 800149e:	b510      	push	{r4, lr}
 80014a0:	2108      	movs	r1, #8
 80014a2:	4604      	mov	r4, r0
 80014a4:	f000 fbd8 	bl	8001c58 <_ZdlPvj>
 80014a8:	4620      	mov	r0, r4
 80014aa:	bd10      	pop	{r4, pc}

080014ac <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EED1Ev>:
 80014ac:	b510      	push	{r4, lr}
 80014ae:	4b03      	ldr	r3, [pc, #12]	; (80014bc <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EED1Ev+0x10>)
 80014b0:	6003      	str	r3, [r0, #0]
 80014b2:	4604      	mov	r4, r0
 80014b4:	f000 fb72 	bl	8001b9c <_ZN13I2C_InterfaceD1Ev>
 80014b8:	4620      	mov	r0, r4
 80014ba:	bd10      	pop	{r4, pc}
 80014bc:	080037cc 	stmdaeq	r0, {r2, r3, r6, r7, r8, r9, sl, ip, sp}

080014c0 <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EED0Ev>:
 80014c0:	b510      	push	{r4, lr}
 80014c2:	4604      	mov	r4, r0
 80014c4:	f7ff fff2 	bl	80014ac <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EED1Ev>
 80014c8:	4620      	mov	r0, r4
 80014ca:	2110      	movs	r1, #16
 80014cc:	f000 fbc4 	bl	8001c58 <_ZdlPvj>
 80014d0:	4620      	mov	r0, r4
 80014d2:	bd10      	pop	{r4, pc}

080014d4 <_ZN8TerminallsEb>:
 80014d4:	b510      	push	{r4, lr}
 80014d6:	4604      	mov	r4, r0
 80014d8:	b121      	cbz	r1, 80014e4 <_ZN8TerminallsEb+0x10>
 80014da:	4903      	ldr	r1, [pc, #12]	; (80014e8 <_ZN8TerminallsEb+0x14>)
 80014dc:	f000 fec8 	bl	8002270 <_ZN8Terminal4putsEPKc>
 80014e0:	4620      	mov	r0, r4
 80014e2:	bd10      	pop	{r4, pc}
 80014e4:	4901      	ldr	r1, [pc, #4]	; (80014ec <_ZN8TerminallsEb+0x18>)
 80014e6:	e7f9      	b.n	80014dc <_ZN8TerminallsEb+0x8>
 80014e8:	080038e9 	stmdaeq	r0, {r0, r3, r5, r6, r7, fp, ip, sp}
 80014ec:	080038ee 	stmdaeq	r0, {r1, r2, r3, r5, r6, r7, fp, ip, sp}

080014f0 <_ZN7DriversC1Ev>:
 80014f0:	4910      	ldr	r1, [pc, #64]	; (8001534 <_ZN7DriversC1Ev+0x44>)
 80014f2:	4b11      	ldr	r3, [pc, #68]	; (8001538 <_ZN7DriversC1Ev+0x48>)
 80014f4:	6003      	str	r3, [r0, #0]
 80014f6:	694b      	ldr	r3, [r1, #20]
 80014f8:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 80014fc:	614b      	str	r3, [r1, #20]
 80014fe:	4b0f      	ldr	r3, [pc, #60]	; (800153c <_ZN7DriversC1Ev+0x4c>)
 8001500:	6043      	str	r3, [r0, #4]
 8001502:	689a      	ldr	r2, [r3, #8]
 8001504:	f022 4240 	bic.w	r2, r2, #3221225472	; 0xc0000000
 8001508:	609a      	str	r2, [r3, #8]
 800150a:	689a      	ldr	r2, [r3, #8]
 800150c:	f042 4240 	orr.w	r2, r2, #3221225472	; 0xc0000000
 8001510:	609a      	str	r2, [r3, #8]
 8001512:	889a      	ldrh	r2, [r3, #4]
 8001514:	f3c2 020e 	ubfx	r2, r2, #0, #15
 8001518:	809a      	strh	r2, [r3, #4]
 800151a:	889a      	ldrh	r2, [r3, #4]
 800151c:	b292      	uxth	r2, r2
 800151e:	809a      	strh	r2, [r3, #4]
 8001520:	681a      	ldr	r2, [r3, #0]
 8001522:	f022 4240 	bic.w	r2, r2, #3221225472	; 0xc0000000
 8001526:	601a      	str	r2, [r3, #0]
 8001528:	681a      	ldr	r2, [r3, #0]
 800152a:	f042 4280 	orr.w	r2, r2, #1073741824	; 0x40000000
 800152e:	601a      	str	r2, [r3, #0]
 8001530:	4770      	bx	lr
 8001532:	bf00      	nop
 8001534:	40021000 	andmi	r1, r2, r0
 8001538:	080038fc 	stmdaeq	r0, {r2, r3, r4, r5, r6, r7, fp, ip, sp}
 800153c:	48000400 	stmdami	r0, {sl}

08001540 <_ZN5TGpioILh1ELh15ELh0EE5writeEi>:
 8001540:	6803      	ldr	r3, [r0, #0]
 8001542:	b121      	cbz	r1, 800154e <_ZN5TGpioILh1ELh15ELh0EE5writeEi+0xe>
 8001544:	699a      	ldr	r2, [r3, #24]
 8001546:	f442 4200 	orr.w	r2, r2, #32768	; 0x8000
 800154a:	619a      	str	r2, [r3, #24]
 800154c:	4770      	bx	lr
 800154e:	8d1a      	ldrh	r2, [r3, #40]	; 0x28
 8001550:	f442 4200 	orr.w	r2, r2, #32768	; 0x8000
 8001554:	851a      	strh	r2, [r3, #40]	; 0x28
 8001556:	4770      	bx	lr

08001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>:
 8001558:	b9d1      	cbnz	r1, 8001590 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh+0x38>
 800155a:	6803      	ldr	r3, [r0, #0]
 800155c:	689a      	ldr	r2, [r3, #8]
 800155e:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 8001562:	609a      	str	r2, [r3, #8]
 8001564:	689a      	ldr	r2, [r3, #8]
 8001566:	f442 4240 	orr.w	r2, r2, #49152	; 0xc000
 800156a:	609a      	str	r2, [r3, #8]
 800156c:	889a      	ldrh	r2, [r3, #4]
 800156e:	f022 0280 	bic.w	r2, r2, #128	; 0x80
 8001572:	0412      	lsls	r2, r2, #16
 8001574:	0c12      	lsrs	r2, r2, #16
 8001576:	809a      	strh	r2, [r3, #4]
 8001578:	889a      	ldrh	r2, [r3, #4]
 800157a:	b292      	uxth	r2, r2
 800157c:	809a      	strh	r2, [r3, #4]
 800157e:	681a      	ldr	r2, [r3, #0]
 8001580:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 8001584:	601a      	str	r2, [r3, #0]
 8001586:	681a      	ldr	r2, [r3, #0]
 8001588:	f442 4280 	orr.w	r2, r2, #16384	; 0x4000
 800158c:	601a      	str	r2, [r3, #0]
 800158e:	4770      	bx	lr
 8001590:	2901      	cmp	r1, #1
 8001592:	d10e      	bne.n	80015b2 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh+0x5a>
 8001594:	6803      	ldr	r3, [r0, #0]
 8001596:	689a      	ldr	r2, [r3, #8]
 8001598:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 800159c:	609a      	str	r2, [r3, #8]
 800159e:	689a      	ldr	r2, [r3, #8]
 80015a0:	f442 4240 	orr.w	r2, r2, #49152	; 0xc000
 80015a4:	609a      	str	r2, [r3, #8]
 80015a6:	681a      	ldr	r2, [r3, #0]
 80015a8:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 80015ac:	601a      	str	r2, [r3, #0]
 80015ae:	681a      	ldr	r2, [r3, #0]
 80015b0:	e7ec      	b.n	800158c <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh+0x34>
 80015b2:	2902      	cmp	r1, #2
 80015b4:	d113      	bne.n	80015de <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh+0x86>
 80015b6:	6803      	ldr	r3, [r0, #0]
 80015b8:	689a      	ldr	r2, [r3, #8]
 80015ba:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 80015be:	609a      	str	r2, [r3, #8]
 80015c0:	689a      	ldr	r2, [r3, #8]
 80015c2:	f442 4240 	orr.w	r2, r2, #49152	; 0xc000
 80015c6:	609a      	str	r2, [r3, #8]
 80015c8:	681a      	ldr	r2, [r3, #0]
 80015ca:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 80015ce:	601a      	str	r2, [r3, #0]
 80015d0:	681a      	ldr	r2, [r3, #0]
 80015d2:	601a      	str	r2, [r3, #0]
 80015d4:	68da      	ldr	r2, [r3, #12]
 80015d6:	f442 4280 	orr.w	r2, r2, #16384	; 0x4000
 80015da:	60da      	str	r2, [r3, #12]
 80015dc:	4770      	bx	lr
 80015de:	2903      	cmp	r1, #3
 80015e0:	d110      	bne.n	8001604 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh+0xac>
 80015e2:	6803      	ldr	r3, [r0, #0]
 80015e4:	689a      	ldr	r2, [r3, #8]
 80015e6:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 80015ea:	609a      	str	r2, [r3, #8]
 80015ec:	689a      	ldr	r2, [r3, #8]
 80015ee:	f442 4240 	orr.w	r2, r2, #49152	; 0xc000
 80015f2:	609a      	str	r2, [r3, #8]
 80015f4:	681a      	ldr	r2, [r3, #0]
 80015f6:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 80015fa:	601a      	str	r2, [r3, #0]
 80015fc:	681a      	ldr	r2, [r3, #0]
 80015fe:	f442 4200 	orr.w	r2, r2, #32768	; 0x8000
 8001602:	e7c3      	b.n	800158c <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh+0x34>
 8001604:	2904      	cmp	r1, #4
 8001606:	d1c2      	bne.n	800158e <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh+0x36>
 8001608:	6803      	ldr	r3, [r0, #0]
 800160a:	681a      	ldr	r2, [r3, #0]
 800160c:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 8001610:	601a      	str	r2, [r3, #0]
 8001612:	681a      	ldr	r2, [r3, #0]
 8001614:	f442 4240 	orr.w	r2, r2, #49152	; 0xc000
 8001618:	e7b8      	b.n	800158c <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh+0x34>
 800161a:	0000      	movs	r0, r0

0800161c <_ZN5TGpioILh1ELh7ELh1EE4initEv>:
 800161c:	4a05      	ldr	r2, [pc, #20]	; (8001634 <_ZN5TGpioILh1ELh7ELh1EE4initEv+0x18>)
 800161e:	b508      	push	{r3, lr}
 8001620:	6953      	ldr	r3, [r2, #20]
 8001622:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 8001626:	6153      	str	r3, [r2, #20]
 8001628:	4b03      	ldr	r3, [pc, #12]	; (8001638 <_ZN5TGpioILh1ELh7ELh1EE4initEv+0x1c>)
 800162a:	6003      	str	r3, [r0, #0]
 800162c:	2101      	movs	r1, #1
 800162e:	f7ff ff93 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 8001632:	bd08      	pop	{r3, pc}
 8001634:	40021000 	andmi	r1, r2, r0
 8001638:	48000400 	stmdami	r0, {sl}

0800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>:
 800163c:	b9d1      	cbnz	r1, 8001674 <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh+0x38>
 800163e:	6803      	ldr	r3, [r0, #0]
 8001640:	689a      	ldr	r2, [r3, #8]
 8001642:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 8001646:	609a      	str	r2, [r3, #8]
 8001648:	689a      	ldr	r2, [r3, #8]
 800164a:	f442 5240 	orr.w	r2, r2, #12288	; 0x3000
 800164e:	609a      	str	r2, [r3, #8]
 8001650:	889a      	ldrh	r2, [r3, #4]
 8001652:	f022 0240 	bic.w	r2, r2, #64	; 0x40
 8001656:	0412      	lsls	r2, r2, #16
 8001658:	0c12      	lsrs	r2, r2, #16
 800165a:	809a      	strh	r2, [r3, #4]
 800165c:	889a      	ldrh	r2, [r3, #4]
 800165e:	b292      	uxth	r2, r2
 8001660:	809a      	strh	r2, [r3, #4]
 8001662:	681a      	ldr	r2, [r3, #0]
 8001664:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 8001668:	601a      	str	r2, [r3, #0]
 800166a:	681a      	ldr	r2, [r3, #0]
 800166c:	f442 5280 	orr.w	r2, r2, #4096	; 0x1000
 8001670:	601a      	str	r2, [r3, #0]
 8001672:	4770      	bx	lr
 8001674:	2901      	cmp	r1, #1
 8001676:	d10e      	bne.n	8001696 <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh+0x5a>
 8001678:	6803      	ldr	r3, [r0, #0]
 800167a:	689a      	ldr	r2, [r3, #8]
 800167c:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 8001680:	609a      	str	r2, [r3, #8]
 8001682:	689a      	ldr	r2, [r3, #8]
 8001684:	f442 5240 	orr.w	r2, r2, #12288	; 0x3000
 8001688:	609a      	str	r2, [r3, #8]
 800168a:	681a      	ldr	r2, [r3, #0]
 800168c:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 8001690:	601a      	str	r2, [r3, #0]
 8001692:	681a      	ldr	r2, [r3, #0]
 8001694:	e7ec      	b.n	8001670 <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh+0x34>
 8001696:	2902      	cmp	r1, #2
 8001698:	d113      	bne.n	80016c2 <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh+0x86>
 800169a:	6803      	ldr	r3, [r0, #0]
 800169c:	689a      	ldr	r2, [r3, #8]
 800169e:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 80016a2:	609a      	str	r2, [r3, #8]
 80016a4:	689a      	ldr	r2, [r3, #8]
 80016a6:	f442 5240 	orr.w	r2, r2, #12288	; 0x3000
 80016aa:	609a      	str	r2, [r3, #8]
 80016ac:	681a      	ldr	r2, [r3, #0]
 80016ae:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 80016b2:	601a      	str	r2, [r3, #0]
 80016b4:	681a      	ldr	r2, [r3, #0]
 80016b6:	601a      	str	r2, [r3, #0]
 80016b8:	68da      	ldr	r2, [r3, #12]
 80016ba:	f442 5280 	orr.w	r2, r2, #4096	; 0x1000
 80016be:	60da      	str	r2, [r3, #12]
 80016c0:	4770      	bx	lr
 80016c2:	2903      	cmp	r1, #3
 80016c4:	d110      	bne.n	80016e8 <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh+0xac>
 80016c6:	6803      	ldr	r3, [r0, #0]
 80016c8:	689a      	ldr	r2, [r3, #8]
 80016ca:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 80016ce:	609a      	str	r2, [r3, #8]
 80016d0:	689a      	ldr	r2, [r3, #8]
 80016d2:	f442 5240 	orr.w	r2, r2, #12288	; 0x3000
 80016d6:	609a      	str	r2, [r3, #8]
 80016d8:	681a      	ldr	r2, [r3, #0]
 80016da:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 80016de:	601a      	str	r2, [r3, #0]
 80016e0:	681a      	ldr	r2, [r3, #0]
 80016e2:	f442 5200 	orr.w	r2, r2, #8192	; 0x2000
 80016e6:	e7c3      	b.n	8001670 <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh+0x34>
 80016e8:	2904      	cmp	r1, #4
 80016ea:	d1c2      	bne.n	8001672 <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh+0x36>
 80016ec:	6803      	ldr	r3, [r0, #0]
 80016ee:	681a      	ldr	r2, [r3, #0]
 80016f0:	f422 5240 	bic.w	r2, r2, #12288	; 0x3000
 80016f4:	601a      	str	r2, [r3, #0]
 80016f6:	681a      	ldr	r2, [r3, #0]
 80016f8:	f442 5240 	orr.w	r2, r2, #12288	; 0x3000
 80016fc:	e7b8      	b.n	8001670 <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh+0x34>
 80016fe:	0000      	movs	r0, r0

08001700 <_ZN5TGpioILh1ELh6ELh1EE4initEv>:
 8001700:	4a05      	ldr	r2, [pc, #20]	; (8001718 <_ZN5TGpioILh1ELh6ELh1EE4initEv+0x18>)
 8001702:	b508      	push	{r3, lr}
 8001704:	6953      	ldr	r3, [r2, #20]
 8001706:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 800170a:	6153      	str	r3, [r2, #20]
 800170c:	4b03      	ldr	r3, [pc, #12]	; (800171c <_ZN5TGpioILh1ELh6ELh1EE4initEv+0x1c>)
 800170e:	6003      	str	r3, [r0, #0]
 8001710:	2101      	movs	r1, #1
 8001712:	f7ff ff93 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001716:	bd08      	pop	{r3, pc}
 8001718:	40021000 	andmi	r1, r2, r0
 800171c:	48000400 	stmdami	r0, {sl}

08001720 <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE4initEv>:
 8001720:	230a      	movs	r3, #10
 8001722:	b510      	push	{r4, lr}
 8001724:	6043      	str	r3, [r0, #4]
 8001726:	4604      	mov	r4, r0
 8001728:	3008      	adds	r0, #8
 800172a:	f7ff ff77 	bl	800161c <_ZN5TGpioILh1ELh7ELh1EE4initEv>
 800172e:	f104 000c 	add.w	r0, r4, #12
 8001732:	f7ff ffe5 	bl	8001700 <_ZN5TGpioILh1ELh6ELh1EE4initEv>
 8001736:	68a2      	ldr	r2, [r4, #8]
 8001738:	8d13      	ldrh	r3, [r2, #40]	; 0x28
 800173a:	f043 0380 	orr.w	r3, r3, #128	; 0x80
 800173e:	8513      	strh	r3, [r2, #40]	; 0x28
 8001740:	68e2      	ldr	r2, [r4, #12]
 8001742:	8d13      	ldrh	r3, [r2, #40]	; 0x28
 8001744:	f043 0340 	orr.w	r3, r3, #64	; 0x40
 8001748:	8513      	strh	r3, [r2, #40]	; 0x28
 800174a:	bd10      	pop	{r4, pc}

0800174c <_ZN7Drivers4initEv>:
 800174c:	e92d 41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
 8001750:	4605      	mov	r5, r0
 8001752:	4c3f      	ldr	r4, [pc, #252]	; (8001850 <_ZN7Drivers4initEv+0x104>)
 8001754:	4f3f      	ldr	r7, [pc, #252]	; (8001854 <_ZN7Drivers4initEv+0x108>)
 8001756:	f8df 8150 	ldr.w	r8, [pc, #336]	; 80018a8 <_ZN7Drivers4initEv+0x15c>
 800175a:	3504      	adds	r5, #4
 800175c:	f7fe fd62 	bl	8000224 <SystemInit>
 8001760:	2101      	movs	r1, #1
 8001762:	4628      	mov	r0, r5
 8001764:	f7ff feec 	bl	8001540 <_ZN5TGpioILh1ELh15ELh0EE5writeEi>
 8001768:	4620      	mov	r0, r4
 800176a:	f001 f909 	bl	8002980 <_ZN5Usart4initEv>
 800176e:	4620      	mov	r0, r4
 8001770:	4939      	ldr	r1, [pc, #228]	; (8001858 <_ZN7Drivers4initEv+0x10c>)
 8001772:	f000 fd7d 	bl	8002270 <_ZN8Terminal4putsEPKc>
 8001776:	4939      	ldr	r1, [pc, #228]	; (800185c <_ZN7Drivers4initEv+0x110>)
 8001778:	4620      	mov	r0, r4
 800177a:	f000 fd79 	bl	8002270 <_ZN8Terminal4putsEPKc>
 800177e:	f000 fa5b 	bl	8001c38 <_Z8mem_initv>
 8001782:	4937      	ldr	r1, [pc, #220]	; (8001860 <_ZN7Drivers4initEv+0x114>)
 8001784:	4606      	mov	r6, r0
 8001786:	4620      	mov	r0, r4
 8001788:	f000 fd72 	bl	8002270 <_ZN8Terminal4putsEPKc>
 800178c:	4631      	mov	r1, r6
 800178e:	4e35      	ldr	r6, [pc, #212]	; (8001864 <_ZN7Drivers4initEv+0x118>)
 8001790:	4620      	mov	r0, r4
 8001792:	f000 fd78 	bl	8002286 <_ZN8Terminal5putuiEm>
 8001796:	4631      	mov	r1, r6
 8001798:	4620      	mov	r0, r4
 800179a:	f000 fd69 	bl	8002270 <_ZN8Terminal4putsEPKc>
 800179e:	4638      	mov	r0, r7
 80017a0:	f000 fba6 	bl	8001ef0 <_ZN5Timer4initEv>
 80017a4:	4620      	mov	r0, r4
 80017a6:	4930      	ldr	r1, [pc, #192]	; (8001868 <_ZN7Drivers4initEv+0x11c>)
 80017a8:	f000 fd62 	bl	8002270 <_ZN8Terminal4putsEPKc>
 80017ac:	4620      	mov	r0, r4
 80017ae:	492f      	ldr	r1, [pc, #188]	; (800186c <_ZN7Drivers4initEv+0x120>)
 80017b0:	f000 fd5e 	bl	8002270 <_ZN8Terminal4putsEPKc>
 80017b4:	4638      	mov	r0, r7
 80017b6:	21c8      	movs	r1, #200	; 0xc8
 80017b8:	f000 fc10 	bl	8001fdc <_ZN5Timer8delay_msEj>
 80017bc:	492c      	ldr	r1, [pc, #176]	; (8001870 <_ZN7Drivers4initEv+0x124>)
 80017be:	4f2d      	ldr	r7, [pc, #180]	; (8001874 <_ZN7Drivers4initEv+0x128>)
 80017c0:	4620      	mov	r0, r4
 80017c2:	f000 fd55 	bl	8002270 <_ZN8Terminal4putsEPKc>
 80017c6:	4640      	mov	r0, r8
 80017c8:	f7ff ffaa 	bl	8001720 <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE4initEv>
 80017cc:	4620      	mov	r0, r4
 80017ce:	492a      	ldr	r1, [pc, #168]	; (8001878 <_ZN7Drivers4initEv+0x12c>)
 80017d0:	f000 fd4e 	bl	8002270 <_ZN8Terminal4putsEPKc>
 80017d4:	4641      	mov	r1, r8
 80017d6:	4638      	mov	r0, r7
 80017d8:	f001 f854 	bl	8002884 <_ZN3IMU4initEP13I2C_Interface>
 80017dc:	4927      	ldr	r1, [pc, #156]	; (800187c <_ZN7Drivers4initEv+0x130>)
 80017de:	4620      	mov	r0, r4
 80017e0:	f000 fd46 	bl	8002270 <_ZN8Terminal4putsEPKc>
 80017e4:	4638      	mov	r0, r7
 80017e6:	f001 f842 	bl	800286e <_ZN3IMU7presentEv>
 80017ea:	4601      	mov	r1, r0
 80017ec:	4620      	mov	r0, r4
 80017ee:	f7ff fe71 	bl	80014d4 <_ZN8TerminallsEb>
 80017f2:	4631      	mov	r1, r6
 80017f4:	f000 fd3c 	bl	8002270 <_ZN8Terminal4putsEPKc>
 80017f8:	4821      	ldr	r0, [pc, #132]	; (8001880 <_ZN7Drivers4initEv+0x134>)
 80017fa:	f000 fe03 	bl	8002404 <_ZN10LineSensor4initEv>
 80017fe:	4921      	ldr	r1, [pc, #132]	; (8001884 <_ZN7Drivers4initEv+0x138>)
 8001800:	4620      	mov	r0, r4
 8001802:	f000 fd35 	bl	8002270 <_ZN8Terminal4putsEPKc>
 8001806:	4820      	ldr	r0, [pc, #128]	; (8001888 <_ZN7Drivers4initEv+0x13c>)
 8001808:	f001 f976 	bl	8002af8 <_ZN7Encoder4initEv>
 800180c:	491f      	ldr	r1, [pc, #124]	; (800188c <_ZN7Drivers4initEv+0x140>)
 800180e:	4620      	mov	r0, r4
 8001810:	f000 fd2e 	bl	8002270 <_ZN8Terminal4putsEPKc>
 8001814:	481e      	ldr	r0, [pc, #120]	; (8001890 <_ZN7Drivers4initEv+0x144>)
 8001816:	f000 fccb 	bl	80021b0 <_ZN13MotorControll4initEv>
 800181a:	4620      	mov	r0, r4
 800181c:	491d      	ldr	r1, [pc, #116]	; (8001894 <_ZN7Drivers4initEv+0x148>)
 800181e:	f000 fd27 	bl	8002270 <_ZN8Terminal4putsEPKc>
 8001822:	2100      	movs	r1, #0
 8001824:	4628      	mov	r0, r5
 8001826:	f7ff fe8b 	bl	8001540 <_ZN5TGpioILh1ELh15ELh0EE5writeEi>
 800182a:	481b      	ldr	r0, [pc, #108]	; (8001898 <_ZN7Drivers4initEv+0x14c>)
 800182c:	f000 ff10 	bl	8002650 <_ZN3Key4initEv>
 8001830:	4620      	mov	r0, r4
 8001832:	491a      	ldr	r1, [pc, #104]	; (800189c <_ZN7Drivers4initEv+0x150>)
 8001834:	f000 fd1c 	bl	8002270 <_ZN8Terminal4putsEPKc>
 8001838:	4620      	mov	r0, r4
 800183a:	4919      	ldr	r1, [pc, #100]	; (80018a0 <_ZN7Drivers4initEv+0x154>)
 800183c:	f000 fd18 	bl	8002270 <_ZN8Terminal4putsEPKc>
 8001840:	4620      	mov	r0, r4
 8001842:	4918      	ldr	r1, [pc, #96]	; (80018a4 <_ZN7Drivers4initEv+0x158>)
 8001844:	f000 fd14 	bl	8002270 <_ZN8Terminal4putsEPKc>
 8001848:	2000      	movs	r0, #0
 800184a:	e8bd 81f0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, pc}
 800184e:	bf00      	nop
 8001850:	20000214 	andcs	r0, r0, r4, lsl r2
 8001854:	20000218 	andcs	r0, r0, r8, lsl r2
 8001858:	080037fd 	stmdaeq	r0, {r0, r2, r3, r4, r5, r6, r7, r8, r9, sl, ip, sp}
 800185c:	08003809 	stmdaeq	r0, {r0, r3, fp, ip, sp}
 8001860:	0800381d 	stmdaeq	r0, {r0, r2, r3, r4, fp, ip, sp}
 8001864:	08003807 	stmdaeq	r0, {r0, r1, r2, fp, ip, sp}
 8001868:	0800383b 	stmdaeq	r0, {r0, r1, r3, r4, r5, fp, ip, sp}
 800186c:	0800384c 	stmdaeq	r0, {r2, r3, r6, fp, ip, sp}
 8001870:	08003863 	stmdaeq	r0, {r0, r1, r5, r6, fp, ip, sp}
 8001874:	2000006c 	andcs	r0, r0, ip, rrx
 8001878:	0800385a 	stmdaeq	r0, {r1, r3, r4, r6, fp, ip, sp}
 800187c:	08003869 	stmdaeq	r0, {r0, r3, r5, r6, fp, ip, sp}
 8001880:	200000c8 	andcs	r0, r0, r8, asr #1
 8001884:	0800387d 	stmdaeq	r0, {r0, r2, r3, r4, r5, r6, fp, ip, sp}
 8001888:	2000004c 	andcs	r0, r0, ip, asr #32
 800188c:	08003894 	stmdaeq	r0, {r2, r4, r7, fp, ip, sp}
 8001890:	20000184 	andcs	r0, r0, r4, lsl #3
 8001894:	080038ae 	stmdaeq	r0, {r1, r2, r3, r5, r7, fp, ip, sp}
 8001898:	200000b0 	strhcs	r0, [r0], -r0	; <UNPREDICTABLE>
 800189c:	080038c8 	stmdaeq	r0, {r3, r6, r7, fp, ip, sp}
 80018a0:	08003806 	stmdaeq	r0, {r1, r2, fp, ip, sp}
 80018a4:	080038d7 	stmdaeq	r0, {r0, r1, r2, r4, r6, r7, fp, ip, sp}
 80018a8:	2000005c 	andcs	r0, r0, ip, asr r0

080018ac <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE4stopEv>:
 80018ac:	b570      	push	{r4, r5, r6, lr}
 80018ae:	4604      	mov	r4, r0
 80018b0:	f100 060c 	add.w	r6, r0, #12
 80018b4:	f104 0508 	add.w	r5, r4, #8
 80018b8:	4630      	mov	r0, r6
 80018ba:	2100      	movs	r1, #0
 80018bc:	f7ff febe 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 80018c0:	4628      	mov	r0, r5
 80018c2:	2100      	movs	r1, #0
 80018c4:	f7ff fe48 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 80018c8:	4630      	mov	r0, r6
 80018ca:	2101      	movs	r1, #1
 80018cc:	f7ff feb6 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 80018d0:	4628      	mov	r0, r5
 80018d2:	2100      	movs	r1, #0
 80018d4:	f7ff fe40 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 80018d8:	4630      	mov	r0, r6
 80018da:	2101      	movs	r1, #1
 80018dc:	f7ff feae 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 80018e0:	4628      	mov	r0, r5
 80018e2:	2101      	movs	r1, #1
 80018e4:	f7ff fe38 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 80018e8:	4620      	mov	r0, r4
 80018ea:	e8bd 4070 	ldmia.w	sp!, {r4, r5, r6, lr}
 80018ee:	f000 b99b 	b.w	8001c28 <_ZN13I2C_Interface5delayEv>

080018f2 <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE5startEv>:
 80018f2:	b570      	push	{r4, r5, r6, lr}
 80018f4:	4604      	mov	r4, r0
 80018f6:	f100 060c 	add.w	r6, r0, #12
 80018fa:	f104 0508 	add.w	r5, r4, #8
 80018fe:	4630      	mov	r0, r6
 8001900:	2101      	movs	r1, #1
 8001902:	f7ff fe9b 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001906:	4628      	mov	r0, r5
 8001908:	2101      	movs	r1, #1
 800190a:	f7ff fe25 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 800190e:	4630      	mov	r0, r6
 8001910:	2101      	movs	r1, #1
 8001912:	f7ff fe93 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001916:	4628      	mov	r0, r5
 8001918:	2100      	movs	r1, #0
 800191a:	f7ff fe1d 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 800191e:	4630      	mov	r0, r6
 8001920:	2100      	movs	r1, #0
 8001922:	f7ff fe8b 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001926:	4628      	mov	r0, r5
 8001928:	2101      	movs	r1, #1
 800192a:	f7ff fe15 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 800192e:	4620      	mov	r0, r4
 8001930:	e8bd 4070 	ldmia.w	sp!, {r4, r5, r6, lr}
 8001934:	f000 b978 	b.w	8001c28 <_ZN13I2C_Interface5delayEv>

08001938 <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE4readEh>:
 8001938:	e92d 43f8 	stmdb	sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
 800193c:	4604      	mov	r4, r0
 800193e:	f100 0808 	add.w	r8, r0, #8
 8001942:	4640      	mov	r0, r8
 8001944:	4689      	mov	r9, r1
 8001946:	f104 070c 	add.w	r7, r4, #12
 800194a:	2101      	movs	r1, #1
 800194c:	f7ff fe04 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 8001950:	2100      	movs	r1, #0
 8001952:	4638      	mov	r0, r7
 8001954:	f7ff fe72 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001958:	4620      	mov	r0, r4
 800195a:	f000 f965 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 800195e:	2608      	movs	r6, #8
 8001960:	2500      	movs	r5, #0
 8001962:	2101      	movs	r1, #1
 8001964:	4638      	mov	r0, r7
 8001966:	f7ff fe69 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 800196a:	4620      	mov	r0, r4
 800196c:	f000 f95c 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001970:	68a3      	ldr	r3, [r4, #8]
 8001972:	8a1b      	ldrh	r3, [r3, #16]
 8001974:	006d      	lsls	r5, r5, #1
 8001976:	061b      	lsls	r3, r3, #24
 8001978:	f04f 0100 	mov.w	r1, #0
 800197c:	4638      	mov	r0, r7
 800197e:	b2ed      	uxtb	r5, r5
 8001980:	bf48      	it	mi
 8001982:	f045 0501 	orrmi.w	r5, r5, #1
 8001986:	3e01      	subs	r6, #1
 8001988:	f7ff fe58 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 800198c:	4620      	mov	r0, r4
 800198e:	f000 f94b 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001992:	f016 06ff 	ands.w	r6, r6, #255	; 0xff
 8001996:	d1e4      	bne.n	8001962 <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE4readEh+0x2a>
 8001998:	f1b9 0f00 	cmp.w	r9, #0
 800199c:	d01e      	beq.n	80019dc <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE4readEh+0xa4>
 800199e:	4631      	mov	r1, r6
 80019a0:	4640      	mov	r0, r8
 80019a2:	f7ff fdd9 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 80019a6:	4620      	mov	r0, r4
 80019a8:	f000 f93e 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 80019ac:	2101      	movs	r1, #1
 80019ae:	4638      	mov	r0, r7
 80019b0:	f7ff fe44 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 80019b4:	4620      	mov	r0, r4
 80019b6:	f000 f937 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 80019ba:	2100      	movs	r1, #0
 80019bc:	4638      	mov	r0, r7
 80019be:	f7ff fe3d 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 80019c2:	4620      	mov	r0, r4
 80019c4:	f000 f930 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 80019c8:	2101      	movs	r1, #1
 80019ca:	4640      	mov	r0, r8
 80019cc:	f7ff fdc4 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 80019d0:	4620      	mov	r0, r4
 80019d2:	f000 f929 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 80019d6:	4628      	mov	r0, r5
 80019d8:	e8bd 83f8 	ldmia.w	sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
 80019dc:	2101      	movs	r1, #1
 80019de:	e7df      	b.n	80019a0 <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE4readEh+0x68>

080019e0 <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE5writeEh>:
 80019e0:	e92d 41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
 80019e4:	2508      	movs	r5, #8
 80019e6:	4604      	mov	r4, r0
 80019e8:	460e      	mov	r6, r1
 80019ea:	eb00 0805 	add.w	r8, r0, r5
 80019ee:	f104 070c 	add.w	r7, r4, #12
 80019f2:	2100      	movs	r1, #0
 80019f4:	4638      	mov	r0, r7
 80019f6:	f7ff fe21 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 80019fa:	4620      	mov	r0, r4
 80019fc:	f000 f914 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001a00:	0633      	lsls	r3, r6, #24
 8001a02:	bf4c      	ite	mi
 8001a04:	2101      	movmi	r1, #1
 8001a06:	2100      	movpl	r1, #0
 8001a08:	4640      	mov	r0, r8
 8001a0a:	f7ff fda5 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 8001a0e:	4620      	mov	r0, r4
 8001a10:	f000 f90a 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001a14:	2101      	movs	r1, #1
 8001a16:	4638      	mov	r0, r7
 8001a18:	f7ff fe10 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001a1c:	3d01      	subs	r5, #1
 8001a1e:	4620      	mov	r0, r4
 8001a20:	f000 f902 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001a24:	0076      	lsls	r6, r6, #1
 8001a26:	f015 05ff 	ands.w	r5, r5, #255	; 0xff
 8001a2a:	b2f6      	uxtb	r6, r6
 8001a2c:	d1df      	bne.n	80019ee <_ZN4TI2CILh1ELh7ELh6ELh10ELh1EE5writeEh+0xe>
 8001a2e:	4629      	mov	r1, r5
 8001a30:	4638      	mov	r0, r7
 8001a32:	f7ff fe03 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001a36:	4620      	mov	r0, r4
 8001a38:	f000 f8f6 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001a3c:	2101      	movs	r1, #1
 8001a3e:	4640      	mov	r0, r8
 8001a40:	f7ff fd8a 	bl	8001558 <_ZN5TGpioILh1ELh7ELh1EE8set_modeEh>
 8001a44:	4620      	mov	r0, r4
 8001a46:	f000 f8ef 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001a4a:	2101      	movs	r1, #1
 8001a4c:	4638      	mov	r0, r7
 8001a4e:	f7ff fdf5 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001a52:	4620      	mov	r0, r4
 8001a54:	f000 f8e8 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001a58:	68a3      	ldr	r3, [r4, #8]
 8001a5a:	8a1e      	ldrh	r6, [r3, #16]
 8001a5c:	4629      	mov	r1, r5
 8001a5e:	4638      	mov	r0, r7
 8001a60:	f7ff fdec 	bl	800163c <_ZN5TGpioILh1ELh6ELh1EE8set_modeEh>
 8001a64:	b2b6      	uxth	r6, r6
 8001a66:	4620      	mov	r0, r4
 8001a68:	f000 f8de 	bl	8001c28 <_ZN13I2C_Interface5delayEv>
 8001a6c:	f086 0080 	eor.w	r0, r6, #128	; 0x80
 8001a70:	f3c0 10c0 	ubfx	r0, r0, #7, #1
 8001a74:	e8bd 81f0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, pc}

08001a78 <_GLOBAL__sub_I_i2c>:
 8001a78:	b538      	push	{r3, r4, r5, lr}
 8001a7a:	4d2f      	ldr	r5, [pc, #188]	; (8001b38 <_GLOBAL__sub_I_i2c+0xc0>)
 8001a7c:	4c2f      	ldr	r4, [pc, #188]	; (8001b3c <_GLOBAL__sub_I_i2c+0xc4>)
 8001a7e:	4628      	mov	r0, r5
 8001a80:	f000 f886 	bl	8001b90 <_ZN13I2C_InterfaceC1Ev>
 8001a84:	4628      	mov	r0, r5
 8001a86:	4b2e      	ldr	r3, [pc, #184]	; (8001b40 <_GLOBAL__sub_I_i2c+0xc8>)
 8001a88:	f840 3b08 	str.w	r3, [r0], #8
 8001a8c:	f7ff fdc6 	bl	800161c <_ZN5TGpioILh1ELh7ELh1EE4initEv>
 8001a90:	f105 000c 	add.w	r0, r5, #12
 8001a94:	f7ff fe34 	bl	8001700 <_ZN5TGpioILh1ELh6ELh1EE4initEv>
 8001a98:	4628      	mov	r0, r5
 8001a9a:	4d2a      	ldr	r5, [pc, #168]	; (8001b44 <_GLOBAL__sub_I_i2c+0xcc>)
 8001a9c:	492a      	ldr	r1, [pc, #168]	; (8001b48 <_GLOBAL__sub_I_i2c+0xd0>)
 8001a9e:	4622      	mov	r2, r4
 8001aa0:	f000 fd79 	bl	8002596 <__aeabi_atexit>
 8001aa4:	4628      	mov	r0, r5
 8001aa6:	f000 fbd7 	bl	8002258 <_ZN8TerminalC1Ev>
 8001aaa:	4628      	mov	r0, r5
 8001aac:	4d27      	ldr	r5, [pc, #156]	; (8001b4c <_GLOBAL__sub_I_i2c+0xd4>)
 8001aae:	4928      	ldr	r1, [pc, #160]	; (8001b50 <_GLOBAL__sub_I_i2c+0xd8>)
 8001ab0:	4622      	mov	r2, r4
 8001ab2:	f000 fd70 	bl	8002596 <__aeabi_atexit>
 8001ab6:	4628      	mov	r0, r5
 8001ab8:	f000 fa18 	bl	8001eec <_ZN5TimerC1Ev>
 8001abc:	4628      	mov	r0, r5
 8001abe:	4d25      	ldr	r5, [pc, #148]	; (8001b54 <_GLOBAL__sub_I_i2c+0xdc>)
 8001ac0:	4925      	ldr	r1, [pc, #148]	; (8001b58 <_GLOBAL__sub_I_i2c+0xe0>)
 8001ac2:	4622      	mov	r2, r4
 8001ac4:	f000 fd67 	bl	8002596 <__aeabi_atexit>
 8001ac8:	4628      	mov	r0, r5
 8001aca:	f000 fe09 	bl	80026e0 <_ZN3IMUC1Ev>
 8001ace:	4628      	mov	r0, r5
 8001ad0:	4d22      	ldr	r5, [pc, #136]	; (8001b5c <_GLOBAL__sub_I_i2c+0xe4>)
 8001ad2:	4923      	ldr	r1, [pc, #140]	; (8001b60 <_GLOBAL__sub_I_i2c+0xe8>)
 8001ad4:	4622      	mov	r2, r4
 8001ad6:	f000 fd5e 	bl	8002596 <__aeabi_atexit>
 8001ada:	4628      	mov	r0, r5
 8001adc:	f000 f8d0 	bl	8001c80 <_ZN14DistanceSensorC1Ev>
 8001ae0:	4628      	mov	r0, r5
 8001ae2:	4d20      	ldr	r5, [pc, #128]	; (8001b64 <_GLOBAL__sub_I_i2c+0xec>)
 8001ae4:	4920      	ldr	r1, [pc, #128]	; (8001b68 <_GLOBAL__sub_I_i2c+0xf0>)
 8001ae6:	4622      	mov	r2, r4
 8001ae8:	f000 fd55 	bl	8002596 <__aeabi_atexit>
 8001aec:	4628      	mov	r0, r5
 8001aee:	f000 fbef 	bl	80022d0 <_ZN10LineSensorC1Ev>
 8001af2:	4628      	mov	r0, r5
 8001af4:	4d1d      	ldr	r5, [pc, #116]	; (8001b6c <_GLOBAL__sub_I_i2c+0xf4>)
 8001af6:	491e      	ldr	r1, [pc, #120]	; (8001b70 <_GLOBAL__sub_I_i2c+0xf8>)
 8001af8:	4622      	mov	r2, r4
 8001afa:	f000 fd4c 	bl	8002596 <__aeabi_atexit>
 8001afe:	4628      	mov	r0, r5
 8001b00:	f000 ff94 	bl	8002a2c <_ZN7EncoderC1Ev>
 8001b04:	4628      	mov	r0, r5
 8001b06:	4d1b      	ldr	r5, [pc, #108]	; (8001b74 <_GLOBAL__sub_I_i2c+0xfc>)
 8001b08:	491b      	ldr	r1, [pc, #108]	; (8001b78 <_GLOBAL__sub_I_i2c+0x100>)
 8001b0a:	4622      	mov	r2, r4
 8001b0c:	f000 fd43 	bl	8002596 <__aeabi_atexit>
 8001b10:	4628      	mov	r0, r5
 8001b12:	f000 fb2d 	bl	8002170 <_ZN13MotorControllC1Ev>
 8001b16:	4628      	mov	r0, r5
 8001b18:	4d18      	ldr	r5, [pc, #96]	; (8001b7c <_GLOBAL__sub_I_i2c+0x104>)
 8001b1a:	4919      	ldr	r1, [pc, #100]	; (8001b80 <_GLOBAL__sub_I_i2c+0x108>)
 8001b1c:	4622      	mov	r2, r4
 8001b1e:	f000 fd3a 	bl	8002596 <__aeabi_atexit>
 8001b22:	4628      	mov	r0, r5
 8001b24:	f000 fd54 	bl	80025d0 <_ZN3KeyC1Ev>
 8001b28:	4622      	mov	r2, r4
 8001b2a:	4628      	mov	r0, r5
 8001b2c:	4915      	ldr	r1, [pc, #84]	; (8001b84 <_GLOBAL__sub_I_i2c+0x10c>)
 8001b2e:	e8bd 4038 	ldmia.w	sp!, {r3, r4, r5, lr}
 8001b32:	f000 bd30 	b.w	8002596 <__aeabi_atexit>
 8001b36:	bf00      	nop
 8001b38:	2000005c 	andcs	r0, r0, ip, asr r0
 8001b3c:	20000364 	andcs	r0, r0, r4, ror #6
 8001b40:	080037cc 	stmdaeq	r0, {r2, r3, r6, r7, r8, r9, sl, ip, sp}
 8001b44:	20000214 	andcs	r0, r0, r4, lsl r2
 8001b48:	080014ad 	stmdaeq	r0, {r0, r2, r3, r5, r7, sl, ip}
 8001b4c:	20000218 	andcs	r0, r0, r8, lsl r2
 8001b50:	08002265 	stmdaeq	r0, {r0, r2, r5, r6, r9, sp}
 8001b54:	2000006c 	andcs	r0, r0, ip, rrx
 8001b58:	08001f59 	stmdaeq	r0, {r0, r3, r4, r6, r8, r9, sl, fp, ip}
 8001b5c:	20000008 	andcs	r0, r0, r8
 8001b60:	080026d1 	stmdaeq	r0, {r0, r4, r6, r7, r9, sl, sp}
 8001b64:	200000c8 	andcs	r0, r0, r8, asr #1
 8001b68:	08001c6f 	stmdaeq	r0, {r0, r1, r2, r3, r5, r6, sl, fp, ip}
 8001b6c:	2000004c 	andcs	r0, r0, ip, asr #32
 8001b70:	080022bf 	stmdaeq	r0, {r0, r1, r2, r3, r4, r5, r7, r9, sp}
 8001b74:	20000184 	andcs	r0, r0, r4, lsl #3
 8001b78:	08002af5 	stmdaeq	r0, {r0, r2, r4, r5, r6, r7, r9, fp, sp}
 8001b7c:	200000b0 	strhcs	r0, [r0], -r0	; <UNPREDICTABLE>
 8001b80:	0800221d 	stmdaeq	r0, {r0, r2, r3, r4, r9, sp}
 8001b84:	0800259d 	stmdaeq	r0, {r0, r2, r3, r4, r7, r8, sl, sp}

08001b88 <_ZN13I2C_Interface4initEv>:
 8001b88:	2314      	movs	r3, #20
 8001b8a:	6043      	str	r3, [r0, #4]
 8001b8c:	4770      	bx	lr
 8001b8e:	0000      	movs	r0, r0

08001b90 <_ZN13I2C_InterfaceC1Ev>:
 8001b90:	4b01      	ldr	r3, [pc, #4]	; (8001b98 <_ZN13I2C_InterfaceC1Ev+0x8>)
 8001b92:	6003      	str	r3, [r0, #0]
 8001b94:	4770      	bx	lr
 8001b96:	bf00      	nop
 8001b98:	0800390c 	stmdaeq	r0, {r2, r3, r8, fp, ip, sp}

08001b9c <_ZN13I2C_InterfaceD1Ev>:
 8001b9c:	4770      	bx	lr

08001b9e <_ZN13I2C_Interface9write_regEhhh>:
 8001b9e:	e92d 41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
 8001ba2:	461d      	mov	r5, r3
 8001ba4:	6803      	ldr	r3, [r0, #0]
 8001ba6:	4604      	mov	r4, r0
 8001ba8:	689b      	ldr	r3, [r3, #8]
 8001baa:	4616      	mov	r6, r2
 8001bac:	460f      	mov	r7, r1
 8001bae:	4798      	blx	r3
 8001bb0:	6823      	ldr	r3, [r4, #0]
 8001bb2:	4639      	mov	r1, r7
 8001bb4:	695b      	ldr	r3, [r3, #20]
 8001bb6:	4620      	mov	r0, r4
 8001bb8:	4798      	blx	r3
 8001bba:	6823      	ldr	r3, [r4, #0]
 8001bbc:	4631      	mov	r1, r6
 8001bbe:	695b      	ldr	r3, [r3, #20]
 8001bc0:	4620      	mov	r0, r4
 8001bc2:	4798      	blx	r3
 8001bc4:	6823      	ldr	r3, [r4, #0]
 8001bc6:	4629      	mov	r1, r5
 8001bc8:	695a      	ldr	r2, [r3, #20]
 8001bca:	4620      	mov	r0, r4
 8001bcc:	4790      	blx	r2
 8001bce:	6823      	ldr	r3, [r4, #0]
 8001bd0:	4620      	mov	r0, r4
 8001bd2:	68db      	ldr	r3, [r3, #12]
 8001bd4:	e8bd 41f0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, lr}
 8001bd8:	4718      	bx	r3

08001bda <_ZN13I2C_Interface8read_regEhh>:
 8001bda:	6803      	ldr	r3, [r0, #0]
 8001bdc:	b570      	push	{r4, r5, r6, lr}
 8001bde:	4604      	mov	r4, r0
 8001be0:	689b      	ldr	r3, [r3, #8]
 8001be2:	4616      	mov	r6, r2
 8001be4:	460d      	mov	r5, r1
 8001be6:	4798      	blx	r3
 8001be8:	6823      	ldr	r3, [r4, #0]
 8001bea:	4629      	mov	r1, r5
 8001bec:	695b      	ldr	r3, [r3, #20]
 8001bee:	4620      	mov	r0, r4
 8001bf0:	4798      	blx	r3
 8001bf2:	6823      	ldr	r3, [r4, #0]
 8001bf4:	4631      	mov	r1, r6
 8001bf6:	695b      	ldr	r3, [r3, #20]
 8001bf8:	4620      	mov	r0, r4
 8001bfa:	4798      	blx	r3
 8001bfc:	6823      	ldr	r3, [r4, #0]
 8001bfe:	4620      	mov	r0, r4
 8001c00:	689b      	ldr	r3, [r3, #8]
 8001c02:	4798      	blx	r3
 8001c04:	6823      	ldr	r3, [r4, #0]
 8001c06:	f045 0101 	orr.w	r1, r5, #1
 8001c0a:	695b      	ldr	r3, [r3, #20]
 8001c0c:	4620      	mov	r0, r4
 8001c0e:	4798      	blx	r3
 8001c10:	6823      	ldr	r3, [r4, #0]
 8001c12:	2100      	movs	r1, #0
 8001c14:	699b      	ldr	r3, [r3, #24]
 8001c16:	4620      	mov	r0, r4
 8001c18:	4798      	blx	r3
 8001c1a:	6823      	ldr	r3, [r4, #0]
 8001c1c:	4605      	mov	r5, r0
 8001c1e:	68db      	ldr	r3, [r3, #12]
 8001c20:	4620      	mov	r0, r4
 8001c22:	4798      	blx	r3
 8001c24:	4628      	mov	r0, r5
 8001c26:	bd70      	pop	{r4, r5, r6, pc}

08001c28 <_ZN13I2C_Interface5delayEv>:
 8001c28:	2300      	movs	r3, #0
 8001c2a:	6842      	ldr	r2, [r0, #4]
 8001c2c:	429a      	cmp	r2, r3
 8001c2e:	d902      	bls.n	8001c36 <_ZN13I2C_Interface5delayEv+0xe>
 8001c30:	bf00      	nop
 8001c32:	3301      	adds	r3, #1
 8001c34:	e7f9      	b.n	8001c2a <_ZN13I2C_Interface5delayEv+0x2>
 8001c36:	4770      	bx	lr

08001c38 <_Z8mem_initv>:
 8001c38:	4b01      	ldr	r3, [pc, #4]	; (8001c40 <_Z8mem_initv+0x8>)
 8001c3a:	4802      	ldr	r0, [pc, #8]	; (8001c44 <_Z8mem_initv+0xc>)
 8001c3c:	6018      	str	r0, [r3, #0]
 8001c3e:	4770      	bx	lr
 8001c40:	2000021c 	andcs	r0, r0, ip, lsl r2
 8001c44:	20000370 	andcs	r0, r0, r0, ror r3

08001c48 <_Znwj>:
 8001c48:	4a02      	ldr	r2, [pc, #8]	; (8001c54 <_Znwj+0xc>)
 8001c4a:	6813      	ldr	r3, [r2, #0]
 8001c4c:	4418      	add	r0, r3
 8001c4e:	6010      	str	r0, [r2, #0]
 8001c50:	4618      	mov	r0, r3
 8001c52:	4770      	bx	lr
 8001c54:	2000021c 	andcs	r0, r0, ip, lsl r2

08001c58 <_ZdlPvj>:
 8001c58:	4770      	bx	lr
 8001c5a:	0000      	movs	r0, r0

08001c5c <_Znaj>:
 8001c5c:	4a02      	ldr	r2, [pc, #8]	; (8001c68 <_Znaj+0xc>)
 8001c5e:	6813      	ldr	r3, [r2, #0]
 8001c60:	4418      	add	r0, r3
 8001c62:	6010      	str	r0, [r2, #0]
 8001c64:	4618      	mov	r0, r3
 8001c66:	4770      	bx	lr
 8001c68:	2000021c 	andcs	r0, r0, ip, lsl r2

08001c6c <_ZdaPv>:
 8001c6c:	4770      	bx	lr

08001c6e <_ZN14DistanceSensorD1Ev>:
 8001c6e:	4770      	bx	lr

08001c70 <_ZN14DistanceSensorD0Ev>:
 8001c70:	b510      	push	{r4, lr}
 8001c72:	2144      	movs	r1, #68	; 0x44
 8001c74:	4604      	mov	r4, r0
 8001c76:	f7ff ffef 	bl	8001c58 <_ZdlPvj>
 8001c7a:	4620      	mov	r0, r4
 8001c7c:	bd10      	pop	{r4, pc}
 8001c7e:	0000      	movs	r0, r0

08001c80 <_ZN14DistanceSensorC1Ev>:
 8001c80:	4927      	ldr	r1, [pc, #156]	; (8001d20 <_ZN14DistanceSensorC1Ev+0xa0>)
 8001c82:	4b28      	ldr	r3, [pc, #160]	; (8001d24 <_ZN14DistanceSensorC1Ev+0xa4>)
 8001c84:	6003      	str	r3, [r0, #0]
 8001c86:	694b      	ldr	r3, [r1, #20]
 8001c88:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 8001c8c:	b530      	push	{r4, r5, lr}
 8001c8e:	614b      	str	r3, [r1, #20]
 8001c90:	4b25      	ldr	r3, [pc, #148]	; (8001d28 <_ZN14DistanceSensorC1Ev+0xa8>)
 8001c92:	6183      	str	r3, [r0, #24]
 8001c94:	689a      	ldr	r2, [r3, #8]
 8001c96:	f022 6240 	bic.w	r2, r2, #201326592	; 0xc000000
 8001c9a:	609a      	str	r2, [r3, #8]
 8001c9c:	689a      	ldr	r2, [r3, #8]
 8001c9e:	f042 6240 	orr.w	r2, r2, #201326592	; 0xc000000
 8001ca2:	609a      	str	r2, [r3, #8]
 8001ca4:	889a      	ldrh	r2, [r3, #4]
 8001ca6:	f422 5200 	bic.w	r2, r2, #8192	; 0x2000
 8001caa:	0412      	lsls	r2, r2, #16
 8001cac:	0c12      	lsrs	r2, r2, #16
 8001cae:	809a      	strh	r2, [r3, #4]
 8001cb0:	889a      	ldrh	r2, [r3, #4]
 8001cb2:	b292      	uxth	r2, r2
 8001cb4:	809a      	strh	r2, [r3, #4]
 8001cb6:	681a      	ldr	r2, [r3, #0]
 8001cb8:	f022 6240 	bic.w	r2, r2, #201326592	; 0xc000000
 8001cbc:	601a      	str	r2, [r3, #0]
 8001cbe:	681a      	ldr	r2, [r3, #0]
 8001cc0:	f042 6280 	orr.w	r2, r2, #67108864	; 0x4000000
 8001cc4:	601a      	str	r2, [r3, #0]
 8001cc6:	694a      	ldr	r2, [r1, #20]
 8001cc8:	f442 027f 	orr.w	r2, r2, #16711680	; 0xff0000
 8001ccc:	614a      	str	r2, [r1, #20]
 8001cce:	4a17      	ldr	r2, [pc, #92]	; (8001d2c <_ZN14DistanceSensorC1Ev+0xac>)
 8001cd0:	61c2      	str	r2, [r0, #28]
 8001cd2:	6815      	ldr	r5, [r2, #0]
 8001cd4:	f025 0503 	bic.w	r5, r5, #3
 8001cd8:	6015      	str	r5, [r2, #0]
 8001cda:	6815      	ldr	r5, [r2, #0]
 8001cdc:	f045 0503 	orr.w	r5, r5, #3
 8001ce0:	6015      	str	r5, [r2, #0]
 8001ce2:	694d      	ldr	r5, [r1, #20]
 8001ce4:	f445 057f 	orr.w	r5, r5, #16711680	; 0xff0000
 8001ce8:	614d      	str	r5, [r1, #20]
 8001cea:	6815      	ldr	r5, [r2, #0]
 8001cec:	6202      	str	r2, [r0, #32]
 8001cee:	f025 050c 	bic.w	r5, r5, #12
 8001cf2:	6015      	str	r5, [r2, #0]
 8001cf4:	6815      	ldr	r5, [r2, #0]
 8001cf6:	f045 050c 	orr.w	r5, r5, #12
 8001cfa:	6015      	str	r5, [r2, #0]
 8001cfc:	694a      	ldr	r2, [r1, #20]
 8001cfe:	f442 027f 	orr.w	r2, r2, #16711680	; 0xff0000
 8001d02:	614a      	str	r2, [r1, #20]
 8001d04:	681a      	ldr	r2, [r3, #0]
 8001d06:	6243      	str	r3, [r0, #36]	; 0x24
 8001d08:	f022 0203 	bic.w	r2, r2, #3
 8001d0c:	601a      	str	r2, [r3, #0]
 8001d0e:	681a      	ldr	r2, [r3, #0]
 8001d10:	f042 0203 	orr.w	r2, r2, #3
 8001d14:	601a      	str	r2, [r3, #0]
 8001d16:	8d1a      	ldrh	r2, [r3, #40]	; 0x28
 8001d18:	f442 5200 	orr.w	r2, r2, #8192	; 0x2000
 8001d1c:	851a      	strh	r2, [r3, #40]	; 0x28
 8001d1e:	bd30      	pop	{r4, r5, pc}
 8001d20:	40021000 	andmi	r1, r2, r0
 8001d24:	08003930 	stmdaeq	r0, {r4, r5, r8, fp, ip, sp}
 8001d28:	48000800 	stmdami	r0, {fp}
 8001d2c:	48000400 	stmdami	r0, {sl}

08001d30 <_ZN14DistanceSensor6filterEPij>:
 8001d30:	eb00 0282 	add.w	r2, r0, r2, lsl #2
 8001d34:	6b93      	ldr	r3, [r2, #56]	; 0x38
 8001d36:	6ad2      	ldr	r2, [r2, #44]	; 0x2c
 8001d38:	1a9b      	subs	r3, r3, r2
 8001d3a:	ea23 73e3 	bic.w	r3, r3, r3, asr #31
 8001d3e:	2210      	movs	r2, #16
 8001d40:	f5c3 5380 	rsb	r3, r3, #4096	; 0x1000
 8001d44:	fb93 f3f2 	sdiv	r3, r3, r2
 8001d48:	680a      	ldr	r2, [r1, #0]
 8001d4a:	eb02 0242 	add.w	r2, r2, r2, lsl #1
 8001d4e:	4413      	add	r3, r2
 8001d50:	2204      	movs	r2, #4
 8001d52:	fb93 f3f2 	sdiv	r3, r3, r2
 8001d56:	600b      	str	r3, [r1, #0]
 8001d58:	4770      	bx	lr

08001d5a <_ZN14DistanceSensor4mainEv>:
 8001d5a:	b538      	push	{r3, r4, r5, lr}
 8001d5c:	6a85      	ldr	r5, [r0, #40]	; 0x28
 8001d5e:	4604      	mov	r4, r0
 8001d60:	b115      	cbz	r5, 8001d68 <_ZN14DistanceSensor4mainEv+0xe>
 8001d62:	2d01      	cmp	r5, #1
 8001d64:	d014      	beq.n	8001d90 <_ZN14DistanceSensor4mainEv+0x36>
 8001d66:	bd38      	pop	{r3, r4, r5, pc}
 8001d68:	2008      	movs	r0, #8
 8001d6a:	f001 fa13 	bl	8003194 <_Z8adc_readi>
 8001d6e:	63a0      	str	r0, [r4, #56]	; 0x38
 8001d70:	2009      	movs	r0, #9
 8001d72:	f001 fa0f 	bl	8003194 <_Z8adc_readi>
 8001d76:	63e0      	str	r0, [r4, #60]	; 0x3c
 8001d78:	200a      	movs	r0, #10
 8001d7a:	f001 fa0b 	bl	8003194 <_Z8adc_readi>
 8001d7e:	69a2      	ldr	r2, [r4, #24]
 8001d80:	6420      	str	r0, [r4, #64]	; 0x40
 8001d82:	6993      	ldr	r3, [r2, #24]
 8001d84:	f443 5300 	orr.w	r3, r3, #8192	; 0x2000
 8001d88:	6193      	str	r3, [r2, #24]
 8001d8a:	2301      	movs	r3, #1
 8001d8c:	62a3      	str	r3, [r4, #40]	; 0x28
 8001d8e:	e7ea      	b.n	8001d66 <_ZN14DistanceSensor4mainEv+0xc>
 8001d90:	2008      	movs	r0, #8
 8001d92:	f001 f9ff 	bl	8003194 <_Z8adc_readi>
 8001d96:	62e0      	str	r0, [r4, #44]	; 0x2c
 8001d98:	2009      	movs	r0, #9
 8001d9a:	f001 f9fb 	bl	8003194 <_Z8adc_readi>
 8001d9e:	6320      	str	r0, [r4, #48]	; 0x30
 8001da0:	200a      	movs	r0, #10
 8001da2:	f001 f9f7 	bl	8003194 <_Z8adc_readi>
 8001da6:	69a2      	ldr	r2, [r4, #24]
 8001da8:	6360      	str	r0, [r4, #52]	; 0x34
 8001daa:	8d13      	ldrh	r3, [r2, #40]	; 0x28
 8001dac:	f443 5300 	orr.w	r3, r3, #8192	; 0x2000
 8001db0:	8513      	strh	r3, [r2, #40]	; 0x28
 8001db2:	4620      	mov	r0, r4
 8001db4:	2200      	movs	r2, #0
 8001db6:	f104 0108 	add.w	r1, r4, #8
 8001dba:	f7ff ffb9 	bl	8001d30 <_ZN14DistanceSensor6filterEPij>
 8001dbe:	462a      	mov	r2, r5
 8001dc0:	1d21      	adds	r1, r4, #4
 8001dc2:	f7ff ffb5 	bl	8001d30 <_ZN14DistanceSensor6filterEPij>
 8001dc6:	2202      	movs	r2, #2
 8001dc8:	f104 010c 	add.w	r1, r4, #12
 8001dcc:	f7ff ffb0 	bl	8001d30 <_ZN14DistanceSensor6filterEPij>
 8001dd0:	68a2      	ldr	r2, [r4, #8]
 8001dd2:	2aef      	cmp	r2, #239	; 0xef
 8001dd4:	f04f 0300 	mov.w	r3, #0
 8001dd8:	dc04      	bgt.n	8001de4 <_ZN14DistanceSensor4mainEv+0x8a>
 8001dda:	2ad1      	cmp	r2, #209	; 0xd1
 8001ddc:	7425      	strb	r5, [r4, #16]
 8001dde:	dd03      	ble.n	8001de8 <_ZN14DistanceSensor4mainEv+0x8e>
 8001de0:	7463      	strb	r3, [r4, #17]
 8001de2:	e002      	b.n	8001dea <_ZN14DistanceSensor4mainEv+0x90>
 8001de4:	7423      	strb	r3, [r4, #16]
 8001de6:	e7fb      	b.n	8001de0 <_ZN14DistanceSensor4mainEv+0x86>
 8001de8:	7465      	strb	r5, [r4, #17]
 8001dea:	2300      	movs	r3, #0
 8001dec:	62a3      	str	r3, [r4, #40]	; 0x28
 8001dee:	2301      	movs	r3, #1
 8001df0:	7523      	strb	r3, [r4, #20]
 8001df2:	e7b8      	b.n	8001d66 <_ZN14DistanceSensor4mainEv+0xc>

08001df4 <_ZN3PIDD1Ev>:
 8001df4:	4770      	bx	lr

08001df6 <_ZN3PIDD0Ev>:
 8001df6:	b510      	push	{r4, lr}
 8001df8:	212c      	movs	r1, #44	; 0x2c
 8001dfa:	4604      	mov	r4, r0
 8001dfc:	f7ff ff2c 	bl	8001c58 <_ZdlPvj>
 8001e00:	4620      	mov	r0, r4
 8001e02:	bd10      	pop	{r4, pc}

08001e04 <_ZN3PID7processEff>:
 8001e04:	edd0 6a03 	vldr	s13, [r0, #12]
 8001e08:	edd0 7a01 	vldr	s15, [r0, #4]
 8001e0c:	ed90 6a04 	vldr	s12, [r0, #16]
 8001e10:	edd0 4a07 	vldr	s9, [r0, #28]
 8001e14:	edc0 6a04 	vstr	s13, [r0, #16]
 8001e18:	ee07 2a10 	vmov	s14, r2
 8001e1c:	ee76 6aa6 	vadd.f32	s13, s13, s13
 8001e20:	ed90 5a06 	vldr	s10, [r0, #24]
 8001e24:	edc0 7a02 	vstr	s15, [r0, #8]
 8001e28:	ee05 1a90 	vmov	s11, r1
 8001e2c:	ee67 7aa4 	vmul.f32	s15, s15, s9
 8001e30:	ee37 7a66 	vsub.f32	s14, s14, s13
 8001e34:	ee45 7a85 	vmla.f32	s15, s11, s10
 8001e38:	6041      	str	r1, [r0, #4]
 8001e3a:	60c2      	str	r2, [r0, #12]
 8001e3c:	ee37 7a06 	vadd.f32	s14, s14, s12
 8001e40:	edd0 6a08 	vldr	s13, [r0, #32]
 8001e44:	ed80 6a05 	vstr	s12, [r0, #20]
 8001e48:	ee47 7a66 	vmls.f32	s15, s14, s13
 8001e4c:	ed90 7a0a 	vldr	s14, [r0, #40]	; 0x28
 8001e50:	ee77 7a87 	vadd.f32	s15, s15, s14
 8001e54:	ed90 7a09 	vldr	s14, [r0, #36]	; 0x24
 8001e58:	edc0 7a0a 	vstr	s15, [r0, #40]	; 0x28
 8001e5c:	eef4 7ac7 	vcmpe.f32	s15, s14
 8001e60:	eef1 fa10 	vmrs	APSR_nzcv, fpscr
 8001e64:	bfc8      	it	gt
 8001e66:	ed80 7a0a 	vstrgt	s14, [r0, #40]	; 0x28
 8001e6a:	edd0 7a0a 	vldr	s15, [r0, #40]	; 0x28
 8001e6e:	eeb1 7a47 	vneg.f32	s14, s14
 8001e72:	eef4 7ac7 	vcmpe.f32	s15, s14
 8001e76:	eef1 fa10 	vmrs	APSR_nzcv, fpscr
 8001e7a:	bf48      	it	mi
 8001e7c:	ed80 7a0a 	vstrmi	s14, [r0, #40]	; 0x28
 8001e80:	6a80      	ldr	r0, [r0, #40]	; 0x28
 8001e82:	4770      	bx	lr

08001e84 <_ZN3PID5resetEv>:
 8001e84:	2300      	movs	r3, #0
 8001e86:	6043      	str	r3, [r0, #4]
 8001e88:	6083      	str	r3, [r0, #8]
 8001e8a:	60c3      	str	r3, [r0, #12]
 8001e8c:	6103      	str	r3, [r0, #16]
 8001e8e:	6143      	str	r3, [r0, #20]
 8001e90:	6283      	str	r3, [r0, #40]	; 0x28
 8001e92:	4770      	bx	lr

08001e94 <_ZN3PID4initEffff>:
 8001e94:	b510      	push	{r4, lr}
 8001e96:	ee07 1a90 	vmov	s15, r1
 8001e9a:	ee07 2a10 	vmov	s14, r2
 8001e9e:	461a      	mov	r2, r3
 8001ea0:	f7ff fff0 	bl	8001e84 <_ZN3PID5resetEv>
 8001ea4:	ee37 7a87 	vadd.f32	s14, s15, s14
 8001ea8:	9b02      	ldr	r3, [sp, #8]
 8001eaa:	ed80 7a06 	vstr	s14, [r0, #24]
 8001eae:	eef1 7a67 	vneg.f32	s15, s15
 8001eb2:	edc0 7a07 	vstr	s15, [r0, #28]
 8001eb6:	6202      	str	r2, [r0, #32]
 8001eb8:	6243      	str	r3, [r0, #36]	; 0x24
 8001eba:	bd10      	pop	{r4, pc}

08001ebc <_ZN3PIDC1Effff>:
 8001ebc:	ee07 2a10 	vmov	s14, r2
 8001ec0:	461a      	mov	r2, r3
 8001ec2:	4b09      	ldr	r3, [pc, #36]	; (8001ee8 <_ZN3PIDC1Effff+0x2c>)
 8001ec4:	6003      	str	r3, [r0, #0]
 8001ec6:	b510      	push	{r4, lr}
 8001ec8:	ee07 1a90 	vmov	s15, r1
 8001ecc:	f7ff ffda 	bl	8001e84 <_ZN3PID5resetEv>
 8001ed0:	ee37 7a87 	vadd.f32	s14, s15, s14
 8001ed4:	9b02      	ldr	r3, [sp, #8]
 8001ed6:	ed80 7a06 	vstr	s14, [r0, #24]
 8001eda:	eef1 7a67 	vneg.f32	s15, s15
 8001ede:	edc0 7a07 	vstr	s15, [r0, #28]
 8001ee2:	6202      	str	r2, [r0, #32]
 8001ee4:	6243      	str	r3, [r0, #36]	; 0x24
 8001ee6:	bd10      	pop	{r4, pc}
 8001ee8:	08003944 	stmdaeq	r0, {r2, r6, r8, fp, ip, sp}

08001eec <_ZN5TimerC1Ev>:
 8001eec:	4770      	bx	lr
 8001eee:	0000      	movs	r0, r0

08001ef0 <_ZN5Timer4initEv>:
 8001ef0:	b5f7      	push	{r0, r1, r2, r4, r5, r6, r7, lr}
 8001ef2:	2200      	movs	r2, #0
 8001ef4:	4d15      	ldr	r5, [pc, #84]	; (8001f4c <_ZN5Timer4initEv+0x5c>)
 8001ef6:	2714      	movs	r7, #20
 8001ef8:	4613      	mov	r3, r2
 8001efa:	f44f 767a 	mov.w	r6, #1000	; 0x3e8
 8001efe:	fb07 f402 	mul.w	r4, r7, r2
 8001f02:	1929      	adds	r1, r5, r4
 8001f04:	3201      	adds	r2, #1
 8001f06:	2a10      	cmp	r2, #16
 8001f08:	512b      	str	r3, [r5, r4]
 8001f0a:	604b      	str	r3, [r1, #4]
 8001f0c:	608e      	str	r6, [r1, #8]
 8001f0e:	60cb      	str	r3, [r1, #12]
 8001f10:	740b      	strb	r3, [r1, #16]
 8001f12:	744b      	strb	r3, [r1, #17]
 8001f14:	d1f3      	bne.n	8001efe <_ZN5Timer4initEv+0xe>
 8001f16:	4a0e      	ldr	r2, [pc, #56]	; (8001f50 <_ZN5Timer4initEv+0x60>)
 8001f18:	6013      	str	r3, [r2, #0]
 8001f1a:	4a0e      	ldr	r2, [pc, #56]	; (8001f54 <_ZN5Timer4initEv+0x64>)
 8001f1c:	6003      	str	r3, [r0, #0]
 8001f1e:	69d3      	ldr	r3, [r2, #28]
 8001f20:	f043 0301 	orr.w	r3, r3, #1
 8001f24:	61d3      	str	r3, [r2, #28]
 8001f26:	2200      	movs	r2, #0
 8001f28:	f44f 7334 	mov.w	r3, #720	; 0x2d0
 8001f2c:	9300      	str	r3, [sp, #0]
 8001f2e:	4611      	mov	r1, r2
 8001f30:	2363      	movs	r3, #99	; 0x63
 8001f32:	f04f 4080 	mov.w	r0, #1073741824	; 0x40000000
 8001f36:	f000 ffc7 	bl	8002ec8 <_Z10timer_initP11TIM_TypeDefmmmm>
 8001f3a:	2201      	movs	r2, #1
 8001f3c:	2100      	movs	r1, #0
 8001f3e:	201c      	movs	r0, #28
 8001f40:	f000 ffa0 	bl	8002e84 <_Z9nvic_initmmm>
 8001f44:	b662      	cpsie	i
 8001f46:	b003      	add	sp, #12
 8001f48:	bdf0      	pop	{r4, r5, r6, r7, pc}
 8001f4a:	bf00      	nop
 8001f4c:	20000224 	andcs	r0, r0, r4, lsr #4
 8001f50:	20000220 	andcs	r0, r0, r0, lsr #4
 8001f54:	40021000 	andmi	r1, r2, r0

08001f58 <_ZN5TimerD1Ev>:
 8001f58:	4770      	bx	lr
 8001f5a:	0000      	movs	r0, r0

08001f5c <_ZN5Timer8add_taskEP6Threadjb>:
 8001f5c:	b5f0      	push	{r4, r5, r6, r7, lr}
 8001f5e:	b672      	cpsid	i
 8001f60:	4d11      	ldr	r5, [pc, #68]	; (8001fa8 <_ZN5Timer8add_taskEP6Threadjb+0x4c>)
 8001f62:	2400      	movs	r4, #0
 8001f64:	f04f 30ff 	mov.w	r0, #4294967295	; 0xffffffff
 8001f68:	f04f 0c14 	mov.w	ip, #20
 8001f6c:	462f      	mov	r7, r5
 8001f6e:	fb0c f604 	mul.w	r6, ip, r4
 8001f72:	eb05 0e06 	add.w	lr, r5, r6
 8001f76:	59ae      	ldr	r6, [r5, r6]
 8001f78:	b926      	cbnz	r6, 8001f84 <_ZN5Timer8add_taskEP6Threadjb+0x28>
 8001f7a:	f8de 6004 	ldr.w	r6, [lr, #4]
 8001f7e:	2e00      	cmp	r6, #0
 8001f80:	bf08      	it	eq
 8001f82:	4620      	moveq	r0, r4
 8001f84:	3401      	adds	r4, #1
 8001f86:	2c10      	cmp	r4, #16
 8001f88:	d1f1      	bne.n	8001f6e <_ZN5Timer8add_taskEP6Threadjb+0x12>
 8001f8a:	1c44      	adds	r4, r0, #1
 8001f8c:	d00a      	beq.n	8001fa4 <_ZN5Timer8add_taskEP6Threadjb+0x48>
 8001f8e:	b2c4      	uxtb	r4, r0
 8001f90:	2514      	movs	r5, #20
 8001f92:	4365      	muls	r5, r4
 8001f94:	197c      	adds	r4, r7, r5
 8001f96:	2600      	movs	r6, #0
 8001f98:	517e      	str	r6, [r7, r5]
 8001f9a:	6061      	str	r1, [r4, #4]
 8001f9c:	60a2      	str	r2, [r4, #8]
 8001f9e:	60e2      	str	r2, [r4, #12]
 8001fa0:	7426      	strb	r6, [r4, #16]
 8001fa2:	7463      	strb	r3, [r4, #17]
 8001fa4:	b662      	cpsie	i
 8001fa6:	bdf0      	pop	{r4, r5, r6, r7, pc}
 8001fa8:	20000224 	andcs	r0, r0, r4, lsr #4

08001fac <_ZN5Timer10set_periodEhj>:
 8001fac:	4804      	ldr	r0, [pc, #16]	; (8001fc0 <_ZN5Timer10set_periodEhj+0x14>)
 8001fae:	2314      	movs	r3, #20
 8001fb0:	fb03 0101 	mla	r1, r3, r1, r0
 8001fb4:	2300      	movs	r3, #0
 8001fb6:	60ca      	str	r2, [r1, #12]
 8001fb8:	608a      	str	r2, [r1, #8]
 8001fba:	740b      	strb	r3, [r1, #16]
 8001fbc:	4770      	bx	lr
 8001fbe:	bf00      	nop
 8001fc0:	20000224 	andcs	r0, r0, r4, lsr #4

08001fc4 <_ZN5Timer8get_timeEv>:
 8001fc4:	b082      	sub	sp, #8
 8001fc6:	b672      	cpsid	i
 8001fc8:	4b03      	ldr	r3, [pc, #12]	; (8001fd8 <_ZN5Timer8get_timeEv+0x14>)
 8001fca:	681b      	ldr	r3, [r3, #0]
 8001fcc:	9301      	str	r3, [sp, #4]
 8001fce:	b662      	cpsie	i
 8001fd0:	9801      	ldr	r0, [sp, #4]
 8001fd2:	b002      	add	sp, #8
 8001fd4:	4770      	bx	lr
 8001fd6:	bf00      	nop
 8001fd8:	20000220 	andcs	r0, r0, r0, lsr #4

08001fdc <_ZN5Timer8delay_msEj>:
 8001fdc:	b507      	push	{r0, r1, r2, lr}
 8001fde:	4602      	mov	r2, r0
 8001fe0:	f7ff fff0 	bl	8001fc4 <_ZN5Timer8get_timeEv>
 8001fe4:	4401      	add	r1, r0
 8001fe6:	9101      	str	r1, [sp, #4]
 8001fe8:	4610      	mov	r0, r2
 8001fea:	f7ff ffeb 	bl	8001fc4 <_ZN5Timer8get_timeEv>
 8001fee:	9b01      	ldr	r3, [sp, #4]
 8001ff0:	4298      	cmp	r0, r3
 8001ff2:	d201      	bcs.n	8001ff8 <_ZN5Timer8delay_msEj+0x1c>
 8001ff4:	bf00      	nop
 8001ff6:	e7f7      	b.n	8001fe8 <_ZN5Timer8delay_msEj+0xc>
 8001ff8:	b003      	add	sp, #12
 8001ffa:	f85d fb04 	ldr.w	pc, [sp], #4
 8001ffe:	0000      	movs	r0, r0

08002000 <TIM2_IRQHandler>:
 8002000:	b5f8      	push	{r3, r4, r5, r6, r7, lr}
 8002002:	f04f 4380 	mov.w	r3, #1073741824	; 0x40000000
 8002006:	691a      	ldr	r2, [r3, #16]
 8002008:	07d2      	lsls	r2, r2, #31
 800200a:	d514      	bpl.n	8002036 <TIM2_IRQHandler+0x36>
 800200c:	4f19      	ldr	r7, [pc, #100]	; (8002074 <TIM2_IRQHandler+0x74>)
 800200e:	f64f 72fe 	movw	r2, #65534	; 0xfffe
 8002012:	611a      	str	r2, [r3, #16]
 8002014:	2400      	movs	r4, #0
 8002016:	2614      	movs	r6, #20
 8002018:	463d      	mov	r5, r7
 800201a:	fb06 7304 	mla	r3, r6, r4, r7
 800201e:	68da      	ldr	r2, [r3, #12]
 8002020:	b152      	cbz	r2, 8002038 <TIM2_IRQHandler+0x38>
 8002022:	68da      	ldr	r2, [r3, #12]
 8002024:	3a01      	subs	r2, #1
 8002026:	60da      	str	r2, [r3, #12]
 8002028:	3401      	adds	r4, #1
 800202a:	2c10      	cmp	r4, #16
 800202c:	d1f5      	bne.n	800201a <TIM2_IRQHandler+0x1a>
 800202e:	4a12      	ldr	r2, [pc, #72]	; (8002078 <TIM2_IRQHandler+0x78>)
 8002030:	6813      	ldr	r3, [r2, #0]
 8002032:	3301      	adds	r3, #1
 8002034:	6013      	str	r3, [r2, #0]
 8002036:	bdf8      	pop	{r3, r4, r5, r6, r7, pc}
 8002038:	689a      	ldr	r2, [r3, #8]
 800203a:	60da      	str	r2, [r3, #12]
 800203c:	7c1a      	ldrb	r2, [r3, #16]
 800203e:	2aff      	cmp	r2, #255	; 0xff
 8002040:	bf1f      	itttt	ne
 8002042:	7c1a      	ldrbne	r2, [r3, #16]
 8002044:	3201      	addne	r2, #1
 8002046:	b2d2      	uxtbne	r2, r2
 8002048:	741a      	strbne	r2, [r3, #16]
 800204a:	fb06 f304 	mul.w	r3, r6, r4
 800204e:	18ea      	adds	r2, r5, r3
 8002050:	7c52      	ldrb	r2, [r2, #17]
 8002052:	2a00      	cmp	r2, #0
 8002054:	d1e8      	bne.n	8002028 <TIM2_IRQHandler+0x28>
 8002056:	58ea      	ldr	r2, [r5, r3]
 8002058:	b10a      	cbz	r2, 800205e <TIM2_IRQHandler+0x5e>
 800205a:	58eb      	ldr	r3, [r5, r3]
 800205c:	4798      	blx	r3
 800205e:	fb06 5304 	mla	r3, r6, r4, r5
 8002062:	685a      	ldr	r2, [r3, #4]
 8002064:	2a00      	cmp	r2, #0
 8002066:	d0df      	beq.n	8002028 <TIM2_IRQHandler+0x28>
 8002068:	6858      	ldr	r0, [r3, #4]
 800206a:	6803      	ldr	r3, [r0, #0]
 800206c:	689b      	ldr	r3, [r3, #8]
 800206e:	4798      	blx	r3
 8002070:	e7da      	b.n	8002028 <TIM2_IRQHandler+0x28>
 8002072:	bf00      	nop
 8002074:	20000224 	andcs	r0, r0, r4, lsr #4
 8002078:	20000220 	andcs	r0, r0, r0, lsr #4

0800207c <_ZN13MotorControll4mainEv>:
 800207c:	b538      	push	{r3, r4, r5, lr}
 800207e:	68c3      	ldr	r3, [r0, #12]
 8002080:	4d36      	ldr	r5, [pc, #216]	; (800215c <_ZN13MotorControll4mainEv+0xe0>)
 8002082:	ed2d 8b04 	vpush	{d8-d9}
 8002086:	6043      	str	r3, [r0, #4]
 8002088:	6903      	ldr	r3, [r0, #16]
 800208a:	6083      	str	r3, [r0, #8]
 800208c:	4604      	mov	r4, r0
 800208e:	4628      	mov	r0, r5
 8002090:	f000 fd66 	bl	8002b60 <_ZN7Encoder18get_left_no_atomicEv>
 8002094:	60e0      	str	r0, [r4, #12]
 8002096:	4628      	mov	r0, r5
 8002098:	f000 fd6c 	bl	8002b74 <_ZN7Encoder19get_right_no_atomicEv>
 800209c:	6862      	ldr	r2, [r4, #4]
 800209e:	68e3      	ldr	r3, [r4, #12]
 80020a0:	ed9f 5a2f 	vldr	s10, [pc, #188]	; 8002160 <_ZN13MotorControll4mainEv+0xe4>
 80020a4:	edd4 6a05 	vldr	s13, [r4, #20]
 80020a8:	eddf 5a2e 	vldr	s11, [pc, #184]	; 8002164 <_ZN13MotorControll4mainEv+0xe8>
 80020ac:	ed9f 6a2e 	vldr	s12, [pc, #184]	; 8002168 <_ZN13MotorControll4mainEv+0xec>
 80020b0:	6120      	str	r0, [r4, #16]
 80020b2:	1a9b      	subs	r3, r3, r2
 80020b4:	ee07 3a10 	vmov	s14, r3
 80020b8:	eeb8 7ac7 	vcvt.f32.s32	s14, s14
 80020bc:	68a3      	ldr	r3, [r4, #8]
 80020be:	ed9f 9a2b 	vldr	s18, [pc, #172]	; 800216c <_ZN13MotorControll4mainEv+0xf0>
 80020c2:	ee27 7a05 	vmul.f32	s14, s14, s10
 80020c6:	ee66 6aa5 	vmul.f32	s13, s13, s11
 80020ca:	ee47 6a06 	vmla.f32	s13, s14, s12
 80020ce:	1ac3      	subs	r3, r0, r3
 80020d0:	f104 0038 	add.w	r0, r4, #56	; 0x38
 80020d4:	ee07 3a90 	vmov	s15, r3
 80020d8:	eef8 7ae7 	vcvt.f32.s32	s15, s15
 80020dc:	edc4 6a05 	vstr	s13, [r4, #20]
 80020e0:	eeb0 7a66 	vmov.f32	s14, s13
 80020e4:	edd4 6a06 	vldr	s13, [r4, #24]
 80020e8:	ee67 7a85 	vmul.f32	s15, s15, s10
 80020ec:	ee66 6aa5 	vmul.f32	s13, s13, s11
 80020f0:	ee47 6a86 	vmla.f32	s13, s15, s12
 80020f4:	edd4 7a07 	vldr	s15, [r4, #28]
 80020f8:	edc4 6a06 	vstr	s13, [r4, #24]
 80020fc:	ee77 7ac7 	vsub.f32	s15, s15, s14
 8002100:	ee17 2a10 	vmov	r2, s14
 8002104:	ee17 1a90 	vmov	r1, s15
 8002108:	f7ff fe7c 	bl	8001e04 <_ZN3PID7processEff>
 800210c:	69a2      	ldr	r2, [r4, #24]
 800210e:	edd4 7a08 	vldr	s15, [r4, #32]
 8002112:	ee07 2a10 	vmov	s14, r2
 8002116:	ee77 7ac7 	vsub.f32	s15, s15, s14
 800211a:	ee08 0a90 	vmov	s17, r0
 800211e:	ee17 1a90 	vmov	r1, s15
 8002122:	f104 0064 	add.w	r0, r4, #100	; 0x64
 8002126:	f7ff fe6d 	bl	8001e04 <_ZN3PID7processEff>
 800212a:	ee68 8a89 	vmul.f32	s17, s17, s18
 800212e:	3424      	adds	r4, #36	; 0x24
 8002130:	eefd 7ae8 	vcvt.s32.f32	s15, s17
 8002134:	ee08 0a10 	vmov	s16, r0
 8002138:	ee17 1a90 	vmov	r1, s15
 800213c:	4620      	mov	r0, r4
 800213e:	f000 fdf5 	bl	8002d2c <_ZN5Motor8run_leftEi>
 8002142:	ee28 8a09 	vmul.f32	s16, s16, s18
 8002146:	4620      	mov	r0, r4
 8002148:	eefd 7ac8 	vcvt.s32.f32	s15, s16
 800214c:	ecbd 8b04 	vpop	{d8-d9}
 8002150:	ee17 1a90 	vmov	r1, s15
 8002154:	e8bd 4038 	ldmia.w	sp!, {r3, r4, r5, lr}
 8002158:	f000 be04 	b.w	8002d64 <_ZN5Motor9run_rightEi>
 800215c:	2000004c 	andcs	r0, r0, ip, asr #32
 8002160:	3dcccccd 	stclcc	12, cr12, [ip, #820]	; 0x334
 8002164:	3f666666 	svccc	0x00666666
 8002168:	3e000000 	cdpcc	0, 0, cr0, cr0, cr0, {0}
 800216c:	437f0000 	cmnmi	pc, #0

08002170 <_ZN13MotorControllC1Ev>:
 8002170:	b573      	push	{r0, r1, r4, r5, r6, lr}
 8002172:	4b0e      	ldr	r3, [pc, #56]	; (80021ac <_ZN13MotorControllC1Ev+0x3c>)
 8002174:	2500      	movs	r5, #0
 8002176:	4604      	mov	r4, r0
 8002178:	f04f 567e 	mov.w	r6, #1065353216	; 0x3f800000
 800217c:	f840 3b24 	str.w	r3, [r0], #36
 8002180:	f000 fd34 	bl	8002bec <_ZN5MotorC1Ev>
 8002184:	462b      	mov	r3, r5
 8002186:	462a      	mov	r2, r5
 8002188:	4629      	mov	r1, r5
 800218a:	9600      	str	r6, [sp, #0]
 800218c:	f104 0038 	add.w	r0, r4, #56	; 0x38
 8002190:	f7ff fe94 	bl	8001ebc <_ZN3PIDC1Effff>
 8002194:	9600      	str	r6, [sp, #0]
 8002196:	462b      	mov	r3, r5
 8002198:	462a      	mov	r2, r5
 800219a:	4629      	mov	r1, r5
 800219c:	f104 0064 	add.w	r0, r4, #100	; 0x64
 80021a0:	f7ff fe8c 	bl	8001ebc <_ZN3PIDC1Effff>
 80021a4:	4620      	mov	r0, r4
 80021a6:	b002      	add	sp, #8
 80021a8:	bd70      	pop	{r4, r5, r6, pc}
 80021aa:	bf00      	nop
 80021ac:	08003954 	stmdaeq	r0, {r2, r4, r6, r8, fp, ip, sp}

080021b0 <_ZN13MotorControll4initEv>:
 80021b0:	b5f7      	push	{r0, r1, r2, r4, r5, r6, r7, lr}
 80021b2:	4f15      	ldr	r7, [pc, #84]	; (8002208 <_ZN13MotorControll4initEv+0x58>)
 80021b4:	4e15      	ldr	r6, [pc, #84]	; (800220c <_ZN13MotorControll4initEv+0x5c>)
 80021b6:	4604      	mov	r4, r0
 80021b8:	f04f 557e 	mov.w	r5, #1065353216	; 0x3f800000
 80021bc:	3024      	adds	r0, #36	; 0x24
 80021be:	f000 fe45 	bl	8002e4c <_ZN5Motor4initEv>
 80021c2:	9500      	str	r5, [sp, #0]
 80021c4:	462b      	mov	r3, r5
 80021c6:	463a      	mov	r2, r7
 80021c8:	4631      	mov	r1, r6
 80021ca:	f104 0038 	add.w	r0, r4, #56	; 0x38
 80021ce:	f7ff fe61 	bl	8001e94 <_ZN3PID4initEffff>
 80021d2:	9500      	str	r5, [sp, #0]
 80021d4:	462b      	mov	r3, r5
 80021d6:	463a      	mov	r2, r7
 80021d8:	4631      	mov	r1, r6
 80021da:	f104 0064 	add.w	r0, r4, #100	; 0x64
 80021de:	f7ff fe59 	bl	8001e94 <_ZN3PID4initEffff>
 80021e2:	2500      	movs	r5, #0
 80021e4:	2300      	movs	r3, #0
 80021e6:	6163      	str	r3, [r4, #20]
 80021e8:	61a3      	str	r3, [r4, #24]
 80021ea:	61e3      	str	r3, [r4, #28]
 80021ec:	6223      	str	r3, [r4, #32]
 80021ee:	e9c4 5501 	strd	r5, r5, [r4, #4]
 80021f2:	e9c4 5503 	strd	r5, r5, [r4, #12]
 80021f6:	462b      	mov	r3, r5
 80021f8:	2204      	movs	r2, #4
 80021fa:	4621      	mov	r1, r4
 80021fc:	4804      	ldr	r0, [pc, #16]	; (8002210 <_ZN13MotorControll4initEv+0x60>)
 80021fe:	f7ff fead 	bl	8001f5c <_ZN5Timer8add_taskEP6Threadjb>
 8002202:	4628      	mov	r0, r5
 8002204:	b003      	add	sp, #12
 8002206:	bdf0      	pop	{r4, r5, r6, r7, pc}
 8002208:	3db851ec 	ldfccs	f5, [r8, #944]!	; 0x3b0
 800220c:	3f4ccccd 	svccc	0x004ccccd
 8002210:	20000218 	andcs	r0, r0, r8, lsl r2

08002214 <_ZN13MotorControll14set_left_speedEf>:
 8002214:	61c1      	str	r1, [r0, #28]
 8002216:	4770      	bx	lr

08002218 <_ZN13MotorControll15set_right_speedEf>:
 8002218:	6201      	str	r1, [r0, #32]
 800221a:	4770      	bx	lr

0800221c <_ZN13MotorControllD1Ev>:
 800221c:	b510      	push	{r4, lr}
 800221e:	4b08      	ldr	r3, [pc, #32]	; (8002240 <_ZN13MotorControllD1Ev+0x24>)
 8002220:	4604      	mov	r4, r0
 8002222:	f840 3b64 	str.w	r3, [r0], #100
 8002226:	f7ff fde5 	bl	8001df4 <_ZN3PIDD1Ev>
 800222a:	f104 0038 	add.w	r0, r4, #56	; 0x38
 800222e:	f7ff fde1 	bl	8001df4 <_ZN3PIDD1Ev>
 8002232:	f104 0024 	add.w	r0, r4, #36	; 0x24
 8002236:	f000 fd77 	bl	8002d28 <_ZN5MotorD1Ev>
 800223a:	4620      	mov	r0, r4
 800223c:	bd10      	pop	{r4, pc}
 800223e:	bf00      	nop
 8002240:	08003954 	stmdaeq	r0, {r2, r4, r6, r8, fp, ip, sp}

08002244 <_ZN13MotorControllD0Ev>:
 8002244:	b510      	push	{r4, lr}
 8002246:	4604      	mov	r4, r0
 8002248:	f7ff ffe8 	bl	800221c <_ZN13MotorControllD1Ev>
 800224c:	4620      	mov	r0, r4
 800224e:	2190      	movs	r1, #144	; 0x90
 8002250:	f7ff fd02 	bl	8001c58 <_ZdlPvj>
 8002254:	4620      	mov	r0, r4
 8002256:	bd10      	pop	{r4, pc}

08002258 <_ZN8TerminalC1Ev>:
 8002258:	b510      	push	{r4, lr}
 800225a:	4604      	mov	r4, r0
 800225c:	f000 fb8e 	bl	800297c <_ZN5UsartC1Ev>
 8002260:	4620      	mov	r0, r4
 8002262:	bd10      	pop	{r4, pc}

08002264 <_ZN8TerminalD1Ev>:
 8002264:	b510      	push	{r4, lr}
 8002266:	4604      	mov	r4, r0
 8002268:	f000 fbd2 	bl	8002a10 <_ZN5UsartD1Ev>
 800226c:	4620      	mov	r0, r4
 800226e:	bd10      	pop	{r4, pc}

08002270 <_ZN8Terminal4putsEPKc>:
 8002270:	b538      	push	{r3, r4, r5, lr}
 8002272:	4605      	mov	r5, r0
 8002274:	1e4c      	subs	r4, r1, #1
 8002276:	f814 1f01 	ldrb.w	r1, [r4, #1]!
 800227a:	b119      	cbz	r1, 8002284 <_ZN8Terminal4putsEPKc+0x14>
 800227c:	4628      	mov	r0, r5
 800227e:	f000 fbc9 	bl	8002a14 <_ZN5Usart8put_charEc>
 8002282:	e7f8      	b.n	8002276 <_ZN8Terminal4putsEPKc+0x6>
 8002284:	bd38      	pop	{r3, r4, r5, pc}

08002286 <_ZN8Terminal5putuiEm>:
 8002286:	b530      	push	{r4, r5, lr}
 8002288:	b085      	sub	sp, #20
 800228a:	2300      	movs	r3, #0
 800228c:	220a      	movs	r2, #10
 800228e:	f88d 300f 	strb.w	r3, [sp, #15]
 8002292:	4615      	mov	r5, r2
 8002294:	fbb1 f4f5 	udiv	r4, r1, r5
 8002298:	fb05 1314 	mls	r3, r5, r4, r1
 800229c:	a904      	add	r1, sp, #16
 800229e:	4411      	add	r1, r2
 80022a0:	3330      	adds	r3, #48	; 0x30
 80022a2:	f801 3c0c 	strb.w	r3, [r1, #-12]
 80022a6:	1e53      	subs	r3, r2, #1
 80022a8:	b2db      	uxtb	r3, r3
 80022aa:	4621      	mov	r1, r4
 80022ac:	b92c      	cbnz	r4, 80022ba <_ZN8Terminal5putuiEm+0x34>
 80022ae:	ab01      	add	r3, sp, #4
 80022b0:	1899      	adds	r1, r3, r2
 80022b2:	f7ff ffdd 	bl	8002270 <_ZN8Terminal4putsEPKc>
 80022b6:	b005      	add	sp, #20
 80022b8:	bd30      	pop	{r4, r5, pc}
 80022ba:	461a      	mov	r2, r3
 80022bc:	e7ea      	b.n	8002294 <_ZN8Terminal5putuiEm+0xe>

080022be <_ZN10LineSensorD1Ev>:
 80022be:	4770      	bx	lr

080022c0 <_ZN10LineSensorD0Ev>:
 80022c0:	b510      	push	{r4, lr}
 80022c2:	21bc      	movs	r1, #188	; 0xbc
 80022c4:	4604      	mov	r4, r0
 80022c6:	f7ff fcc7 	bl	8001c58 <_ZdlPvj>
 80022ca:	4620      	mov	r0, r4
 80022cc:	bd10      	pop	{r4, pc}
 80022ce:	0000      	movs	r0, r0

080022d0 <_ZN10LineSensorC1Ev>:
 80022d0:	4a4a      	ldr	r2, [pc, #296]	; (80023fc <_ZN10LineSensorC1Ev+0x12c>)
 80022d2:	4b4b      	ldr	r3, [pc, #300]	; (8002400 <_ZN10LineSensorC1Ev+0x130>)
 80022d4:	6003      	str	r3, [r0, #0]
 80022d6:	6953      	ldr	r3, [r2, #20]
 80022d8:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 80022dc:	b510      	push	{r4, lr}
 80022de:	6153      	str	r3, [r2, #20]
 80022e0:	f04f 4390 	mov.w	r3, #1207959552	; 0x48000000
 80022e4:	6043      	str	r3, [r0, #4]
 80022e6:	689c      	ldr	r4, [r3, #8]
 80022e8:	f424 3440 	bic.w	r4, r4, #196608	; 0x30000
 80022ec:	609c      	str	r4, [r3, #8]
 80022ee:	689c      	ldr	r4, [r3, #8]
 80022f0:	f444 3440 	orr.w	r4, r4, #196608	; 0x30000
 80022f4:	609c      	str	r4, [r3, #8]
 80022f6:	889c      	ldrh	r4, [r3, #4]
 80022f8:	f424 7480 	bic.w	r4, r4, #256	; 0x100
 80022fc:	0424      	lsls	r4, r4, #16
 80022fe:	0c24      	lsrs	r4, r4, #16
 8002300:	809c      	strh	r4, [r3, #4]
 8002302:	889c      	ldrh	r4, [r3, #4]
 8002304:	b2a4      	uxth	r4, r4
 8002306:	809c      	strh	r4, [r3, #4]
 8002308:	681c      	ldr	r4, [r3, #0]
 800230a:	f424 3440 	bic.w	r4, r4, #196608	; 0x30000
 800230e:	601c      	str	r4, [r3, #0]
 8002310:	681c      	ldr	r4, [r3, #0]
 8002312:	f444 3480 	orr.w	r4, r4, #65536	; 0x10000
 8002316:	601c      	str	r4, [r3, #0]
 8002318:	6954      	ldr	r4, [r2, #20]
 800231a:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 800231e:	6154      	str	r4, [r2, #20]
 8002320:	681c      	ldr	r4, [r3, #0]
 8002322:	f8c0 3090 	str.w	r3, [r0, #144]	; 0x90
 8002326:	f024 0403 	bic.w	r4, r4, #3
 800232a:	601c      	str	r4, [r3, #0]
 800232c:	681c      	ldr	r4, [r3, #0]
 800232e:	f044 0403 	orr.w	r4, r4, #3
 8002332:	601c      	str	r4, [r3, #0]
 8002334:	6954      	ldr	r4, [r2, #20]
 8002336:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 800233a:	6154      	str	r4, [r2, #20]
 800233c:	681c      	ldr	r4, [r3, #0]
 800233e:	f8c0 3094 	str.w	r3, [r0, #148]	; 0x94
 8002342:	f024 040c 	bic.w	r4, r4, #12
 8002346:	601c      	str	r4, [r3, #0]
 8002348:	681c      	ldr	r4, [r3, #0]
 800234a:	f044 040c 	orr.w	r4, r4, #12
 800234e:	601c      	str	r4, [r3, #0]
 8002350:	6954      	ldr	r4, [r2, #20]
 8002352:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 8002356:	6154      	str	r4, [r2, #20]
 8002358:	681c      	ldr	r4, [r3, #0]
 800235a:	f8c0 3098 	str.w	r3, [r0, #152]	; 0x98
 800235e:	f024 0430 	bic.w	r4, r4, #48	; 0x30
 8002362:	601c      	str	r4, [r3, #0]
 8002364:	681c      	ldr	r4, [r3, #0]
 8002366:	f044 0430 	orr.w	r4, r4, #48	; 0x30
 800236a:	601c      	str	r4, [r3, #0]
 800236c:	6954      	ldr	r4, [r2, #20]
 800236e:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 8002372:	6154      	str	r4, [r2, #20]
 8002374:	681c      	ldr	r4, [r3, #0]
 8002376:	f8c0 309c 	str.w	r3, [r0, #156]	; 0x9c
 800237a:	f024 04c0 	bic.w	r4, r4, #192	; 0xc0
 800237e:	601c      	str	r4, [r3, #0]
 8002380:	681c      	ldr	r4, [r3, #0]
 8002382:	f044 04c0 	orr.w	r4, r4, #192	; 0xc0
 8002386:	601c      	str	r4, [r3, #0]
 8002388:	6954      	ldr	r4, [r2, #20]
 800238a:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 800238e:	6154      	str	r4, [r2, #20]
 8002390:	681c      	ldr	r4, [r3, #0]
 8002392:	f8c0 30a0 	str.w	r3, [r0, #160]	; 0xa0
 8002396:	f424 7440 	bic.w	r4, r4, #768	; 0x300
 800239a:	601c      	str	r4, [r3, #0]
 800239c:	681c      	ldr	r4, [r3, #0]
 800239e:	f444 7440 	orr.w	r4, r4, #768	; 0x300
 80023a2:	601c      	str	r4, [r3, #0]
 80023a4:	6954      	ldr	r4, [r2, #20]
 80023a6:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 80023aa:	6154      	str	r4, [r2, #20]
 80023ac:	681c      	ldr	r4, [r3, #0]
 80023ae:	f8c0 30a4 	str.w	r3, [r0, #164]	; 0xa4
 80023b2:	f424 6440 	bic.w	r4, r4, #3072	; 0xc00
 80023b6:	601c      	str	r4, [r3, #0]
 80023b8:	681c      	ldr	r4, [r3, #0]
 80023ba:	f444 6440 	orr.w	r4, r4, #3072	; 0xc00
 80023be:	601c      	str	r4, [r3, #0]
 80023c0:	6954      	ldr	r4, [r2, #20]
 80023c2:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 80023c6:	6154      	str	r4, [r2, #20]
 80023c8:	681c      	ldr	r4, [r3, #0]
 80023ca:	f8c0 30a8 	str.w	r3, [r0, #168]	; 0xa8
 80023ce:	f424 5440 	bic.w	r4, r4, #12288	; 0x3000
 80023d2:	601c      	str	r4, [r3, #0]
 80023d4:	681c      	ldr	r4, [r3, #0]
 80023d6:	f444 5440 	orr.w	r4, r4, #12288	; 0x3000
 80023da:	601c      	str	r4, [r3, #0]
 80023dc:	6954      	ldr	r4, [r2, #20]
 80023de:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 80023e2:	6154      	str	r4, [r2, #20]
 80023e4:	681a      	ldr	r2, [r3, #0]
 80023e6:	f8c0 30ac 	str.w	r3, [r0, #172]	; 0xac
 80023ea:	f422 4240 	bic.w	r2, r2, #49152	; 0xc000
 80023ee:	601a      	str	r2, [r3, #0]
 80023f0:	681a      	ldr	r2, [r3, #0]
 80023f2:	f442 4240 	orr.w	r2, r2, #49152	; 0xc000
 80023f6:	601a      	str	r2, [r3, #0]
 80023f8:	bd10      	pop	{r4, pc}
 80023fa:	bf00      	nop
 80023fc:	40021000 	andmi	r1, r2, r0
 8002400:	08003968 	stmdaeq	r0, {r3, r5, r6, r8, fp, ip, sp}

08002404 <_ZN10LineSensor4initEv>:
 8002404:	6842      	ldr	r2, [r0, #4]
 8002406:	b5f8      	push	{r3, r4, r5, r6, r7, lr}
 8002408:	8d13      	ldrh	r3, [r2, #40]	; 0x28
 800240a:	f443 7380 	orr.w	r3, r3, #256	; 0x100
 800240e:	8513      	strh	r3, [r2, #40]	; 0x28
 8002410:	2164      	movs	r1, #100	; 0x64
 8002412:	4604      	mov	r4, r0
 8002414:	4829      	ldr	r0, [pc, #164]	; (80024bc <_ZN10LineSensor4initEv+0xb8>)
 8002416:	f7ff fde1 	bl	8001fdc <_ZN5Timer8delay_msEj>
 800241a:	f000 fe7b 	bl	8003114 <_Z8adc_initv>
 800241e:	2164      	movs	r1, #100	; 0x64
 8002420:	4826      	ldr	r0, [pc, #152]	; (80024bc <_ZN10LineSensor4initEv+0xb8>)
 8002422:	f7ff fddb 	bl	8001fdc <_ZN5Timer8delay_msEj>
 8002426:	f104 0630 	add.w	r6, r4, #48	; 0x30
 800242a:	4637      	mov	r7, r6
 800242c:	2500      	movs	r5, #0
 800242e:	4628      	mov	r0, r5
 8002430:	f000 feb0 	bl	8003194 <_Z8adc_readi>
 8002434:	3501      	adds	r5, #1
 8002436:	2d08      	cmp	r5, #8
 8002438:	f847 0b04 	str.w	r0, [r7], #4
 800243c:	d1f7      	bne.n	800242e <_ZN10LineSensor4initEv+0x2a>
 800243e:	6862      	ldr	r2, [r4, #4]
 8002440:	481e      	ldr	r0, [pc, #120]	; (80024bc <_ZN10LineSensor4initEv+0xb8>)
 8002442:	6993      	ldr	r3, [r2, #24]
 8002444:	f443 7380 	orr.w	r3, r3, #256	; 0x100
 8002448:	6193      	str	r3, [r2, #24]
 800244a:	2164      	movs	r1, #100	; 0x64
 800244c:	f7ff fdc6 	bl	8001fdc <_ZN5Timer8delay_msEj>
 8002450:	2500      	movs	r5, #0
 8002452:	4628      	mov	r0, r5
 8002454:	f000 fe9e 	bl	8003194 <_Z8adc_readi>
 8002458:	f856 3b04 	ldr.w	r3, [r6], #4
 800245c:	3501      	adds	r5, #1
 800245e:	1ac0      	subs	r0, r0, r3
 8002460:	2d08      	cmp	r5, #8
 8002462:	61f0      	str	r0, [r6, #28]
 8002464:	d1f5      	bne.n	8002452 <_ZN10LineSensor4initEv+0x4e>
 8002466:	f06f 02ff 	mvn.w	r2, #255	; 0xff
 800246a:	f06f 03bf 	mvn.w	r3, #191	; 0xbf
 800246e:	e9c4 2304 	strd	r2, r3, [r4, #16]
 8002472:	f06f 017f 	mvn.w	r1, #127	; 0x7f
 8002476:	f06f 033f 	mvn.w	r3, #63	; 0x3f
 800247a:	e9c4 1306 	strd	r1, r3, [r4, #24]
 800247e:	2040      	movs	r0, #64	; 0x40
 8002480:	2380      	movs	r3, #128	; 0x80
 8002482:	e9c4 0308 	strd	r0, r3, [r4, #32]
 8002486:	26c0      	movs	r6, #192	; 0xc0
 8002488:	f44f 7380 	mov.w	r3, #256	; 0x100
 800248c:	2500      	movs	r5, #0
 800248e:	e9c4 630a 	strd	r6, r3, [r4, #40]	; 0x28
 8002492:	f44f 73c8 	mov.w	r3, #400	; 0x190
 8002496:	60a3      	str	r3, [r4, #8]
 8002498:	e9c4 551c 	strd	r5, r5, [r4, #112]	; 0x70
 800249c:	e9c4 551e 	strd	r5, r5, [r4, #120]	; 0x78
 80024a0:	e9c4 5520 	strd	r5, r5, [r4, #128]	; 0x80
 80024a4:	e9c4 5522 	strd	r5, r5, [r4, #136]	; 0x88
 80024a8:	7325      	strb	r5, [r4, #12]
 80024aa:	462b      	mov	r3, r5
 80024ac:	2204      	movs	r2, #4
 80024ae:	4621      	mov	r1, r4
 80024b0:	4802      	ldr	r0, [pc, #8]	; (80024bc <_ZN10LineSensor4initEv+0xb8>)
 80024b2:	f7ff fd53 	bl	8001f5c <_ZN5Timer8add_taskEP6Threadjb>
 80024b6:	4628      	mov	r0, r5
 80024b8:	bdf8      	pop	{r3, r4, r5, r6, r7, pc}
 80024ba:	bf00      	nop
 80024bc:	20000218 	andcs	r0, r0, r8, lsl r2

080024c0 <_ZN10LineSensor5readyEv>:
 80024c0:	7b03      	ldrb	r3, [r0, #12]
 80024c2:	b672      	cpsid	i
 80024c4:	b10b      	cbz	r3, 80024ca <_ZN10LineSensor5readyEv+0xa>
 80024c6:	2200      	movs	r2, #0
 80024c8:	7302      	strb	r2, [r0, #12]
 80024ca:	b662      	cpsie	i
 80024cc:	4618      	mov	r0, r3
 80024ce:	4770      	bx	lr

080024d0 <_ZN10LineSensor7get_maxEv>:
 80024d0:	f44f 7080 	mov.w	r0, #256	; 0x100
 80024d4:	4770      	bx	lr

080024d6 <_ZN10LineSensor9integrateEj>:
 80024d6:	eb00 0081 	add.w	r0, r0, r1, lsl #2
 80024da:	b530      	push	{r4, r5, lr}
 80024dc:	6902      	ldr	r2, [r0, #16]
 80024de:	6f05      	ldr	r5, [r0, #112]	; 0x70
 80024e0:	fb02 f405 	mul.w	r4, r2, r5
 80024e4:	b171      	cbz	r1, 8002504 <_ZN10LineSensor9integrateEj+0x2e>
 80024e6:	6ec3      	ldr	r3, [r0, #108]	; 0x6c
 80024e8:	68c2      	ldr	r2, [r0, #12]
 80024ea:	2906      	cmp	r1, #6
 80024ec:	fb02 4203 	mla	r2, r2, r3, r4
 80024f0:	442b      	add	r3, r5
 80024f2:	d80a      	bhi.n	800250a <_ZN10LineSensor9integrateEj+0x34>
 80024f4:	6f41      	ldr	r1, [r0, #116]	; 0x74
 80024f6:	6940      	ldr	r0, [r0, #20]
 80024f8:	440b      	add	r3, r1
 80024fa:	fb00 2201 	mla	r2, r0, r1, r2
 80024fe:	fb92 f0f3 	sdiv	r0, r2, r3
 8002502:	bd30      	pop	{r4, r5, pc}
 8002504:	0062      	lsls	r2, r4, #1
 8002506:	006b      	lsls	r3, r5, #1
 8002508:	e7f4      	b.n	80024f4 <_ZN10LineSensor9integrateEj+0x1e>
 800250a:	4422      	add	r2, r4
 800250c:	442b      	add	r3, r5
 800250e:	e7f6      	b.n	80024fe <_ZN10LineSensor9integrateEj+0x28>

08002510 <_ZN10LineSensor20find_center_line_posEv>:
 8002510:	6882      	ldr	r2, [r0, #8]
 8002512:	f100 0370 	add.w	r3, r0, #112	; 0x70
 8002516:	2000      	movs	r0, #0
 8002518:	f853 1b04 	ldr.w	r1, [r3], #4
 800251c:	428a      	cmp	r2, r1
 800251e:	db04      	blt.n	800252a <_ZN10LineSensor20find_center_line_posEv+0x1a>
 8002520:	3001      	adds	r0, #1
 8002522:	2808      	cmp	r0, #8
 8002524:	d1f8      	bne.n	8002518 <_ZN10LineSensor20find_center_line_posEv+0x8>
 8002526:	f04f 30ff 	mov.w	r0, #4294967295	; 0xffffffff
 800252a:	4770      	bx	lr

0800252c <_ZN10LineSensor4mainEv>:
 800252c:	e92d 47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
 8002530:	2500      	movs	r5, #0
 8002532:	4604      	mov	r4, r0
 8002534:	f100 0630 	add.w	r6, r0, #48	; 0x30
 8002538:	f44f 797a 	mov.w	r9, #1000	; 0x3e8
 800253c:	46aa      	mov	sl, r5
 800253e:	4628      	mov	r0, r5
 8002540:	f000 fe28 	bl	8003194 <_Z8adc_readi>
 8002544:	f856 3b04 	ldr.w	r3, [r6], #4
 8002548:	1ac0      	subs	r0, r0, r3
 800254a:	fb09 f000 	mul.w	r0, r9, r0
 800254e:	69f2      	ldr	r2, [r6, #28]
 8002550:	fb90 f0f2 	sdiv	r0, r0, r2
 8002554:	3501      	adds	r5, #1
 8002556:	f5d0 707a 	rsbs	r0, r0, #1000	; 0x3e8
 800255a:	bf54      	ite	pl
 800255c:	63f0      	strpl	r0, [r6, #60]	; 0x3c
 800255e:	f8c6 a03c 	strmi.w	sl, [r6, #60]	; 0x3c
 8002562:	2d08      	cmp	r5, #8
 8002564:	d1eb      	bne.n	800253e <_ZN10LineSensor4mainEv+0x12>
 8002566:	4620      	mov	r0, r4
 8002568:	f7ff ffd2 	bl	8002510 <_ZN10LineSensor20find_center_line_posEv>
 800256c:	1c43      	adds	r3, r0, #1
 800256e:	4601      	mov	r1, r0
 8002570:	d00f      	beq.n	8002592 <_ZN10LineSensor4mainEv+0x66>
 8002572:	4620      	mov	r0, r4
 8002574:	f7ff ffaf 	bl	80024d6 <_ZN10LineSensor9integrateEj>
 8002578:	2301      	movs	r3, #1
 800257a:	4607      	mov	r7, r0
 800257c:	4680      	mov	r8, r0
 800257e:	f884 30b0 	strb.w	r3, [r4, #176]	; 0xb0
 8002582:	2301      	movs	r3, #1
 8002584:	f884 30b1 	strb.w	r3, [r4, #177]	; 0xb1
 8002588:	e9c4 782d 	strd	r7, r8, [r4, #180]	; 0xb4
 800258c:	7323      	strb	r3, [r4, #12]
 800258e:	e8bd 87f0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
 8002592:	2300      	movs	r3, #0
 8002594:	e7f3      	b.n	800257e <_ZN10LineSensor4mainEv+0x52>

08002596 <__aeabi_atexit>:
 8002596:	2000      	movs	r0, #0
 8002598:	4770      	bx	lr

0800259a <__cxa_pure_virtual>:
 800259a:	e7fe      	b.n	800259a <__cxa_pure_virtual>

0800259c <_ZN3KeyD1Ev>:
 800259c:	4770      	bx	lr

0800259e <_ZN3KeyD0Ev>:
 800259e:	b510      	push	{r4, lr}
 80025a0:	2118      	movs	r1, #24
 80025a2:	4604      	mov	r4, r0
 80025a4:	f7ff fb58 	bl	8001c58 <_ZdlPvj>
 80025a8:	4620      	mov	r0, r4
 80025aa:	bd10      	pop	{r4, pc}

080025ac <_ZN3Key4mainEv>:
 80025ac:	7b02      	ldrb	r2, [r0, #12]
 80025ae:	6883      	ldr	r3, [r0, #8]
 80025b0:	b132      	cbz	r2, 80025c0 <_ZN3Key4mainEv+0x14>
 80025b2:	2200      	movs	r2, #0
 80025b4:	7302      	strb	r2, [r0, #12]
 80025b6:	699a      	ldr	r2, [r3, #24]
 80025b8:	f442 4200 	orr.w	r2, r2, #32768	; 0x8000
 80025bc:	619a      	str	r2, [r3, #24]
 80025be:	4770      	bx	lr
 80025c0:	2201      	movs	r2, #1
 80025c2:	7302      	strb	r2, [r0, #12]
 80025c4:	8d1a      	ldrh	r2, [r3, #40]	; 0x28
 80025c6:	f442 4200 	orr.w	r2, r2, #32768	; 0x8000
 80025ca:	851a      	strh	r2, [r3, #40]	; 0x28
 80025cc:	4770      	bx	lr
 80025ce:	0000      	movs	r0, r0

080025d0 <_ZN3KeyC1Ev>:
 80025d0:	4a1c      	ldr	r2, [pc, #112]	; (8002644 <_ZN3KeyC1Ev+0x74>)
 80025d2:	4b1d      	ldr	r3, [pc, #116]	; (8002648 <_ZN3KeyC1Ev+0x78>)
 80025d4:	6003      	str	r3, [r0, #0]
 80025d6:	6953      	ldr	r3, [r2, #20]
 80025d8:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 80025dc:	b510      	push	{r4, lr}
 80025de:	6153      	str	r3, [r2, #20]
 80025e0:	4b1a      	ldr	r3, [pc, #104]	; (800264c <_ZN3KeyC1Ev+0x7c>)
 80025e2:	6043      	str	r3, [r0, #4]
 80025e4:	689c      	ldr	r4, [r3, #8]
 80025e6:	f024 7440 	bic.w	r4, r4, #50331648	; 0x3000000
 80025ea:	609c      	str	r4, [r3, #8]
 80025ec:	689c      	ldr	r4, [r3, #8]
 80025ee:	f044 7440 	orr.w	r4, r4, #50331648	; 0x3000000
 80025f2:	609c      	str	r4, [r3, #8]
 80025f4:	681c      	ldr	r4, [r3, #0]
 80025f6:	f024 7440 	bic.w	r4, r4, #50331648	; 0x3000000
 80025fa:	601c      	str	r4, [r3, #0]
 80025fc:	681c      	ldr	r4, [r3, #0]
 80025fe:	601c      	str	r4, [r3, #0]
 8002600:	68dc      	ldr	r4, [r3, #12]
 8002602:	f044 7480 	orr.w	r4, r4, #16777216	; 0x1000000
 8002606:	60dc      	str	r4, [r3, #12]
 8002608:	6954      	ldr	r4, [r2, #20]
 800260a:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 800260e:	6154      	str	r4, [r2, #20]
 8002610:	689a      	ldr	r2, [r3, #8]
 8002612:	6083      	str	r3, [r0, #8]
 8002614:	f022 4240 	bic.w	r2, r2, #3221225472	; 0xc0000000
 8002618:	609a      	str	r2, [r3, #8]
 800261a:	689a      	ldr	r2, [r3, #8]
 800261c:	f042 4240 	orr.w	r2, r2, #3221225472	; 0xc0000000
 8002620:	609a      	str	r2, [r3, #8]
 8002622:	889a      	ldrh	r2, [r3, #4]
 8002624:	f3c2 020e 	ubfx	r2, r2, #0, #15
 8002628:	809a      	strh	r2, [r3, #4]
 800262a:	889a      	ldrh	r2, [r3, #4]
 800262c:	b292      	uxth	r2, r2
 800262e:	809a      	strh	r2, [r3, #4]
 8002630:	681a      	ldr	r2, [r3, #0]
 8002632:	f022 4240 	bic.w	r2, r2, #3221225472	; 0xc0000000
 8002636:	601a      	str	r2, [r3, #0]
 8002638:	681a      	ldr	r2, [r3, #0]
 800263a:	f042 4280 	orr.w	r2, r2, #1073741824	; 0x40000000
 800263e:	601a      	str	r2, [r3, #0]
 8002640:	bd10      	pop	{r4, pc}
 8002642:	bf00      	nop
 8002644:	40021000 	andmi	r1, r2, r0
 8002648:	0800397c 	stmdaeq	r0, {r2, r3, r4, r5, r6, r8, fp, ip, sp}
 800264c:	48000400 	stmdami	r0, {sl}

08002650 <_ZN3Key4initEv>:
 8002650:	f04f 33ff 	mov.w	r3, #4294967295	; 0xffffffff
 8002654:	b510      	push	{r4, lr}
 8002656:	6143      	str	r3, [r0, #20]
 8002658:	2300      	movs	r3, #0
 800265a:	4604      	mov	r4, r0
 800265c:	7303      	strb	r3, [r0, #12]
 800265e:	4601      	mov	r1, r0
 8002660:	f44f 72fa 	mov.w	r2, #500	; 0x1f4
 8002664:	4802      	ldr	r0, [pc, #8]	; (8002670 <_ZN3Key4initEv+0x20>)
 8002666:	f7ff fc79 	bl	8001f5c <_ZN5Timer8add_taskEP6Threadjb>
 800266a:	6120      	str	r0, [r4, #16]
 800266c:	bd10      	pop	{r4, pc}
 800266e:	bf00      	nop
 8002670:	20000218 	andcs	r0, r0, r8, lsl r2

08002674 <_ZN3Key4readEv>:
 8002674:	b570      	push	{r4, r5, r6, lr}
 8002676:	4604      	mov	r4, r0
 8002678:	6863      	ldr	r3, [r4, #4]
 800267a:	8a1b      	ldrh	r3, [r3, #16]
 800267c:	04da      	lsls	r2, r3, #19
 800267e:	d501      	bpl.n	8002684 <_ZN3Key4readEv+0x10>
 8002680:	bf00      	nop
 8002682:	e7f9      	b.n	8002678 <_ZN3Key4readEv+0x4>
 8002684:	2301      	movs	r3, #1
 8002686:	6163      	str	r3, [r4, #20]
 8002688:	2264      	movs	r2, #100	; 0x64
 800268a:	7c21      	ldrb	r1, [r4, #16]
 800268c:	480f      	ldr	r0, [pc, #60]	; (80026cc <_ZN3Key4readEv+0x58>)
 800268e:	4d0f      	ldr	r5, [pc, #60]	; (80026cc <_ZN3Key4readEv+0x58>)
 8002690:	f7ff fc8c 	bl	8001fac <_ZN5Timer10set_periodEhj>
 8002694:	480d      	ldr	r0, [pc, #52]	; (80026cc <_ZN3Key4readEv+0x58>)
 8002696:	f7ff fc95 	bl	8001fc4 <_ZN5Timer8get_timeEv>
 800269a:	f500 66fa 	add.w	r6, r0, #2000	; 0x7d0
 800269e:	6863      	ldr	r3, [r4, #4]
 80026a0:	8a1b      	ldrh	r3, [r3, #16]
 80026a2:	04db      	lsls	r3, r3, #19
 80026a4:	d40f      	bmi.n	80026c6 <_ZN3Key4readEv+0x52>
 80026a6:	4809      	ldr	r0, [pc, #36]	; (80026cc <_ZN3Key4readEv+0x58>)
 80026a8:	f7ff fc8c 	bl	8001fc4 <_ZN5Timer8get_timeEv>
 80026ac:	42b0      	cmp	r0, r6
 80026ae:	d9f6      	bls.n	800269e <_ZN3Key4readEv+0x2a>
 80026b0:	6963      	ldr	r3, [r4, #20]
 80026b2:	2b01      	cmp	r3, #1
 80026b4:	d1f3      	bne.n	800269e <_ZN3Key4readEv+0x2a>
 80026b6:	2232      	movs	r2, #50	; 0x32
 80026b8:	7c21      	ldrb	r1, [r4, #16]
 80026ba:	4628      	mov	r0, r5
 80026bc:	f7ff fc76 	bl	8001fac <_ZN5Timer10set_periodEhj>
 80026c0:	2302      	movs	r3, #2
 80026c2:	6163      	str	r3, [r4, #20]
 80026c4:	e7eb      	b.n	800269e <_ZN3Key4readEv+0x2a>
 80026c6:	6960      	ldr	r0, [r4, #20]
 80026c8:	bd70      	pop	{r4, r5, r6, pc}
 80026ca:	bf00      	nop
 80026cc:	20000218 	andcs	r0, r0, r8, lsl r2

080026d0 <_ZN3IMUD1Ev>:
 80026d0:	4770      	bx	lr

080026d2 <_ZN3IMUD0Ev>:
 80026d2:	b510      	push	{r4, lr}
 80026d4:	2144      	movs	r1, #68	; 0x44
 80026d6:	4604      	mov	r4, r0
 80026d8:	f7ff fabe 	bl	8001c58 <_ZdlPvj>
 80026dc:	4620      	mov	r0, r4
 80026de:	bd10      	pop	{r4, pc}

080026e0 <_ZN3IMUC1Ev>:
 80026e0:	4b01      	ldr	r3, [pc, #4]	; (80026e8 <_ZN3IMUC1Ev+0x8>)
 80026e2:	6003      	str	r3, [r0, #0]
 80026e4:	4770      	bx	lr
 80026e6:	bf00      	nop
 80026e8:	08003990 	stmdaeq	r0, {r4, r7, r8, fp, ip, sp}

080026ec <_ZN3IMU4readEb>:
 80026ec:	e92d 41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
 80026f0:	4604      	mov	r4, r0
 80026f2:	6c00      	ldr	r0, [r0, #64]	; 0x40
 80026f4:	6803      	ldr	r3, [r0, #0]
 80026f6:	689b      	ldr	r3, [r3, #8]
 80026f8:	4688      	mov	r8, r1
 80026fa:	4798      	blx	r3
 80026fc:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80026fe:	6803      	ldr	r3, [r0, #0]
 8002700:	21d4      	movs	r1, #212	; 0xd4
 8002702:	695b      	ldr	r3, [r3, #20]
 8002704:	4798      	blx	r3
 8002706:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002708:	6803      	ldr	r3, [r0, #0]
 800270a:	2119      	movs	r1, #25
 800270c:	695b      	ldr	r3, [r3, #20]
 800270e:	4798      	blx	r3
 8002710:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002712:	6803      	ldr	r3, [r0, #0]
 8002714:	689b      	ldr	r3, [r3, #8]
 8002716:	4798      	blx	r3
 8002718:	6c20      	ldr	r0, [r4, #64]	; 0x40
 800271a:	6803      	ldr	r3, [r0, #0]
 800271c:	21d5      	movs	r1, #213	; 0xd5
 800271e:	695b      	ldr	r3, [r3, #20]
 8002720:	4798      	blx	r3
 8002722:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002724:	6803      	ldr	r3, [r0, #0]
 8002726:	2101      	movs	r1, #1
 8002728:	699b      	ldr	r3, [r3, #24]
 800272a:	4798      	blx	r3
 800272c:	0200      	lsls	r0, r0, #8
 800272e:	b207      	sxth	r7, r0
 8002730:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002732:	6803      	ldr	r3, [r0, #0]
 8002734:	2101      	movs	r1, #1
 8002736:	699b      	ldr	r3, [r3, #24]
 8002738:	4798      	blx	r3
 800273a:	4307      	orrs	r7, r0
 800273c:	6c20      	ldr	r0, [r4, #64]	; 0x40
 800273e:	6803      	ldr	r3, [r0, #0]
 8002740:	2101      	movs	r1, #1
 8002742:	699b      	ldr	r3, [r3, #24]
 8002744:	4798      	blx	r3
 8002746:	0200      	lsls	r0, r0, #8
 8002748:	b206      	sxth	r6, r0
 800274a:	6c20      	ldr	r0, [r4, #64]	; 0x40
 800274c:	6803      	ldr	r3, [r0, #0]
 800274e:	2101      	movs	r1, #1
 8002750:	699b      	ldr	r3, [r3, #24]
 8002752:	4798      	blx	r3
 8002754:	4306      	orrs	r6, r0
 8002756:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002758:	6803      	ldr	r3, [r0, #0]
 800275a:	2101      	movs	r1, #1
 800275c:	699b      	ldr	r3, [r3, #24]
 800275e:	4798      	blx	r3
 8002760:	0200      	lsls	r0, r0, #8
 8002762:	b205      	sxth	r5, r0
 8002764:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002766:	6803      	ldr	r3, [r0, #0]
 8002768:	2100      	movs	r1, #0
 800276a:	699b      	ldr	r3, [r3, #24]
 800276c:	4798      	blx	r3
 800276e:	4305      	orrs	r5, r0
 8002770:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002772:	6803      	ldr	r3, [r0, #0]
 8002774:	68db      	ldr	r3, [r3, #12]
 8002776:	b23f      	sxth	r7, r7
 8002778:	b236      	sxth	r6, r6
 800277a:	b22d      	sxth	r5, r5
 800277c:	4798      	blx	r3
 800277e:	f1b8 0f00 	cmp.w	r8, #0
 8002782:	d008      	beq.n	8002796 <_ZN3IMU4readEb+0xaa>
 8002784:	6aa3      	ldr	r3, [r4, #40]	; 0x28
 8002786:	443b      	add	r3, r7
 8002788:	62a3      	str	r3, [r4, #40]	; 0x28
 800278a:	6ae3      	ldr	r3, [r4, #44]	; 0x2c
 800278c:	4433      	add	r3, r6
 800278e:	62e3      	str	r3, [r4, #44]	; 0x2c
 8002790:	6b23      	ldr	r3, [r4, #48]	; 0x30
 8002792:	442b      	add	r3, r5
 8002794:	6323      	str	r3, [r4, #48]	; 0x30
 8002796:	6aa3      	ldr	r3, [r4, #40]	; 0x28
 8002798:	69e1      	ldr	r1, [r4, #28]
 800279a:	6b22      	ldr	r2, [r4, #48]	; 0x30
 800279c:	6ae0      	ldr	r0, [r4, #44]	; 0x2c
 800279e:	1afb      	subs	r3, r7, r3
 80027a0:	1aad      	subs	r5, r5, r2
 80027a2:	6123      	str	r3, [r4, #16]
 80027a4:	2219      	movs	r2, #25
 80027a6:	fb93 f3f2 	sdiv	r3, r3, r2
 80027aa:	eb01 0343 	add.w	r3, r1, r3, lsl #1
 80027ae:	61e3      	str	r3, [r4, #28]
 80027b0:	6a23      	ldr	r3, [r4, #32]
 80027b2:	61a5      	str	r5, [r4, #24]
 80027b4:	1a30      	subs	r0, r6, r0
 80027b6:	6160      	str	r0, [r4, #20]
 80027b8:	fb90 f0f2 	sdiv	r0, r0, r2
 80027bc:	eb03 0040 	add.w	r0, r3, r0, lsl #1
 80027c0:	6220      	str	r0, [r4, #32]
 80027c2:	6a63      	ldr	r3, [r4, #36]	; 0x24
 80027c4:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80027c6:	fb95 f5f2 	sdiv	r5, r5, r2
 80027ca:	eb03 0545 	add.w	r5, r3, r5, lsl #1
 80027ce:	6803      	ldr	r3, [r0, #0]
 80027d0:	6265      	str	r5, [r4, #36]	; 0x24
 80027d2:	689b      	ldr	r3, [r3, #8]
 80027d4:	4798      	blx	r3
 80027d6:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80027d8:	6803      	ldr	r3, [r0, #0]
 80027da:	21d4      	movs	r1, #212	; 0xd4
 80027dc:	695b      	ldr	r3, [r3, #20]
 80027de:	4798      	blx	r3
 80027e0:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80027e2:	6803      	ldr	r3, [r0, #0]
 80027e4:	2129      	movs	r1, #41	; 0x29
 80027e6:	695b      	ldr	r3, [r3, #20]
 80027e8:	4798      	blx	r3
 80027ea:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80027ec:	6803      	ldr	r3, [r0, #0]
 80027ee:	689b      	ldr	r3, [r3, #8]
 80027f0:	4798      	blx	r3
 80027f2:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80027f4:	6803      	ldr	r3, [r0, #0]
 80027f6:	21d5      	movs	r1, #213	; 0xd5
 80027f8:	695b      	ldr	r3, [r3, #20]
 80027fa:	4798      	blx	r3
 80027fc:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80027fe:	6803      	ldr	r3, [r0, #0]
 8002800:	2101      	movs	r1, #1
 8002802:	699b      	ldr	r3, [r3, #24]
 8002804:	4798      	blx	r3
 8002806:	0200      	lsls	r0, r0, #8
 8002808:	b207      	sxth	r7, r0
 800280a:	6c20      	ldr	r0, [r4, #64]	; 0x40
 800280c:	6803      	ldr	r3, [r0, #0]
 800280e:	2101      	movs	r1, #1
 8002810:	699b      	ldr	r3, [r3, #24]
 8002812:	4798      	blx	r3
 8002814:	4307      	orrs	r7, r0
 8002816:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002818:	6803      	ldr	r3, [r0, #0]
 800281a:	2101      	movs	r1, #1
 800281c:	699b      	ldr	r3, [r3, #24]
 800281e:	4798      	blx	r3
 8002820:	0200      	lsls	r0, r0, #8
 8002822:	b206      	sxth	r6, r0
 8002824:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002826:	6803      	ldr	r3, [r0, #0]
 8002828:	2101      	movs	r1, #1
 800282a:	699b      	ldr	r3, [r3, #24]
 800282c:	4798      	blx	r3
 800282e:	4306      	orrs	r6, r0
 8002830:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002832:	6803      	ldr	r3, [r0, #0]
 8002834:	2101      	movs	r1, #1
 8002836:	699b      	ldr	r3, [r3, #24]
 8002838:	4798      	blx	r3
 800283a:	0200      	lsls	r0, r0, #8
 800283c:	b205      	sxth	r5, r0
 800283e:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002840:	6803      	ldr	r3, [r0, #0]
 8002842:	2100      	movs	r1, #0
 8002844:	699b      	ldr	r3, [r3, #24]
 8002846:	4798      	blx	r3
 8002848:	4305      	orrs	r5, r0
 800284a:	6c20      	ldr	r0, [r4, #64]	; 0x40
 800284c:	6803      	ldr	r3, [r0, #0]
 800284e:	68db      	ldr	r3, [r3, #12]
 8002850:	4798      	blx	r3
 8002852:	b23f      	sxth	r7, r7
 8002854:	b236      	sxth	r6, r6
 8002856:	b22d      	sxth	r5, r5
 8002858:	2301      	movs	r3, #1
 800285a:	e9c4 7601 	strd	r7, r6, [r4, #4]
 800285e:	60e5      	str	r5, [r4, #12]
 8002860:	f884 303c 	strb.w	r3, [r4, #60]	; 0x3c
 8002864:	e8bd 81f0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, pc}

08002868 <_ZN3IMU4mainEv>:
 8002868:	2100      	movs	r1, #0
 800286a:	f7ff bf3f 	b.w	80026ec <_ZN3IMU4readEb>

0800286e <_ZN3IMU7presentEv>:
 800286e:	6b40      	ldr	r0, [r0, #52]	; 0x34
 8002870:	3000      	adds	r0, #0
 8002872:	bf18      	it	ne
 8002874:	2001      	movne	r0, #1
 8002876:	4770      	bx	lr

08002878 <_ZN3IMU11delay_loopsEm>:
 8002878:	f111 31ff 	adds.w	r1, r1, #4294967295	; 0xffffffff
 800287c:	d301      	bcc.n	8002882 <_ZN3IMU11delay_loopsEm+0xa>
 800287e:	bf00      	nop
 8002880:	e7fa      	b.n	8002878 <_ZN3IMU11delay_loopsEm>
 8002882:	4770      	bx	lr

08002884 <_ZN3IMU4initEP13I2C_Interface>:
 8002884:	b538      	push	{r3, r4, r5, lr}
 8002886:	4604      	mov	r4, r0
 8002888:	2210      	movs	r2, #16
 800288a:	4608      	mov	r0, r1
 800288c:	6421      	str	r1, [r4, #64]	; 0x40
 800288e:	23a8      	movs	r3, #168	; 0xa8
 8002890:	21d4      	movs	r1, #212	; 0xd4
 8002892:	f7ff f984 	bl	8001b9e <_ZN13I2C_Interface9write_regEhhh>
 8002896:	2300      	movs	r3, #0
 8002898:	e9c4 3304 	strd	r3, r3, [r4, #16]
 800289c:	61a3      	str	r3, [r4, #24]
 800289e:	e9c4 330a 	strd	r3, r3, [r4, #40]	; 0x28
 80028a2:	6323      	str	r3, [r4, #48]	; 0x30
 80028a4:	e9c4 3307 	strd	r3, r3, [r4, #28]
 80028a8:	6263      	str	r3, [r4, #36]	; 0x24
 80028aa:	f242 7110 	movw	r1, #10000	; 0x2710
 80028ae:	4620      	mov	r0, r4
 80028b0:	f7ff ffe2 	bl	8002878 <_ZN3IMU11delay_loopsEm>
 80028b4:	220f      	movs	r2, #15
 80028b6:	6363      	str	r3, [r4, #52]	; 0x34
 80028b8:	21d4      	movs	r1, #212	; 0xd4
 80028ba:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80028bc:	f7ff f98d 	bl	8001bda <_ZN13I2C_Interface8read_regEhh>
 80028c0:	2868      	cmp	r0, #104	; 0x68
 80028c2:	bf04      	itt	eq
 80028c4:	2301      	moveq	r3, #1
 80028c6:	6363      	streq	r3, [r4, #52]	; 0x34
 80028c8:	2210      	movs	r2, #16
 80028ca:	23a8      	movs	r3, #168	; 0xa8
 80028cc:	21d4      	movs	r1, #212	; 0xd4
 80028ce:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80028d0:	f7ff f965 	bl	8001b9e <_ZN13I2C_Interface9write_regEhhh>
 80028d4:	2338      	movs	r3, #56	; 0x38
 80028d6:	221e      	movs	r2, #30
 80028d8:	21d4      	movs	r1, #212	; 0xd4
 80028da:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80028dc:	f7ff f95f 	bl	8001b9e <_ZN13I2C_Interface9write_regEhhh>
 80028e0:	2300      	movs	r3, #0
 80028e2:	222e      	movs	r2, #46	; 0x2e
 80028e4:	21d4      	movs	r1, #212	; 0xd4
 80028e6:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80028e8:	f7ff f959 	bl	8001b9e <_ZN13I2C_Interface9write_regEhhh>
 80028ec:	2300      	movs	r3, #0
 80028ee:	2212      	movs	r2, #18
 80028f0:	21d4      	movs	r1, #212	; 0xd4
 80028f2:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80028f4:	f7ff f953 	bl	8001b9e <_ZN13I2C_Interface9write_regEhhh>
 80028f8:	2360      	movs	r3, #96	; 0x60
 80028fa:	2220      	movs	r2, #32
 80028fc:	21d4      	movs	r1, #212	; 0xd4
 80028fe:	6c20      	ldr	r0, [r4, #64]	; 0x40
 8002900:	f7ff f94d 	bl	8001b9e <_ZN13I2C_Interface9write_regEhhh>
 8002904:	2338      	movs	r3, #56	; 0x38
 8002906:	221f      	movs	r2, #31
 8002908:	21d4      	movs	r1, #212	; 0xd4
 800290a:	6c20      	ldr	r0, [r4, #64]	; 0x40
 800290c:	f7ff f947 	bl	8001b9e <_ZN13I2C_Interface9write_regEhhh>
 8002910:	f242 7110 	movw	r1, #10000	; 0x2710
 8002914:	4620      	mov	r0, r4
 8002916:	f7ff ffaf 	bl	8002878 <_ZN3IMU11delay_loopsEm>
 800291a:	2100      	movs	r1, #0
 800291c:	f7ff fee6 	bl	80026ec <_ZN3IMU4readEb>
 8002920:	2300      	movs	r3, #0
 8002922:	63a3      	str	r3, [r4, #56]	; 0x38
 8002924:	f44f 757a 	mov.w	r5, #1000	; 0x3e8
 8002928:	2101      	movs	r1, #1
 800292a:	4620      	mov	r0, r4
 800292c:	f7ff fede 	bl	80026ec <_ZN3IMU4readEb>
 8002930:	2164      	movs	r1, #100	; 0x64
 8002932:	4620      	mov	r0, r4
 8002934:	f7ff ffa0 	bl	8002878 <_ZN3IMU11delay_loopsEm>
 8002938:	3d01      	subs	r5, #1
 800293a:	d1f5      	bne.n	8002928 <_ZN3IMU4initEP13I2C_Interface+0xa4>
 800293c:	f44f 727a 	mov.w	r2, #1000	; 0x3e8
 8002940:	6aa3      	ldr	r3, [r4, #40]	; 0x28
 8002942:	6265      	str	r5, [r4, #36]	; 0x24
 8002944:	fb93 f3f2 	sdiv	r3, r3, r2
 8002948:	e9c4 5507 	strd	r5, r5, [r4, #28]
 800294c:	62a3      	str	r3, [r4, #40]	; 0x28
 800294e:	e9c4 5501 	strd	r5, r5, [r4, #4]
 8002952:	6ae3      	ldr	r3, [r4, #44]	; 0x2c
 8002954:	60e5      	str	r5, [r4, #12]
 8002956:	fb93 f3f2 	sdiv	r3, r3, r2
 800295a:	4621      	mov	r1, r4
 800295c:	62e3      	str	r3, [r4, #44]	; 0x2c
 800295e:	4806      	ldr	r0, [pc, #24]	; (8002978 <_ZN3IMU4initEP13I2C_Interface+0xf4>)
 8002960:	6b23      	ldr	r3, [r4, #48]	; 0x30
 8002962:	fb93 f3f2 	sdiv	r3, r3, r2
 8002966:	220a      	movs	r2, #10
 8002968:	6323      	str	r3, [r4, #48]	; 0x30
 800296a:	462b      	mov	r3, r5
 800296c:	f7ff faf6 	bl	8001f5c <_ZN5Timer8add_taskEP6Threadjb>
 8002970:	f884 503c 	strb.w	r5, [r4, #60]	; 0x3c
 8002974:	bd38      	pop	{r3, r4, r5, pc}
 8002976:	bf00      	nop
 8002978:	20000218 	andcs	r0, r0, r8, lsl r2

0800297c <_ZN5UsartC1Ev>:
 800297c:	4770      	bx	lr
 800297e:	0000      	movs	r0, r0

08002980 <_ZN5Usart4initEv>:
 8002980:	4a21      	ldr	r2, [pc, #132]	; (8002a08 <_ZN5Usart4initEv+0x88>)
 8002982:	4822      	ldr	r0, [pc, #136]	; (8002a0c <_ZN5Usart4initEv+0x8c>)
 8002984:	6953      	ldr	r3, [r2, #20]
 8002986:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 800298a:	6153      	str	r3, [r2, #20]
 800298c:	f04f 4390 	mov.w	r3, #1207959552	; 0x48000000
 8002990:	6899      	ldr	r1, [r3, #8]
 8002992:	f421 2140 	bic.w	r1, r1, #786432	; 0xc0000
 8002996:	6099      	str	r1, [r3, #8]
 8002998:	6899      	ldr	r1, [r3, #8]
 800299a:	f441 2140 	orr.w	r1, r1, #786432	; 0xc0000
 800299e:	6099      	str	r1, [r3, #8]
 80029a0:	6819      	ldr	r1, [r3, #0]
 80029a2:	f421 2140 	bic.w	r1, r1, #786432	; 0xc0000
 80029a6:	6019      	str	r1, [r3, #0]
 80029a8:	6819      	ldr	r1, [r3, #0]
 80029aa:	f441 2100 	orr.w	r1, r1, #524288	; 0x80000
 80029ae:	6019      	str	r1, [r3, #0]
 80029b0:	6951      	ldr	r1, [r2, #20]
 80029b2:	f441 017f 	orr.w	r1, r1, #16711680	; 0xff0000
 80029b6:	6151      	str	r1, [r2, #20]
 80029b8:	6899      	ldr	r1, [r3, #8]
 80029ba:	f421 1140 	bic.w	r1, r1, #3145728	; 0x300000
 80029be:	6099      	str	r1, [r3, #8]
 80029c0:	6899      	ldr	r1, [r3, #8]
 80029c2:	f441 1140 	orr.w	r1, r1, #3145728	; 0x300000
 80029c6:	6099      	str	r1, [r3, #8]
 80029c8:	6819      	ldr	r1, [r3, #0]
 80029ca:	f421 1140 	bic.w	r1, r1, #3145728	; 0x300000
 80029ce:	6019      	str	r1, [r3, #0]
 80029d0:	6819      	ldr	r1, [r3, #0]
 80029d2:	f441 1100 	orr.w	r1, r1, #2097152	; 0x200000
 80029d6:	6019      	str	r1, [r3, #0]
 80029d8:	6a59      	ldr	r1, [r3, #36]	; 0x24
 80029da:	f021 01f0 	bic.w	r1, r1, #240	; 0xf0
 80029de:	6259      	str	r1, [r3, #36]	; 0x24
 80029e0:	6a59      	ldr	r1, [r3, #36]	; 0x24
 80029e2:	f041 0170 	orr.w	r1, r1, #112	; 0x70
 80029e6:	6259      	str	r1, [r3, #36]	; 0x24
 80029e8:	6a59      	ldr	r1, [r3, #36]	; 0x24
 80029ea:	f421 6170 	bic.w	r1, r1, #3840	; 0xf00
 80029ee:	6259      	str	r1, [r3, #36]	; 0x24
 80029f0:	6a59      	ldr	r1, [r3, #36]	; 0x24
 80029f2:	f441 61e0 	orr.w	r1, r1, #1792	; 0x700
 80029f6:	6259      	str	r1, [r3, #36]	; 0x24
 80029f8:	6993      	ldr	r3, [r2, #24]
 80029fa:	f443 4380 	orr.w	r3, r3, #16384	; 0x4000
 80029fe:	6193      	str	r3, [r2, #24]
 8002a00:	f44f 31e1 	mov.w	r1, #115200	; 0x1c200
 8002a04:	f000 bab6 	b.w	8002f74 <_Z10usart_initP13USART_TypeDefm>
 8002a08:	40021000 	andmi	r1, r2, r0
 8002a0c:	40013800 	andmi	r3, r1, r0, lsl #16

08002a10 <_ZN5UsartD1Ev>:
 8002a10:	4770      	bx	lr
 8002a12:	0000      	movs	r0, r0

08002a14 <_ZN5Usart8put_charEc>:
 8002a14:	4b04      	ldr	r3, [pc, #16]	; (8002a28 <_ZN5Usart8put_charEc+0x14>)
 8002a16:	69da      	ldr	r2, [r3, #28]
 8002a18:	0612      	lsls	r2, r2, #24
 8002a1a:	d401      	bmi.n	8002a20 <_ZN5Usart8put_charEc+0xc>
 8002a1c:	bf00      	nop
 8002a1e:	e7fa      	b.n	8002a16 <_ZN5Usart8put_charEc+0x2>
 8002a20:	b289      	uxth	r1, r1
 8002a22:	8519      	strh	r1, [r3, #40]	; 0x28
 8002a24:	4770      	bx	lr
 8002a26:	bf00      	nop
 8002a28:	40013800 	andmi	r3, r1, r0, lsl #16

08002a2c <_ZN7EncoderC1Ev>:
 8002a2c:	4a2f      	ldr	r2, [pc, #188]	; (8002aec <_ZN7EncoderC1Ev+0xc0>)
 8002a2e:	6953      	ldr	r3, [r2, #20]
 8002a30:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 8002a34:	b510      	push	{r4, lr}
 8002a36:	6153      	str	r3, [r2, #20]
 8002a38:	4b2d      	ldr	r3, [pc, #180]	; (8002af0 <_ZN7EncoderC1Ev+0xc4>)
 8002a3a:	6003      	str	r3, [r0, #0]
 8002a3c:	689c      	ldr	r4, [r3, #8]
 8002a3e:	f424 5440 	bic.w	r4, r4, #12288	; 0x3000
 8002a42:	609c      	str	r4, [r3, #8]
 8002a44:	689c      	ldr	r4, [r3, #8]
 8002a46:	f444 5440 	orr.w	r4, r4, #12288	; 0x3000
 8002a4a:	609c      	str	r4, [r3, #8]
 8002a4c:	681c      	ldr	r4, [r3, #0]
 8002a4e:	f424 5440 	bic.w	r4, r4, #12288	; 0x3000
 8002a52:	601c      	str	r4, [r3, #0]
 8002a54:	681c      	ldr	r4, [r3, #0]
 8002a56:	601c      	str	r4, [r3, #0]
 8002a58:	68dc      	ldr	r4, [r3, #12]
 8002a5a:	f444 5480 	orr.w	r4, r4, #4096	; 0x1000
 8002a5e:	60dc      	str	r4, [r3, #12]
 8002a60:	6954      	ldr	r4, [r2, #20]
 8002a62:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 8002a66:	6154      	str	r4, [r2, #20]
 8002a68:	689c      	ldr	r4, [r3, #8]
 8002a6a:	6043      	str	r3, [r0, #4]
 8002a6c:	f424 4440 	bic.w	r4, r4, #49152	; 0xc000
 8002a70:	609c      	str	r4, [r3, #8]
 8002a72:	689c      	ldr	r4, [r3, #8]
 8002a74:	f444 4440 	orr.w	r4, r4, #49152	; 0xc000
 8002a78:	609c      	str	r4, [r3, #8]
 8002a7a:	681c      	ldr	r4, [r3, #0]
 8002a7c:	f424 4440 	bic.w	r4, r4, #49152	; 0xc000
 8002a80:	601c      	str	r4, [r3, #0]
 8002a82:	681c      	ldr	r4, [r3, #0]
 8002a84:	601c      	str	r4, [r3, #0]
 8002a86:	68dc      	ldr	r4, [r3, #12]
 8002a88:	f444 4480 	orr.w	r4, r4, #16384	; 0x4000
 8002a8c:	60dc      	str	r4, [r3, #12]
 8002a8e:	6954      	ldr	r4, [r2, #20]
 8002a90:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 8002a94:	6154      	str	r4, [r2, #20]
 8002a96:	689c      	ldr	r4, [r3, #8]
 8002a98:	6083      	str	r3, [r0, #8]
 8002a9a:	f024 7440 	bic.w	r4, r4, #50331648	; 0x3000000
 8002a9e:	609c      	str	r4, [r3, #8]
 8002aa0:	689c      	ldr	r4, [r3, #8]
 8002aa2:	f044 7440 	orr.w	r4, r4, #50331648	; 0x3000000
 8002aa6:	609c      	str	r4, [r3, #8]
 8002aa8:	681c      	ldr	r4, [r3, #0]
 8002aaa:	f024 7440 	bic.w	r4, r4, #50331648	; 0x3000000
 8002aae:	601c      	str	r4, [r3, #0]
 8002ab0:	681c      	ldr	r4, [r3, #0]
 8002ab2:	601c      	str	r4, [r3, #0]
 8002ab4:	68dc      	ldr	r4, [r3, #12]
 8002ab6:	f044 7480 	orr.w	r4, r4, #16777216	; 0x1000000
 8002aba:	60dc      	str	r4, [r3, #12]
 8002abc:	6954      	ldr	r4, [r2, #20]
 8002abe:	f444 047f 	orr.w	r4, r4, #16711680	; 0xff0000
 8002ac2:	6154      	str	r4, [r2, #20]
 8002ac4:	689a      	ldr	r2, [r3, #8]
 8002ac6:	60c3      	str	r3, [r0, #12]
 8002ac8:	f422 0240 	bic.w	r2, r2, #12582912	; 0xc00000
 8002acc:	609a      	str	r2, [r3, #8]
 8002ace:	689a      	ldr	r2, [r3, #8]
 8002ad0:	f442 0240 	orr.w	r2, r2, #12582912	; 0xc00000
 8002ad4:	609a      	str	r2, [r3, #8]
 8002ad6:	681a      	ldr	r2, [r3, #0]
 8002ad8:	f422 0240 	bic.w	r2, r2, #12582912	; 0xc00000
 8002adc:	601a      	str	r2, [r3, #0]
 8002ade:	681a      	ldr	r2, [r3, #0]
 8002ae0:	601a      	str	r2, [r3, #0]
 8002ae2:	68da      	ldr	r2, [r3, #12]
 8002ae4:	f442 0280 	orr.w	r2, r2, #4194304	; 0x400000
 8002ae8:	60da      	str	r2, [r3, #12]
 8002aea:	bd10      	pop	{r4, pc}
 8002aec:	40021000 	andmi	r1, r2, r0
 8002af0:	48000800 	stmdami	r0, {fp}

08002af4 <_ZN7EncoderD1Ev>:
 8002af4:	4770      	bx	lr
 8002af6:	0000      	movs	r0, r0

08002af8 <_ZN7Encoder4initEv>:
 8002af8:	4b16      	ldr	r3, [pc, #88]	; (8002b54 <_ZN7Encoder4initEv+0x5c>)
 8002afa:	4a17      	ldr	r2, [pc, #92]	; (8002b58 <_ZN7Encoder4initEv+0x60>)
 8002afc:	b510      	push	{r4, lr}
 8002afe:	2400      	movs	r4, #0
 8002b00:	601c      	str	r4, [r3, #0]
 8002b02:	4b16      	ldr	r3, [pc, #88]	; (8002b5c <_ZN7Encoder4initEv+0x64>)
 8002b04:	601c      	str	r4, [r3, #0]
 8002b06:	6993      	ldr	r3, [r2, #24]
 8002b08:	f043 0301 	orr.w	r3, r3, #1
 8002b0c:	6193      	str	r3, [r2, #24]
 8002b0e:	2106      	movs	r1, #6
 8002b10:	2002      	movs	r0, #2
 8002b12:	f000 fa4d 	bl	8002fb0 <_Z16exti_line_confighh>
 8002b16:	210c      	movs	r1, #12
 8002b18:	2002      	movs	r0, #2
 8002b1a:	f000 fa49 	bl	8002fb0 <_Z16exti_line_confighh>
 8002b1e:	2108      	movs	r1, #8
 8002b20:	2006      	movs	r0, #6
 8002b22:	f000 fa5a 	bl	8002fda <_Z14configure_extimm>
 8002b26:	2108      	movs	r1, #8
 8002b28:	200c      	movs	r0, #12
 8002b2a:	f000 fa56 	bl	8002fda <_Z14configure_extimm>
 8002b2e:	4622      	mov	r2, r4
 8002b30:	4621      	mov	r1, r4
 8002b32:	2017      	movs	r0, #23
 8002b34:	f000 f9a6 	bl	8002e84 <_Z9nvic_initmmm>
 8002b38:	4622      	mov	r2, r4
 8002b3a:	4621      	mov	r1, r4
 8002b3c:	2028      	movs	r0, #40	; 0x28
 8002b3e:	f000 f9a1 	bl	8002e84 <_Z9nvic_initmmm>
 8002b42:	2006      	movs	r0, #6
 8002b44:	f000 fa28 	bl	8002f98 <_Z22exti_clear_pending_bitm>
 8002b48:	200c      	movs	r0, #12
 8002b4a:	e8bd 4010 	ldmia.w	sp!, {r4, lr}
 8002b4e:	f000 ba23 	b.w	8002f98 <_Z22exti_clear_pending_bitm>
 8002b52:	bf00      	nop
 8002b54:	20000368 	andcs	r0, r0, r8, ror #6
 8002b58:	40021000 	andmi	r1, r2, r0
 8002b5c:	2000036c 	andcs	r0, r0, ip, ror #6

08002b60 <_ZN7Encoder18get_left_no_atomicEv>:
 8002b60:	4b03      	ldr	r3, [pc, #12]	; (8002b70 <_ZN7Encoder18get_left_no_atomicEv+0x10>)
 8002b62:	6818      	ldr	r0, [r3, #0]
 8002b64:	2358      	movs	r3, #88	; 0x58
 8002b66:	4343      	muls	r3, r0
 8002b68:	205a      	movs	r0, #90	; 0x5a
 8002b6a:	fb93 f0f0 	sdiv	r0, r3, r0
 8002b6e:	4770      	bx	lr
 8002b70:	20000368 	andcs	r0, r0, r8, ror #6

08002b74 <_ZN7Encoder19get_right_no_atomicEv>:
 8002b74:	4b03      	ldr	r3, [pc, #12]	; (8002b84 <_ZN7Encoder19get_right_no_atomicEv+0x10>)
 8002b76:	6818      	ldr	r0, [r3, #0]
 8002b78:	2358      	movs	r3, #88	; 0x58
 8002b7a:	4343      	muls	r3, r0
 8002b7c:	205a      	movs	r0, #90	; 0x5a
 8002b7e:	fb93 f0f0 	sdiv	r0, r3, r0
 8002b82:	4770      	bx	lr
 8002b84:	2000036c 	andcs	r0, r0, ip, ror #6

08002b88 <EXTI9_5_IRQHandler>:
 8002b88:	4b09      	ldr	r3, [pc, #36]	; (8002bb0 <EXTI9_5_IRQHandler+0x28>)
 8002b8a:	8a1b      	ldrh	r3, [r3, #16]
 8002b8c:	f013 03c0 	ands.w	r3, r3, #192	; 0xc0
 8002b90:	d00b      	beq.n	8002baa <EXTI9_5_IRQHandler+0x22>
 8002b92:	2bc0      	cmp	r3, #192	; 0xc0
 8002b94:	bf0c      	ite	eq
 8002b96:	2101      	moveq	r1, #1
 8002b98:	f04f 31ff 	movne.w	r1, #4294967295	; 0xffffffff
 8002b9c:	4a05      	ldr	r2, [pc, #20]	; (8002bb4 <EXTI9_5_IRQHandler+0x2c>)
 8002b9e:	6813      	ldr	r3, [r2, #0]
 8002ba0:	2006      	movs	r0, #6
 8002ba2:	440b      	add	r3, r1
 8002ba4:	6013      	str	r3, [r2, #0]
 8002ba6:	f000 b9f7 	b.w	8002f98 <_Z22exti_clear_pending_bitm>
 8002baa:	2101      	movs	r1, #1
 8002bac:	e7f6      	b.n	8002b9c <EXTI9_5_IRQHandler+0x14>
 8002bae:	bf00      	nop
 8002bb0:	48000800 	stmdami	r0, {fp}
 8002bb4:	20000368 	andcs	r0, r0, r8, ror #6

08002bb8 <EXTI15_10_IRQHandler>:
 8002bb8:	4b0a      	ldr	r3, [pc, #40]	; (8002be4 <EXTI15_10_IRQHandler+0x2c>)
 8002bba:	8a1b      	ldrh	r3, [r3, #16]
 8002bbc:	f413 53c0 	ands.w	r3, r3, #6144	; 0x1800
 8002bc0:	d00c      	beq.n	8002bdc <EXTI15_10_IRQHandler+0x24>
 8002bc2:	f5b3 5fc0 	cmp.w	r3, #6144	; 0x1800
 8002bc6:	bf0c      	ite	eq
 8002bc8:	f04f 31ff 	moveq.w	r1, #4294967295	; 0xffffffff
 8002bcc:	2101      	movne	r1, #1
 8002bce:	4a06      	ldr	r2, [pc, #24]	; (8002be8 <EXTI15_10_IRQHandler+0x30>)
 8002bd0:	6813      	ldr	r3, [r2, #0]
 8002bd2:	200c      	movs	r0, #12
 8002bd4:	440b      	add	r3, r1
 8002bd6:	6013      	str	r3, [r2, #0]
 8002bd8:	f000 b9de 	b.w	8002f98 <_Z22exti_clear_pending_bitm>
 8002bdc:	f04f 31ff 	mov.w	r1, #4294967295	; 0xffffffff
 8002be0:	e7f5      	b.n	8002bce <EXTI15_10_IRQHandler+0x16>
 8002be2:	bf00      	nop
 8002be4:	48000800 	stmdami	r0, {fp}
 8002be8:	2000036c 	andcs	r0, r0, ip, ror #6

08002bec <_ZN5MotorC1Ev>:
 8002bec:	494c      	ldr	r1, [pc, #304]	; (8002d20 <_ZN5MotorC1Ev+0x134>)
 8002bee:	694b      	ldr	r3, [r1, #20]
 8002bf0:	f443 037f 	orr.w	r3, r3, #16711680	; 0xff0000
 8002bf4:	b530      	push	{r4, r5, lr}
 8002bf6:	614b      	str	r3, [r1, #20]
 8002bf8:	4b4a      	ldr	r3, [pc, #296]	; (8002d24 <_ZN5MotorC1Ev+0x138>)
 8002bfa:	6003      	str	r3, [r0, #0]
 8002bfc:	689a      	ldr	r2, [r3, #8]
 8002bfe:	f422 7240 	bic.w	r2, r2, #768	; 0x300
 8002c02:	609a      	str	r2, [r3, #8]
 8002c04:	689a      	ldr	r2, [r3, #8]
 8002c06:	f442 7240 	orr.w	r2, r2, #768	; 0x300
 8002c0a:	609a      	str	r2, [r3, #8]
 8002c0c:	889a      	ldrh	r2, [r3, #4]
 8002c0e:	f022 0210 	bic.w	r2, r2, #16
 8002c12:	0412      	lsls	r2, r2, #16
 8002c14:	0c12      	lsrs	r2, r2, #16
 8002c16:	809a      	strh	r2, [r3, #4]
 8002c18:	889a      	ldrh	r2, [r3, #4]
 8002c1a:	b292      	uxth	r2, r2
 8002c1c:	809a      	strh	r2, [r3, #4]
 8002c1e:	681a      	ldr	r2, [r3, #0]
 8002c20:	f422 7240 	bic.w	r2, r2, #768	; 0x300
 8002c24:	601a      	str	r2, [r3, #0]
 8002c26:	681a      	ldr	r2, [r3, #0]
 8002c28:	f442 7280 	orr.w	r2, r2, #256	; 0x100
 8002c2c:	601a      	str	r2, [r3, #0]
 8002c2e:	694a      	ldr	r2, [r1, #20]
 8002c30:	f442 027f 	orr.w	r2, r2, #16711680	; 0xff0000
 8002c34:	614a      	str	r2, [r1, #20]
 8002c36:	689a      	ldr	r2, [r3, #8]
 8002c38:	6043      	str	r3, [r0, #4]
 8002c3a:	f422 6240 	bic.w	r2, r2, #3072	; 0xc00
 8002c3e:	609a      	str	r2, [r3, #8]
 8002c40:	689a      	ldr	r2, [r3, #8]
 8002c42:	f442 6240 	orr.w	r2, r2, #3072	; 0xc00
 8002c46:	609a      	str	r2, [r3, #8]
 8002c48:	889a      	ldrh	r2, [r3, #4]
 8002c4a:	f022 0220 	bic.w	r2, r2, #32
 8002c4e:	0412      	lsls	r2, r2, #16
 8002c50:	0c12      	lsrs	r2, r2, #16
 8002c52:	809a      	strh	r2, [r3, #4]
 8002c54:	889a      	ldrh	r2, [r3, #4]
 8002c56:	b292      	uxth	r2, r2
 8002c58:	809a      	strh	r2, [r3, #4]
 8002c5a:	681a      	ldr	r2, [r3, #0]
 8002c5c:	f422 6240 	bic.w	r2, r2, #3072	; 0xc00
 8002c60:	601a      	str	r2, [r3, #0]
 8002c62:	681a      	ldr	r2, [r3, #0]
 8002c64:	f442 6280 	orr.w	r2, r2, #1024	; 0x400
 8002c68:	601a      	str	r2, [r3, #0]
 8002c6a:	694a      	ldr	r2, [r1, #20]
 8002c6c:	f442 027f 	orr.w	r2, r2, #16711680	; 0xff0000
 8002c70:	614a      	str	r2, [r1, #20]
 8002c72:	f04f 4290 	mov.w	r2, #1207959552	; 0x48000000
 8002c76:	6082      	str	r2, [r0, #8]
 8002c78:	6895      	ldr	r5, [r2, #8]
 8002c7a:	f025 4540 	bic.w	r5, r5, #3221225472	; 0xc0000000
 8002c7e:	6095      	str	r5, [r2, #8]
 8002c80:	6895      	ldr	r5, [r2, #8]
 8002c82:	f045 4540 	orr.w	r5, r5, #3221225472	; 0xc0000000
 8002c86:	6095      	str	r5, [r2, #8]
 8002c88:	8895      	ldrh	r5, [r2, #4]
 8002c8a:	f3c5 050e 	ubfx	r5, r5, #0, #15
 8002c8e:	8095      	strh	r5, [r2, #4]
 8002c90:	8895      	ldrh	r5, [r2, #4]
 8002c92:	b2ad      	uxth	r5, r5
 8002c94:	8095      	strh	r5, [r2, #4]
 8002c96:	6815      	ldr	r5, [r2, #0]
 8002c98:	f025 4540 	bic.w	r5, r5, #3221225472	; 0xc0000000
 8002c9c:	6015      	str	r5, [r2, #0]
 8002c9e:	6815      	ldr	r5, [r2, #0]
 8002ca0:	f045 4580 	orr.w	r5, r5, #1073741824	; 0x40000000
 8002ca4:	6015      	str	r5, [r2, #0]
 8002ca6:	694a      	ldr	r2, [r1, #20]
 8002ca8:	f442 027f 	orr.w	r2, r2, #16711680	; 0xff0000
 8002cac:	614a      	str	r2, [r1, #20]
 8002cae:	689a      	ldr	r2, [r3, #8]
 8002cb0:	60c3      	str	r3, [r0, #12]
 8002cb2:	f022 6240 	bic.w	r2, r2, #201326592	; 0xc000000
 8002cb6:	609a      	str	r2, [r3, #8]
 8002cb8:	689a      	ldr	r2, [r3, #8]
 8002cba:	f042 6240 	orr.w	r2, r2, #201326592	; 0xc000000
 8002cbe:	609a      	str	r2, [r3, #8]
 8002cc0:	889a      	ldrh	r2, [r3, #4]
 8002cc2:	f422 5200 	bic.w	r2, r2, #8192	; 0x2000
 8002cc6:	0412      	lsls	r2, r2, #16
 8002cc8:	0c12      	lsrs	r2, r2, #16
 8002cca:	809a      	strh	r2, [r3, #4]
 8002ccc:	889a      	ldrh	r2, [r3, #4]
 8002cce:	b292      	uxth	r2, r2
 8002cd0:	809a      	strh	r2, [r3, #4]
 8002cd2:	681a      	ldr	r2, [r3, #0]
 8002cd4:	f022 6240 	bic.w	r2, r2, #201326592	; 0xc000000
 8002cd8:	601a      	str	r2, [r3, #0]
 8002cda:	681a      	ldr	r2, [r3, #0]
 8002cdc:	f042 6280 	orr.w	r2, r2, #67108864	; 0x4000000
 8002ce0:	601a      	str	r2, [r3, #0]
 8002ce2:	694a      	ldr	r2, [r1, #20]
 8002ce4:	f442 027f 	orr.w	r2, r2, #16711680	; 0xff0000
 8002ce8:	614a      	str	r2, [r1, #20]
 8002cea:	689a      	ldr	r2, [r3, #8]
 8002cec:	6103      	str	r3, [r0, #16]
 8002cee:	f022 5240 	bic.w	r2, r2, #805306368	; 0x30000000
 8002cf2:	609a      	str	r2, [r3, #8]
 8002cf4:	689a      	ldr	r2, [r3, #8]
 8002cf6:	f042 5240 	orr.w	r2, r2, #805306368	; 0x30000000
 8002cfa:	609a      	str	r2, [r3, #8]
 8002cfc:	889a      	ldrh	r2, [r3, #4]
 8002cfe:	f422 4280 	bic.w	r2, r2, #16384	; 0x4000
 8002d02:	0412      	lsls	r2, r2, #16
 8002d04:	0c12      	lsrs	r2, r2, #16
 8002d06:	809a      	strh	r2, [r3, #4]
 8002d08:	889a      	ldrh	r2, [r3, #4]
 8002d0a:	b292      	uxth	r2, r2
 8002d0c:	809a      	strh	r2, [r3, #4]
 8002d0e:	681a      	ldr	r2, [r3, #0]
 8002d10:	f022 5240 	bic.w	r2, r2, #805306368	; 0x30000000
 8002d14:	601a      	str	r2, [r3, #0]
 8002d16:	681a      	ldr	r2, [r3, #0]
 8002d18:	f042 5280 	orr.w	r2, r2, #268435456	; 0x10000000
 8002d1c:	601a      	str	r2, [r3, #0]
 8002d1e:	bd30      	pop	{r4, r5, pc}
 8002d20:	40021000 	andmi	r1, r2, r0
 8002d24:	48000400 	stmdami	r0, {sl}

08002d28 <_ZN5MotorD1Ev>:
 8002d28:	4770      	bx	lr
 8002d2a:	0000      	movs	r0, r0

08002d2c <_ZN5Motor8run_leftEi>:
 8002d2c:	6883      	ldr	r3, [r0, #8]
 8002d2e:	2900      	cmp	r1, #0
 8002d30:	bfb7      	itett	lt
 8002d32:	8d1a      	ldrhlt	r2, [r3, #40]	; 0x28
 8002d34:	699a      	ldrge	r2, [r3, #24]
 8002d36:	4249      	neglt	r1, r1
 8002d38:	f442 4200 	orrlt.w	r2, r2, #32768	; 0x8000
 8002d3c:	bfaa      	itet	ge
 8002d3e:	f442 4200 	orrge.w	r2, r2, #32768	; 0x8000
 8002d42:	851a      	strhlt	r2, [r3, #40]	; 0x28
 8002d44:	619a      	strge	r2, [r3, #24]
 8002d46:	29ff      	cmp	r1, #255	; 0xff
 8002d48:	460b      	mov	r3, r1
 8002d4a:	bfa8      	it	ge
 8002d4c:	23ff      	movge	r3, #255	; 0xff
 8002d4e:	f241 21be 	movw	r1, #4798	; 0x12be
 8002d52:	4359      	muls	r1, r3
 8002d54:	23ff      	movs	r3, #255	; 0xff
 8002d56:	fbb1 f1f3 	udiv	r1, r1, r3
 8002d5a:	4b01      	ldr	r3, [pc, #4]	; (8002d60 <_ZN5Motor8run_leftEi+0x34>)
 8002d5c:	6399      	str	r1, [r3, #56]	; 0x38
 8002d5e:	4770      	bx	lr
 8002d60:	40012c00 	andmi	r2, r1, r0, lsl #24

08002d64 <_ZN5Motor9run_rightEi>:
 8002d64:	6843      	ldr	r3, [r0, #4]
 8002d66:	2900      	cmp	r1, #0
 8002d68:	bfb7      	itett	lt
 8002d6a:	699a      	ldrlt	r2, [r3, #24]
 8002d6c:	8d1a      	ldrhge	r2, [r3, #40]	; 0x28
 8002d6e:	4249      	neglt	r1, r1
 8002d70:	f042 0220 	orrlt.w	r2, r2, #32
 8002d74:	bfaa      	itet	ge
 8002d76:	f042 0220 	orrge.w	r2, r2, #32
 8002d7a:	619a      	strlt	r2, [r3, #24]
 8002d7c:	851a      	strhge	r2, [r3, #40]	; 0x28
 8002d7e:	29ff      	cmp	r1, #255	; 0xff
 8002d80:	460b      	mov	r3, r1
 8002d82:	bfa8      	it	ge
 8002d84:	23ff      	movge	r3, #255	; 0xff
 8002d86:	f241 21be 	movw	r1, #4798	; 0x12be
 8002d8a:	4359      	muls	r1, r3
 8002d8c:	23ff      	movs	r3, #255	; 0xff
 8002d8e:	fbb1 f1f3 	udiv	r1, r1, r3
 8002d92:	4b01      	ldr	r3, [pc, #4]	; (8002d98 <_ZN5Motor9run_rightEi+0x34>)
 8002d94:	6359      	str	r1, [r3, #52]	; 0x34
 8002d96:	4770      	bx	lr
 8002d98:	40012c00 	andmi	r2, r1, r0, lsl #24

08002d9c <_ZN5Motor8pwm_initEv>:
 8002d9c:	68c2      	ldr	r2, [r0, #12]
 8002d9e:	6893      	ldr	r3, [r2, #8]
 8002da0:	f023 6340 	bic.w	r3, r3, #201326592	; 0xc000000
 8002da4:	6093      	str	r3, [r2, #8]
 8002da6:	6893      	ldr	r3, [r2, #8]
 8002da8:	f043 6340 	orr.w	r3, r3, #201326592	; 0xc000000
 8002dac:	6093      	str	r3, [r2, #8]
 8002dae:	6813      	ldr	r3, [r2, #0]
 8002db0:	f023 6340 	bic.w	r3, r3, #201326592	; 0xc000000
 8002db4:	6013      	str	r3, [r2, #0]
 8002db6:	6813      	ldr	r3, [r2, #0]
 8002db8:	f043 6300 	orr.w	r3, r3, #134217728	; 0x8000000
 8002dbc:	6013      	str	r3, [r2, #0]
 8002dbe:	6903      	ldr	r3, [r0, #16]
 8002dc0:	6899      	ldr	r1, [r3, #8]
 8002dc2:	f021 5140 	bic.w	r1, r1, #805306368	; 0x30000000
 8002dc6:	6099      	str	r1, [r3, #8]
 8002dc8:	6899      	ldr	r1, [r3, #8]
 8002dca:	f041 5140 	orr.w	r1, r1, #805306368	; 0x30000000
 8002dce:	6099      	str	r1, [r3, #8]
 8002dd0:	6819      	ldr	r1, [r3, #0]
 8002dd2:	f021 5140 	bic.w	r1, r1, #805306368	; 0x30000000
 8002dd6:	6019      	str	r1, [r3, #0]
 8002dd8:	6819      	ldr	r1, [r3, #0]
 8002dda:	f041 5100 	orr.w	r1, r1, #536870912	; 0x20000000
 8002dde:	6019      	str	r1, [r3, #0]
 8002de0:	6a51      	ldr	r1, [r2, #36]	; 0x24
 8002de2:	f421 0170 	bic.w	r1, r1, #15728640	; 0xf00000
 8002de6:	6251      	str	r1, [r2, #36]	; 0x24
 8002de8:	6a51      	ldr	r1, [r2, #36]	; 0x24
 8002dea:	f441 01c0 	orr.w	r1, r1, #6291456	; 0x600000
 8002dee:	6251      	str	r1, [r2, #36]	; 0x24
 8002df0:	6a5a      	ldr	r2, [r3, #36]	; 0x24
 8002df2:	f022 6270 	bic.w	r2, r2, #251658240	; 0xf000000
 8002df6:	625a      	str	r2, [r3, #36]	; 0x24
 8002df8:	6a5a      	ldr	r2, [r3, #36]	; 0x24
 8002dfa:	f042 62c0 	orr.w	r2, r2, #100663296	; 0x6000000
 8002dfe:	625a      	str	r2, [r3, #36]	; 0x24
 8002e00:	4a10      	ldr	r2, [pc, #64]	; (8002e44 <_ZN5Motor8pwm_initEv+0xa8>)
 8002e02:	6993      	ldr	r3, [r2, #24]
 8002e04:	f443 6300 	orr.w	r3, r3, #2048	; 0x800
 8002e08:	6193      	str	r3, [r2, #24]
 8002e0a:	4b0f      	ldr	r3, [pc, #60]	; (8002e48 <_ZN5Motor8pwm_initEv+0xac>)
 8002e0c:	2200      	movs	r2, #0
 8002e0e:	f241 21bf 	movw	r1, #4799	; 0x12bf
 8002e12:	801a      	strh	r2, [r3, #0]
 8002e14:	62d9      	str	r1, [r3, #44]	; 0x2c
 8002e16:	2101      	movs	r1, #1
 8002e18:	851a      	strh	r2, [r3, #40]	; 0x28
 8002e1a:	861a      	strh	r2, [r3, #48]	; 0x30
 8002e1c:	6159      	str	r1, [r3, #20]
 8002e1e:	635a      	str	r2, [r3, #52]	; 0x34
 8002e20:	639a      	str	r2, [r3, #56]	; 0x38
 8002e22:	f44f 7280 	mov.w	r2, #256	; 0x100
 8002e26:	605a      	str	r2, [r3, #4]
 8002e28:	f247 0270 	movw	r2, #28784	; 0x7070
 8002e2c:	619a      	str	r2, [r3, #24]
 8002e2e:	2277      	movs	r2, #119	; 0x77
 8002e30:	621a      	str	r2, [r3, #32]
 8002e32:	881a      	ldrh	r2, [r3, #0]
 8002e34:	430a      	orrs	r2, r1
 8002e36:	801a      	strh	r2, [r3, #0]
 8002e38:	6c5a      	ldr	r2, [r3, #68]	; 0x44
 8002e3a:	f442 4200 	orr.w	r2, r2, #32768	; 0x8000
 8002e3e:	645a      	str	r2, [r3, #68]	; 0x44
 8002e40:	4770      	bx	lr
 8002e42:	bf00      	nop
 8002e44:	40021000 	andmi	r1, r2, r0
 8002e48:	40012c00 	andmi	r2, r1, r0, lsl #24

08002e4c <_ZN5Motor4initEv>:
 8002e4c:	6801      	ldr	r1, [r0, #0]
 8002e4e:	8d0a      	ldrh	r2, [r1, #40]	; 0x28
 8002e50:	f042 0210 	orr.w	r2, r2, #16
 8002e54:	850a      	strh	r2, [r1, #40]	; 0x28
 8002e56:	6841      	ldr	r1, [r0, #4]
 8002e58:	8d0a      	ldrh	r2, [r1, #40]	; 0x28
 8002e5a:	f042 0220 	orr.w	r2, r2, #32
 8002e5e:	850a      	strh	r2, [r1, #40]	; 0x28
 8002e60:	6881      	ldr	r1, [r0, #8]
 8002e62:	8d0a      	ldrh	r2, [r1, #40]	; 0x28
 8002e64:	f442 4200 	orr.w	r2, r2, #32768	; 0x8000
 8002e68:	850a      	strh	r2, [r1, #40]	; 0x28
 8002e6a:	68c1      	ldr	r1, [r0, #12]
 8002e6c:	8d0a      	ldrh	r2, [r1, #40]	; 0x28
 8002e6e:	f442 5200 	orr.w	r2, r2, #8192	; 0x2000
 8002e72:	850a      	strh	r2, [r1, #40]	; 0x28
 8002e74:	6902      	ldr	r2, [r0, #16]
 8002e76:	8d13      	ldrh	r3, [r2, #40]	; 0x28
 8002e78:	f443 4380 	orr.w	r3, r3, #16384	; 0x4000
 8002e7c:	8513      	strh	r3, [r2, #40]	; 0x28
 8002e7e:	f7ff bf8d 	b.w	8002d9c <_ZN5Motor8pwm_initEv>
 8002e82:	0000      	movs	r0, r0

08002e84 <_Z9nvic_initmmm>:
 8002e84:	b510      	push	{r4, lr}
 8002e86:	4b0e      	ldr	r3, [pc, #56]	; (8002ec0 <_Z9nvic_initmmm+0x3c>)
 8002e88:	68db      	ldr	r3, [r3, #12]
 8002e8a:	43db      	mvns	r3, r3
 8002e8c:	f3c3 2402 	ubfx	r4, r3, #8, #3
 8002e90:	f1c4 0304 	rsb	r3, r4, #4
 8002e94:	b2db      	uxtb	r3, r3
 8002e96:	4099      	lsls	r1, r3
 8002e98:	230f      	movs	r3, #15
 8002e9a:	4123      	asrs	r3, r4
 8002e9c:	4013      	ands	r3, r2
 8002e9e:	4a09      	ldr	r2, [pc, #36]	; (8002ec4 <_Z9nvic_initmmm+0x40>)
 8002ea0:	430b      	orrs	r3, r1
 8002ea2:	011b      	lsls	r3, r3, #4
 8002ea4:	1811      	adds	r1, r2, r0
 8002ea6:	f003 03f0 	and.w	r3, r3, #240	; 0xf0
 8002eaa:	f881 3300 	strb.w	r3, [r1, #768]	; 0x300
 8002eae:	0941      	lsrs	r1, r0, #5
 8002eb0:	2301      	movs	r3, #1
 8002eb2:	f000 001f 	and.w	r0, r0, #31
 8002eb6:	fa03 f000 	lsl.w	r0, r3, r0
 8002eba:	f842 0021 	str.w	r0, [r2, r1, lsl #2]
 8002ebe:	bd10      	pop	{r4, pc}
 8002ec0:	e000ed00 	and	lr, r0, r0, lsl #26
 8002ec4:	e000e100 	and	lr, r0, r0, lsl #2

08002ec8 <_Z10timer_initP11TIM_TypeDefmmmm>:
 8002ec8:	b530      	push	{r4, r5, lr}
 8002eca:	8805      	ldrh	r5, [r0, #0]
 8002ecc:	b2ac      	uxth	r4, r5
 8002ece:	4d27      	ldr	r5, [pc, #156]	; (8002f6c <_Z10timer_initP11TIM_TypeDefmmmm+0xa4>)
 8002ed0:	42a8      	cmp	r0, r5
 8002ed2:	d012      	beq.n	8002efa <_Z10timer_initP11TIM_TypeDefmmmm+0x32>
 8002ed4:	f505 6500 	add.w	r5, r5, #2048	; 0x800
 8002ed8:	42a8      	cmp	r0, r5
 8002eda:	d00e      	beq.n	8002efa <_Z10timer_initP11TIM_TypeDefmmmm+0x32>
 8002edc:	f1b0 4f80 	cmp.w	r0, #1073741824	; 0x40000000
 8002ee0:	d00b      	beq.n	8002efa <_Z10timer_initP11TIM_TypeDefmmmm+0x32>
 8002ee2:	f5a5 3598 	sub.w	r5, r5, #77824	; 0x13000
 8002ee6:	42a8      	cmp	r0, r5
 8002ee8:	d007      	beq.n	8002efa <_Z10timer_initP11TIM_TypeDefmmmm+0x32>
 8002eea:	f505 6580 	add.w	r5, r5, #1024	; 0x400
 8002eee:	42a8      	cmp	r0, r5
 8002ef0:	d003      	beq.n	8002efa <_Z10timer_initP11TIM_TypeDefmmmm+0x32>
 8002ef2:	f505 35a4 	add.w	r5, r5, #83968	; 0x14800
 8002ef6:	42a8      	cmp	r0, r5
 8002ef8:	d103      	bne.n	8002f02 <_Z10timer_initP11TIM_TypeDefmmmm+0x3a>
 8002efa:	f024 0470 	bic.w	r4, r4, #112	; 0x70
 8002efe:	430c      	orrs	r4, r1
 8002f00:	b2a4      	uxth	r4, r4
 8002f02:	491b      	ldr	r1, [pc, #108]	; (8002f70 <_Z10timer_initP11TIM_TypeDefmmmm+0xa8>)
 8002f04:	4288      	cmp	r0, r1
 8002f06:	d008      	beq.n	8002f1a <_Z10timer_initP11TIM_TypeDefmmmm+0x52>
 8002f08:	f501 6180 	add.w	r1, r1, #1024	; 0x400
 8002f0c:	4288      	cmp	r0, r1
 8002f0e:	bf1f      	itttt	ne
 8002f10:	f424 7440 	bicne.w	r4, r4, #768	; 0x300
 8002f14:	b2a4      	uxthne	r4, r4
 8002f16:	4314      	orrne	r4, r2
 8002f18:	b2a4      	uxthne	r4, r4
 8002f1a:	8004      	strh	r4, [r0, #0]
 8002f1c:	62c3      	str	r3, [r0, #44]	; 0x2c
 8002f1e:	f8bd 300c 	ldrh.w	r3, [sp, #12]
 8002f22:	8503      	strh	r3, [r0, #40]	; 0x28
 8002f24:	4b11      	ldr	r3, [pc, #68]	; (8002f6c <_Z10timer_initP11TIM_TypeDefmmmm+0xa4>)
 8002f26:	4298      	cmp	r0, r3
 8002f28:	d013      	beq.n	8002f52 <_Z10timer_initP11TIM_TypeDefmmmm+0x8a>
 8002f2a:	f503 6300 	add.w	r3, r3, #2048	; 0x800
 8002f2e:	4298      	cmp	r0, r3
 8002f30:	d00f      	beq.n	8002f52 <_Z10timer_initP11TIM_TypeDefmmmm+0x8a>
 8002f32:	f503 6340 	add.w	r3, r3, #3072	; 0xc00
 8002f36:	4298      	cmp	r0, r3
 8002f38:	d00b      	beq.n	8002f52 <_Z10timer_initP11TIM_TypeDefmmmm+0x8a>
 8002f3a:	f503 6380 	add.w	r3, r3, #1024	; 0x400
 8002f3e:	4298      	cmp	r0, r3
 8002f40:	d007      	beq.n	8002f52 <_Z10timer_initP11TIM_TypeDefmmmm+0x8a>
 8002f42:	f503 6380 	add.w	r3, r3, #1024	; 0x400
 8002f46:	4298      	cmp	r0, r3
 8002f48:	d003      	beq.n	8002f52 <_Z10timer_initP11TIM_TypeDefmmmm+0x8a>
 8002f4a:	f503 6300 	add.w	r3, r3, #2048	; 0x800
 8002f4e:	4298      	cmp	r0, r3
 8002f50:	d101      	bne.n	8002f56 <_Z10timer_initP11TIM_TypeDefmmmm+0x8e>
 8002f52:	2300      	movs	r3, #0
 8002f54:	8603      	strh	r3, [r0, #48]	; 0x30
 8002f56:	2301      	movs	r3, #1
 8002f58:	6143      	str	r3, [r0, #20]
 8002f5a:	8803      	ldrh	r3, [r0, #0]
 8002f5c:	f043 0301 	orr.w	r3, r3, #1
 8002f60:	8003      	strh	r3, [r0, #0]
 8002f62:	68c3      	ldr	r3, [r0, #12]
 8002f64:	f043 0301 	orr.w	r3, r3, #1
 8002f68:	60c3      	str	r3, [r0, #12]
 8002f6a:	bd30      	pop	{r4, r5, pc}
 8002f6c:	40012c00 	andmi	r2, r1, r0, lsl #24
 8002f70:	40001000 	andmi	r1, r0, r0

08002f74 <_Z10usart_initP13USART_TypeDefm>:
 8002f74:	2300      	movs	r3, #0
 8002f76:	220c      	movs	r2, #12
 8002f78:	6043      	str	r3, [r0, #4]
 8002f7a:	6002      	str	r2, [r0, #0]
 8002f7c:	6083      	str	r3, [r0, #8]
 8002f7e:	4b05      	ldr	r3, [pc, #20]	; (8002f94 <_Z10usart_initP13USART_TypeDefm+0x20>)
 8002f80:	fbb3 f1f1 	udiv	r1, r3, r1
 8002f84:	b289      	uxth	r1, r1
 8002f86:	8181      	strh	r1, [r0, #12]
 8002f88:	6803      	ldr	r3, [r0, #0]
 8002f8a:	f043 0301 	orr.w	r3, r3, #1
 8002f8e:	6003      	str	r3, [r0, #0]
 8002f90:	4770      	bx	lr
 8002f92:	bf00      	nop
 8002f94:	044aa200 	strbeq	sl, [sl], #-512	; 0xfffffe00

08002f98 <_Z22exti_clear_pending_bitm>:
 8002f98:	f020 021f 	bic.w	r2, r0, #31
 8002f9c:	2301      	movs	r3, #1
 8002f9e:	f000 001f 	and.w	r0, r0, #31
 8002fa2:	fa03 f000 	lsl.w	r0, r3, r0
 8002fa6:	4b01      	ldr	r3, [pc, #4]	; (8002fac <_Z22exti_clear_pending_bitm+0x14>)
 8002fa8:	50d0      	str	r0, [r2, r3]
 8002faa:	4770      	bx	lr
 8002fac:	40010414 	andmi	r0, r1, r4, lsl r4

08002fb0 <_Z16exti_line_confighh>:
 8002fb0:	f001 0303 	and.w	r3, r1, #3
 8002fb4:	f001 01fc 	and.w	r1, r1, #252	; 0xfc
 8002fb8:	f101 4180 	add.w	r1, r1, #1073741824	; 0x40000000
 8002fbc:	f501 3180 	add.w	r1, r1, #65536	; 0x10000
 8002fc0:	b510      	push	{r4, lr}
 8002fc2:	688a      	ldr	r2, [r1, #8]
 8002fc4:	009b      	lsls	r3, r3, #2
 8002fc6:	240f      	movs	r4, #15
 8002fc8:	409c      	lsls	r4, r3
 8002fca:	ea22 0204 	bic.w	r2, r2, r4
 8002fce:	608a      	str	r2, [r1, #8]
 8002fd0:	688a      	ldr	r2, [r1, #8]
 8002fd2:	4098      	lsls	r0, r3
 8002fd4:	4310      	orrs	r0, r2
 8002fd6:	6088      	str	r0, [r1, #8]
 8002fd8:	bd10      	pop	{r4, pc}

08002fda <_Z14configure_extimm>:
 8002fda:	f020 031f 	bic.w	r3, r0, #31
 8002fde:	f103 4380 	add.w	r3, r3, #1073741824	; 0x40000000
 8002fe2:	f503 3382 	add.w	r3, r3, #66560	; 0x10400
 8002fe6:	2201      	movs	r2, #1
 8002fe8:	f000 001f 	and.w	r0, r0, #31
 8002fec:	b530      	push	{r4, r5, lr}
 8002fee:	fa02 f000 	lsl.w	r0, r2, r0
 8002ff2:	681c      	ldr	r4, [r3, #0]
 8002ff4:	43c2      	mvns	r2, r0
 8002ff6:	4014      	ands	r4, r2
 8002ff8:	601c      	str	r4, [r3, #0]
 8002ffa:	685d      	ldr	r5, [r3, #4]
 8002ffc:	4015      	ands	r5, r2
 8002ffe:	605d      	str	r5, [r3, #4]
 8003000:	681d      	ldr	r5, [r3, #0]
 8003002:	4305      	orrs	r5, r0
 8003004:	601d      	str	r5, [r3, #0]
 8003006:	689d      	ldr	r5, [r3, #8]
 8003008:	4015      	ands	r5, r2
 800300a:	609d      	str	r5, [r3, #8]
 800300c:	68dd      	ldr	r5, [r3, #12]
 800300e:	f103 4440 	add.w	r4, r3, #3221225472	; 0xc0000000
 8003012:	402a      	ands	r2, r5
 8003014:	2910      	cmp	r1, #16
 8003016:	f5a4 3482 	sub.w	r4, r4, #66560	; 0x10400
 800301a:	60da      	str	r2, [r3, #12]
 800301c:	d106      	bne.n	800302c <_Z14configure_extimm+0x52>
 800301e:	689a      	ldr	r2, [r3, #8]
 8003020:	4302      	orrs	r2, r0
 8003022:	609a      	str	r2, [r3, #8]
 8003024:	68da      	ldr	r2, [r3, #12]
 8003026:	4310      	orrs	r0, r2
 8003028:	60d8      	str	r0, [r3, #12]
 800302a:	bd30      	pop	{r4, r5, pc}
 800302c:	f101 4180 	add.w	r1, r1, #1073741824	; 0x40000000
 8003030:	f501 3182 	add.w	r1, r1, #66560	; 0x10400
 8003034:	590b      	ldr	r3, [r1, r4]
 8003036:	4318      	orrs	r0, r3
 8003038:	5108      	str	r0, [r1, r4]
 800303a:	e7f6      	b.n	800302a <_Z14configure_extimm+0x50>

0800303c <_Z16RCC_ADCCLKConfigm>:
 800303c:	0f03      	lsrs	r3, r0, #28
 800303e:	4b06      	ldr	r3, [pc, #24]	; (8003058 <_Z16RCC_ADCCLKConfigm+0x1c>)
 8003040:	6ada      	ldr	r2, [r3, #44]	; 0x2c
 8003042:	bf14      	ite	ne
 8003044:	f422 5278 	bicne.w	r2, r2, #15872	; 0x3e00
 8003048:	f422 72f8 	biceq.w	r2, r2, #496	; 0x1f0
 800304c:	62da      	str	r2, [r3, #44]	; 0x2c
 800304e:	6ada      	ldr	r2, [r3, #44]	; 0x2c
 8003050:	4310      	orrs	r0, r2
 8003052:	62d8      	str	r0, [r3, #44]	; 0x2c
 8003054:	4770      	bx	lr
 8003056:	bf00      	nop
 8003058:	40021000 	andmi	r1, r2, r0

0800305c <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh>:
 800305c:	2a04      	cmp	r2, #4
 800305e:	b530      	push	{r4, r5, lr}
 8003060:	d81c      	bhi.n	800309c <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh+0x40>
 8003062:	eb02 0242 	add.w	r2, r2, r2, lsl #1
 8003066:	6b04      	ldr	r4, [r0, #48]	; 0x30
 8003068:	0052      	lsls	r2, r2, #1
 800306a:	251f      	movs	r5, #31
 800306c:	4095      	lsls	r5, r2
 800306e:	ea24 0405 	bic.w	r4, r4, r5
 8003072:	fa01 f202 	lsl.w	r2, r1, r2
 8003076:	4322      	orrs	r2, r4
 8003078:	6302      	str	r2, [r0, #48]	; 0x30
 800307a:	2909      	cmp	r1, #9
 800307c:	d939      	bls.n	80030f2 <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh+0x96>
 800307e:	390a      	subs	r1, #10
 8003080:	6982      	ldr	r2, [r0, #24]
 8003082:	6982      	ldr	r2, [r0, #24]
 8003084:	eb01 0141 	add.w	r1, r1, r1, lsl #1
 8003088:	2407      	movs	r4, #7
 800308a:	408c      	lsls	r4, r1
 800308c:	ea22 0204 	bic.w	r2, r2, r4
 8003090:	6182      	str	r2, [r0, #24]
 8003092:	6982      	ldr	r2, [r0, #24]
 8003094:	408b      	lsls	r3, r1
 8003096:	4313      	orrs	r3, r2
 8003098:	6183      	str	r3, [r0, #24]
 800309a:	bd30      	pop	{r4, r5, pc}
 800309c:	2a09      	cmp	r2, #9
 800309e:	d80c      	bhi.n	80030ba <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh+0x5e>
 80030a0:	2406      	movs	r4, #6
 80030a2:	3a05      	subs	r2, #5
 80030a4:	4362      	muls	r2, r4
 80030a6:	6b45      	ldr	r5, [r0, #52]	; 0x34
 80030a8:	241f      	movs	r4, #31
 80030aa:	4094      	lsls	r4, r2
 80030ac:	ea25 0404 	bic.w	r4, r5, r4
 80030b0:	fa01 f202 	lsl.w	r2, r1, r2
 80030b4:	4322      	orrs	r2, r4
 80030b6:	6342      	str	r2, [r0, #52]	; 0x34
 80030b8:	e7df      	b.n	800307a <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh+0x1e>
 80030ba:	2a0e      	cmp	r2, #14
 80030bc:	f04f 0406 	mov.w	r4, #6
 80030c0:	d80b      	bhi.n	80030da <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh+0x7e>
 80030c2:	3a0a      	subs	r2, #10
 80030c4:	4362      	muls	r2, r4
 80030c6:	6b85      	ldr	r5, [r0, #56]	; 0x38
 80030c8:	241f      	movs	r4, #31
 80030ca:	4094      	lsls	r4, r2
 80030cc:	ea25 0404 	bic.w	r4, r5, r4
 80030d0:	fa01 f202 	lsl.w	r2, r1, r2
 80030d4:	4322      	orrs	r2, r4
 80030d6:	6382      	str	r2, [r0, #56]	; 0x38
 80030d8:	e7cf      	b.n	800307a <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh+0x1e>
 80030da:	3a0f      	subs	r2, #15
 80030dc:	4362      	muls	r2, r4
 80030de:	6bc5      	ldr	r5, [r0, #60]	; 0x3c
 80030e0:	241f      	movs	r4, #31
 80030e2:	4094      	lsls	r4, r2
 80030e4:	ea25 0404 	bic.w	r4, r5, r4
 80030e8:	fa01 f202 	lsl.w	r2, r1, r2
 80030ec:	4322      	orrs	r2, r4
 80030ee:	63c2      	str	r2, [r0, #60]	; 0x3c
 80030f0:	e7c3      	b.n	800307a <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh+0x1e>
 80030f2:	3901      	subs	r1, #1
 80030f4:	6942      	ldr	r2, [r0, #20]
 80030f6:	6942      	ldr	r2, [r0, #20]
 80030f8:	eb01 0141 	add.w	r1, r1, r1, lsl #1
 80030fc:	2438      	movs	r4, #56	; 0x38
 80030fe:	408c      	lsls	r4, r1
 8003100:	ea22 0204 	bic.w	r2, r2, r4
 8003104:	6142      	str	r2, [r0, #20]
 8003106:	6942      	ldr	r2, [r0, #20]
 8003108:	3103      	adds	r1, #3
 800310a:	fa03 f101 	lsl.w	r1, r3, r1
 800310e:	4311      	orrs	r1, r2
 8003110:	6141      	str	r1, [r0, #20]
 8003112:	e7c2      	b.n	800309a <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh+0x3e>

08003114 <_Z8adc_initv>:
 8003114:	b570      	push	{r4, r5, r6, lr}
 8003116:	f44f 7088 	mov.w	r0, #272	; 0x110
 800311a:	f7ff ff8f 	bl	800303c <_Z16RCC_ADCCLKConfigm>
 800311e:	4919      	ldr	r1, [pc, #100]	; (8003184 <_Z8adc_initv+0x70>)
 8003120:	4819      	ldr	r0, [pc, #100]	; (8003188 <_Z8adc_initv+0x74>)
 8003122:	694b      	ldr	r3, [r1, #20]
 8003124:	4d19      	ldr	r5, [pc, #100]	; (800318c <_Z8adc_initv+0x78>)
 8003126:	4c1a      	ldr	r4, [pc, #104]	; (8003190 <_Z8adc_initv+0x7c>)
 8003128:	f043 5380 	orr.w	r3, r3, #268435456	; 0x10000000
 800312c:	614b      	str	r3, [r1, #20]
 800312e:	f7ff ff85 	bl	800303c <_Z16RCC_ADCCLKConfigm>
 8003132:	694b      	ldr	r3, [r1, #20]
 8003134:	f04f 46a0 	mov.w	r6, #1342177280	; 0x50000000
 8003138:	f043 5300 	orr.w	r3, r3, #536870912	; 0x20000000
 800313c:	614b      	str	r3, [r1, #20]
 800313e:	2201      	movs	r2, #1
 8003140:	2300      	movs	r3, #0
 8003142:	60f3      	str	r3, [r6, #12]
 8003144:	4611      	mov	r1, r2
 8003146:	60eb      	str	r3, [r5, #12]
 8003148:	4630      	mov	r0, r6
 800314a:	60e3      	str	r3, [r4, #12]
 800314c:	2302      	movs	r3, #2
 800314e:	f7ff ff85 	bl	800305c <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh>
 8003152:	2201      	movs	r2, #1
 8003154:	4611      	mov	r1, r2
 8003156:	2302      	movs	r3, #2
 8003158:	4628      	mov	r0, r5
 800315a:	f7ff ff7f 	bl	800305c <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh>
 800315e:	2302      	movs	r3, #2
 8003160:	2201      	movs	r2, #1
 8003162:	210c      	movs	r1, #12
 8003164:	4620      	mov	r0, r4
 8003166:	f7ff ff79 	bl	800305c <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh>
 800316a:	68b3      	ldr	r3, [r6, #8]
 800316c:	f043 0301 	orr.w	r3, r3, #1
 8003170:	60b3      	str	r3, [r6, #8]
 8003172:	68ab      	ldr	r3, [r5, #8]
 8003174:	f043 0301 	orr.w	r3, r3, #1
 8003178:	60ab      	str	r3, [r5, #8]
 800317a:	68a3      	ldr	r3, [r4, #8]
 800317c:	f043 0301 	orr.w	r3, r3, #1
 8003180:	60a3      	str	r3, [r4, #8]
 8003182:	bd70      	pop	{r4, r5, r6, pc}
 8003184:	40021000 	andmi	r1, r2, r0
 8003188:	10002200 	andne	r2, r0, r0, lsl #4
 800318c:	50000100 	andpl	r0, r0, r0, lsl #2
 8003190:	50000400 	andpl	r0, r0, r0, lsl #8

08003194 <_Z8adc_readi>:
 8003194:	3801      	subs	r0, #1
 8003196:	2809      	cmp	r0, #9
 8003198:	bf98      	it	ls
 800319a:	4b0e      	ldrls	r3, [pc, #56]	; (80031d4 <_Z8adc_readi+0x40>)
 800319c:	b510      	push	{r4, lr}
 800319e:	bf9b      	ittet	ls
 80031a0:	f853 4020 	ldrls.w	r4, [r3, r0, lsl #2]
 80031a4:	4b0c      	ldrls	r3, [pc, #48]	; (80031d8 <_Z8adc_readi+0x44>)
 80031a6:	f04f 44a0 	movhi.w	r4, #1342177280	; 0x50000000
 80031aa:	5c19      	ldrbls	r1, [r3, r0]
 80031ac:	f04f 0301 	mov.w	r3, #1
 80031b0:	461a      	mov	r2, r3
 80031b2:	bf88      	it	hi
 80031b4:	2101      	movhi	r1, #1
 80031b6:	4620      	mov	r0, r4
 80031b8:	f7ff ff50 	bl	800305c <_Z24ADC_RegularChannelConfigP11ADC_TypeDefhhh>
 80031bc:	68a3      	ldr	r3, [r4, #8]
 80031be:	f043 0304 	orr.w	r3, r3, #4
 80031c2:	60a3      	str	r3, [r4, #8]
 80031c4:	6823      	ldr	r3, [r4, #0]
 80031c6:	075b      	lsls	r3, r3, #29
 80031c8:	d401      	bmi.n	80031ce <_Z8adc_readi+0x3a>
 80031ca:	bf00      	nop
 80031cc:	e7fa      	b.n	80031c4 <_Z8adc_readi+0x30>
 80031ce:	6c20      	ldr	r0, [r4, #64]	; 0x40
 80031d0:	bd10      	pop	{r4, pc}
 80031d2:	bf00      	nop
 80031d4:	0800399c 	stmdaeq	r0, {r2, r3, r4, r7, r8, fp, ip, sp}
 80031d8:	080039c4 	stmdaeq	r0, {r2, r6, r7, r8, fp, ip, sp}

080031dc <_ZTV12NetReluLayer>:
 80031dc:	00000000 	andeq	r0, r0, r0
 80031e0:	00000000 	andeq	r0, r0, r0
 80031e4:	08000339 	stmdaeq	r0, {r0, r3, r4, r5, r8, r9}
 80031e8:	0800034d 	stmdaeq	r0, {r0, r2, r3, r6, r8, r9}
 80031ec:	0800031d 	stmdaeq	r0, {r0, r2, r3, r4, r8, r9}

080031f0 <_ZTV24NetDenseConvolutionLayer>:
 80031f0:	00000000 	andeq	r0, r0, r0
 80031f4:	00000000 	andeq	r0, r0, r0
 80031f8:	080003ad 	stmdaeq	r0, {r0, r2, r3, r5, r7, r8, r9}
 80031fc:	080003c1 	stmdaeq	r0, {r0, r6, r7, r8, r9}
 8003200:	080003d5 	stmdaeq	r0, {r0, r2, r4, r6, r7, r8, r9}

08003204 <_ZTV18NetMaxPoolingLayer>:
 8003204:	00000000 	andeq	r0, r0, r0
 8003208:	00000000 	andeq	r0, r0, r0
 800320c:	08000489 	stmdaeq	r0, {r0, r3, r7, sl}
 8003210:	0800049d 	stmdaeq	r0, {r0, r2, r3, r4, r7, sl}
 8003214:	080004b1 	stmdaeq	r0, {r0, r4, r5, r7, sl}

08003218 <_ZTV19NetConvolutionLayer>:
 8003218:	00000000 	andeq	r0, r0, r0
 800321c:	00000000 	andeq	r0, r0, r0
 8003220:	08000779 	stmdaeq	r0, {r0, r3, r4, r5, r6, r8, r9, sl}
 8003224:	0800078d 	stmdaeq	r0, {r0, r2, r3, r7, r8, r9, sl}
 8003228:	080007a1 	stmdaeq	r0, {r0, r5, r7, r8, r9, sl}

0800322c <_ZTV10NetFcLayer>:
 800322c:	00000000 	andeq	r0, r0, r0
 8003230:	00000000 	andeq	r0, r0, r0
 8003234:	08000829 	stmdaeq	r0, {r0, r3, r5, fp}
 8003238:	0800083d 	stmdaeq	r0, {r0, r2, r3, r4, r5, fp}
 800323c:	08000851 	stmdaeq	r0, {r0, r4, r6, fp}

08003240 <_ZTV13NeuralNetwork>:
 8003240:	00000000 	andeq	r0, r0, r0
 8003244:	00000000 	andeq	r0, r0, r0
 8003248:	08000955 	stmdaeq	r0, {r0, r2, r4, r6, r8, fp}
 800324c:	08000979 	stmdaeq	r0, {r0, r3, r4, r5, r6, r8, fp}
 8003250:	08000933 	stmdaeq	r0, {r0, r1, r4, r5, r8, fp}
 8003254:	08000a81 	stmdaeq	r0, {r0, r7, r9, fp}

08003258 <_ZTV12NetworkLayer>:
 8003258:	00000000 	andeq	r0, r0, r0
 800325c:	00000000 	andeq	r0, r0, r0
 8003260:	08000f3d 	stmdaeq	r0, {r0, r2, r3, r4, r5, r8, r9, sl, fp}
 8003264:	08000f41 	stmdaeq	r0, {r0, r6, r8, r9, sl, fp}
 8003268:	08000f3f 	stmdaeq	r0, {r0, r1, r2, r3, r4, r5, r8, r9, sl, fp}

0800326c <_ZL12layer_0_bias>:
 800326c:	b781f6fe 			; <UNDEFINED> instruction: 0xb781f6fe

08003270 <_ZL12layer_3_bias>:
 8003270:	b6aef081 	strtlt	pc, [lr], r1, lsl #1

08003274 <_ZL12layer_5_bias>:
 8003274:	51446763 	cmppl	r4, r3, ror #14
 8003278:	413a7f6f 	teqmi	sl, pc, ror #30

0800327c <_ZL15layer_0_weights>:
 800327c:	0101ff01 	tsteq	r1, r1, lsl #30	; <UNPREDICTABLE>
 8003280:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 8003284:	01ffff01 	mvnseq	pc, r1, lsl #30
 8003288:	0101ffff 	strdeq	pc, [r1, -pc]
 800328c:	f128c72a 			; <UNDEFINED> instruction: 0xf128c72a
 8003290:	1f3512f6 	svcne	0x003512f6
 8003294:	d83b5423 	ldmdale	fp!, {r0, r1, r5, sl, ip, lr}
 8003298:	f7d93afe 			; <UNDEFINED> instruction: 0xf7d93afe
 800329c:	6a40027f 	bvs	9003ca0 <_sidata+0x10002c8>

080032a0 <_ZL15layer_3_weights>:
 80032a0:	00000000 	andeq	r0, r0, r0
 80032a4:	00000000 	andeq	r0, r0, r0
 80032a8:	00000000 	andeq	r0, r0, r0
 80032ac:	00000000 	andeq	r0, r0, r0
 80032b0:	fe03dfff 	mcr2	15, 0, sp, cr3, cr15, {7}
 80032b4:	faf3c106 	blx	7cf36d4 <__text_size__+0x7cefe8c>
 80032b8:	0ce503ff 	stcleq	3, cr0, [r5], #1020	; 0x3fc
 80032bc:	1102e705 	tstne	r2, r5, lsl #14
 80032c0:	11050a20 	tstne	r5, r0, lsr #20
 80032c4:	0b06fd02 	bleq	81c26d4 <_sidata+0x1becfc>
 80032c8:	2217f807 	andscs	pc, r7, #458752	; 0x70000
 80032cc:	070d2504 	streq	r2, [sp, -r4, lsl #10]
 80032d0:	f7fb41e3 			; <UNDEFINED> instruction: 0xf7fb41e3
 80032d4:	000ae616 	andeq	lr, sl, r6, lsl r6
 80032d8:	0614fafc 			; <UNDEFINED> instruction: 0x0614fafc
 80032dc:	05f608f5 	ldrbeq	r0, [r6, #2293]!	; 0x8f5
 80032e0:	d5fdfcfc 	ldrble	pc, [sp, #3324]!	; 0xcfc	; <UNPREDICTABLE>
 80032e4:	ed27fbeb 	fstmdbx	r7!, {d15-d131}	;@ Deprecated
 80032e8:	00050af8 	strdeq	r0, [r5], -r8
 80032ec:	e60c1700 	str	r1, [ip], -r0, lsl #14
 80032f0:	05121418 	ldreq	r1, [r2, #-1048]	; 0xfffffbe8
 80032f4:	100e1cea 	andne	r1, lr, sl, ror #25
 80032f8:	190cf601 	stmdbne	ip, {r0, r9, sl, ip, sp, lr, pc}
 80032fc:	0018fbe9 	andseq	pc, r8, r9, ror #23
 8003300:	fb06feed 	blx	81c2ebe <_sidata+0x1bf4e6>
 8003304:	07f30201 	ldrbeq	r0, [r3, r1, lsl #4]!
 8003308:	c53b01d2 	ldrgt	r0, [fp, #-466]!	; 0xfffffe2e
 800330c:	f50300ff 			; <UNDEFINED> instruction: 0xf50300ff
 8003310:	07e48106 	strbeq	r8, [r4, r6, lsl #2]!
 8003314:	00050001 	andeq	r0, r5, r1
 8003318:	b8d10fe7 	ldmlt	r1, {r0, r1, r2, r5, r6, r7, r8, r9, sl, fp}^
 800331c:	010010ff 	strdeq	r1, [r0, -pc]
 8003320:	cf0be909 	svcgt	0x000be909
 8003324:	0de912f8 	sfmeq	f1, 2, [r9, #992]!	; 0x3e0
 8003328:	170af3ea 	strne	pc, [sl, -sl, ror #7]
 800332c:	04ee010e 	strbteq	r0, [lr], #270	; 0x10e

08003330 <_ZL15layer_5_weights>:
 8003330:	0101ffff 	strdeq	pc, [r1, -pc]
 8003334:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
 8003338:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 800333c:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 8003340:	ff0101ff 			; <UNDEFINED> instruction: 0xff0101ff
 8003344:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
 8003348:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
 800334c:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 8003350:	010101ff 	strdeq	r0, [r1, -pc]
 8003354:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 8003358:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
 800335c:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 8003360:	01ffff01 	mvnseq	pc, r1, lsl #30
 8003364:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
 8003368:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
 800336c:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
 8003370:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 8003374:	01ff0101 	mvnseq	r0, r1, lsl #2
 8003378:	01ff01ff 	ldrsheq	r0, [pc, #31]	; 800339f <_ZL15layer_5_weights+0x6f>
 800337c:	0101ff01 	tsteq	r1, r1, lsl #30	; <UNPREDICTABLE>
 8003380:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 8003384:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 8003388:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 800338c:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 8003390:	01010101 	tsteq	r1, r1, lsl #2
 8003394:	01010101 	tsteq	r1, r1, lsl #2
 8003398:	01ff0101 	mvnseq	r0, r1, lsl #2
 800339c:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 80033a0:	01ffff01 	mvnseq	pc, r1, lsl #30
 80033a4:	01ff0101 	mvnseq	r0, r1, lsl #2
 80033a8:	01ffff01 	mvnseq	pc, r1, lsl #30
 80033ac:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 80033b0:	01010101 	tsteq	r1, r1, lsl #2
 80033b4:	01ffffff 	ldrsheq	pc, [pc, #255]	; 80034bb <_ZL15layer_5_weights+0x18b>	; <UNPREDICTABLE>
 80033b8:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 80033bc:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 80033c0:	01ffffff 	ldrsheq	pc, [pc, #255]	; 80034c7 <_ZL15layer_5_weights+0x197>	; <UNPREDICTABLE>
 80033c4:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 80033c8:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 80033cc:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 80033d0:	01ffffff 	ldrsheq	pc, [pc, #255]	; 80034d7 <_ZL15layer_5_weights+0x1a7>	; <UNPREDICTABLE>
 80033d4:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 80033d8:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 80033dc:	ff0101ff 			; <UNDEFINED> instruction: 0xff0101ff
 80033e0:	01010101 	tsteq	r1, r1, lsl #2
 80033e4:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 80033e8:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 80033ec:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
 80033f0:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 80033f4:	ff0101ff 			; <UNDEFINED> instruction: 0xff0101ff
 80033f8:	010101ff 	strdeq	r0, [r1, -pc]
 80033fc:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 8003400:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 8003404:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 8003408:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 800340c:	ffff01ff 			; <UNDEFINED> instruction: 0xffff01ff
 8003410:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 8003414:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 8003418:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 800341c:	ffff0101 			; <UNDEFINED> instruction: 0xffff0101
 8003420:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 8003424:	01ffff01 	mvnseq	pc, r1, lsl #30
 8003428:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 800342c:	ffffff01 			; <UNDEFINED> instruction: 0xffffff01
 8003430:	0000fe04 	andeq	pc, r0, r4, lsl #28
 8003434:	05fe0c04 	ldrbeq	r0, [lr, #3076]!	; 0xc04
 8003438:	02fe0a00 	rscseq	r0, lr, #0, 20
 800343c:	090342fd 	stmdbeq	r3, {r0, r2, r3, r4, r5, r6, r7, r9, lr}
 8003440:	01fffe00 	mvnseq	pc, r0, lsl #28
 8003444:	02ff1803 	rscseq	r1, pc, #196608	; 0x30000
 8003448:	020318fe 	andeq	r1, r3, #16646144	; 0xfe0000
 800344c:	faf7df01 	blx	7dfb058 <__text_size__+0x7df7810>
 8003450:	03fc00ff 	mvnseq	r0, #255	; 0xff
 8003454:	00000404 	andeq	r0, r0, r4, lsl #8
 8003458:	00000403 	andeq	r0, r0, r3, lsl #8
 800345c:	fb2d1f00 	blx	8b4b066 <_sidata+0xb4768e>
 8003460:	fc010404 	stc2	4, cr0, [r1], {4}
 8003464:	02ede7fc 	rsceq	lr, sp, #252, 14	; 0x3f00000
 8003468:	01efee04 	mvneq	lr, r4, lsl #28
 800346c:	fffe35ff 			; <UNDEFINED> instruction: 0xfffe35ff
 8003470:	01fd0805 	mvnseq	r0, r5, lsl #16
 8003474:	fffe0502 			; <UNDEFINED> instruction: 0xfffe0502
 8003478:	ff0705fd 			; <UNDEFINED> instruction: 0xff0705fd
 800347c:	060502f6 			; <UNDEFINED> instruction: 0x060502f6
 8003480:	f9f50009 			; <UNDEFINED> instruction: 0xf9f50009
 8003484:	fcf90aff 	ldc2l	10, cr0, [r9], #1020	; 0x3fc	; <UNPREDICTABLE>
 8003488:	00fd10f6 	ldrshteq	r1, [sp], #6
 800348c:	00f927f3 	ldrshteq	r2, [r9], #115	; 0x73
 8003490:	fdfefe04 	ldc2l	14, cr15, [lr, #16]!
 8003494:	fefe0402 	cdp2	4, 15, cr0, cr14, cr2, {0}
 8003498:	ff0002fb 			; <UNDEFINED> instruction: 0xff0002fb
 800349c:	ffff00fc 			; <UNDEFINED> instruction: 0xffff00fc
 80034a0:	000000fe 	strdeq	r0, [r0], -lr
 80034a4:	ff000000 			; <UNDEFINED> instruction: 0xff000000
 80034a8:	ff000201 			; <UNDEFINED> instruction: 0xff000201
 80034ac:	00000100 	andeq	r0, r0, r0, lsl #2
 80034b0:	fe01ff02 	cdp2	15, 0, cr15, cr1, cr2, {0}
 80034b4:	02fe0000 	rscseq	r0, lr, #0
 80034b8:	06fef9ff 			; <UNDEFINED> instruction: 0x06fef9ff
 80034bc:	04fedf00 	ldrbteq	sp, [lr], #3840	; 0xf00
 80034c0:	010300fb 	strdeq	r0, [r3, -fp]
 80034c4:	fe170203 	cdp2	2, 1, cr0, cr7, cr3, {0}
 80034c8:	ff0d0003 			; <UNDEFINED> instruction: 0xff0d0003
 80034cc:	0110ffff 			; <UNDEFINED> instruction: 0x0110ffff
 80034d0:	05fcfffb 	ldrbeq	pc, [ip, #4091]!	; 0xffb	; <UNPREDICTABLE>
 80034d4:	00000403 	andeq	r0, r0, r3, lsl #8
 80034d8:	000003fd 	strdeq	r0, [r0], -sp
 80034dc:	fbddf2fc 	blx	77800d6 <__text_size__+0x777c88e>
 80034e0:	01040202 	tsteq	r4, r2, lsl #4
 80034e4:	04260f00 	strteq	r0, [r6], #-3840	; 0xfffff100
 80034e8:	0222fefd 	eoreq	pc, r2, #4048	; 0xfd0
 80034ec:	01ece201 	mvneq	lr, r1, lsl #4
 80034f0:	fc0404fc 	stc2	4, cr0, [r4], {252}	; 0xfc
 80034f4:	fb040100 	blx	81038fe <_sidata+0xfff26>
 80034f8:	f70403ff 			; <UNDEFINED> instruction: 0xf70403ff
 80034fc:	fc0905fe 	stc2	5, cr0, [r9], {254}	; 0xfe
 8003500:	fdfe02fc 	ldc2l	2, cr0, [lr, #1008]!	; 0x3f0
 8003504:	fc01fffc 	stc2	15, cr15, [r1], {252}	; 0xfc
 8003508:	ff0afffe 			; <UNDEFINED> instruction: 0xff0afffe
 800350c:	fd0edd00 	stc2	13, cr13, [lr, #-0]
 8003510:	fe0103fc 	mcr2	3, 0, r0, cr1, cr12, {7}
 8003514:	fe0100fd 	mcr2	0, 0, r0, cr1, cr13, {7}
 8003518:	ff0200fe 			; <UNDEFINED> instruction: 0xff0200fe
 800351c:	000000ff 	strdeq	r0, [r0], -pc	; <UNPREDICTABLE>
 8003520:	fffe0201 			; <UNDEFINED> instruction: 0xfffe0201
 8003524:	00ff0200 	rscseq	r0, pc, r0, lsl #4
 8003528:	000000ff 	strdeq	r0, [r0], -pc	; <UNPREDICTABLE>
 800352c:	000000fe 	strdeq	r0, [r0], -lr
 8003530:	fc03fb02 	stc2	11, cr15, [r3], {2}	; <UNPREDICTABLE>
 8003534:	fc030505 	stc2	5, cr0, [r3], {5}
 8003538:	fd07fd00 	stc2	13, cr15, [r7, #-0]
 800353c:	fafdfafe 	blx	7f8213c <__text_size__+0x7f7e8f4>
 8003540:	0503ff00 	streq	pc, [r3, #-3840]	; 0xfffff100
 8003544:	f7f9fdfb 			; <UNDEFINED> instruction: 0xf7f9fdfb
 8003548:	f2f90104 	vext.8	d16, d9, d4, #1
 800354c:	f3090600 	vmax.u8	d0, d9, d0
 8003550:	fc00fefc 	stc2	14, cr15, [r0], {252}	; 0xfc
 8003554:	ff080000 			; <UNDEFINED> instruction: 0xff080000
 8003558:	00040004 	andeq	r0, r4, r4
 800355c:	08130301 	ldmdaeq	r3, {r0, r8, r9}
 8003560:	fd0000fb 	stc2	0, cr0, [r0, #-1004]	; 0xfffffc14
 8003564:	eef902fe 	mrc	2, 7, r0, cr9, cr14, {7}
 8003568:	e3fe05fb 	mvns	r0, #1052770304	; 0x3ec00000
 800356c:	0d4002fb 	sfmeq	f0, 2, [r0, #-1004]	; 0xfffffc14
 8003570:	080afbf7 	stmdaeq	sl, {r0, r1, r2, r4, r5, r6, r7, r8, r9, fp, ip, sp, lr, pc}
 8003574:	ff0cfffb 			; <UNDEFINED> instruction: 0xff0cfffb
 8003578:	05020300 	streq	r0, [r2, #-768]	; 0xfffffd00
 800357c:	0009ff04 	andeq	pc, r9, r4, lsl #30
 8003580:	fd0efaf4 	stc2	10, cr15, [lr, #-976]	; 0xfffffc30	; <UNPREDICTABLE>
 8003584:	f80ef9f6 			; <UNDEFINED> instruction: 0xf80ef9f6
 8003588:	fa0ffcfb 	blx	840297c <_sidata+0x3fefa4>
 800358c:	f6080402 			; <UNDEFINED> instruction: 0xf6080402
 8003590:	fffffcfd 			; <UNDEFINED> instruction: 0xfffffcfd
 8003594:	fe00fdfd 	vudot.u8	<illegal reg q7.5>, q8, d13[1]
 8003598:	ff00fefe 			; <UNDEFINED> instruction: 0xff00fefe
 800359c:	ff00feff 			; <UNDEFINED> instruction: 0xff00feff
 80035a0:	0004ffff 	strdeq	pc, [r4], -pc	; <UNPREDICTABLE>
 80035a4:	fe0300ff 	mcr2	0, 0, r0, cr3, cr15, {7}
 80035a8:	ff0200ff 			; <UNDEFINED> instruction: 0xff0200ff
 80035ac:	00000000 	andeq	r0, r0, r0
 80035b0:	01020302 	tsteq	r2, r2, lsl #6
 80035b4:	000f0000 	andeq	r0, pc, r0
 80035b8:	eef20901 	vmov.f16	s1, #33	; 0x41080000  8.5
 80035bc:	e5e50000 	strb	r0, [r5, #0]!
 80035c0:	02fdfc02 	rscseq	pc, sp, #512	; 0x200
 80035c4:	06f7ff03 	ldrbteq	pc, [r7], r3, lsl #30	; <UNPREDICTABLE>
 80035c8:	0cfa00ff 	ldcleq	0, cr0, [sl], #1020	; 0x3fc
 80035cc:	45000705 	strmi	r0, [r0, #-1797]	; 0xfffff8fb
 80035d0:	fe030000 	cdp2	0, 0, cr0, cr3, cr0, {0}
 80035d4:	02ff0000 	rscseq	r0, pc, #0
 80035d8:	fa000002 	blx	80035e8 <_ZL15layer_5_weights+0x2b8>
 80035dc:	f2f50003 	vext.8	d16, d5, d3, #0
 80035e0:	00fd01fc 	ldrshteq	r0, [sp], #28
 80035e4:	20fe0001 	rscscs	r0, lr, r1
 80035e8:	26ff0100 	ldrbtcs	r0, [pc], r0, lsl #2
 80035ec:	efe8fffc 	svc	0x00e8fffc
 80035f0:	03fe00fc 	mvnseq	r0, #252	; 0xfc
 80035f4:	0a0300ff 	beq	80c39f8 <_sidata+0xc0020>
 80035f8:	060201f5 			; <UNDEFINED> instruction: 0x060201f5
 80035fc:	04060401 	streq	r0, [r6], #-1025	; 0xfffffbff
 8003600:	0df8fafc 			; <UNDEFINED> instruction: 0x0df8fafc
 8003604:	13f5f5f2 	mvnsne	pc, #1015021568	; 0x3c800000
 8003608:	0d04fbf6 	vstreq	d15, [r4, #-984]	; 0xfffffc28
 800360c:	fd04f7f9 	stc2	7, cr15, [r4, #-996]	; 0xfffffc1c
 8003610:	00ff0000 	rscseq	r0, pc, r0
 8003614:	03fefffc 	mvnseq	pc, #252, 30	; 0x3f0
 8003618:	0002fffb 	strdeq	pc, [r2], -fp
 800361c:	ff0000fc 			; <UNDEFINED> instruction: 0xff0000fc
 8003620:	0000ff00 	andeq	pc, r0, r0, lsl #30
 8003624:	0100fe00 	tsteq	r0, r0, lsl #28	; <UNPREDICTABLE>
 8003628:	000200ff 	strdeq	r0, [r2], -pc	; <UNPREDICTABLE>
 800362c:	fa0200ff 	blx	8083a30 <_sidata+0x80058>
 8003630:	0202ff01 	andeq	pc, r2, #1, 30
 8003634:	05faf803 	ldrbeq	pc, [sl, #2051]!	; 0x803	; <UNPREDICTABLE>
 8003638:	221c0702 	andscs	r0, ip, #524288	; 0x80000
 800363c:	7cf7fdfb 	ldclvc	13, cr15, [r7], #1004	; 0x3ec
 8003640:	03ff0001 	mvnseq	r0, #1
 8003644:	11fcfd02 	mvnsne	pc, r2, lsl #26
 8003648:	fffefc02 			; <UNDEFINED> instruction: 0xfffefc02
 800364c:	ea010300 	b	8044254 <_sidata+0x4087c>
 8003650:	00040104 	andeq	r0, r4, r4, lsl #2
 8003654:	02fc0003 	rscseq	r0, ip, #3
 8003658:	01fefffc 	ldrsheq	pc, [lr, #252]!	; 0xfc	; <UNPREDICTABLE>
 800365c:	c9f1feff 	ldmibgt	r1!, {r0, r1, r2, r3, r4, r5, r6, r7, r9, sl, fp, ip, sp, lr, pc}^
 8003660:	04fe00fb 	ldrbteq	r0, [lr], #251	; 0xfb
 8003664:	f7fffefe 			; <UNDEFINED> instruction: 0xf7fffefe
 8003668:	fcfd0001 	ldc2l	0, cr0, [sp], #4
 800366c:	1ef60005 	cdpne	0, 15, cr0, cr6, cr5, {0}
 8003670:	07080303 	streq	r0, [r8, -r3, lsl #6]
 8003674:	03010203 	movweq	r0, #4611	; 0x1203
 8003678:	0701f7f6 			; <UNDEFINED> instruction: 0x0701f7f6
 800367c:	03fcf8f2 	mvnseq	pc, #15859712	; 0xf20000
 8003680:	0104070b 	tsteq	r4, fp, lsl #14
 8003684:	0a020503 	beq	8084a98 <_sidata+0x810c0>
 8003688:	08f2f3e7 	ldmeq	r2!, {r0, r1, r2, r5, r6, r7, r8, r9, ip, sp, lr, pc}^
 800368c:	fefc00f9 	mrc2	0, 7, r0, cr12, cr9, {7}
 8003690:	02010304 	andeq	r0, r1, #4, 6	; 0x10000000
 8003694:	00010304 	andeq	r0, r1, r4, lsl #6
 8003698:	0601fcf8 			; <UNDEFINED> instruction: 0x0601fcf8
 800369c:	fd0000f5 	stc2	0, cr0, [r0, #-980]	; 0xfffffc2c
 80036a0:	00000001 	andeq	r0, r0, r1
 80036a4:	00000001 	andeq	r0, r0, r1
 80036a8:	0301ffff 	movweq	pc, #8191	; 0x1fff	; <UNPREDICTABLE>
 80036ac:	000100fe 	strdeq	r0, [r1], -lr
 80036b0:	fffc00ff 			; <UNDEFINED> instruction: 0xfffc00ff
 80036b4:	fbf9fefc 	blx	7e832ae <__text_size__+0x7e7fa66>
 80036b8:	e6faf8fc 			; <UNDEFINED> instruction: 0xe6faf8fc
 80036bc:	810cfffd 	strdhi	pc, [ip, -sp]
 80036c0:	fcfd0203 	ldc2l	2, cr0, [sp], #12
 80036c4:	f50000ff 			; <UNDEFINED> instruction: 0xf50000ff
 80036c8:	fffffe03 			; <UNDEFINED> instruction: 0xfffffe03
 80036cc:	eeffff00 	cdp	15, 15, cr15, cr15, cr0, {0}
 80036d0:	03fdfd02 	mvnseq	pc, #2, 26	; 0x80
 80036d4:	00fffe01 	rscseq	pc, pc, r1, lsl #28
 80036d8:	07fffe05 	ldrbeq	pc, [pc, r5, lsl #28]!	; <UNPREDICTABLE>
 80036dc:	57f7fb01 	ldrbpl	pc, [r7, r1, lsl #22]!	; <UNPREDICTABLE>
 80036e0:	fc0203fe 	stc2	3, cr0, [r2], {254}	; 0xfe
 80036e4:	f1fafcfc 			; <UNDEFINED> instruction: 0xf1fafcfc
 80036e8:	f0fcfefb 			; <UNDEFINED> instruction: 0xf0fcfefb
 80036ec:	e200fafb 	and	pc, r0, #1028096	; 0xfb000
 80036f0:	07030002 	streq	r0, [r3, -r2]
 80036f4:	04050100 	streq	r0, [r5], #-256	; 0xffffff00
 80036f8:	060007ff 			; <UNDEFINED> instruction: 0x060007ff
 80036fc:	0900fdfd 	stmdbeq	r0, {r0, r2, r3, r4, r5, r6, r7, r8, sl, fp, ip, sp, lr, pc}
 8003700:	0501fcf9 	streq	pc, [r1, #-3321]	; 0xfffff307
 8003704:	05080700 	streq	r0, [r8, #-1792]	; 0xfffff900
 8003708:	14060d00 	strne	r0, [r6], #-3328	; 0xfffff300
 800370c:	26ec02f6 			; <UNDEFINED> instruction: 0x26ec02f6
 8003710:	0100fffe 	strdeq	pc, [r0, -lr]
 8003714:	03000000 	movweq	r0, #0
 8003718:	04000100 	streq	r0, [r0], #-256	; 0xffffff00
 800371c:	1200fef4 	andne	pc, r0, #244, 28	; 0xf40
 8003720:	01ff0000 	mvnseq	r0, r0
 8003724:	01ff0000 	mvnseq	r0, r0
 8003728:	00ff0101 	rscseq	r0, pc, r1, lsl #2
 800372c:	090001fe 	stmdbeq	r0, {r1, r2, r3, r4, r5, r6, r7, r8}

08003730 <_ZL22layer_0_input_geometry>:
 8003730:	00000008 	andeq	r0, r0, r8
 8003734:	00000008 	andeq	r0, r0, r8
 8003738:	00000001 	andeq	r0, r0, r1

0800373c <_ZL23layer_0_kernel_geometry>:
 800373c:	00000003 	andeq	r0, r0, r3
 8003740:	00000003 	andeq	r0, r0, r3
 8003744:	00000004 	andeq	r0, r0, r4

08003748 <_ZL22layer_1_input_geometry>:
 8003748:	00000008 	andeq	r0, r0, r8
 800374c:	00000008 	andeq	r0, r0, r8
 8003750:	00000004 	andeq	r0, r0, r4

08003754 <_ZL23layer_2_kernel_geometry>:
 8003754:	00000002 	andeq	r0, r0, r2
 8003758:	00000002 	andeq	r0, r0, r2
 800375c:	00000001 	andeq	r0, r0, r1

08003760 <_ZL22layer_3_input_geometry>:
 8003760:	00000004 	andeq	r0, r0, r4
 8003764:	00000004 	andeq	r0, r0, r4
 8003768:	00000004 	andeq	r0, r0, r4

0800376c <_ZL22layer_4_input_geometry>:
 800376c:	00000004 	andeq	r0, r0, r4
 8003770:	00000004 	andeq	r0, r0, r4
 8003774:	00000008 	andeq	r0, r0, r8

08003778 <_ZL23layer_5_output_geometry>:
 8003778:	00000001 	andeq	r0, r0, r1
 800377c:	00000001 	andeq	r0, r0, r1
 8003780:	00000008 	andeq	r0, r0, r8

08003784 <_ZTV11LineNetwork>:
 8003784:	00000000 	andeq	r0, r0, r0
 8003788:	00000000 	andeq	r0, r0, r0
 800378c:	08000f71 	stmdaeq	r0, {r0, r4, r5, r6, r8, r9, sl, fp}
 8003790:	08000fa9 	stmdaeq	r0, {r0, r3, r5, r7, r8, r9, sl, fp}
 8003794:	08000933 	stmdaeq	r0, {r0, r1, r4, r5, r8, fp}
 8003798:	08000a81 	stmdaeq	r0, {r0, r7, r9, fp}

0800379c <_ZTV13LinePredictor>:
 800379c:	00000000 	andeq	r0, r0, r0
 80037a0:	00000000 	andeq	r0, r0, r0
 80037a4:	08001231 	stmdaeq	r0, {r0, r4, r5, r9, ip}
 80037a8:	08001233 	stmdaeq	r0, {r0, r1, r4, r5, r9, ip}
 80037ac:	7365740a 	cmnvc	r5, #167772160	; 0xa000000
 80037b0:	696c5f74 	stmdbvs	ip!, {r2, r4, r5, r6, r8, r9, sl, fp, ip, lr}^
 80037b4:	665f656e 	ldrbvs	r6, [pc], -lr, ror #10
 80037b8:	6f6c6c6f 	svcvs	0x006c6c6f
 80037bc:	0a726577 	beq	9c9cda0 <_sidata+0x1c993c8>
 80037c0:	00000000 	andeq	r0, r0, r0

080037c4 <_ZTV4TI2CILh1ELh7ELh6ELh10ELh1EE>:
 80037c4:	00000000 	andeq	r0, r0, r0
 80037c8:	00000000 	andeq	r0, r0, r0
 80037cc:	080014ad 	stmdaeq	r0, {r0, r2, r3, r5, r7, sl, ip}
 80037d0:	080014c1 	stmdaeq	r0, {r0, r6, r7, sl, ip}
 80037d4:	080018f3 	stmdaeq	r0, {r0, r1, r4, r5, r6, r7, fp, ip}
 80037d8:	080018ad 	stmdaeq	r0, {r0, r2, r3, r5, r7, fp, ip}
 80037dc:	08001721 	stmdaeq	r0, {r0, r5, r8, r9, sl, ip}
 80037e0:	080019e1 	stmdaeq	r0, {r0, r5, r6, r7, r8, fp, ip}
 80037e4:	08001939 	stmdaeq	r0, {r0, r3, r4, r5, r8, fp, ip}
 80037e8:	74736509 	ldrbtvc	r6, [r3], #-1289	; 0xfffffaf7
 80037ec:	756d695f 	strbvc	r6, [sp, #-2399]!	; 0xfffff6a1
 80037f0:	6e65735f 	mcrvs	3, 3, r7, cr5, cr15, {2}
 80037f4:	0a726f73 	beq	9c9f5c8 <_sidata+0x1c9bbf0>
 80037f8:	203a2000 	eorscs	r2, sl, r0
 80037fc:	0a0a0a00 	beq	8286004 <_sidata+0x28262c>
 8003800:	23232323 			; <UNDEFINED> instruction: 0x23232323
 8003804:	0a0a0a23 	beq	8286098 <_sidata+0x2826c0>
 8003808:	72657400 	rsbvc	r7, r5, #0, 8
 800380c:	616e696d 	cmnvs	lr, sp, ror #18
 8003810:	6e69206c 	cdpvs	0, 6, cr2, cr9, cr12, {3}
 8003814:	64207469 	strtvs	r7, [r0], #-1129	; 0xfffffb97
 8003818:	0a656e6f 	beq	995f1dc <_sidata+0x195b804>
 800381c:	6d656d00 	stclvs	13, cr6, [r5, #-0]
 8003820:	696e6920 	stmdbvs	lr!, {r5, r8, fp, sp, lr}^
 8003824:	6f642074 	svcvs	0x00642074
 8003828:	202c656e 	eorcs	r6, ip, lr, ror #10
 800382c:	70616568 	rsbvc	r6, r1, r8, ror #10
 8003830:	61747320 	cmnvs	r4, r0, lsr #6
 8003834:	61207472 			; <UNDEFINED> instruction: 0x61207472
 8003838:	74002074 	strvc	r2, [r0], #-116	; 0xffffff8c
 800383c:	72656d69 	rsbvc	r6, r5, #6720	; 0x1a40
 8003840:	696e6920 	stmdbvs	lr!, {r5, r8, fp, sp, lr}^
 8003844:	6f642074 	svcvs	0x00642074
 8003848:	000a656e 	andeq	r6, sl, lr, ror #10
 800384c:	616c6564 	cmnvs	ip, r4, ror #10
 8003850:	30322079 	eorscc	r2, r2, r9, ror r0
 8003854:	736d2030 	cmnvc	sp, #48	; 0x30
 8003858:	32690020 	rsbcc	r0, r9, #32
 800385c:	6e692063 	cdpvs	0, 6, cr2, cr9, cr3, {3}
 8003860:	64207469 	strtvs	r7, [r0], #-1129	; 0xfffffb97
 8003864:	0a656e6f 	beq	995f228 <_sidata+0x195b850>
 8003868:	756d6900 	strbvc	r6, [sp, #-2304]!	; 0xfffff700
 800386c:	696e6920 	stmdbvs	lr!, {r5, r8, fp, sp, lr}^
 8003870:	6f642074 	svcvs	0x00642074
 8003874:	7720656e 	strvc	r6, [r0, -lr, ror #10]!
 8003878:	20687469 	rsbcs	r7, r8, r9, ror #8
 800387c:	6e696c00 	cdpvs	12, 6, cr6, cr9, cr0, {0}
 8003880:	65732065 	ldrbvs	r2, [r3, #-101]!	; 0xffffff9b
 8003884:	726f736e 	rsbvc	r7, pc, #-1207959551	; 0xb8000001
 8003888:	696e6920 	stmdbvs	lr!, {r5, r8, fp, sp, lr}^
 800388c:	6f642074 	svcvs	0x00642074
 8003890:	000a656e 	andeq	r6, sl, lr, ror #10
 8003894:	6f636e65 	svcvs	0x00636e65
 8003898:	20726564 	rsbscs	r6, r2, r4, ror #10
 800389c:	736e6573 	cmnvc	lr, #482344960	; 0x1cc00000
 80038a0:	6920726f 	stmdbvs	r0!, {r0, r1, r2, r3, r5, r6, r9, ip, sp, lr}
 80038a4:	2074696e 	rsbscs	r6, r4, lr, ror #18
 80038a8:	656e6f64 	strbvs	r6, [lr, #-3940]!	; 0xfffff09c
 80038ac:	6f6d000a 	svcvs	0x006d000a
 80038b0:	20726f74 	rsbscs	r6, r2, r4, ror pc
 80038b4:	746e6f63 	strbtvc	r6, [lr], #-3939	; 0xfffff09d
 80038b8:	6c6c6f72 	stclvs	15, cr6, [ip], #-456	; 0xfffffe38
 80038bc:	696e6920 	stmdbvs	lr!, {r5, r8, fp, sp, lr}^
 80038c0:	6f642074 	svcvs	0x00642074
 80038c4:	000a656e 	andeq	r6, sl, lr, ror #10
 80038c8:	2079656b 	rsbscs	r6, r9, fp, ror #10
 80038cc:	74696e69 	strbtvc	r6, [r9], #-3689	; 0xfffff197
 80038d0:	6e6f6420 	cdpvs	4, 6, cr6, cr15, cr0, {1}
 80038d4:	73000a65 	movwvc	r0, #2661	; 0xa65
 80038d8:	65747379 	ldrbvs	r7, [r4, #-889]!	; 0xfffffc87
 80038dc:	6e69206d 	cdpvs	0, 6, cr2, cr9, cr13, {3}
 80038e0:	64207469 	strtvs	r7, [r0], #-1129	; 0xfffffb97
 80038e4:	0a656e6f 	beq	995f2a8 <_sidata+0x195b8d0>
 80038e8:	75727400 	ldrbvc	r7, [r2, #-1024]!	; 0xfffffc00
 80038ec:	61660065 	cmnvs	r6, r5, rrx
 80038f0:	0065736c 	rsbeq	r7, r5, ip, ror #6

080038f4 <_ZTV7Drivers>:
 80038f4:	00000000 	andeq	r0, r0, r0
 80038f8:	00000000 	andeq	r0, r0, r0
 80038fc:	0800149d 	stmdaeq	r0, {r0, r2, r3, r4, r7, sl, ip}
 8003900:	0800149f 	stmdaeq	r0, {r0, r1, r2, r3, r4, r7, sl, ip}

08003904 <_ZTV13I2C_Interface>:
 8003904:	00000000 	andeq	r0, r0, r0
 8003908:	00000000 	andeq	r0, r0, r0
 800390c:	00000000 	andeq	r0, r0, r0
 8003910:	00000000 	andeq	r0, r0, r0
 8003914:	0800259b 	stmdaeq	r0, {r0, r1, r3, r4, r7, r8, sl, sp}
 8003918:	0800259b 	stmdaeq	r0, {r0, r1, r3, r4, r7, r8, sl, sp}
 800391c:	08001b89 	stmdaeq	r0, {r0, r3, r7, r8, r9, fp, ip}
 8003920:	0800259b 	stmdaeq	r0, {r0, r1, r3, r4, r7, r8, sl, sp}
 8003924:	0800259b 	stmdaeq	r0, {r0, r1, r3, r4, r7, r8, sl, sp}

08003928 <_ZTV14DistanceSensor>:
 8003928:	00000000 	andeq	r0, r0, r0
 800392c:	00000000 	andeq	r0, r0, r0
 8003930:	08001c6f 	stmdaeq	r0, {r0, r1, r2, r3, r5, r6, sl, fp, ip}
 8003934:	08001c71 	stmdaeq	r0, {r0, r4, r5, r6, sl, fp, ip}
 8003938:	08001d5b 	stmdaeq	r0, {r0, r1, r3, r4, r6, r8, sl, fp, ip}

0800393c <_ZTV3PID>:
 800393c:	00000000 	andeq	r0, r0, r0
 8003940:	00000000 	andeq	r0, r0, r0
 8003944:	08001df5 	stmdaeq	r0, {r0, r2, r4, r5, r6, r7, r8, sl, fp, ip}
 8003948:	08001df7 	stmdaeq	r0, {r0, r1, r2, r4, r5, r6, r7, r8, sl, fp, ip}

0800394c <_ZTV13MotorControll>:
 800394c:	00000000 	andeq	r0, r0, r0
 8003950:	00000000 	andeq	r0, r0, r0
 8003954:	0800221d 	stmdaeq	r0, {r0, r2, r3, r4, r9, sp}
 8003958:	08002245 	stmdaeq	r0, {r0, r2, r6, r9, sp}
 800395c:	0800207d 	stmdaeq	r0, {r0, r2, r3, r4, r5, r6, sp}

08003960 <_ZTV10LineSensor>:
 8003960:	00000000 	andeq	r0, r0, r0
 8003964:	00000000 	andeq	r0, r0, r0
 8003968:	080022bf 	stmdaeq	r0, {r0, r1, r2, r3, r4, r5, r7, r9, sp}
 800396c:	080022c1 	stmdaeq	r0, {r0, r6, r7, r9, sp}
 8003970:	0800252d 	stmdaeq	r0, {r0, r2, r3, r5, r8, sl, sp}

08003974 <_ZTV3Key>:
 8003974:	00000000 	andeq	r0, r0, r0
 8003978:	00000000 	andeq	r0, r0, r0
 800397c:	0800259d 	stmdaeq	r0, {r0, r2, r3, r4, r7, r8, sl, sp}
 8003980:	0800259f 	stmdaeq	r0, {r0, r1, r2, r3, r4, r7, r8, sl, sp}
 8003984:	080025ad 	stmdaeq	r0, {r0, r2, r3, r5, r7, r8, sl, sp}

08003988 <_ZTV3IMU>:
 8003988:	00000000 	andeq	r0, r0, r0
 800398c:	00000000 	andeq	r0, r0, r0
 8003990:	080026d1 	stmdaeq	r0, {r0, r4, r6, r7, r9, sl, sp}
 8003994:	080026d3 	stmdaeq	r0, {r0, r1, r4, r6, r7, r9, sl, sp}
 8003998:	08002869 	stmdaeq	r0, {r0, r3, r5, r6, fp, sp}

0800399c <CSWTCH.25>:
 800399c:	50000000 	andpl	r0, r0, r0
 80039a0:	50000000 	andpl	r0, r0, r0
 80039a4:	50000000 	andpl	r0, r0, r0
 80039a8:	50000100 	andpl	r0, r0, r0, lsl #2
 80039ac:	50000100 	andpl	r0, r0, r0, lsl #2
 80039b0:	50000100 	andpl	r0, r0, r0, lsl #2
 80039b4:	50000100 	andpl	r0, r0, r0, lsl #2
 80039b8:	50000400 	andpl	r0, r0, r0, lsl #8
 80039bc:	50000400 	andpl	r0, r0, r0, lsl #8
 80039c0:	50000000 	andpl	r0, r0, r0

080039c4 <CSWTCH.26>:
 80039c4:	01040302 	tsteq	r4, r2, lsl #6
 80039c8:	0c040302 	stceq	3, cr0, [r4], {2}
 80039cc:	00000601 	andeq	r0, r0, r1, lsl #12

Disassembly of section .init_array:

080039d0 <__init_array_start>:
 80039d0:	08001479 	stmdaeq	r0, {r0, r3, r4, r5, r6, sl, ip}
 80039d4:	08001a79 	stmdaeq	r0, {r0, r3, r4, r5, r6, r9, fp, ip}

Disassembly of section .bss:

20000000 <drivers>:
20000000:	00000000 	andeq	r0, r0, r0
20000004:	00000000 	andeq	r0, r0, r0

20000008 <distance_sensor>:
20000008:	00000000 	andeq	r0, r0, r0
2000000c:	00000000 	andeq	r0, r0, r0
20000010:	00000000 	andeq	r0, r0, r0
20000014:	00000000 	andeq	r0, r0, r0
20000018:	00000000 	andeq	r0, r0, r0
2000001c:	00000000 	andeq	r0, r0, r0
20000020:	00000000 	andeq	r0, r0, r0
20000024:	00000000 	andeq	r0, r0, r0
20000028:	00000000 	andeq	r0, r0, r0
2000002c:	00000000 	andeq	r0, r0, r0
20000030:	00000000 	andeq	r0, r0, r0
20000034:	00000000 	andeq	r0, r0, r0
20000038:	00000000 	andeq	r0, r0, r0
2000003c:	00000000 	andeq	r0, r0, r0
20000040:	00000000 	andeq	r0, r0, r0
20000044:	00000000 	andeq	r0, r0, r0
20000048:	00000000 	andeq	r0, r0, r0

2000004c <encoder_sensor>:
2000004c:	00000000 	andeq	r0, r0, r0
20000050:	00000000 	andeq	r0, r0, r0
20000054:	00000000 	andeq	r0, r0, r0
20000058:	00000000 	andeq	r0, r0, r0

2000005c <i2c>:
2000005c:	00000000 	andeq	r0, r0, r0
20000060:	00000000 	andeq	r0, r0, r0
20000064:	00000000 	andeq	r0, r0, r0
20000068:	00000000 	andeq	r0, r0, r0

2000006c <imu_sensor>:
2000006c:	00000000 	andeq	r0, r0, r0
20000070:	00000000 	andeq	r0, r0, r0
20000074:	00000000 	andeq	r0, r0, r0
20000078:	00000000 	andeq	r0, r0, r0
2000007c:	00000000 	andeq	r0, r0, r0
20000080:	00000000 	andeq	r0, r0, r0
20000084:	00000000 	andeq	r0, r0, r0
20000088:	00000000 	andeq	r0, r0, r0
2000008c:	00000000 	andeq	r0, r0, r0
20000090:	00000000 	andeq	r0, r0, r0
20000094:	00000000 	andeq	r0, r0, r0
20000098:	00000000 	andeq	r0, r0, r0
2000009c:	00000000 	andeq	r0, r0, r0
200000a0:	00000000 	andeq	r0, r0, r0
200000a4:	00000000 	andeq	r0, r0, r0
200000a8:	00000000 	andeq	r0, r0, r0
200000ac:	00000000 	andeq	r0, r0, r0

200000b0 <key>:
200000b0:	00000000 	andeq	r0, r0, r0
200000b4:	00000000 	andeq	r0, r0, r0
200000b8:	00000000 	andeq	r0, r0, r0
200000bc:	00000000 	andeq	r0, r0, r0
200000c0:	00000000 	andeq	r0, r0, r0
200000c4:	00000000 	andeq	r0, r0, r0

200000c8 <line_sensor>:
200000c8:	00000000 	andeq	r0, r0, r0
200000cc:	00000000 	andeq	r0, r0, r0
200000d0:	00000000 	andeq	r0, r0, r0
200000d4:	00000000 	andeq	r0, r0, r0
200000d8:	00000000 	andeq	r0, r0, r0
200000dc:	00000000 	andeq	r0, r0, r0
200000e0:	00000000 	andeq	r0, r0, r0
200000e4:	00000000 	andeq	r0, r0, r0
200000e8:	00000000 	andeq	r0, r0, r0
200000ec:	00000000 	andeq	r0, r0, r0
200000f0:	00000000 	andeq	r0, r0, r0
200000f4:	00000000 	andeq	r0, r0, r0
200000f8:	00000000 	andeq	r0, r0, r0
200000fc:	00000000 	andeq	r0, r0, r0
20000100:	00000000 	andeq	r0, r0, r0
20000104:	00000000 	andeq	r0, r0, r0
20000108:	00000000 	andeq	r0, r0, r0
2000010c:	00000000 	andeq	r0, r0, r0
20000110:	00000000 	andeq	r0, r0, r0
20000114:	00000000 	andeq	r0, r0, r0
20000118:	00000000 	andeq	r0, r0, r0
2000011c:	00000000 	andeq	r0, r0, r0
20000120:	00000000 	andeq	r0, r0, r0
20000124:	00000000 	andeq	r0, r0, r0
20000128:	00000000 	andeq	r0, r0, r0
2000012c:	00000000 	andeq	r0, r0, r0
20000130:	00000000 	andeq	r0, r0, r0
20000134:	00000000 	andeq	r0, r0, r0
20000138:	00000000 	andeq	r0, r0, r0
2000013c:	00000000 	andeq	r0, r0, r0
20000140:	00000000 	andeq	r0, r0, r0
20000144:	00000000 	andeq	r0, r0, r0
20000148:	00000000 	andeq	r0, r0, r0
2000014c:	00000000 	andeq	r0, r0, r0
20000150:	00000000 	andeq	r0, r0, r0
20000154:	00000000 	andeq	r0, r0, r0
20000158:	00000000 	andeq	r0, r0, r0
2000015c:	00000000 	andeq	r0, r0, r0
20000160:	00000000 	andeq	r0, r0, r0
20000164:	00000000 	andeq	r0, r0, r0
20000168:	00000000 	andeq	r0, r0, r0
2000016c:	00000000 	andeq	r0, r0, r0
20000170:	00000000 	andeq	r0, r0, r0
20000174:	00000000 	andeq	r0, r0, r0
20000178:	00000000 	andeq	r0, r0, r0
2000017c:	00000000 	andeq	r0, r0, r0
20000180:	00000000 	andeq	r0, r0, r0

20000184 <motor_controll>:
20000184:	00000000 	andeq	r0, r0, r0
20000188:	00000000 	andeq	r0, r0, r0
2000018c:	00000000 	andeq	r0, r0, r0
20000190:	00000000 	andeq	r0, r0, r0
20000194:	00000000 	andeq	r0, r0, r0
20000198:	00000000 	andeq	r0, r0, r0
2000019c:	00000000 	andeq	r0, r0, r0
200001a0:	00000000 	andeq	r0, r0, r0
200001a4:	00000000 	andeq	r0, r0, r0
200001a8:	00000000 	andeq	r0, r0, r0
200001ac:	00000000 	andeq	r0, r0, r0
200001b0:	00000000 	andeq	r0, r0, r0
200001b4:	00000000 	andeq	r0, r0, r0
200001b8:	00000000 	andeq	r0, r0, r0
200001bc:	00000000 	andeq	r0, r0, r0
200001c0:	00000000 	andeq	r0, r0, r0
200001c4:	00000000 	andeq	r0, r0, r0
200001c8:	00000000 	andeq	r0, r0, r0
200001cc:	00000000 	andeq	r0, r0, r0
200001d0:	00000000 	andeq	r0, r0, r0
200001d4:	00000000 	andeq	r0, r0, r0
200001d8:	00000000 	andeq	r0, r0, r0
200001dc:	00000000 	andeq	r0, r0, r0
200001e0:	00000000 	andeq	r0, r0, r0
200001e4:	00000000 	andeq	r0, r0, r0
200001e8:	00000000 	andeq	r0, r0, r0
200001ec:	00000000 	andeq	r0, r0, r0
200001f0:	00000000 	andeq	r0, r0, r0
200001f4:	00000000 	andeq	r0, r0, r0
200001f8:	00000000 	andeq	r0, r0, r0
200001fc:	00000000 	andeq	r0, r0, r0
20000200:	00000000 	andeq	r0, r0, r0
20000204:	00000000 	andeq	r0, r0, r0
20000208:	00000000 	andeq	r0, r0, r0
2000020c:	00000000 	andeq	r0, r0, r0
20000210:	00000000 	andeq	r0, r0, r0

20000214 <terminal>:
20000214:	00000000 	andeq	r0, r0, r0

20000218 <timer>:
20000218:	00000000 	andeq	r0, r0, r0

2000021c <mem_ptr>:
2000021c:	00000000 	andeq	r0, r0, r0

20000220 <g_time>:
20000220:	00000000 	andeq	r0, r0, r0

20000224 <g_timers>:
20000224:	00000000 	andeq	r0, r0, r0
20000228:	00000000 	andeq	r0, r0, r0
2000022c:	00000000 	andeq	r0, r0, r0
20000230:	00000000 	andeq	r0, r0, r0
20000234:	00000000 	andeq	r0, r0, r0
20000238:	00000000 	andeq	r0, r0, r0
2000023c:	00000000 	andeq	r0, r0, r0
20000240:	00000000 	andeq	r0, r0, r0
20000244:	00000000 	andeq	r0, r0, r0
20000248:	00000000 	andeq	r0, r0, r0
2000024c:	00000000 	andeq	r0, r0, r0
20000250:	00000000 	andeq	r0, r0, r0
20000254:	00000000 	andeq	r0, r0, r0
20000258:	00000000 	andeq	r0, r0, r0
2000025c:	00000000 	andeq	r0, r0, r0
20000260:	00000000 	andeq	r0, r0, r0
20000264:	00000000 	andeq	r0, r0, r0
20000268:	00000000 	andeq	r0, r0, r0
2000026c:	00000000 	andeq	r0, r0, r0
20000270:	00000000 	andeq	r0, r0, r0
20000274:	00000000 	andeq	r0, r0, r0
20000278:	00000000 	andeq	r0, r0, r0
2000027c:	00000000 	andeq	r0, r0, r0
20000280:	00000000 	andeq	r0, r0, r0
20000284:	00000000 	andeq	r0, r0, r0
20000288:	00000000 	andeq	r0, r0, r0
2000028c:	00000000 	andeq	r0, r0, r0
20000290:	00000000 	andeq	r0, r0, r0
20000294:	00000000 	andeq	r0, r0, r0
20000298:	00000000 	andeq	r0, r0, r0
2000029c:	00000000 	andeq	r0, r0, r0
200002a0:	00000000 	andeq	r0, r0, r0
200002a4:	00000000 	andeq	r0, r0, r0
200002a8:	00000000 	andeq	r0, r0, r0
200002ac:	00000000 	andeq	r0, r0, r0
200002b0:	00000000 	andeq	r0, r0, r0
200002b4:	00000000 	andeq	r0, r0, r0
200002b8:	00000000 	andeq	r0, r0, r0
200002bc:	00000000 	andeq	r0, r0, r0
200002c0:	00000000 	andeq	r0, r0, r0
200002c4:	00000000 	andeq	r0, r0, r0
200002c8:	00000000 	andeq	r0, r0, r0
200002cc:	00000000 	andeq	r0, r0, r0
200002d0:	00000000 	andeq	r0, r0, r0
200002d4:	00000000 	andeq	r0, r0, r0
200002d8:	00000000 	andeq	r0, r0, r0
200002dc:	00000000 	andeq	r0, r0, r0
200002e0:	00000000 	andeq	r0, r0, r0
200002e4:	00000000 	andeq	r0, r0, r0
200002e8:	00000000 	andeq	r0, r0, r0
200002ec:	00000000 	andeq	r0, r0, r0
200002f0:	00000000 	andeq	r0, r0, r0
200002f4:	00000000 	andeq	r0, r0, r0
200002f8:	00000000 	andeq	r0, r0, r0
200002fc:	00000000 	andeq	r0, r0, r0
20000300:	00000000 	andeq	r0, r0, r0
20000304:	00000000 	andeq	r0, r0, r0
20000308:	00000000 	andeq	r0, r0, r0
2000030c:	00000000 	andeq	r0, r0, r0
20000310:	00000000 	andeq	r0, r0, r0
20000314:	00000000 	andeq	r0, r0, r0
20000318:	00000000 	andeq	r0, r0, r0
2000031c:	00000000 	andeq	r0, r0, r0
20000320:	00000000 	andeq	r0, r0, r0
20000324:	00000000 	andeq	r0, r0, r0
20000328:	00000000 	andeq	r0, r0, r0
2000032c:	00000000 	andeq	r0, r0, r0
20000330:	00000000 	andeq	r0, r0, r0
20000334:	00000000 	andeq	r0, r0, r0
20000338:	00000000 	andeq	r0, r0, r0
2000033c:	00000000 	andeq	r0, r0, r0
20000340:	00000000 	andeq	r0, r0, r0
20000344:	00000000 	andeq	r0, r0, r0
20000348:	00000000 	andeq	r0, r0, r0
2000034c:	00000000 	andeq	r0, r0, r0
20000350:	00000000 	andeq	r0, r0, r0
20000354:	00000000 	andeq	r0, r0, r0
20000358:	00000000 	andeq	r0, r0, r0
2000035c:	00000000 	andeq	r0, r0, r0
20000360:	00000000 	andeq	r0, r0, r0

20000364 <__dso_handle>:
20000364:	00000000 	andeq	r0, r0, r0

20000368 <g_left_encoder>:
20000368:	00000000 	andeq	r0, r0, r0

2000036c <g_right_encoder>:
2000036c:	00000000 	andeq	r0, r0, r0

Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <__text_size__+0x10cd4dc>
   4:	4e472820 	cdpmi	8, 4, cr2, cr7, cr0, {1}
   8:	6f542055 	svcvs	0x00542055
   c:	20736c6f 	rsbscs	r6, r3, pc, ror #24
  10:	20726f66 	rsbscs	r6, r2, r6, ror #30
  14:	206d7241 	rsbcs	r7, sp, r1, asr #4
  18:	65626d45 	strbvs	r6, [r2, #-3397]!	; 0xfffff2bb
  1c:	64656464 	strbtvs	r6, [r5], #-1124	; 0xfffffb9c
  20:	6f725020 	svcvs	0x00725020
  24:	73736563 	cmnvc	r3, #415236096	; 0x18c00000
  28:	2073726f 	rsbscs	r7, r3, pc, ror #4
  2c:	30322d37 	eorscc	r2, r2, r7, lsr sp
  30:	712d3831 			; <UNDEFINED> instruction: 0x712d3831
  34:	70752d33 	rsbsvc	r2, r5, r3, lsr sp
  38:	65746164 	ldrbvs	r6, [r4, #-356]!	; 0xfffffe9c
  3c:	2e372029 	cdpcs	0, 3, cr2, cr7, cr9, {1}
  40:	20312e33 	eorscs	r2, r1, r3, lsr lr
  44:	38313032 	ldmdacc	r1!, {r1, r4, r5, ip, sp}
  48:	32323630 	eorscc	r3, r2, #48, 12	; 0x3000000
  4c:	65722820 	ldrbvs	r2, [r2, #-2080]!	; 0xfffff7e0
  50:	7361656c 	cmnvc	r1, #108, 10	; 0x1b000000
  54:	5b202965 	blpl	80a5f0 <__text_size__+0x806da8>
  58:	2f4d5241 	svccs	0x004d5241
  5c:	65626d65 	strbvs	r6, [r2, #-3429]!	; 0xfffff29b
  60:	64656464 	strbtvs	r6, [r5], #-1124	; 0xfffffb9c
  64:	622d372d 	eorvs	r3, sp, #11796480	; 0xb40000
  68:	636e6172 	cmnvs	lr, #-2147483620	; 0x8000001c
  6c:	65722068 	ldrbvs	r2, [r2, #-104]!	; 0xffffff98
  70:	69736976 	ldmdbvs	r3!, {r1, r2, r4, r5, r6, r8, fp, sp, lr}^
  74:	32206e6f 	eorcc	r6, r0, #1776	; 0x6f0
  78:	30393136 	eorscc	r3, r9, r6, lsr r1
  7c:	Address 0x000000000000007c is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003441 	andeq	r3, r0, r1, asr #8
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	0000002a 	andeq	r0, r0, sl, lsr #32
  10:	726f4305 	rsbvc	r4, pc, #335544320	; 0x14000000
  14:	2d786574 	cfldr64cs	mvdx6, [r8, #-464]!	; 0xfffffe30
  18:	0600344d 	streq	r3, [r0], -sp, asr #8
  1c:	094d070d 	stmdbeq	sp, {r0, r2, r3, r8, r9, sl}^
  20:	12020a02 	andne	r0, r2, #8192	; 0x2000
  24:	15011404 	strne	r1, [r1, #-1028]	; 0xfffffbfc
  28:	18031701 	stmdane	r3, {r0, r8, r9, sl, ip}
  2c:	1a011901 	bne	46438 <__text_size__+0x42bf0>
  30:	22041e01 	andcs	r1, r4, #1, 28
  34:	Address 0x0000000000000034 is out of bounds.

