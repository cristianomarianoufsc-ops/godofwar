#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162840
// Address: 0x162840 - 0x1654e0
void sub_00162840_0x162840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162840_0x162840");
#endif

    ctx->pc = 0x162840u;

label_162840:
    // 0x162840: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x162840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x162844: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x162844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x162848: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x162848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x16284c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16284cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162850: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x162850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x162854: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x162854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x162858: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x162858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x16285c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x162860: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x162860u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x162864: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x162864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x162868: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x162868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x16286c: 0x8e720144  lw          $s2, 0x144($s3)
    ctx->pc = 0x16286cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x162870: 0x56400025  bnel        $s2, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x162870u;
    {
        const bool branch_taken_0x162870 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x162870) {
            ctx->pc = 0x162874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162870u;
            // 0x162874: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162908u;
            goto label_162908;
        }
    }
    ctx->pc = 0x162878u;
    // 0x162878: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x162878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16287c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x16287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x162880: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x162880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x162884: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x162884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16288c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162890: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x162894: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x162894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x162898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16289c: 0x90660010  lbu         $a2, 0x10($v1)
    ctx->pc = 0x16289cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1628a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1628a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1628a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1628a8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1628A8u;
    {
        const bool branch_taken_0x1628a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1628A8u;
            // 0x1628ac: 0x8c4300c0  lw          $v1, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628a8) {
            ctx->pc = 0x1628CCu;
            goto label_1628cc;
        }
    }
    ctx->pc = 0x1628B0u;
label_1628b0:
    // 0x1628b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1628b4: 0x0  nop
    ctx->pc = 0x1628b4u;
    // NOP
    // 0x1628b8: 0x0  nop
    ctx->pc = 0x1628b8u;
    // NOP
    // 0x1628bc: 0x0  nop
    ctx->pc = 0x1628bcu;
    // NOP
    // 0x1628c0: 0x0  nop
    ctx->pc = 0x1628c0u;
    // NOP
    // 0x1628c4: 0x14a6fffa  bne         $a1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1628C4u;
    {
        const bool branch_taken_0x1628c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1628C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1628C4u;
            // 0x1628c8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628c4) {
            ctx->pc = 0x1628B0u;
            runtime->cooperativeGuestYield();
            goto label_1628b0;
        }
    }
    ctx->pc = 0x1628CCu;
label_1628cc:
    // 0x1628cc: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1628ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1628d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1628d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628d4: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x1628d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x1628d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1628d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1628dc: 0xde4200c0  ld          $v0, 0xC0($s2)
    ctx->pc = 0x1628dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1628e0: 0x264300c0  addiu       $v1, $s2, 0xC0
    ctx->pc = 0x1628e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1628e4: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x1628e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1628e8: 0xae720144  sw          $s2, 0x144($s3)
    ctx->pc = 0x1628e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 18));
    // 0x1628ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1628ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1628f0: 0xfe4200c0  sd          $v0, 0xC0($s2)
    ctx->pc = 0x1628f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 192), GPR_U64(ctx, 2));
    // 0x1628f4: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x1628f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1628f8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1628f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1628fc: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x1628fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x162900: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x162900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x162904: 0x0  nop
    ctx->pc = 0x162904u;
    // NOP
label_162908:
    // 0x162908: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x162908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16290c: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x16290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x162910: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x162910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x162914: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162914u;
    {
        const bool branch_taken_0x162914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162914u;
            // 0x162918: 0x26500124  addiu       $s0, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162914) {
            ctx->pc = 0x16292Cu;
            goto label_16292c;
        }
    }
    ctx->pc = 0x16291Cu;
    // 0x16291c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x16291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x162920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162924: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x162924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x162928: 0xe28021  addu        $s0, $a3, $v0
    ctx->pc = 0x162928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_16292c:
    // 0x16292c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x162930: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x162930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x162934: 0x70441b89  pcpyld      $v1, $v0, $a0
    ctx->pc = 0x162934u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x162938: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x162938u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16293c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x16293cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x162940: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x162944: 0x8c910104  lw          $s1, 0x104($a0)
    ctx->pc = 0x162944u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x162948: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x162948u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x16294c: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x16294cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x162950: 0x8cf40034  lw          $s4, 0x34($a3)
    ctx->pc = 0x162950u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x162954: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x162954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x162958: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x162958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16295c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x16295cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162960: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x162960u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x162964: 0xdea5bdf8  ld          $a1, -0x4208($s5)
    ctx->pc = 0x162964u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x162968: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x162968u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x16296c: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16296Cu;
    {
        const bool branch_taken_0x16296c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x16296c) {
            ctx->pc = 0x162970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16296Cu;
            // 0x162970: 0x8e23008c  lw          $v1, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162988u;
            goto label_162988;
        }
    }
    ctx->pc = 0x162974u;
    // 0x162974: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x162974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162978: 0xc04da64  jal         func_136990
    ctx->pc = 0x162978u;
    SET_GPR_U32(ctx, 31, 0x162980u);
    ctx->pc = 0x16297Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162978u;
            // 0x16297c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162980u; }
        if (ctx->pc != 0x162980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162980u; }
        if (ctx->pc != 0x162980u) { return; }
    }
    ctx->pc = 0x162980u;
    // 0x162980: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x162980u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x162984: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x162984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_162988:
    // 0x162988: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x162988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x16298c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16298cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162990: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x162990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162994: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x162994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x162998: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x162998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16299c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x16299cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1629a0: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1629a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1629a4: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1629a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1629a8: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1629a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1629ac: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1629acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1629b0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1629b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1629b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1629b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1629b8: 0x86420060  lh          $v0, 0x60($s2)
    ctx->pc = 0x1629b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1629bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1629BCu;
    {
        const bool branch_taken_0x1629bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1629C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1629BCu;
            // 0x1629c0: 0xdea5bdf8  ld          $a1, -0x4208($s5) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629bc) {
            ctx->pc = 0x1629D0u;
            goto label_1629d0;
        }
    }
    ctx->pc = 0x1629C4u;
    // 0x1629c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1629C4u;
    {
        const bool branch_taken_0x1629c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1629C4u;
            // 0x1629c8: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629c4) {
            ctx->pc = 0x1629E8u;
            goto label_1629e8;
        }
    }
    ctx->pc = 0x1629CCu;
    // 0x1629cc: 0x0  nop
    ctx->pc = 0x1629ccu;
    // NOP
label_1629d0:
    // 0x1629d0: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x1629d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1629d4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1629D4u;
    {
        const bool branch_taken_0x1629d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1629D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1629D4u;
            // 0x1629d8: 0x26420070  addiu       $v0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629d4) {
            ctx->pc = 0x1629E8u;
            goto label_1629e8;
        }
    }
    ctx->pc = 0x1629DCu;
    // 0x1629dc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1629DCu;
    SET_GPR_U32(ctx, 31, 0x1629E4u);
    ctx->pc = 0x1629E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1629DCu;
            // 0x1629e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629E4u; }
        if (ctx->pc != 0x1629E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629E4u; }
        if (ctx->pc != 0x1629E4u) { return; }
    }
    ctx->pc = 0x1629E4u;
    // 0x1629e4: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x1629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1629e8:
    // 0x1629e8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1629e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1629ec: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1629ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1629f0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1629f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1629f4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1629f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1629f8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1629f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1629fc: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1629fcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162a00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x162a00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162a04: 0x46000004  c1          0x4
    ctx->pc = 0x162a04u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x162a08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x162a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x162a0c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x162a0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162a10: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x162a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162a14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x162a14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x162a18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x162a18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x162a1c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x162a1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a20: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x162a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x162a24: 0xc4614a50  lwc1        $f1, 0x4A50($v1)
    ctx->pc = 0x162a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162a28: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x162a28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162a2c: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x162a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162a30: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x162a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162a34: 0x7a420100  lq          $v0, 0x100($s2)
    ctx->pc = 0x162a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x162a38: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x162a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x162a3c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x162a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x162a40: 0xc6600140  lwc1        $f0, 0x140($s3)
    ctx->pc = 0x162a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162a44: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x162a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x162a48: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x162A48u;
    {
        const bool branch_taken_0x162a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A48u;
            // 0x162a4c: 0x460008a9  min.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = std::min(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a48) {
            ctx->pc = 0x162AACu;
            goto label_162aac;
        }
    }
    ctx->pc = 0x162A50u;
    // 0x162a50: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x162a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x162a54: 0x0  nop
    ctx->pc = 0x162a54u;
    // NOP
label_162a58:
    // 0x162a58: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x162a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x162a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162a60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x162a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x162a64: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x162a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x162a68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x162A68u;
    {
        const bool branch_taken_0x162a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A68u;
            // 0x162a6c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a68) {
            ctx->pc = 0x162A7Cu;
            goto label_162a7c;
        }
    }
    ctx->pc = 0x162A70u;
    // 0x162a70: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x162a70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x162a74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162A74u;
    {
        const bool branch_taken_0x162a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A74u;
            // 0x162a78: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a74) {
            ctx->pc = 0x162A80u;
            goto label_162a80;
        }
    }
    ctx->pc = 0x162A7Cu;
label_162a7c:
    // 0x162a7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x162a7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162a80:
    // 0x162a80: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x162A80u;
    {
        const bool branch_taken_0x162a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a80) {
            ctx->pc = 0x162A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162A80u;
            // 0x162a84: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162AA4u;
            goto label_162aa4;
        }
    }
    ctx->pc = 0x162A88u;
    // 0x162a88: 0xdc6200c0  ld          $v0, 0xC0($v1)
    ctx->pc = 0x162a88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x162a8c: 0x30420810  andi        $v0, $v0, 0x810
    ctx->pc = 0x162a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2064);
    // 0x162a90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x162A90u;
    {
        const bool branch_taken_0x162a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a90) {
            ctx->pc = 0x162A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162A90u;
            // 0x162a94: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162AA4u;
            goto label_162aa4;
        }
    }
    ctx->pc = 0x162A98u;
    // 0x162a98: 0x78620100  lq          $v0, 0x100($v1)
    ctx->pc = 0x162a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x162a9c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x162a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x162aa0: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x162aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_162aa4:
    // 0x162aa4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x162AA4u;
    {
        const bool branch_taken_0x162aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162AA4u;
            // 0x162aa8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162aa4) {
            ctx->pc = 0x162A58u;
            runtime->cooperativeGuestYield();
            goto label_162a58;
        }
    }
    ctx->pc = 0x162AACu;
label_162aac:
    // 0x162aac: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x162aacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162ab0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x162ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x162ab4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x162ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162ab8: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x162ab8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162abc: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x162abcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162ac0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x162ac0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162ac4: 0x704418a8  pceqw       $v1, $v0, $a0
    ctx->pc = 0x162ac4u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x162ac8: 0x70031dc8  ppach       $v1, $zero, $v1
    ctx->pc = 0x162ac8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x162acc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x162accu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x162ad0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x162ad0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x162ad4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x162ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x162ad8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x162ad8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x162adc: 0x4a211858  vmulx.w     $vf1, $vf3, $vf1x
    ctx->pc = 0x162adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162ae0: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x162ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162ae4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x162ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x162ae8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x162ae8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162aec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162af0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x162af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x162af4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x162af4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x162af8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x162af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162afc: 0x4be21868  vadd.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x162afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162b00: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x162b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162b04: 0x267100f0  addiu       $s1, $s3, 0xF0
    ctx->pc = 0x162b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x162b08: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x162b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x162b0c: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x162b0cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x162b10: 0xfa6300f0  sqc2        $vf3, 0xF0($s3)
    ctx->pc = 0x162b10u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x162b14: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x162b14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162b18: 0xfa6100f0  sqc2        $vf1, 0xF0($s3)
    ctx->pc = 0x162b18u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162b1c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x162b1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162b20: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x162b20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x162b24: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x162B24u;
    {
        const bool branch_taken_0x162b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B24u;
            // 0x162b28: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b24) {
            ctx->pc = 0x162D10u;
            goto label_162d10;
        }
    }
    ctx->pc = 0x162B2Cu;
    // 0x162b2c: 0x8e63014c  lw          $v1, 0x14C($s3)
    ctx->pc = 0x162b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x162b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162b34: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x162B34u;
    {
        const bool branch_taken_0x162b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B34u;
            // 0x162b38: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b34) {
            ctx->pc = 0x162B68u;
            goto label_162b68;
        }
    }
    ctx->pc = 0x162B3Cu;
    // 0x162b3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162B3Cu;
    {
        const bool branch_taken_0x162b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B3Cu;
            // 0x162b40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b3c) {
            ctx->pc = 0x162B58u;
            goto label_162b58;
        }
    }
    ctx->pc = 0x162B44u;
    // 0x162b44: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x162B44u;
    {
        const bool branch_taken_0x162b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b44) {
            ctx->pc = 0x162BD4u;
            goto label_162bd4;
        }
    }
    ctx->pc = 0x162B4Cu;
    // 0x162b4c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x162B4Cu;
    {
        const bool branch_taken_0x162b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B4Cu;
            // 0x162b50: 0x8e62014c  lw          $v0, 0x14C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b4c) {
            ctx->pc = 0x162D14u;
            goto label_162d14;
        }
    }
    ctx->pc = 0x162B54u;
    // 0x162b54: 0x0  nop
    ctx->pc = 0x162b54u;
    // NOP
label_162b58:
    // 0x162b58: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x162B58u;
    {
        const bool branch_taken_0x162b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162b58) {
            ctx->pc = 0x162BD4u;
            goto label_162bd4;
        }
    }
    ctx->pc = 0x162B60u;
    // 0x162b60: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x162B60u;
    {
        const bool branch_taken_0x162b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B60u;
            // 0x162b64: 0x8e62014c  lw          $v0, 0x14C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b60) {
            ctx->pc = 0x162D14u;
            goto label_162d14;
        }
    }
    ctx->pc = 0x162B68u;
label_162b68:
    // 0x162b68: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x162b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x162b6c: 0xc05891c  jal         func_162470
    ctx->pc = 0x162B6Cu;
    SET_GPR_U32(ctx, 31, 0x162B74u);
    ctx->pc = 0x162B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B6Cu;
            // 0x162b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162470u;
    if (runtime->hasFunction(0x162470u)) {
        auto targetFn = runtime->lookupFunction(0x162470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B74u; }
        if (ctx->pc != 0x162B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_162470_0x1624a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B74u; }
        if (ctx->pc != 0x162B74u) { return; }
    }
    ctx->pc = 0x162B74u;
    // 0x162b74: 0xdba30090  lqc2        $vf3, 0x90($sp)
    ctx->pc = 0x162b74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x162b78: 0x70023ca9  por         $a3, $zero, $v0
    ctx->pc = 0x162b78u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x162b7c: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x162b7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162b80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x162b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b84: 0xc058970  jal         func_1625C0
    ctx->pc = 0x162B84u;
    SET_GPR_U32(ctx, 31, 0x162B8Cu);
    ctx->pc = 0x162B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B84u;
            // 0x162b88: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1625C0u;
    if (runtime->hasFunction(0x1625C0u)) {
        auto targetFn = runtime->lookupFunction(0x1625C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B8Cu; }
        if (ctx->pc != 0x162B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1625c0_0x162840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B8Cu; }
        if (ctx->pc != 0x162B8Cu) { return; }
    }
    ctx->pc = 0x162B8Cu;
    // 0x162b8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x162b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b94: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x162b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162b98: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x162b98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162ba0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162ba0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162ba4: 0x0  nop
    ctx->pc = 0x162ba4u;
    // NOP
    // 0x162ba8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x162BA8u;
    {
        const bool branch_taken_0x162ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162ba8) {
            ctx->pc = 0x162BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162BA8u;
            // 0x162bac: 0xfa6200f0  sqc2        $vf2, 0xF0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 240), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162BC8u;
            goto label_162bc8;
        }
    }
    ctx->pc = 0x162BB0u;
    // 0x162bb0: 0x8e630148  lw          $v1, 0x148($s3)
    ctx->pc = 0x162bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x162bb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x162bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x162bb8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x162bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x162bbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x162bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x162bc0: 0xae630148  sw          $v1, 0x148($s3)
    ctx->pc = 0x162bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
    // 0x162bc4: 0xfa6200f0  sqc2        $vf2, 0xF0($s3)
    ctx->pc = 0x162bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 240), _mm_castps_si128(ctx->vu0_vf[2]));
label_162bc8:
    // 0x162bc8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x162bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x162bcc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x162BCCu;
    {
        const bool branch_taken_0x162bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162BCCu;
            // 0x162bd0: 0xf84200e0  sqc2        $vf2, 0xE0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 224), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162bcc) {
            ctx->pc = 0x162D10u;
            goto label_162d10;
        }
    }
    ctx->pc = 0x162BD4u;
label_162bd4:
    // 0x162bd4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x162bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x162bd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bdc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x162bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x162be0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x162be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x162be4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x162be4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162be8: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x162be8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x162bec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x162becu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x162bf0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x162bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x162bf4: 0x4a232040  vaddx.w     $vf1, $vf4, $vf3x
    ctx->pc = 0x162bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162bf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x162bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x162bfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162c00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x162c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x162c04: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x162c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x162c08: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x162c08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x162c0c: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x162c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162c10: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x162c10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162c14: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x162c14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162c18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162c1c: 0x4b0418c7  vsubw.x     $vf3, $vf3, $vf4w
    ctx->pc = 0x162c1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x162c20: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x162c20u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x162c24: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x162c24u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162c28: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x162c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x162c2c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x162c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x162c30: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x162c30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x162c34: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x162c34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x162c38: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x162c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162c3c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x162c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162c40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x162c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x162c44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x162c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162c48: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x162c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162c4c: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x162c4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162c50: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x162c50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162c54: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x162c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162c58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x162c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x162c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c60: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x162c60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x162c64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x162c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x162c68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x162c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x162c6c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x162c6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x162c70: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x162c70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162c74: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x162c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162c78: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x162c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x162c7c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x162c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162c80: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x162c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162c84: 0xf84100e0  sqc2        $vf1, 0xE0($v0)
    ctx->pc = 0x162c84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162c88: 0x8e62014c  lw          $v0, 0x14C($s3)
    ctx->pc = 0x162c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x162c8c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x162c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x162c90: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x162C90u;
    {
        const bool branch_taken_0x162c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162c90) {
            ctx->pc = 0x162C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162C90u;
            // 0x162c94: 0x8e62014c  lw          $v0, 0x14C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162D14u;
            goto label_162d14;
        }
    }
    ctx->pc = 0x162C98u;
    // 0x162c98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x162c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162c9c: 0xc05891c  jal         func_162470
    ctx->pc = 0x162C9Cu;
    SET_GPR_U32(ctx, 31, 0x162CA4u);
    ctx->pc = 0x162CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C9Cu;
            // 0x162ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162470u;
    if (runtime->hasFunction(0x162470u)) {
        auto targetFn = runtime->lookupFunction(0x162470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CA4u; }
        if (ctx->pc != 0x162CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_162470_0x1624a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CA4u; }
        if (ctx->pc != 0x162CA4u) { return; }
    }
    ctx->pc = 0x162CA4u;
    // 0x162ca4: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x162ca4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162ca8: 0x701034a9  por         $a2, $zero, $s0
    ctx->pc = 0x162ca8u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x162cac: 0x70023ca9  por         $a3, $zero, $v0
    ctx->pc = 0x162cacu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x162cb0: 0xc058970  jal         func_1625C0
    ctx->pc = 0x162CB0u;
    SET_GPR_U32(ctx, 31, 0x162CB8u);
    ctx->pc = 0x162CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162CB0u;
            // 0x162cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1625C0u;
    if (runtime->hasFunction(0x1625C0u)) {
        auto targetFn = runtime->lookupFunction(0x1625C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CB8u; }
        if (ctx->pc != 0x162CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1625c0_0x162840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CB8u; }
        if (ctx->pc != 0x162CB8u) { return; }
    }
    ctx->pc = 0x162CB8u;
    // 0x162cb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x162cb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162cbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x162cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162cc0: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x162cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162cc4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x162cc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ccc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x162cccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162cd0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x162CD0u;
    {
        const bool branch_taken_0x162cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162cd0) {
            ctx->pc = 0x162CF0u;
            goto label_162cf0;
        }
    }
    ctx->pc = 0x162CD8u;
    // 0x162cd8: 0x8e630148  lw          $v1, 0x148($s3)
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x162cdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x162cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x162ce0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x162ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x162ce4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x162ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x162ce8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x162CE8u;
    {
        const bool branch_taken_0x162ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162CE8u;
            // 0x162cec: 0xae630148  sw          $v1, 0x148($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ce8) {
            ctx->pc = 0x162D10u;
            goto label_162d10;
        }
    }
    ctx->pc = 0x162CF0u;
label_162cf0:
    // 0x162cf0: 0x3c02467a  lui         $v0, 0x467A
    ctx->pc = 0x162cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18042 << 16));
    // 0x162cf4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x162cf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162cf8: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x162cf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162cfc: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x162cfcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162d00: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x162d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162d04: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x162d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162d08: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x162d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x162d0c: 0xf84100e0  sqc2        $vf1, 0xE0($v0)
    ctx->pc = 0x162d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_162d10:
    // 0x162d10: 0x8e62014c  lw          $v0, 0x14C($s3)
    ctx->pc = 0x162d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
label_162d14:
    // 0x162d14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x162d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x162d18: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x162D18u;
    {
        const bool branch_taken_0x162d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D18u;
            // 0x162d1c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d18) {
            ctx->pc = 0x162E58u;
            goto label_162e58;
        }
    }
    ctx->pc = 0x162D20u;
    // 0x162d20: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x162d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x162d24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x162d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d28: 0x2452bc78  addiu       $s2, $v0, -0x4388
    ctx->pc = 0x162d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x162d2c: 0xc058912  jal         func_162448
    ctx->pc = 0x162D2Cu;
    SET_GPR_U32(ctx, 31, 0x162D34u);
    ctx->pc = 0x162D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D2Cu;
            // 0x162d30: 0x8c51bc78  lw          $s1, -0x4388($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162448u;
    if (runtime->hasFunction(0x162448u)) {
        auto targetFn = runtime->lookupFunction(0x162448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D34u; }
        if (ctx->pc != 0x162D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_162448_0x162470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D34u; }
        if (ctx->pc != 0x162D34u) { return; }
    }
    ctx->pc = 0x162D34u;
    // 0x162d34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x162d34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x162d38: 0x1232002c  beq         $s1, $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x162D38u;
    {
        const bool branch_taken_0x162d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x162D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D38u;
            // 0x162d3c: 0x4614a540  add.s       $f21, $f20, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d38) {
            ctx->pc = 0x162DECu;
            goto label_162dec;
        }
    }
    ctx->pc = 0x162D40u;
    // 0x162d40: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x162d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x162d44: 0x0  nop
    ctx->pc = 0x162d44u;
    // NOP
label_162d48:
    // 0x162d48: 0x8c6203a4  lw          $v0, 0x3A4($v1)
    ctx->pc = 0x162d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 932)));
    // 0x162d4c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x162D4Cu;
    {
        const bool branch_taken_0x162d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D4Cu;
            // 0x162d50: 0x24620360  addiu       $v0, $v1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d4c) {
            ctx->pc = 0x162DE0u;
            goto label_162de0;
        }
    }
    ctx->pc = 0x162D54u;
    // 0x162d54: 0x8c640360  lw          $a0, 0x360($v1)
    ctx->pc = 0x162d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x162d58: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162D58u;
    {
        const bool branch_taken_0x162d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x162D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D58u;
            // 0x162d5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d58) {
            ctx->pc = 0x162D64u;
            goto label_162d64;
        }
    }
    ctx->pc = 0x162D60u;
    // 0x162d60: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x162d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_162d64:
    // 0x162d64: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x162D64u;
    {
        const bool branch_taken_0x162d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D64u;
            // 0x162d68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d64) {
            ctx->pc = 0x162DE0u;
            goto label_162de0;
        }
    }
    ctx->pc = 0x162D6Cu;
    // 0x162d6c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x162d6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x162d70: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162D70u;
    {
        const bool branch_taken_0x162d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x162D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D70u;
            // 0x162d74: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d70) {
            ctx->pc = 0x162D80u;
            goto label_162d80;
        }
    }
    ctx->pc = 0x162D78u;
    // 0x162d78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x162D78u;
    {
        const bool branch_taken_0x162d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D78u;
            // 0x162d7c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d78) {
            ctx->pc = 0x162D9Cu;
            goto label_162d9c;
        }
    }
    ctx->pc = 0x162D80u;
label_162d80:
    // 0x162d80: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x162d80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x162d84: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x162d84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x162d88: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x162D88u;
    {
        const bool branch_taken_0x162d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x162D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D88u;
            // 0x162d8c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d88) {
            ctx->pc = 0x162D9Cu;
            goto label_162d9c;
        }
    }
    ctx->pc = 0x162D90u;
    // 0x162d90: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x162D90u;
    SET_GPR_U32(ctx, 31, 0x162D98u);
    ctx->pc = 0x162D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D90u;
            // 0x162d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D98u; }
        if (ctx->pc != 0x162D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D98u; }
        if (ctx->pc != 0x162D98u) { return; }
    }
    ctx->pc = 0x162D98u;
    // 0x162d98: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x162d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_162d9c:
    // 0x162d9c: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x162d9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x162da0: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x162da0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162da4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x162da4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162da8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x162da8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162dac: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x162dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162db0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x162db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x162db4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x162db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x162db8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162dbc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x162dbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162dc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162dc4: 0x46000004  c1          0x4
    ctx->pc = 0x162dc4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x162dc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x162dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x162dcc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x162dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162dd0: 0x0  nop
    ctx->pc = 0x162dd0u;
    // NOP
    // 0x162dd4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x162DD4u;
    {
        const bool branch_taken_0x162dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162dd4) {
            ctx->pc = 0x162DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162DD4u;
            // 0x162dd8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x162DE0u;
            goto label_162de0;
        }
    }
    ctx->pc = 0x162DDCu;
    // 0x162ddc: 0x0  nop
    ctx->pc = 0x162ddcu;
    // NOP
label_162de0:
    // 0x162de0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x162de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162de4: 0x5632ffd8  bnel        $s1, $s2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x162DE4u;
    {
        const bool branch_taken_0x162de4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x162de4) {
            ctx->pc = 0x162DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162DE4u;
            // 0x162de8: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162D48u;
            runtime->cooperativeGuestYield();
            goto label_162d48;
        }
    }
    ctx->pc = 0x162DECu;
label_162dec:
    // 0x162dec: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x162decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162df0: 0x0  nop
    ctx->pc = 0x162df0u;
    // NOP
    // 0x162df4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x162DF4u;
    {
        const bool branch_taken_0x162df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162DF4u;
            // 0x162df8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162df4) {
            ctx->pc = 0x162E58u;
            goto label_162e58;
        }
    }
    ctx->pc = 0x162DFCu;
    // 0x162dfc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x162dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x162e00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x162e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x162e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162e08: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x162e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x162e0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x162e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x162e10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162e14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x162e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x162e18: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x162e18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x162e1c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x162e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162e20: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x162e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x162e24: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x162e24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x162e28: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x162e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162e2c: 0x0  nop
    ctx->pc = 0x162e2cu;
    // NOP
    // 0x162e30: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x162E30u;
    {
        const bool branch_taken_0x162e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162e30) {
            ctx->pc = 0x162E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162E30u;
            // 0x162e34: 0xda6100f0  lqc2        $vf1, 0xF0($s3) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162E48u;
            goto label_162e48;
        }
    }
    ctx->pc = 0x162E38u;
    // 0x162e38: 0xc660012c  lwc1        $f0, 0x12C($s3)
    ctx->pc = 0x162e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162e3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x162e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x162e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x162E40u;
    {
        const bool branch_taken_0x162e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E40u;
            // 0x162e44: 0xe660012c  swc1        $f0, 0x12C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e40) {
            ctx->pc = 0x162E58u;
            goto label_162e58;
        }
    }
    ctx->pc = 0x162E48u;
label_162e48:
    // 0x162e48: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x162e48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162e4c: 0xfa6100f0  sqc2        $vf1, 0xF0($s3)
    ctx->pc = 0x162e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162e50: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x162e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x162e54: 0x0  nop
    ctx->pc = 0x162e54u;
    // NOP
label_162e58:
    // 0x162e58: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x162e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x162e5c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x162e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x162e60: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x162e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x162e64: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x162e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x162e68: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x162e68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x162e6c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x162e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x162e70: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x162e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x162e74: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x162e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x162e78: 0x3e00008  jr          $ra
    ctx->pc = 0x162E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E78u;
            // 0x162e7c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162840u: goto label_162840;
            case 0x1628B0u: goto label_1628b0;
            case 0x1628CCu: goto label_1628cc;
            case 0x162908u: goto label_162908;
            case 0x16292Cu: goto label_16292c;
            case 0x162988u: goto label_162988;
            case 0x1629D0u: goto label_1629d0;
            case 0x1629E8u: goto label_1629e8;
            case 0x162A58u: goto label_162a58;
            case 0x162A7Cu: goto label_162a7c;
            case 0x162A80u: goto label_162a80;
            case 0x162AA4u: goto label_162aa4;
            case 0x162AACu: goto label_162aac;
            case 0x162B58u: goto label_162b58;
            case 0x162B68u: goto label_162b68;
            case 0x162BC8u: goto label_162bc8;
            case 0x162BD4u: goto label_162bd4;
            case 0x162CF0u: goto label_162cf0;
            case 0x162D10u: goto label_162d10;
            case 0x162D14u: goto label_162d14;
            case 0x162D48u: goto label_162d48;
            case 0x162D64u: goto label_162d64;
            case 0x162D80u: goto label_162d80;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DE0u: goto label_162de0;
            case 0x162DECu: goto label_162dec;
            case 0x162E48u: goto label_162e48;
            case 0x162E58u: goto label_162e58;
            case 0x162EA8u: goto label_162ea8;
            case 0x162EECu: goto label_162eec;
            case 0x162EF4u: goto label_162ef4;
            case 0x162F00u: goto label_162f00;
            case 0x162F68u: goto label_162f68;
            case 0x162F98u: goto label_162f98;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x163004u: goto label_163004;
            case 0x163040u: goto label_163040;
            case 0x163090u: goto label_163090;
            case 0x1630E8u: goto label_1630e8;
            case 0x163188u: goto label_163188;
            case 0x1631D4u: goto label_1631d4;
            case 0x163200u: goto label_163200;
            case 0x1632E8u: goto label_1632e8;
            case 0x1632F8u: goto label_1632f8;
            case 0x163338u: goto label_163338;
            case 0x16334Cu: goto label_16334c;
            case 0x16338Cu: goto label_16338c;
            case 0x1633A0u: goto label_1633a0;
            case 0x1633B0u: goto label_1633b0;
            case 0x163418u: goto label_163418;
            case 0x163454u: goto label_163454;
            case 0x163464u: goto label_163464;
            case 0x163470u: goto label_163470;
            case 0x163528u: goto label_163528;
            case 0x163658u: goto label_163658;
            case 0x163680u: goto label_163680;
            case 0x163698u: goto label_163698;
            case 0x1636C8u: goto label_1636c8;
            case 0x1636D8u: goto label_1636d8;
            case 0x1636F4u: goto label_1636f4;
            case 0x163730u: goto label_163730;
            case 0x1637A8u: goto label_1637a8;
            case 0x1637E0u: goto label_1637e0;
            case 0x163870u: goto label_163870;
            case 0x163960u: goto label_163960;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639E4u: goto label_1639e4;
            case 0x163A00u: goto label_163a00;
            case 0x163A98u: goto label_163a98;
            case 0x163B30u: goto label_163b30;
            case 0x163B40u: goto label_163b40;
            case 0x163B50u: goto label_163b50;
            case 0x163B6Cu: goto label_163b6c;
            case 0x163B78u: goto label_163b78;
            case 0x163C30u: goto label_163c30;
            case 0x163D60u: goto label_163d60;
            case 0x163D88u: goto label_163d88;
            case 0x163DA0u: goto label_163da0;
            case 0x163DD0u: goto label_163dd0;
            case 0x163DE0u: goto label_163de0;
            case 0x163DFCu: goto label_163dfc;
            case 0x163E98u: goto label_163e98;
            case 0x163F18u: goto label_163f18;
            case 0x163F50u: goto label_163f50;
            case 0x163FE8u: goto label_163fe8;
            case 0x164180u: goto label_164180;
            case 0x164228u: goto label_164228;
            case 0x164238u: goto label_164238;
            case 0x16423Cu: goto label_16423c;
            case 0x16424Cu: goto label_16424c;
            case 0x164268u: goto label_164268;
            case 0x164308u: goto label_164308;
            case 0x164430u: goto label_164430;
            case 0x164440u: goto label_164440;
            case 0x164450u: goto label_164450;
            case 0x16446Cu: goto label_16446c;
            case 0x164488u: goto label_164488;
            case 0x164540u: goto label_164540;
            case 0x164670u: goto label_164670;
            case 0x164698u: goto label_164698;
            case 0x1646B0u: goto label_1646b0;
            case 0x1646E0u: goto label_1646e0;
            case 0x1646F0u: goto label_1646f0;
            case 0x16470Cu: goto label_16470c;
            case 0x164760u: goto label_164760;
            case 0x1647E0u: goto label_1647e0;
            case 0x164818u: goto label_164818;
            case 0x1648A8u: goto label_1648a8;
            case 0x164A30u: goto label_164a30;
            case 0x164AC8u: goto label_164ac8;
            case 0x164AD8u: goto label_164ad8;
            case 0x164ADCu: goto label_164adc;
            case 0x164AECu: goto label_164aec;
            case 0x164B08u: goto label_164b08;
            case 0x164BA0u: goto label_164ba0;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CF4u: goto label_164cf4;
            case 0x164D00u: goto label_164d00;
            case 0x164DB8u: goto label_164db8;
            case 0x164EE8u: goto label_164ee8;
            case 0x164F10u: goto label_164f10;
            case 0x164F28u: goto label_164f28;
            case 0x164F58u: goto label_164f58;
            case 0x164F68u: goto label_164f68;
            case 0x164F84u: goto label_164f84;
            case 0x164FC0u: goto label_164fc0;
            case 0x165038u: goto label_165038;
            case 0x165070u: goto label_165070;
            case 0x165100u: goto label_165100;
            case 0x1651F0u: goto label_1651f0;
            case 0x165250u: goto label_165250;
            case 0x165260u: goto label_165260;
            case 0x165264u: goto label_165264;
            case 0x165274u: goto label_165274;
            case 0x165290u: goto label_165290;
            case 0x165328u: goto label_165328;
            case 0x1653C0u: goto label_1653c0;
            case 0x1653D0u: goto label_1653d0;
            case 0x1653E0u: goto label_1653e0;
            case 0x1653F4u: goto label_1653f4;
            case 0x1653F8u: goto label_1653f8;
            case 0x1653FCu: goto label_1653fc;
            case 0x165448u: goto label_165448;
            case 0x16544Cu: goto label_16544c;
            case 0x1654A0u: goto label_1654a0;
            case 0x1654ACu: goto label_1654ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162E80u;
    // 0x162e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162e84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x162e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x162e88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x162e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x162e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162e94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x162e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x162e98: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x162e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x162e9c: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x162E9Cu;
    {
        const bool branch_taken_0x162e9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x162e9c) {
            ctx->pc = 0x162EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162E9Cu;
            // 0x162ea0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162F00u;
            goto label_162f00;
        }
    }
    ctx->pc = 0x162EA4u;
    // 0x162ea4: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x162ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_162ea8:
    // 0x162ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x162ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162eac: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x162eacu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x162eb0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x162eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162eb4: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x162eb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x162eb8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x162eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x162ebc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x162EBCu;
    {
        const bool branch_taken_0x162ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162EBCu;
            // 0x162ec0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ebc) {
            ctx->pc = 0x162EF4u;
            goto label_162ef4;
        }
    }
    ctx->pc = 0x162EC4u;
    // 0x162ec4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x162ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x162ec8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x162EC8u;
    {
        const bool branch_taken_0x162ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162EC8u;
            // 0x162ecc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ec8) {
            ctx->pc = 0x162EECu;
            goto label_162eec;
        }
    }
    ctx->pc = 0x162ED0u;
    // 0x162ed0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x162ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x162ed4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x162ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x162ed8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x162ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x162edc: 0x40f809  jalr        $v0
    ctx->pc = 0x162EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162EE4u);
        ctx->pc = 0x162EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162EDCu;
            // 0x162ee0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x162EE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162840u: goto label_162840;
            case 0x1628B0u: goto label_1628b0;
            case 0x1628CCu: goto label_1628cc;
            case 0x162908u: goto label_162908;
            case 0x16292Cu: goto label_16292c;
            case 0x162988u: goto label_162988;
            case 0x1629D0u: goto label_1629d0;
            case 0x1629E8u: goto label_1629e8;
            case 0x162A58u: goto label_162a58;
            case 0x162A7Cu: goto label_162a7c;
            case 0x162A80u: goto label_162a80;
            case 0x162AA4u: goto label_162aa4;
            case 0x162AACu: goto label_162aac;
            case 0x162B58u: goto label_162b58;
            case 0x162B68u: goto label_162b68;
            case 0x162BC8u: goto label_162bc8;
            case 0x162BD4u: goto label_162bd4;
            case 0x162CF0u: goto label_162cf0;
            case 0x162D10u: goto label_162d10;
            case 0x162D14u: goto label_162d14;
            case 0x162D48u: goto label_162d48;
            case 0x162D64u: goto label_162d64;
            case 0x162D80u: goto label_162d80;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DE0u: goto label_162de0;
            case 0x162DECu: goto label_162dec;
            case 0x162E48u: goto label_162e48;
            case 0x162E58u: goto label_162e58;
            case 0x162EA8u: goto label_162ea8;
            case 0x162EECu: goto label_162eec;
            case 0x162EF4u: goto label_162ef4;
            case 0x162F00u: goto label_162f00;
            case 0x162F68u: goto label_162f68;
            case 0x162F98u: goto label_162f98;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x163004u: goto label_163004;
            case 0x163040u: goto label_163040;
            case 0x163090u: goto label_163090;
            case 0x1630E8u: goto label_1630e8;
            case 0x163188u: goto label_163188;
            case 0x1631D4u: goto label_1631d4;
            case 0x163200u: goto label_163200;
            case 0x1632E8u: goto label_1632e8;
            case 0x1632F8u: goto label_1632f8;
            case 0x163338u: goto label_163338;
            case 0x16334Cu: goto label_16334c;
            case 0x16338Cu: goto label_16338c;
            case 0x1633A0u: goto label_1633a0;
            case 0x1633B0u: goto label_1633b0;
            case 0x163418u: goto label_163418;
            case 0x163454u: goto label_163454;
            case 0x163464u: goto label_163464;
            case 0x163470u: goto label_163470;
            case 0x163528u: goto label_163528;
            case 0x163658u: goto label_163658;
            case 0x163680u: goto label_163680;
            case 0x163698u: goto label_163698;
            case 0x1636C8u: goto label_1636c8;
            case 0x1636D8u: goto label_1636d8;
            case 0x1636F4u: goto label_1636f4;
            case 0x163730u: goto label_163730;
            case 0x1637A8u: goto label_1637a8;
            case 0x1637E0u: goto label_1637e0;
            case 0x163870u: goto label_163870;
            case 0x163960u: goto label_163960;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639E4u: goto label_1639e4;
            case 0x163A00u: goto label_163a00;
            case 0x163A98u: goto label_163a98;
            case 0x163B30u: goto label_163b30;
            case 0x163B40u: goto label_163b40;
            case 0x163B50u: goto label_163b50;
            case 0x163B6Cu: goto label_163b6c;
            case 0x163B78u: goto label_163b78;
            case 0x163C30u: goto label_163c30;
            case 0x163D60u: goto label_163d60;
            case 0x163D88u: goto label_163d88;
            case 0x163DA0u: goto label_163da0;
            case 0x163DD0u: goto label_163dd0;
            case 0x163DE0u: goto label_163de0;
            case 0x163DFCu: goto label_163dfc;
            case 0x163E98u: goto label_163e98;
            case 0x163F18u: goto label_163f18;
            case 0x163F50u: goto label_163f50;
            case 0x163FE8u: goto label_163fe8;
            case 0x164180u: goto label_164180;
            case 0x164228u: goto label_164228;
            case 0x164238u: goto label_164238;
            case 0x16423Cu: goto label_16423c;
            case 0x16424Cu: goto label_16424c;
            case 0x164268u: goto label_164268;
            case 0x164308u: goto label_164308;
            case 0x164430u: goto label_164430;
            case 0x164440u: goto label_164440;
            case 0x164450u: goto label_164450;
            case 0x16446Cu: goto label_16446c;
            case 0x164488u: goto label_164488;
            case 0x164540u: goto label_164540;
            case 0x164670u: goto label_164670;
            case 0x164698u: goto label_164698;
            case 0x1646B0u: goto label_1646b0;
            case 0x1646E0u: goto label_1646e0;
            case 0x1646F0u: goto label_1646f0;
            case 0x16470Cu: goto label_16470c;
            case 0x164760u: goto label_164760;
            case 0x1647E0u: goto label_1647e0;
            case 0x164818u: goto label_164818;
            case 0x1648A8u: goto label_1648a8;
            case 0x164A30u: goto label_164a30;
            case 0x164AC8u: goto label_164ac8;
            case 0x164AD8u: goto label_164ad8;
            case 0x164ADCu: goto label_164adc;
            case 0x164AECu: goto label_164aec;
            case 0x164B08u: goto label_164b08;
            case 0x164BA0u: goto label_164ba0;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CF4u: goto label_164cf4;
            case 0x164D00u: goto label_164d00;
            case 0x164DB8u: goto label_164db8;
            case 0x164EE8u: goto label_164ee8;
            case 0x164F10u: goto label_164f10;
            case 0x164F28u: goto label_164f28;
            case 0x164F58u: goto label_164f58;
            case 0x164F68u: goto label_164f68;
            case 0x164F84u: goto label_164f84;
            case 0x164FC0u: goto label_164fc0;
            case 0x165038u: goto label_165038;
            case 0x165070u: goto label_165070;
            case 0x165100u: goto label_165100;
            case 0x1651F0u: goto label_1651f0;
            case 0x165250u: goto label_165250;
            case 0x165260u: goto label_165260;
            case 0x165264u: goto label_165264;
            case 0x165274u: goto label_165274;
            case 0x165290u: goto label_165290;
            case 0x165328u: goto label_165328;
            case 0x1653C0u: goto label_1653c0;
            case 0x1653D0u: goto label_1653d0;
            case 0x1653E0u: goto label_1653e0;
            case 0x1653F4u: goto label_1653f4;
            case 0x1653F8u: goto label_1653f8;
            case 0x1653FCu: goto label_1653fc;
            case 0x165448u: goto label_165448;
            case 0x16544Cu: goto label_16544c;
            case 0x1654A0u: goto label_1654a0;
            case 0x1654ACu: goto label_1654ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162EE4u; }
            if (ctx->pc != 0x162EE4u) { return; }
        }
        }
    }
    ctx->pc = 0x162EE4u;
    // 0x162ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162EE4u;
    {
        const bool branch_taken_0x162ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ee4) {
            ctx->pc = 0x162EF4u;
            goto label_162ef4;
        }
    }
    ctx->pc = 0x162EECu;
label_162eec:
    // 0x162eec: 0xc058a10  jal         func_162840
    ctx->pc = 0x162EECu;
    SET_GPR_U32(ctx, 31, 0x162EF4u);
    ctx->pc = 0x162840u;
    runtime->cooperativeGuestYield();
    goto label_162840;
    ctx->pc = 0x162EF4u;
label_162ef4:
    // 0x162ef4: 0x1640ffec  bnez        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x162EF4u;
    {
        const bool branch_taken_0x162ef4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x162EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162EF4u;
            // 0x162ef8: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ef4) {
            ctx->pc = 0x162EA8u;
            runtime->cooperativeGuestYield();
            goto label_162ea8;
        }
    }
    ctx->pc = 0x162EFCu;
    // 0x162efc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x162efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_162f00:
    // 0x162f00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x162f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162f04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x162f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x162F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F0Cu;
            // 0x162f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162840u: goto label_162840;
            case 0x1628B0u: goto label_1628b0;
            case 0x1628CCu: goto label_1628cc;
            case 0x162908u: goto label_162908;
            case 0x16292Cu: goto label_16292c;
            case 0x162988u: goto label_162988;
            case 0x1629D0u: goto label_1629d0;
            case 0x1629E8u: goto label_1629e8;
            case 0x162A58u: goto label_162a58;
            case 0x162A7Cu: goto label_162a7c;
            case 0x162A80u: goto label_162a80;
            case 0x162AA4u: goto label_162aa4;
            case 0x162AACu: goto label_162aac;
            case 0x162B58u: goto label_162b58;
            case 0x162B68u: goto label_162b68;
            case 0x162BC8u: goto label_162bc8;
            case 0x162BD4u: goto label_162bd4;
            case 0x162CF0u: goto label_162cf0;
            case 0x162D10u: goto label_162d10;
            case 0x162D14u: goto label_162d14;
            case 0x162D48u: goto label_162d48;
            case 0x162D64u: goto label_162d64;
            case 0x162D80u: goto label_162d80;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DE0u: goto label_162de0;
            case 0x162DECu: goto label_162dec;
            case 0x162E48u: goto label_162e48;
            case 0x162E58u: goto label_162e58;
            case 0x162EA8u: goto label_162ea8;
            case 0x162EECu: goto label_162eec;
            case 0x162EF4u: goto label_162ef4;
            case 0x162F00u: goto label_162f00;
            case 0x162F68u: goto label_162f68;
            case 0x162F98u: goto label_162f98;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x163004u: goto label_163004;
            case 0x163040u: goto label_163040;
            case 0x163090u: goto label_163090;
            case 0x1630E8u: goto label_1630e8;
            case 0x163188u: goto label_163188;
            case 0x1631D4u: goto label_1631d4;
            case 0x163200u: goto label_163200;
            case 0x1632E8u: goto label_1632e8;
            case 0x1632F8u: goto label_1632f8;
            case 0x163338u: goto label_163338;
            case 0x16334Cu: goto label_16334c;
            case 0x16338Cu: goto label_16338c;
            case 0x1633A0u: goto label_1633a0;
            case 0x1633B0u: goto label_1633b0;
            case 0x163418u: goto label_163418;
            case 0x163454u: goto label_163454;
            case 0x163464u: goto label_163464;
            case 0x163470u: goto label_163470;
            case 0x163528u: goto label_163528;
            case 0x163658u: goto label_163658;
            case 0x163680u: goto label_163680;
            case 0x163698u: goto label_163698;
            case 0x1636C8u: goto label_1636c8;
            case 0x1636D8u: goto label_1636d8;
            case 0x1636F4u: goto label_1636f4;
            case 0x163730u: goto label_163730;
            case 0x1637A8u: goto label_1637a8;
            case 0x1637E0u: goto label_1637e0;
            case 0x163870u: goto label_163870;
            case 0x163960u: goto label_163960;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639E4u: goto label_1639e4;
            case 0x163A00u: goto label_163a00;
            case 0x163A98u: goto label_163a98;
            case 0x163B30u: goto label_163b30;
            case 0x163B40u: goto label_163b40;
            case 0x163B50u: goto label_163b50;
            case 0x163B6Cu: goto label_163b6c;
            case 0x163B78u: goto label_163b78;
            case 0x163C30u: goto label_163c30;
            case 0x163D60u: goto label_163d60;
            case 0x163D88u: goto label_163d88;
            case 0x163DA0u: goto label_163da0;
            case 0x163DD0u: goto label_163dd0;
            case 0x163DE0u: goto label_163de0;
            case 0x163DFCu: goto label_163dfc;
            case 0x163E98u: goto label_163e98;
            case 0x163F18u: goto label_163f18;
            case 0x163F50u: goto label_163f50;
            case 0x163FE8u: goto label_163fe8;
            case 0x164180u: goto label_164180;
            case 0x164228u: goto label_164228;
            case 0x164238u: goto label_164238;
            case 0x16423Cu: goto label_16423c;
            case 0x16424Cu: goto label_16424c;
            case 0x164268u: goto label_164268;
            case 0x164308u: goto label_164308;
            case 0x164430u: goto label_164430;
            case 0x164440u: goto label_164440;
            case 0x164450u: goto label_164450;
            case 0x16446Cu: goto label_16446c;
            case 0x164488u: goto label_164488;
            case 0x164540u: goto label_164540;
            case 0x164670u: goto label_164670;
            case 0x164698u: goto label_164698;
            case 0x1646B0u: goto label_1646b0;
            case 0x1646E0u: goto label_1646e0;
            case 0x1646F0u: goto label_1646f0;
            case 0x16470Cu: goto label_16470c;
            case 0x164760u: goto label_164760;
            case 0x1647E0u: goto label_1647e0;
            case 0x164818u: goto label_164818;
            case 0x1648A8u: goto label_1648a8;
            case 0x164A30u: goto label_164a30;
            case 0x164AC8u: goto label_164ac8;
            case 0x164AD8u: goto label_164ad8;
            case 0x164ADCu: goto label_164adc;
            case 0x164AECu: goto label_164aec;
            case 0x164B08u: goto label_164b08;
            case 0x164BA0u: goto label_164ba0;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CF4u: goto label_164cf4;
            case 0x164D00u: goto label_164d00;
            case 0x164DB8u: goto label_164db8;
            case 0x164EE8u: goto label_164ee8;
            case 0x164F10u: goto label_164f10;
            case 0x164F28u: goto label_164f28;
            case 0x164F58u: goto label_164f58;
            case 0x164F68u: goto label_164f68;
            case 0x164F84u: goto label_164f84;
            case 0x164FC0u: goto label_164fc0;
            case 0x165038u: goto label_165038;
            case 0x165070u: goto label_165070;
            case 0x165100u: goto label_165100;
            case 0x1651F0u: goto label_1651f0;
            case 0x165250u: goto label_165250;
            case 0x165260u: goto label_165260;
            case 0x165264u: goto label_165264;
            case 0x165274u: goto label_165274;
            case 0x165290u: goto label_165290;
            case 0x165328u: goto label_165328;
            case 0x1653C0u: goto label_1653c0;
            case 0x1653D0u: goto label_1653d0;
            case 0x1653E0u: goto label_1653e0;
            case 0x1653F4u: goto label_1653f4;
            case 0x1653F8u: goto label_1653f8;
            case 0x1653FCu: goto label_1653fc;
            case 0x165448u: goto label_165448;
            case 0x16544Cu: goto label_16544c;
            case 0x1654A0u: goto label_1654a0;
            case 0x1654ACu: goto label_1654ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162F14u;
    // 0x162f14: 0x0  nop
    ctx->pc = 0x162f14u;
    // NOP
    // 0x162f18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x162f1c: 0x27bdf880  addiu       $sp, $sp, -0x780
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965376));
    // 0x162f20: 0x8c42104c  lw          $v0, 0x104C($v0)
    ctx->pc = 0x162f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
    // 0x162f24: 0x7fb10760  sq          $s1, 0x760($sp)
    ctx->pc = 0x162f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1888), GPR_VEC(ctx, 17));
    // 0x162f28: 0xafa20580  sw          $v0, 0x580($sp)
    ctx->pc = 0x162f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1408), GPR_U32(ctx, 2));
    // 0x162f2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f30: 0x7fb00770  sq          $s0, 0x770($sp)
    ctx->pc = 0x162f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1904), GPR_VEC(ctx, 16));
    // 0x162f34: 0x7fb20750  sq          $s2, 0x750($sp)
    ctx->pc = 0x162f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1872), GPR_VEC(ctx, 18));
    // 0x162f38: 0x7fb30740  sq          $s3, 0x740($sp)
    ctx->pc = 0x162f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1856), GPR_VEC(ctx, 19));
    // 0x162f3c: 0x7fb40730  sq          $s4, 0x730($sp)
    ctx->pc = 0x162f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), GPR_VEC(ctx, 20));
    // 0x162f40: 0x7fb50720  sq          $s5, 0x720($sp)
    ctx->pc = 0x162f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1824), GPR_VEC(ctx, 21));
    // 0x162f44: 0x7fb60710  sq          $s6, 0x710($sp)
    ctx->pc = 0x162f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1808), GPR_VEC(ctx, 22));
    // 0x162f48: 0x7fb70700  sq          $s7, 0x700($sp)
    ctx->pc = 0x162f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), GPR_VEC(ctx, 23));
    // 0x162f4c: 0x7fbe06f0  sq          $fp, 0x6F0($sp)
    ctx->pc = 0x162f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 30));
    // 0x162f50: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x162f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
    // 0x162f54: 0x8c430360  lw          $v1, 0x360($v0)
    ctx->pc = 0x162f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x162f58: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x162f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x162f5c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162F5Cu;
    {
        const bool branch_taken_0x162f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F5Cu;
            // 0x162f60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f5c) {
            ctx->pc = 0x162F68u;
            goto label_162f68;
        }
    }
    ctx->pc = 0x162F64u;
    // 0x162f64: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x162f64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_162f68:
    // 0x162f68: 0x12000950  beqz        $s0, . + 4 + (0x950 << 2)
    ctx->pc = 0x162F68u;
    {
        const bool branch_taken_0x162f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F68u;
            // 0x162f6c: 0x8fa30580  lw          $v1, 0x580($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f68) {
            ctx->pc = 0x1654ACu;
            goto label_1654ac;
        }
    }
    ctx->pc = 0x162F70u;
    // 0x162f70: 0x8c6203ac  lw          $v0, 0x3AC($v1)
    ctx->pc = 0x162f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 940)));
    // 0x162f74: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x162f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x162f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162f7c: 0x1040094b  beqz        $v0, . + 4 + (0x94B << 2)
    ctx->pc = 0x162F7Cu;
    {
        const bool branch_taken_0x162f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F7Cu;
            // 0x162f80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f7c) {
            ctx->pc = 0x1654ACu;
            goto label_1654ac;
        }
    }
    ctx->pc = 0x162F84u;
    // 0x162f84: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x162f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x162f88: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162F88u;
    {
        const bool branch_taken_0x162f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x162F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F88u;
            // 0x162f8c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f88) {
            ctx->pc = 0x162F98u;
            goto label_162f98;
        }
    }
    ctx->pc = 0x162F90u;
    // 0x162f90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x162F90u;
    {
        const bool branch_taken_0x162f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F90u;
            // 0x162f94: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f90) {
            ctx->pc = 0x162FB4u;
            goto label_162fb4;
        }
    }
    ctx->pc = 0x162F98u;
label_162f98:
    // 0x162f98: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x162f98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x162f9c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x162f9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x162fa0: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x162FA0u;
    {
        const bool branch_taken_0x162fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x162fa0) {
            ctx->pc = 0x162FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162FA0u;
            // 0x162fa4: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162FB8u;
            goto label_162fb8;
        }
    }
    ctx->pc = 0x162FA8u;
    // 0x162fa8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x162FA8u;
    SET_GPR_U32(ctx, 31, 0x162FB0u);
    ctx->pc = 0x162FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162FA8u;
            // 0x162fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FB0u; }
        if (ctx->pc != 0x162FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FB0u; }
        if (ctx->pc != 0x162FB0u) { return; }
    }
    ctx->pc = 0x162FB0u;
    // 0x162fb0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x162fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_162fb4:
    // 0x162fb4: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x162fb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_162fb8:
    // 0x162fb8: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x162fb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162fbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x162fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x162fc0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x162FC0u;
    {
        const bool branch_taken_0x162fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162fc0) {
            ctx->pc = 0x162FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162FC0u;
            // 0x162fc4: 0x7a0200b0  lq          $v0, 0xB0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163004u;
            goto label_163004;
        }
    }
    ctx->pc = 0x162FC8u;
    // 0x162fc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x162fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162fcc: 0xc0614c6  jal         func_185318
    ctx->pc = 0x162FCCu;
    SET_GPR_U32(ctx, 31, 0x162FD4u);
    ctx->pc = 0x162FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162FCCu;
            // 0x162fd0: 0xfe0300f0  sd          $v1, 0xF0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FD4u; }
        if (ctx->pc != 0x162FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FD4u; }
        if (ctx->pc != 0x162FD4u) { return; }
    }
    ctx->pc = 0x162FD4u;
    // 0x162fd4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x162fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162fe0: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x162fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x162fe4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x162fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162fe8: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x162fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x162fec: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x162fecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162ff0: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x162ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x162ff4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x162ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162ff8: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x162FF8u;
    SET_GPR_U32(ctx, 31, 0x163000u);
    ctx->pc = 0x162FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162FF8u;
            // 0x162ffc: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163000u; }
        if (ctx->pc != 0x163000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163000u; }
        if (ctx->pc != 0x163000u) { return; }
    }
    ctx->pc = 0x163000u;
    // 0x163000: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x163000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_163004:
    // 0x163004: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x163004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x163008: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x163008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16300c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x16300cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x163010: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x163010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x163014: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x163014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x163018: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x163018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x16301c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x16301cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x163020: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x163020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x163024: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x163024u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x163028: 0x2562e848  addiu       $v0, $t3, -0x17B8
    ctx->pc = 0x163028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961224));
    // 0x16302c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163030: 0x8c470038  lw          $a3, 0x38($v0)
    ctx->pc = 0x163030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x163034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16303c: 0x0  nop
    ctx->pc = 0x16303cu;
    // NOP
label_163040:
    // 0x163040: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x163040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x163044: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x163044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x163048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16304c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x163050: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x163050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x163054: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x163054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x163058: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x163058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16305c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16305Cu;
    {
        const bool branch_taken_0x16305c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16305Cu;
            // 0x163060: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16305c) {
            ctx->pc = 0x163040u;
            runtime->cooperativeGuestYield();
            goto label_163040;
        }
    }
    ctx->pc = 0x163064u;
    // 0x163064: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163068: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x163068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16306c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x16306Cu;
    {
        const bool branch_taken_0x16306c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16306Cu;
            // 0x163070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16306c) {
            ctx->pc = 0x163040u;
            runtime->cooperativeGuestYield();
            goto label_163040;
        }
    }
    ctx->pc = 0x163074u;
    // 0x163074: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x163074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x163078: 0x826818  mult        $t5, $a0, $v0
    ctx->pc = 0x163078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x16307c: 0x2562e848  addiu       $v0, $t3, -0x17B8
    ctx->pc = 0x16307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961224));
    // 0x163080: 0x8c470074  lw          $a3, 0x74($v0)
    ctx->pc = 0x163080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x163084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x163088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16308c: 0x0  nop
    ctx->pc = 0x16308cu;
    // NOP
label_163090:
    // 0x163090: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x163094: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x163098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16309c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1630a0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1630a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1630a4: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x1630a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1630a8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1630a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1630ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1630ACu;
    {
        const bool branch_taken_0x1630ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1630B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1630ACu;
            // 0x1630b0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630ac) {
            ctx->pc = 0x163090u;
            runtime->cooperativeGuestYield();
            goto label_163090;
        }
    }
    ctx->pc = 0x1630B4u;
    // 0x1630b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1630b8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1630b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1630bc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1630BCu;
    {
        const bool branch_taken_0x1630bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1630C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1630BCu;
            // 0x1630c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630bc) {
            ctx->pc = 0x163090u;
            runtime->cooperativeGuestYield();
            goto label_163090;
        }
    }
    ctx->pc = 0x1630C4u;
    // 0x1630c4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1630c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1630c8: 0xc26018  mult        $t4, $a2, $v0
    ctx->pc = 0x1630c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1630cc: 0x2562e848  addiu       $v0, $t3, -0x17B8
    ctx->pc = 0x1630ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961224));
    // 0x1630d0: 0x8c4a0080  lw          $t2, 0x80($v0)
    ctx->pc = 0x1630d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1630d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1630d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1630d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1630dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1630e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630e4: 0x0  nop
    ctx->pc = 0x1630e4u;
    // NOP
label_1630e8:
    // 0x1630e8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1630e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1630ec: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x1630ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1630f0: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x1630f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1630f4: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x1630f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1630f8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1630f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1630fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1630fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163100: 0x28c50007  slti        $a1, $a2, 0x7
    ctx->pc = 0x163100u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x163104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163108: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x163108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16310c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x16310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x163110: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x163110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x163114: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x163114u;
    {
        const bool branch_taken_0x163114 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x163118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163114u;
            // 0x163118: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163114) {
            ctx->pc = 0x1630E8u;
            runtime->cooperativeGuestYield();
            goto label_1630e8;
        }
    }
    ctx->pc = 0x16311Cu;
    // 0x16311c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16311cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x163120: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x163120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x163124: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x163124u;
    {
        const bool branch_taken_0x163124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163124u;
            // 0x163128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163124) {
            ctx->pc = 0x1630E8u;
            runtime->cooperativeGuestYield();
            goto label_1630e8;
        }
    }
    ctx->pc = 0x16312Cu;
    // 0x16312c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16312cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x163130: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x163130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x163134: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x163134u;
    {
        const bool branch_taken_0x163134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163134) {
            ctx->pc = 0x163138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163134u;
            // 0x163138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1630E8u;
            runtime->cooperativeGuestYield();
            goto label_1630e8;
        }
    }
    ctx->pc = 0x16313Cu;
    // 0x16313c: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x16313cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x163140: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x163140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x163144: 0x2562e848  addiu       $v0, $t3, -0x17B8
    ctx->pc = 0x163144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961224));
    // 0x163148: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x163148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16314c: 0x240600aa  addiu       $a2, $zero, 0xAA
    ctx->pc = 0x16314cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x163150: 0xc1102  srl         $v0, $t4, 4
    ctx->pc = 0x163150u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x163154: 0xd2102  srl         $a0, $t5, 4
    ctx->pc = 0x163154u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x163158: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x163158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x16315c: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x16315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x163160: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x163160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x163164: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x163164u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x163168: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x163168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16316c: 0x8e310024  lw          $s1, 0x24($s1)
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x163170: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x163170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x163174: 0xafb10588  sw          $s1, 0x588($sp)
    ctx->pc = 0x163174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1416), GPR_U32(ctx, 17));
    // 0x163178: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x163178u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x16317c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x163180: 0x122008ca  beqz        $s1, . + 4 + (0x8CA << 2)
    ctx->pc = 0x163180u;
    {
        const bool branch_taken_0x163180 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x163184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163180u;
            // 0x163184: 0xafa40584  sw          $a0, 0x584($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163180) {
            ctx->pc = 0x1654ACu;
            goto label_1654ac;
        }
    }
    ctx->pc = 0x163188u;
label_163188:
    // 0x163188: 0x8fa40588  lw          $a0, 0x588($sp)
    ctx->pc = 0x163188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
    // 0x16318c: 0x8fa60580  lw          $a2, 0x580($sp)
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x163190: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x163190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x163194: 0x8cc303ac  lw          $v1, 0x3AC($a2)
    ctx->pc = 0x163194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 940)));
    // 0x163198: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x163198u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x16319c: 0xafa2058c  sw          $v0, 0x58C($sp)
    ctx->pc = 0x16319cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1420), GPR_U32(ctx, 2));
    // 0x1631a0: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x1631a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1631a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1631a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1631a8: 0x106008a7  beqz        $v1, . + 4 + (0x8A7 << 2)
    ctx->pc = 0x1631A8u;
    {
        const bool branch_taken_0x1631a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631A8u;
            // 0x1631ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631a8) {
            ctx->pc = 0x165448u;
            goto label_165448;
        }
    }
    ctx->pc = 0x1631B0u;
    // 0x1631b0: 0x8fa7058c  lw          $a3, 0x58C($sp)
    ctx->pc = 0x1631b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x1631b4: 0x8ce2014c  lw          $v0, 0x14C($a3)
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x1631b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1631b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1631bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1631BCu;
    {
        const bool branch_taken_0x1631bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1631C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631BCu;
            // 0x1631c0: 0x8fa2058c  lw          $v0, 0x58C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631bc) {
            ctx->pc = 0x1631D4u;
            goto label_1631d4;
        }
    }
    ctx->pc = 0x1631C4u;
    // 0x1631c4: 0x8ce20148  lw          $v0, 0x148($a3)
    ctx->pc = 0x1631c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x1631c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1631c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1631cc: 0x1040089e  beqz        $v0, . + 4 + (0x89E << 2)
    ctx->pc = 0x1631CCu;
    {
        const bool branch_taken_0x1631cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631CCu;
            // 0x1631d0: 0x8fa2058c  lw          $v0, 0x58C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631cc) {
            ctx->pc = 0x165448u;
            goto label_165448;
        }
    }
    ctx->pc = 0x1631D4u;
label_1631d4:
    // 0x1631d4: 0x245400f0  addiu       $s4, $v0, 0xF0
    ctx->pc = 0x1631d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1631d8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1631d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1631dc: 0xafa30590  sw          $v1, 0x590($sp)
    ctx->pc = 0x1631dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1424), GPR_U32(ctx, 3));
    // 0x1631e0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1631e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1631e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1631e8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1631e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1631ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1631ECu;
    {
        const bool branch_taken_0x1631ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631ECu;
            // 0x1631f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631ec) {
            ctx->pc = 0x163200u;
            goto label_163200;
        }
    }
    ctx->pc = 0x1631F4u;
    // 0x1631f4: 0x8c620138  lw          $v0, 0x138($v1)
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1631f8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1631fc: 0x22102  srl         $a0, $v0, 4
    ctx->pc = 0x1631fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_163200:
    // 0x163200: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x163200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x163204: 0x8fa60584  lw          $a2, 0x584($sp)
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1412)));
    // 0x163208: 0x8c421048  lw          $v0, 0x1048($v0)
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x16320c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x163210: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x163210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x163214: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x163214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163218: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x163218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x16321c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x16321cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x163220: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x163220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x163224: 0x14400889  bnez        $v0, . + 4 + (0x889 << 2)
    ctx->pc = 0x163224u;
    {
        const bool branch_taken_0x163224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163224u;
            // 0x163228: 0x8fa2058c  lw          $v0, 0x58C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163224) {
            ctx->pc = 0x16544Cu;
            goto label_16544c;
        }
    }
    ctx->pc = 0x16322Cu;
    // 0x16322c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x16322cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x163230: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x163230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163238: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x163238u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16323c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x16323cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x163240: 0x46003032  c.eq.s      $f6, $f0
    ctx->pc = 0x163240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163244: 0x0  nop
    ctx->pc = 0x163244u;
    // NOP
    // 0x163248: 0x45010880  bc1t        . + 4 + (0x880 << 2)
    ctx->pc = 0x163248u;
    {
        const bool branch_taken_0x163248 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163248u;
            // 0x16324c: 0x8fa2058c  lw          $v0, 0x58C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163248) {
            ctx->pc = 0x16544Cu;
            goto label_16544c;
        }
    }
    ctx->pc = 0x163250u;
    // 0x163250: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x163250u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x163254: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x163254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163258: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x163258u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x16325c: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x16325cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x163260: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x163260u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x163264: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x163264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x163268: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x163268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x16326c: 0xd8a10030  lqc2        $vf1, 0x30($a1)
    ctx->pc = 0x16326cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x163270: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x163270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x163274: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x163274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x163278: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x163278u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16327c: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x16327cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x163280: 0x70071f89  pexew       $v1, $a3
    ctx->pc = 0x163280u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x163284: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x163284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x163288: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x163288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x16328c: 0x8fa30580  lw          $v1, 0x580($sp)
    ctx->pc = 0x16328cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x163290: 0x46032141  sub.s       $f5, $f4, $f3
    ctx->pc = 0x163290u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x163294: 0xc4620384  lwc1        $f2, 0x384($v1)
    ctx->pc = 0x163294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163298: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x163298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
    // 0x16329c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16329cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632a0: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x1632a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1632a4: 0x44873800  mtc1        $a3, $f7
    ctx->pc = 0x1632a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1632a8: 0x700717c9  prot3w      $v0, $a3
    ctx->pc = 0x1632a8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1632ac: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x1632acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1632b0: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x1632B0u;
    {
        const bool branch_taken_0x1632b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1632B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1632B0u;
            // 0x1632b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632b0) {
            ctx->pc = 0x1633B0u;
            goto label_1633b0;
        }
    }
    ctx->pc = 0x1632B8u;
    // 0x1632b8: 0x8fa40580  lw          $a0, 0x580($sp)
    ctx->pc = 0x1632b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x1632bc: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x1632bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1632c0: 0xc4810388  lwc1        $f1, 0x388($a0)
    ctx->pc = 0x1632c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1632c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1632c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1632c8: 0x0  nop
    ctx->pc = 0x1632c8u;
    // NOP
    // 0x1632cc: 0x45030038  bc1tl       . + 4 + (0x38 << 2)
    ctx->pc = 0x1632CCu;
    {
        const bool branch_taken_0x1632cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1632cc) {
            ctx->pc = 0x1632D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1632CCu;
            // 0x1632d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1633B0u;
            goto label_1633b0;
        }
    }
    ctx->pc = 0x1632D4u;
    // 0x1632d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1632d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1632d8: 0x0  nop
    ctx->pc = 0x1632d8u;
    // NOP
    // 0x1632dc: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1632DCu;
    {
        const bool branch_taken_0x1632dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1632dc) {
            ctx->pc = 0x1632E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1632DCu;
            // 0x1632e0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1632E8u;
            goto label_1632e8;
        }
    }
    ctx->pc = 0x1632E4u;
    // 0x1632e4: 0x0  nop
    ctx->pc = 0x1632e4u;
    // NOP
label_1632e8:
    // 0x1632e8: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x1632e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1632ec: 0x0  nop
    ctx->pc = 0x1632ecu;
    // NOP
    // 0x1632f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1632F0u;
    {
        const bool branch_taken_0x1632f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1632f0) {
            ctx->pc = 0x1632F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1632F0u;
            // 0x1632f4: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1632F8u;
            goto label_1632f8;
        }
    }
    ctx->pc = 0x1632F8u;
label_1632f8:
    // 0x1632f8: 0x8fa60580  lw          $a2, 0x580($sp)
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x1632fc: 0xc4c002c0  lwc1        $f0, 0x2C0($a2)
    ctx->pc = 0x1632fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163300: 0xc4c102c8  lwc1        $f1, 0x2C8($a2)
    ctx->pc = 0x163300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163304: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x163304u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x163308: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x163308u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x16330c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x16330cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x163310: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x163310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x163314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163318: 0x0  nop
    ctx->pc = 0x163318u;
    // NOP
    // 0x16331c: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x16331Cu;
    {
        const bool branch_taken_0x16331c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16331Cu;
            // 0x163320: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16331c) {
            ctx->pc = 0x1633B0u;
            goto label_1633b0;
        }
    }
    ctx->pc = 0x163324u;
    // 0x163324: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x163324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x163328: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x163328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16332c: 0x0  nop
    ctx->pc = 0x16332cu;
    // NOP
    // 0x163330: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x163330u;
    {
        const bool branch_taken_0x163330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163330) {
            ctx->pc = 0x163334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163330u;
            // 0x163334: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x163338u;
            goto label_163338;
        }
    }
    ctx->pc = 0x163338u;
label_163338:
    // 0x163338: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x163338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16333c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16333cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163340: 0x0  nop
    ctx->pc = 0x163340u;
    // NOP
    // 0x163344: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x163344u;
    {
        const bool branch_taken_0x163344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163344) {
            ctx->pc = 0x163348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163344u;
            // 0x163348: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16334Cu;
            goto label_16334c;
        }
    }
    ctx->pc = 0x16334Cu;
label_16334c:
    // 0x16334c: 0x8fa70580  lw          $a3, 0x580($sp)
    ctx->pc = 0x16334cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x163350: 0xc4e002d4  lwc1        $f0, 0x2D4($a3)
    ctx->pc = 0x163350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163354: 0xc4e102d8  lwc1        $f1, 0x2D8($a3)
    ctx->pc = 0x163354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163358: 0x46004082  mul.s       $f2, $f8, $f0
    ctx->pc = 0x163358u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x16335c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x16335cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x163360: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x163360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x163364: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x163364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x163368: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16336c: 0x0  nop
    ctx->pc = 0x16336cu;
    // NOP
    // 0x163370: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x163370u;
    {
        const bool branch_taken_0x163370 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163370u;
            // 0x163374: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163370) {
            ctx->pc = 0x1633B0u;
            goto label_1633b0;
        }
    }
    ctx->pc = 0x163378u;
    // 0x163378: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x163378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16337c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16337cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163380: 0x0  nop
    ctx->pc = 0x163380u;
    // NOP
    // 0x163384: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x163384u;
    {
        const bool branch_taken_0x163384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163384) {
            ctx->pc = 0x163388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163384u;
            // 0x163388: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16338Cu;
            goto label_16338c;
        }
    }
    ctx->pc = 0x16338Cu;
label_16338c:
    // 0x16338c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x16338cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x163390: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x163390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163394: 0x0  nop
    ctx->pc = 0x163394u;
    // NOP
    // 0x163398: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x163398u;
    {
        const bool branch_taken_0x163398 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163398) {
            ctx->pc = 0x16339Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163398u;
            // 0x16339c: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1633A0u;
            goto label_1633a0;
        }
    }
    ctx->pc = 0x1633A0u;
label_1633a0:
    // 0x1633a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1633a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1633a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1633a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1633a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1633ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1633acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1633b0:
    // 0x1633b0: 0x14800826  bnez        $a0, . + 4 + (0x826 << 2)
    ctx->pc = 0x1633B0u;
    {
        const bool branch_taken_0x1633b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1633B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633B0u;
            // 0x1633b4: 0x8fa2058c  lw          $v0, 0x58C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b0) {
            ctx->pc = 0x16544Cu;
            goto label_16544c;
        }
    }
    ctx->pc = 0x1633B8u;
    // 0x1633b8: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x1633b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1633bc: 0x14400823  bnez        $v0, . + 4 + (0x823 << 2)
    ctx->pc = 0x1633BCu;
    {
        const bool branch_taken_0x1633bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1633C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633BCu;
            // 0x1633c0: 0x8fa2058c  lw          $v0, 0x58C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633bc) {
            ctx->pc = 0x16544Cu;
            goto label_16544c;
        }
    }
    ctx->pc = 0x1633C4u;
    // 0x1633c4: 0x8fa30590  lw          $v1, 0x590($sp)
    ctx->pc = 0x1633c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x1633c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1633c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1633cc: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x1633ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
    // 0x1633d0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1633d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1633d4: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x1633d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
    // 0x1633d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1633d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1633dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1633DCu;
    {
        const bool branch_taken_0x1633dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1633E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633DCu;
            // 0x1633e0: 0xae900038  sw          $s0, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633dc) {
            ctx->pc = 0x163418u;
            goto label_163418;
        }
    }
    ctx->pc = 0x1633E4u;
    // 0x1633e4: 0x8fa40590  lw          $a0, 0x590($sp)
    ctx->pc = 0x1633e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x1633e8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1633e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1633ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1633ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1633f0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1633f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1633f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1633f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1633f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1633f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1633fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1633fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163400: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x163400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163404: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x163404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x163408: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16340c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x16340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x163410: 0x40f809  jalr        $v0
    ctx->pc = 0x163410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163418u);
        ctx->pc = 0x163414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163410u;
            // 0x163414: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x163418u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162840u: goto label_162840;
            case 0x1628B0u: goto label_1628b0;
            case 0x1628CCu: goto label_1628cc;
            case 0x162908u: goto label_162908;
            case 0x16292Cu: goto label_16292c;
            case 0x162988u: goto label_162988;
            case 0x1629D0u: goto label_1629d0;
            case 0x1629E8u: goto label_1629e8;
            case 0x162A58u: goto label_162a58;
            case 0x162A7Cu: goto label_162a7c;
            case 0x162A80u: goto label_162a80;
            case 0x162AA4u: goto label_162aa4;
            case 0x162AACu: goto label_162aac;
            case 0x162B58u: goto label_162b58;
            case 0x162B68u: goto label_162b68;
            case 0x162BC8u: goto label_162bc8;
            case 0x162BD4u: goto label_162bd4;
            case 0x162CF0u: goto label_162cf0;
            case 0x162D10u: goto label_162d10;
            case 0x162D14u: goto label_162d14;
            case 0x162D48u: goto label_162d48;
            case 0x162D64u: goto label_162d64;
            case 0x162D80u: goto label_162d80;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DE0u: goto label_162de0;
            case 0x162DECu: goto label_162dec;
            case 0x162E48u: goto label_162e48;
            case 0x162E58u: goto label_162e58;
            case 0x162EA8u: goto label_162ea8;
            case 0x162EECu: goto label_162eec;
            case 0x162EF4u: goto label_162ef4;
            case 0x162F00u: goto label_162f00;
            case 0x162F68u: goto label_162f68;
            case 0x162F98u: goto label_162f98;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x163004u: goto label_163004;
            case 0x163040u: goto label_163040;
            case 0x163090u: goto label_163090;
            case 0x1630E8u: goto label_1630e8;
            case 0x163188u: goto label_163188;
            case 0x1631D4u: goto label_1631d4;
            case 0x163200u: goto label_163200;
            case 0x1632E8u: goto label_1632e8;
            case 0x1632F8u: goto label_1632f8;
            case 0x163338u: goto label_163338;
            case 0x16334Cu: goto label_16334c;
            case 0x16338Cu: goto label_16338c;
            case 0x1633A0u: goto label_1633a0;
            case 0x1633B0u: goto label_1633b0;
            case 0x163418u: goto label_163418;
            case 0x163454u: goto label_163454;
            case 0x163464u: goto label_163464;
            case 0x163470u: goto label_163470;
            case 0x163528u: goto label_163528;
            case 0x163658u: goto label_163658;
            case 0x163680u: goto label_163680;
            case 0x163698u: goto label_163698;
            case 0x1636C8u: goto label_1636c8;
            case 0x1636D8u: goto label_1636d8;
            case 0x1636F4u: goto label_1636f4;
            case 0x163730u: goto label_163730;
            case 0x1637A8u: goto label_1637a8;
            case 0x1637E0u: goto label_1637e0;
            case 0x163870u: goto label_163870;
            case 0x163960u: goto label_163960;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639E4u: goto label_1639e4;
            case 0x163A00u: goto label_163a00;
            case 0x163A98u: goto label_163a98;
            case 0x163B30u: goto label_163b30;
            case 0x163B40u: goto label_163b40;
            case 0x163B50u: goto label_163b50;
            case 0x163B6Cu: goto label_163b6c;
            case 0x163B78u: goto label_163b78;
            case 0x163C30u: goto label_163c30;
            case 0x163D60u: goto label_163d60;
            case 0x163D88u: goto label_163d88;
            case 0x163DA0u: goto label_163da0;
            case 0x163DD0u: goto label_163dd0;
            case 0x163DE0u: goto label_163de0;
            case 0x163DFCu: goto label_163dfc;
            case 0x163E98u: goto label_163e98;
            case 0x163F18u: goto label_163f18;
            case 0x163F50u: goto label_163f50;
            case 0x163FE8u: goto label_163fe8;
            case 0x164180u: goto label_164180;
            case 0x164228u: goto label_164228;
            case 0x164238u: goto label_164238;
            case 0x16423Cu: goto label_16423c;
            case 0x16424Cu: goto label_16424c;
            case 0x164268u: goto label_164268;
            case 0x164308u: goto label_164308;
            case 0x164430u: goto label_164430;
            case 0x164440u: goto label_164440;
            case 0x164450u: goto label_164450;
            case 0x16446Cu: goto label_16446c;
            case 0x164488u: goto label_164488;
            case 0x164540u: goto label_164540;
            case 0x164670u: goto label_164670;
            case 0x164698u: goto label_164698;
            case 0x1646B0u: goto label_1646b0;
            case 0x1646E0u: goto label_1646e0;
            case 0x1646F0u: goto label_1646f0;
            case 0x16470Cu: goto label_16470c;
            case 0x164760u: goto label_164760;
            case 0x1647E0u: goto label_1647e0;
            case 0x164818u: goto label_164818;
            case 0x1648A8u: goto label_1648a8;
            case 0x164A30u: goto label_164a30;
            case 0x164AC8u: goto label_164ac8;
            case 0x164AD8u: goto label_164ad8;
            case 0x164ADCu: goto label_164adc;
            case 0x164AECu: goto label_164aec;
            case 0x164B08u: goto label_164b08;
            case 0x164BA0u: goto label_164ba0;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CF4u: goto label_164cf4;
            case 0x164D00u: goto label_164d00;
            case 0x164DB8u: goto label_164db8;
            case 0x164EE8u: goto label_164ee8;
            case 0x164F10u: goto label_164f10;
            case 0x164F28u: goto label_164f28;
            case 0x164F58u: goto label_164f58;
            case 0x164F68u: goto label_164f68;
            case 0x164F84u: goto label_164f84;
            case 0x164FC0u: goto label_164fc0;
            case 0x165038u: goto label_165038;
            case 0x165070u: goto label_165070;
            case 0x165100u: goto label_165100;
            case 0x1651F0u: goto label_1651f0;
            case 0x165250u: goto label_165250;
            case 0x165260u: goto label_165260;
            case 0x165264u: goto label_165264;
            case 0x165274u: goto label_165274;
            case 0x165290u: goto label_165290;
            case 0x165328u: goto label_165328;
            case 0x1653C0u: goto label_1653c0;
            case 0x1653D0u: goto label_1653d0;
            case 0x1653E0u: goto label_1653e0;
            case 0x1653F4u: goto label_1653f4;
            case 0x1653F8u: goto label_1653f8;
            case 0x1653FCu: goto label_1653fc;
            case 0x165448u: goto label_165448;
            case 0x16544Cu: goto label_16544c;
            case 0x1654A0u: goto label_1654a0;
            case 0x1654ACu: goto label_1654ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163418u; }
            if (ctx->pc != 0x163418u) { return; }
        }
        }
    }
    ctx->pc = 0x163418u;
label_163418:
    // 0x163418: 0xc05040c  jal         func_141030
    ctx->pc = 0x163418u;
    SET_GPR_U32(ctx, 31, 0x163420u);
    ctx->pc = 0x16341Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163418u;
            // 0x16341c: 0x8fa40590  lw          $a0, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141030u;
    if (runtime->hasFunction(0x141030u)) {
        auto targetFn = runtime->lookupFunction(0x141030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163420u; }
        if (ctx->pc != 0x163420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141030_0x141030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163420u; }
        if (ctx->pc != 0x163420u) { return; }
    }
    ctx->pc = 0x163420u;
    // 0x163420: 0x8fa6058c  lw          $a2, 0x58C($sp)
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x163424: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x163428: 0x8cc3014c  lw          $v1, 0x14C($a2)
    ctx->pc = 0x163428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 332)));
    // 0x16342c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x16342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x163430: 0x107001ce  beq         $v1, $s0, . + 4 + (0x1CE << 2)
    ctx->pc = 0x163430u;
    {
        const bool branch_taken_0x163430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x163434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163430u;
            // 0x163434: 0xafa20594  sw          $v0, 0x594($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163430) {
            ctx->pc = 0x163B6Cu;
            goto label_163b6c;
        }
    }
    ctx->pc = 0x163438u;
    // 0x163438: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x163438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16343c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16343Cu;
    {
        const bool branch_taken_0x16343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16343Cu;
            // 0x163440: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16343c) {
            ctx->pc = 0x163454u;
            goto label_163454;
        }
    }
    ctx->pc = 0x163444u;
    // 0x163444: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x163444u;
    {
        const bool branch_taken_0x163444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163444u;
            // 0x163448: 0x8fa70590  lw          $a3, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163444) {
            ctx->pc = 0x163464u;
            goto label_163464;
        }
    }
    ctx->pc = 0x16344Cu;
    // 0x16344c: 0x100007eb  b           . + 4 + (0x7EB << 2)
    ctx->pc = 0x16344Cu;
    {
        const bool branch_taken_0x16344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16344Cu;
            // 0x163450: 0x8e830034  lw          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16344c) {
            ctx->pc = 0x1653FCu;
            goto label_1653fc;
        }
    }
    ctx->pc = 0x163454u;
label_163454:
    // 0x163454: 0x10620405  beq         $v1, $v0, . + 4 + (0x405 << 2)
    ctx->pc = 0x163454u;
    {
        const bool branch_taken_0x163454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x163458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163454u;
            // 0x163458: 0x8fa70590  lw          $a3, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163454) {
            ctx->pc = 0x16446Cu;
            goto label_16446c;
        }
    }
    ctx->pc = 0x16345Cu;
    // 0x16345c: 0x100007e7  b           . + 4 + (0x7E7 << 2)
    ctx->pc = 0x16345Cu;
    {
        const bool branch_taken_0x16345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16345Cu;
            // 0x163460: 0x8e830034  lw          $v1, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16345c) {
            ctx->pc = 0x1653FCu;
            goto label_1653fc;
        }
    }
    ctx->pc = 0x163464u;
label_163464:
    // 0x163464: 0x8fa70594  lw          $a3, 0x594($sp)
    ctx->pc = 0x163464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x163468: 0x18e007e2  blez        $a3, . + 4 + (0x7E2 << 2)
    ctx->pc = 0x163468u;
    {
        const bool branch_taken_0x163468 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x16346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163468u;
            // 0x16346c: 0xafa00598  sw          $zero, 0x598($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163468) {
            ctx->pc = 0x1653F4u;
            goto label_1653f4;
        }
    }
    ctx->pc = 0x163470u;
label_163470:
    // 0x163470: 0x8fa2058c  lw          $v0, 0x58C($sp)
    ctx->pc = 0x163470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x163474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163478: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x163478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x16347c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x16347cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x163480: 0x8fa40598  lw          $a0, 0x598($sp)
    ctx->pc = 0x163480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x163484: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x163484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x163488: 0x8e960020  lw          $s6, 0x20($s4)
    ctx->pc = 0x163488u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x16348c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16348cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x163490: 0x8e8a0030  lw          $t2, 0x30($s4)
    ctx->pc = 0x163490u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x163494: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x163494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x163498: 0xafa6059c  sw          $a2, 0x59C($sp)
    ctx->pc = 0x163498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1436), GPR_U32(ctx, 6));
    // 0x16349c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16349cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1634a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1634a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634a4: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1634a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1634a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1634ac: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x1634acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x1634b0: 0x1229821  addu        $s3, $t1, $v0
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1634b4: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x1634b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1634b8: 0x8fa2059c  lw          $v0, 0x59C($sp)
    ctx->pc = 0x1634b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1436)));
    // 0x1634bc: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x1634bcu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1634c0: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1634C0u;
    SET_GPR_U32(ctx, 31, 0x1634C8u);
    ctx->pc = 0x1634C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1634C0u;
            // 0x1634c4: 0x4aa823  subu        $s5, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634C8u; }
        if (ctx->pc != 0x1634C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634C8u; }
        if (ctx->pc != 0x1634C8u) { return; }
    }
    ctx->pc = 0x1634C8u;
    // 0x1634c8: 0x8fa4058c  lw          $a0, 0x58C($sp)
    ctx->pc = 0x1634c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x1634cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1634ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634d0: 0x92720011  lbu         $s2, 0x11($s3)
    ctx->pc = 0x1634d0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x1634d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1634d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1634d8: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1634d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1634dc: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x1634dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
    // 0x1634e0: 0x3244001f  andi        $a0, $s2, 0x1F
    ctx->pc = 0x1634e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x1634e4: 0x8cb00104  lw          $s0, 0x104($a1)
    ctx->pc = 0x1634e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1634e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1634e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1634ec: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1634ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1634f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1634f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1634f4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1634f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1634f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1634f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1634fc: 0x10400194  beqz        $v0, . + 4 + (0x194 << 2)
    ctx->pc = 0x1634FCu;
    {
        const bool branch_taken_0x1634fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1634FCu;
            // 0x163500: 0x8fa40598  lw          $a0, 0x598($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634fc) {
            ctx->pc = 0x163B50u;
            goto label_163b50;
        }
    }
    ctx->pc = 0x163504u;
    // 0x163504: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x163504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x163508: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x163508u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x16350c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x16350cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x163510: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163510u;
    {
        const bool branch_taken_0x163510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x163510) {
            ctx->pc = 0x163514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163510u;
            // 0x163514: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163528u;
            goto label_163528;
        }
    }
    ctx->pc = 0x163518u;
    // 0x163518: 0xc04da64  jal         func_136990
    ctx->pc = 0x163518u;
    SET_GPR_U32(ctx, 31, 0x163520u);
    ctx->pc = 0x16351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163518u;
            // 0x16351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163520u; }
        if (ctx->pc != 0x163520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163520u; }
        if (ctx->pc != 0x163520u) { return; }
    }
    ctx->pc = 0x163520u;
    // 0x163520: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x163520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x163524: 0x0  nop
    ctx->pc = 0x163524u;
    // NOP
label_163528:
    // 0x163528: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x163528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x16352c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x16352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x163530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163534: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x163534u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163538: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x163538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16353c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x16353cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x163540: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x163540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x163544: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x163544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x163548: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x163548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x16354c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x16354cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x163550: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x163550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x163554: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x163554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x163558: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x163558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x16355c: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x16355cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x163560: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x163560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x163564: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x163564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x163568: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x163568u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x16356c: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x16356cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x163570: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x163570u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x163574: 0x96640012  lhu         $a0, 0x12($s3)
    ctx->pc = 0x163574u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x163578: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x163578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x16357c: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x16357cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x163580: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x163580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x163584: 0xfba20390  sqc2        $vf2, 0x390($sp)
    ctx->pc = 0x163584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163588: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x163588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16358c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x163590: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x163590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163594: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163598: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x163598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x16359c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16359cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1635a0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1635a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1635a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1635a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1635a8: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1635a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1635ac: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1635acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1635b0: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1635b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1635b4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1635b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1635b8: 0xafa205a4  sw          $v0, 0x5A4($sp)
    ctx->pc = 0x1635b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1444), GPR_U32(ctx, 2));
    // 0x1635bc: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1635bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1635c0: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1635c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1635c4: 0xafa405a0  sw          $a0, 0x5A0($sp)
    ctx->pc = 0x1635c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1440), GPR_U32(ctx, 4));
    // 0x1635c8: 0xdba20390  lqc2        $vf2, 0x390($sp)
    ctx->pc = 0x1635c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1635cc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1635ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1635d0: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1635d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1635d4: 0xd8a20030  lqc2        $vf2, 0x30($a1)
    ctx->pc = 0x1635d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1635d8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1635d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1635dc: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1635dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1635e0: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x1635e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x1635e4: 0xdba10390  lqc2        $vf1, 0x390($sp)
    ctx->pc = 0x1635e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1635e8: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1635e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1635ec: 0x2623821  addu        $a3, $s3, $v0
    ctx->pc = 0x1635ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1635f0: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1635f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1635f4: 0xf8a20030  sqc2        $vf2, 0x30($a1)
    ctx->pc = 0x1635f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1635f8: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x1635f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1635fc: 0x96630022  lhu         $v1, 0x22($s3)
    ctx->pc = 0x1635fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x163600: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x163600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x163604: 0xdba50080  lqc2        $vf5, 0x80($sp)
    ctx->pc = 0x163604u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x163608: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x163608u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x16360c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x16360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x163610: 0xafa305a8  sw          $v1, 0x5A8($sp)
    ctx->pc = 0x163610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1448), GPR_U32(ctx, 3));
    // 0x163614: 0x96630026  lhu         $v1, 0x26($s3)
    ctx->pc = 0x163614u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x163618: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x163618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16361c: 0xafa205ac  sw          $v0, 0x5AC($sp)
    ctx->pc = 0x16361cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1452), GPR_U32(ctx, 2));
    // 0x163620: 0x96620028  lhu         $v0, 0x28($s3)
    ctx->pc = 0x163620u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x163624: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x163624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x163628: 0xafa305b0  sw          $v1, 0x5B0($sp)
    ctx->pc = 0x163628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1456), GPR_U32(ctx, 3));
    // 0x16362c: 0x2624021  addu        $t0, $s3, $v0
    ctx->pc = 0x16362cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x163630: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x163630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x163634: 0xdba300a0  lqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x163634u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x163638: 0xdba200b0  lqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x163638u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16363c: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x16363cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x163640: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x163640u;
    {
        const bool branch_taken_0x163640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163640u;
            // 0x163644: 0xac86c300  sw          $a2, -0x3D00($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294951680), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163640) {
            ctx->pc = 0x163680u;
            goto label_163680;
        }
    }
    ctx->pc = 0x163648u;
    // 0x163648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16364c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x16364cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163650: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x163650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x163654: 0x0  nop
    ctx->pc = 0x163654u;
    // NOP
label_163658:
    // 0x163658: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x163658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16365c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x16365cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x163660: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x163660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x163664: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x163664u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x163668: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x163668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16366c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x16366cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163670: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x163670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x163674: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x163674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x163678: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x163678u;
    {
        const bool branch_taken_0x163678 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163678u;
            // 0x16367c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163678) {
            ctx->pc = 0x163658u;
            runtime->cooperativeGuestYield();
            goto label_163658;
        }
    }
    ctx->pc = 0x163680u;
label_163680:
    // 0x163680: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x163680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x163684: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x163684u;
    {
        const bool branch_taken_0x163684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163684) {
            ctx->pc = 0x163688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163684u;
            // 0x163688: 0x96620016  lhu         $v0, 0x16($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1636C8u;
            goto label_1636c8;
        }
    }
    ctx->pc = 0x16368Cu;
    // 0x16368c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16368cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163690: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x163690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163694: 0x8fa205a0  lw          $v0, 0x5A0($sp)
    ctx->pc = 0x163694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1440)));
label_163698:
    // 0x163698: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x163698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16369c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x16369cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1636a0: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x1636a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1636a4: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x1636a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1636a8: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x1636a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1636ac: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1636acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1636b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1636b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1636b4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1636b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1636b8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1636B8u;
    {
        const bool branch_taken_0x1636b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1636BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636B8u;
            // 0x1636bc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636b8) {
            ctx->pc = 0x163698u;
            runtime->cooperativeGuestYield();
            goto label_163698;
        }
    }
    ctx->pc = 0x1636C0u;
    // 0x1636c0: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x1636c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1636c4: 0x0  nop
    ctx->pc = 0x1636c4u;
    // NOP
label_1636c8:
    // 0x1636c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1636C8u;
    {
        const bool branch_taken_0x1636c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1636c8) {
            ctx->pc = 0x1636F4u;
            goto label_1636f4;
        }
    }
    ctx->pc = 0x1636D0u;
    // 0x1636d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1636d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636d4: 0x8fa205a4  lw          $v0, 0x5A4($sp)
    ctx->pc = 0x1636d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1444)));
label_1636d8:
    // 0x1636d8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1636d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1636dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1636dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1636e0: 0x0  nop
    ctx->pc = 0x1636e0u;
    // NOP
    // 0x1636e4: 0x0  nop
    ctx->pc = 0x1636e4u;
    // NOP
    // 0x1636e8: 0x0  nop
    ctx->pc = 0x1636e8u;
    // NOP
    // 0x1636ec: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1636ECu;
    {
        const bool branch_taken_0x1636ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1636F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636ECu;
            // 0x1636f0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636ec) {
            ctx->pc = 0x1636D8u;
            runtime->cooperativeGuestYield();
            goto label_1636d8;
        }
    }
    ctx->pc = 0x1636F4u;
label_1636f4:
    // 0x1636f4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1636f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1636f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1636f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1636fc: 0x8fa7058c  lw          $a3, 0x58C($sp)
    ctx->pc = 0x1636fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x163700: 0xd8e10100  lqc2        $vf1, 0x100($a3)
    ctx->pc = 0x163700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x163704: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x163704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x163708: 0xfba305c0  sqc2        $vf3, 0x5C0($sp)
    ctx->pc = 0x163708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16370c: 0x8ce2012c  lw          $v0, 0x12C($a3)
    ctx->pc = 0x16370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 300)));
    // 0x163710: 0xafa205d0  sw          $v0, 0x5D0($sp)
    ctx->pc = 0x163710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1488), GPR_U32(ctx, 2));
    // 0x163714: 0xce20007c  pref        0x00, 0x7C($s1)
    ctx->pc = 0x163714u;
    // PREF instruction (ignored)
    // 0x163718: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x163718u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16371c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x16371cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163720: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x163720u;
    {
        const bool branch_taken_0x163720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163720u;
            // 0x163724: 0xafa305d4  sw          $v1, 0x5D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163720) {
            ctx->pc = 0x1639E4u;
            goto label_1639e4;
        }
    }
    ctx->pc = 0x163728u;
    // 0x163728: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x163728u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16372c: 0x0  nop
    ctx->pc = 0x16372cu;
    // NOP
label_163730:
    // 0x163730: 0x96e40002  lhu         $a0, 0x2($s7)
    ctx->pc = 0x163730u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x163734: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x163734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x163738: 0x8fa605a0  lw          $a2, 0x5A0($sp)
    ctx->pc = 0x163738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x16373c: 0x8fa705ac  lw          $a3, 0x5AC($sp)
    ctx->pc = 0x16373cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1452)));
    // 0x163740: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x163740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x163744: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x163744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x163748: 0xdba305c0  lqc2        $vf3, 0x5C0($sp)
    ctx->pc = 0x163748u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x16374c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16374cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163750: 0xe38021  addu        $s0, $a3, $v1
    ctx->pc = 0x163750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x163754: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x163754u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163758: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16375c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x16375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x163760: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x163760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163764: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x163764u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163768: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x163768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16376c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x16376cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163770: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x163770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163774: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x163774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163778: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x163778u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16377c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16377cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163780: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x163780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163784: 0x0  nop
    ctx->pc = 0x163784u;
    // NOP
    // 0x163788: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x163788u;
    {
        const bool branch_taken_0x163788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163788u;
            // 0x16378c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163788) {
            ctx->pc = 0x1637E0u;
            goto label_1637e0;
        }
    }
    ctx->pc = 0x163790u;
    // 0x163790: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x163790u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x163794: 0x8fa405b0  lw          $a0, 0x5B0($sp)
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x163798: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x163798u;
    {
        const bool branch_taken_0x163798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163798u;
            // 0x16379c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163798) {
            ctx->pc = 0x1639D0u;
            goto label_1639d0;
        }
    }
    ctx->pc = 0x1637A0u;
    // 0x1637a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1637a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637a4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1637a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1637a8:
    // 0x1637a8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1637a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1637ac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1637acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1637b0: 0x8fa705a4  lw          $a3, 0x5A4($sp)
    ctx->pc = 0x1637b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1444)));
    // 0x1637b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1637b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1637b8: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x1637b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1637bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1637bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1637c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1637c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1637c4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1637c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1637c8: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x1637c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1637cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1637ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1637d0: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x1637D0u;
    {
        const bool branch_taken_0x1637d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1637D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1637D0u;
            // 0x1637d4: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637d0) {
            ctx->pc = 0x1637A8u;
            runtime->cooperativeGuestYield();
            goto label_1637a8;
        }
    }
    ctx->pc = 0x1637D8u;
    // 0x1637d8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1637D8u;
    {
        const bool branch_taken_0x1637d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1637D8u;
            // 0x1637dc: 0x8fa305d4  lw          $v1, 0x5D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637d8) {
            ctx->pc = 0x1639D4u;
            goto label_1639d4;
        }
    }
    ctx->pc = 0x1637E0u;
label_1637e0:
    // 0x1637e0: 0x96f20000  lhu         $s2, 0x0($s7)
    ctx->pc = 0x1637e0u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1637e4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1637e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1637e8: 0xafa205d8  sw          $v0, 0x5D8($sp)
    ctx->pc = 0x1637e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1496), GPR_U32(ctx, 2));
    // 0x1637ec: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1637ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1637f0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1637F0u;
    {
        const bool branch_taken_0x1637f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1637F0u;
            // 0x1637f4: 0x8fa3059c  lw          $v1, 0x59C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637f0) {
            ctx->pc = 0x163870u;
            goto label_163870;
        }
    }
    ctx->pc = 0x1637F8u;
    // 0x1637f8: 0x82c70147  lb          $a3, 0x147($s6)
    ctx->pc = 0x1637f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x1637fc: 0x754023  subu        $t0, $v1, $s5
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x163800: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x163800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x163804: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x163804u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x163808: 0xa2c70146  sb          $a3, 0x146($s6)
    ctx->pc = 0x163808u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 326), (uint8_t)GPR_U32(ctx, 7));
    // 0x16380c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x16380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x163810: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x163810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x163814: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x163814u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x163818: 0x8ec20140  lw          $v0, 0x140($s6)
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
    // 0x16381c: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x16381cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x163820: 0x8fb5059c  lw          $s5, 0x59C($sp)
    ctx->pc = 0x163820u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1436)));
    // 0x163824: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x163824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16382c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16382cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163834: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x163834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x163838: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x163838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x16383c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163848: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x163848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x16384c: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x16384cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x163850: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x163854: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x163854u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
    // 0x163858: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x163858u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x16385c: 0x7fa90680  sq          $t1, 0x680($sp)
    ctx->pc = 0x16385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 9));
    // 0x163860: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x163860u;
    SET_GPR_U32(ctx, 31, 0x163868u);
    ctx->pc = 0x163864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163860u;
            // 0x163864: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163868u; }
        if (ctx->pc != 0x163868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163868u; }
        if (ctx->pc != 0x163868u) { return; }
    }
    ctx->pc = 0x163868u;
    // 0x163868: 0x7ba90680  lq          $t1, 0x680($sp)
    ctx->pc = 0x163868u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x16386c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16386cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163870:
    // 0x163870: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x163870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x163874: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x163874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x163878: 0xce2000bc  pref        0x00, 0xBC($s1)
    ctx->pc = 0x163878u;
    // PREF instruction (ignored)
    // 0x16387c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x16387cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163880: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x163880u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x163884: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x163884u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x163888: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16388c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16388cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x163890: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x163890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x163894: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x163894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x163898: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x163898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x16389c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x16389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1638a0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1638a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1638a4: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1638a4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1638a8: 0xdba105c0  lqc2        $vf1, 0x5C0($sp)
    ctx->pc = 0x1638a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x1638ac: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1638acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1638b0: 0x4be128ec  vsub.xyzw   $vf3, $vf5, $vf1
    ctx->pc = 0x1638b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1638b4: 0xfba303a0  sqc2        $vf3, 0x3A0($sp)
    ctx->pc = 0x1638b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1638b8: 0x8fa305d0  lw          $v1, 0x5D0($sp)
    ctx->pc = 0x1638b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x1638bc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1638bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1638c0: 0x4be418d8  vmulx.xyzw  $vf3, $vf3, $vf4x
    ctx->pc = 0x1638c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1638c4: 0x4be328e8  vadd.xyzw   $vf3, $vf5, $vf3
    ctx->pc = 0x1638c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1638c8: 0x4be130ac  vsub.xyzw   $vf2, $vf6, $vf1
    ctx->pc = 0x1638c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1638cc: 0xfba203b0  sqc2        $vf2, 0x3B0($sp)
    ctx->pc = 0x1638ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1638d0: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x1638d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1638d4: 0x4be230a8  vadd.xyzw   $vf2, $vf6, $vf2
    ctx->pc = 0x1638d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1638d8: 0xdba805c0  lqc2        $vf8, 0x5C0($sp)
    ctx->pc = 0x1638d8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x1638dc: 0x4be8386c  vsub.xyzw   $vf1, $vf7, $vf8
    ctx->pc = 0x1638dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1638e0: 0xfba103c0  sqc2        $vf1, 0x3C0($sp)
    ctx->pc = 0x1638e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1638e4: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1638e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1638e8: 0x4be13868  vadd.xyzw   $vf1, $vf7, $vf1
    ctx->pc = 0x1638e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1638ec: 0x4be5297c  vftoi0.xyzw $vf5, $vf5
    ctx->pc = 0x1638ecu;
    { __m128 src = ctx->vu0_vf[5]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1638f0: 0x4be6317c  vftoi0.xyzw $vf6, $vf6
    ctx->pc = 0x1638f0u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1638f4: 0x4be7397c  vftoi0.xyzw $vf7, $vf7
    ctx->pc = 0x1638f4u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1638f8: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x1638f8u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1638fc: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x1638fcu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163900: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x163900u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163904: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x163904u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163908: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x163908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16390c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163910: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x163910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163918: 0xfa260010  sqc2        $vf6, 0x10($s1)
    ctx->pc = 0x163918u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16391c: 0x92202a  slt         $a0, $a0, $s2
    ctx->pc = 0x16391cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x163920: 0xfa270020  sqc2        $vf7, 0x20($s1)
    ctx->pc = 0x163920u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x163924: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x163924u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x163928: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x163928u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16392c: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x16392cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163930: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x163930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x163934: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x163934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x163938: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x163938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x16393c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x16393cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x163940: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x163940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x163944: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x163944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x163948: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x163948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x16394c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16394Cu;
    {
        const bool branch_taken_0x16394c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x163950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16394Cu;
            // 0x163950: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16394c) {
            ctx->pc = 0x1639C0u;
            goto label_1639c0;
        }
    }
    ctx->pc = 0x163954u;
    // 0x163954: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x163954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x163958: 0x2644fffd  addiu       $a0, $s2, -0x3
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
    // 0x16395c: 0x0  nop
    ctx->pc = 0x16395cu;
    // NOP
label_163960:
    // 0x163960: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x163960u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163964: 0xdba205c0  lqc2        $vf2, 0x5C0($sp)
    ctx->pc = 0x163964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x163968: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16396c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x16396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x163970: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x163970u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163974: 0x4be2186c  vsub.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x163974u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163978: 0xfba103d0  sqc2        $vf1, 0x3D0($sp)
    ctx->pc = 0x163978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16397c: 0x8fa705d0  lw          $a3, 0x5D0($sp)
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x163980: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x163980u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x163984: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x163984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163988: 0x4be11868  vadd.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x163988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16398c: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x16398cu;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x163990: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x163990u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163994: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x163994u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x163998: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x163998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x16399c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x16399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1639a0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1639a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1639a4: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1639a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x1639a8: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x1639a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x1639ac: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1639acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1639b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1639b4: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1639B4u;
    {
        const bool branch_taken_0x1639b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1639B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1639B4u;
            // 0x1639b8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639b4) {
            ctx->pc = 0x163960u;
            runtime->cooperativeGuestYield();
            goto label_163960;
        }
    }
    ctx->pc = 0x1639BCu;
    // 0x1639bc: 0x0  nop
    ctx->pc = 0x1639bcu;
    // NOP
label_1639c0:
    // 0x1639c0: 0x8fa205d8  lw          $v0, 0x5D8($sp)
    ctx->pc = 0x1639c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
    // 0x1639c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1639c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639c8: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1639c8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1639cc: 0xce20007c  pref        0x00, 0x7C($s1)
    ctx->pc = 0x1639ccu;
    // PREF instruction (ignored)
label_1639d0:
    // 0x1639d0: 0x8fa305d4  lw          $v1, 0x5D4($sp)
    ctx->pc = 0x1639d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1492)));
label_1639d4:
    // 0x1639d4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1639d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1639d8: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x1639d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1639dc: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x1639DCu;
    {
        const bool branch_taken_0x1639dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1639E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1639DCu;
            // 0x1639e0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639dc) {
            ctx->pc = 0x163730u;
            runtime->cooperativeGuestYield();
            goto label_163730;
        }
    }
    ctx->pc = 0x1639E4u;
label_1639e4:
    // 0x1639e4: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x1639e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1639e8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1639E8u;
    {
        const bool branch_taken_0x1639e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1639E8u;
            // 0x1639ec: 0x8fa3059c  lw          $v1, 0x59C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639e8) {
            ctx->pc = 0x163B40u;
            goto label_163b40;
        }
    }
    ctx->pc = 0x1639F0u;
    // 0x1639f0: 0x8fb305a8  lw          $s3, 0x5A8($sp)
    ctx->pc = 0x1639f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1448)));
    // 0x1639f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1639f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639f8: 0x8fb205a4  lw          $s2, 0x5A4($sp)
    ctx->pc = 0x1639f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1444)));
    // 0x1639fc: 0x0  nop
    ctx->pc = 0x1639fcu;
    // NOP
label_163a00:
    // 0x163a00: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x163a00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x163a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163a08: 0x54620049  bnel        $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x163A08u;
    {
        const bool branch_taken_0x163a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163a08) {
            ctx->pc = 0x163A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163A08u;
            // 0x163a0c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163B30u;
            goto label_163b30;
        }
    }
    ctx->pc = 0x163A10u;
    // 0x163a10: 0xce20007c  pref        0x00, 0x7C($s1)
    ctx->pc = 0x163a10u;
    // PREF instruction (ignored)
    // 0x163a14: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x163a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x163a18: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x163A18u;
    {
        const bool branch_taken_0x163a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A18u;
            // 0x163a1c: 0x8fa4059c  lw          $a0, 0x59C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a18) {
            ctx->pc = 0x163A98u;
            goto label_163a98;
        }
    }
    ctx->pc = 0x163A20u;
    // 0x163a20: 0x82c70147  lb          $a3, 0x147($s6)
    ctx->pc = 0x163a20u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x163a24: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x163a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x163a28: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x163a28u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x163a2c: 0x954023  subu        $t0, $a0, $s5
    ctx->pc = 0x163a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x163a30: 0xa2c70146  sb          $a3, 0x146($s6)
    ctx->pc = 0x163a30u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 326), (uint8_t)GPR_U32(ctx, 7));
    // 0x163a34: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x163a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x163a38: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x163a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x163a3c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x163a40: 0x8ec20140  lw          $v0, 0x140($s6)
    ctx->pc = 0x163a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
    // 0x163a44: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x163a44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x163a48: 0x8fb5059c  lw          $s5, 0x59C($sp)
    ctx->pc = 0x163a48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1436)));
    // 0x163a4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x163a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163a5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x163a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x163a60: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x163a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x163a64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x163a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163a68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163a70: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x163a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x163a74: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x163a78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x163a7c: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x163a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
    // 0x163a80: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x163a80u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x163a84: 0x7fa90680  sq          $t1, 0x680($sp)
    ctx->pc = 0x163a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 9));
    // 0x163a88: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x163A88u;
    SET_GPR_U32(ctx, 31, 0x163A90u);
    ctx->pc = 0x163A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A88u;
            // 0x163a8c: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A90u; }
        if (ctx->pc != 0x163A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A90u; }
        if (ctx->pc != 0x163A90u) { return; }
    }
    ctx->pc = 0x163A90u;
    // 0x163a90: 0x7ba90680  lq          $t1, 0x680($sp)
    ctx->pc = 0x163a90u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x163a94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163a98:
    // 0x163a98: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x163a98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x163a9c: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x163a9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x163aa0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163aa4: 0xdba105c0  lqc2        $vf1, 0x5C0($sp)
    ctx->pc = 0x163aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x163aa8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x163aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x163aac: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x163aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x163ab0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x163ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x163ab4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x163ab4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163ab8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163ab8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163abc: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x163abcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163ac0: 0xfba203e0  sqc2        $vf2, 0x3E0($sp)
    ctx->pc = 0x163ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163ac4: 0x8fa305d0  lw          $v1, 0x5D0($sp)
    ctx->pc = 0x163ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x163ac8: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x163ac8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x163acc: 0x4be51098  vmulx.xyzw  $vf2, $vf2, $vf5x
    ctx->pc = 0x163accu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163ad0: 0x4be218a8  vadd.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x163ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163ad4: 0xdba605c0  lqc2        $vf6, 0x5C0($sp)
    ctx->pc = 0x163ad4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x163ad8: 0x4be6206c  vsub.xyzw   $vf1, $vf4, $vf6
    ctx->pc = 0x163ad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163adc: 0xfba103f0  sqc2        $vf1, 0x3F0($sp)
    ctx->pc = 0x163adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163ae0: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x163ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163ae4: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x163ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163ae8: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x163ae8u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x163aec: 0x4be4217c  vftoi0.xyzw $vf4, $vf4
    ctx->pc = 0x163aecu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x163af0: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x163af0u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163af4: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x163af4u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163af8: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x163af8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x163afc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x163afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x163b00: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x163b00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x163b04: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x163b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x163b08: 0xfa240010  sqc2        $vf4, 0x10($s1)
    ctx->pc = 0x163b08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163b0c: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x163b0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x163b10: 0xfa220020  sqc2        $vf2, 0x20($s1)
    ctx->pc = 0x163b10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163b14: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x163b14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163b18: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x163b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x163b1c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x163b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x163b20: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x163b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x163b24: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x163b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x163b28: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x163b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x163b2c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x163b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_163b30:
    // 0x163b30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x163b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x163b34: 0x1600ffb2  bnez        $s0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x163B34u;
    {
        const bool branch_taken_0x163b34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x163B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B34u;
            // 0x163b38: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b34) {
            ctx->pc = 0x163A00u;
            runtime->cooperativeGuestYield();
            goto label_163a00;
        }
    }
    ctx->pc = 0x163B3Cu;
    // 0x163b3c: 0x8fa3059c  lw          $v1, 0x59C($sp)
    ctx->pc = 0x163b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1436)));
label_163b40:
    // 0x163b40: 0x751023  subu        $v0, $v1, $s5
    ctx->pc = 0x163b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x163b44: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x163b44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x163b48: 0x8fa40598  lw          $a0, 0x598($sp)
    ctx->pc = 0x163b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x163b4c: 0x0  nop
    ctx->pc = 0x163b4cu;
    // NOP
label_163b50:
    // 0x163b50: 0x8fa60594  lw          $a2, 0x594($sp)
    ctx->pc = 0x163b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x163b54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x163b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x163b58: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x163b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x163b5c: 0x1440fe44  bnez        $v0, . + 4 + (-0x1BC << 2)
    ctx->pc = 0x163B5Cu;
    {
        const bool branch_taken_0x163b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B5Cu;
            // 0x163b60: 0xafa40598  sw          $a0, 0x598($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b5c) {
            ctx->pc = 0x163470u;
            runtime->cooperativeGuestYield();
            goto label_163470;
        }
    }
    ctx->pc = 0x163B64u;
    // 0x163b64: 0x10000624  b           . + 4 + (0x624 << 2)
    ctx->pc = 0x163B64u;
    {
        const bool branch_taken_0x163b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B64u;
            // 0x163b68: 0x8fa70590  lw          $a3, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b64) {
            ctx->pc = 0x1653F8u;
            goto label_1653f8;
        }
    }
    ctx->pc = 0x163B6Cu;
label_163b6c:
    // 0x163b6c: 0x8fa70594  lw          $a3, 0x594($sp)
    ctx->pc = 0x163b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x163b70: 0x18e00620  blez        $a3, . + 4 + (0x620 << 2)
    ctx->pc = 0x163B70u;
    {
        const bool branch_taken_0x163b70 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x163B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B70u;
            // 0x163b74: 0xafa00598  sw          $zero, 0x598($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b70) {
            ctx->pc = 0x1653F4u;
            goto label_1653f4;
        }
    }
    ctx->pc = 0x163B78u;
label_163b78:
    // 0x163b78: 0x8fa2058c  lw          $v0, 0x58C($sp)
    ctx->pc = 0x163b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x163b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163b80: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x163b84: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x163b84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x163b88: 0x8fa40598  lw          $a0, 0x598($sp)
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x163b8c: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x163b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x163b90: 0x8e950020  lw          $s5, 0x20($s4)
    ctx->pc = 0x163b90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x163b94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x163b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x163b98: 0x8e8a0030  lw          $t2, 0x30($s4)
    ctx->pc = 0x163b98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x163b9c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x163b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x163ba0: 0xafa605dc  sw          $a2, 0x5DC($sp)
    ctx->pc = 0x163ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1500), GPR_U32(ctx, 6));
    // 0x163ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163ba8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x163ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163bac: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x163bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163bb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x163bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163bb4: 0x82a80147  lb          $t0, 0x147($s5)
    ctx->pc = 0x163bb4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 327)));
    // 0x163bb8: 0x1229821  addu        $s3, $t1, $v0
    ctx->pc = 0x163bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x163bbc: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x163bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x163bc0: 0x8fa205dc  lw          $v0, 0x5DC($sp)
    ctx->pc = 0x163bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1500)));
    // 0x163bc4: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x163bc4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x163bc8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x163BC8u;
    SET_GPR_U32(ctx, 31, 0x163BD0u);
    ctx->pc = 0x163BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163BC8u;
            // 0x163bcc: 0x4ab023  subu        $s6, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BD0u; }
        if (ctx->pc != 0x163BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BD0u; }
        if (ctx->pc != 0x163BD0u) { return; }
    }
    ctx->pc = 0x163BD0u;
    // 0x163bd0: 0x8fa4058c  lw          $a0, 0x58C($sp)
    ctx->pc = 0x163bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x163bd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x163bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163bd8: 0x92710011  lbu         $s1, 0x11($s3)
    ctx->pc = 0x163bd8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x163bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163be0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x163be4: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x163be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x163be8: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x163be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x163bec: 0x8cb00104  lw          $s0, 0x104($a1)
    ctx->pc = 0x163becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x163bf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163bf4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x163bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x163bf8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163bfc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x163bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x163c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x163c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x163c04: 0x10400212  beqz        $v0, . + 4 + (0x212 << 2)
    ctx->pc = 0x163C04u;
    {
        const bool branch_taken_0x163c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163C04u;
            // 0x163c08: 0x8fa70598  lw          $a3, 0x598($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c04) {
            ctx->pc = 0x164450u;
            goto label_164450;
        }
    }
    ctx->pc = 0x163C0Cu;
    // 0x163c0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x163c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x163c10: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x163c10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x163c14: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x163c14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x163c18: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163C18u;
    {
        const bool branch_taken_0x163c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x163c18) {
            ctx->pc = 0x163C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163C18u;
            // 0x163c1c: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163C30u;
            goto label_163c30;
        }
    }
    ctx->pc = 0x163C20u;
    // 0x163c20: 0xc04da64  jal         func_136990
    ctx->pc = 0x163C20u;
    SET_GPR_U32(ctx, 31, 0x163C28u);
    ctx->pc = 0x163C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C20u;
            // 0x163c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C28u; }
        if (ctx->pc != 0x163C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C28u; }
        if (ctx->pc != 0x163C28u) { return; }
    }
    ctx->pc = 0x163C28u;
    // 0x163c28: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x163c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x163c2c: 0x0  nop
    ctx->pc = 0x163c2cu;
    // NOP
label_163c30:
    // 0x163c30: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x163c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x163c34: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x163c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x163c38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163c3c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x163c3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163c40: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x163c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x163c44: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x163c44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x163c48: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x163c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x163c4c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x163c4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x163c50: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x163c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x163c54: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x163c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x163c58: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x163c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x163c5c: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x163c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x163c60: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x163c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x163c64: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x163c64u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x163c68: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x163c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x163c6c: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x163c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x163c70: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x163c70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x163c74: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x163c74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x163c78: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x163c78u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x163c7c: 0x96640012  lhu         $a0, 0x12($s3)
    ctx->pc = 0x163c7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x163c80: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x163c80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x163c84: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x163c84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x163c88: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x163c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x163c8c: 0xfba20400  sqc2        $vf2, 0x400($sp)
    ctx->pc = 0x163c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163c90: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x163c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x163c94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x163c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x163c98: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x163c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163c9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163ca0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x163ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x163ca4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x163ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x163ca8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x163ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x163cac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x163cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x163cb0: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x163cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x163cb4: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x163cb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163cb8: 0xfba30160  sqc2        $vf3, 0x160($sp)
    ctx->pc = 0x163cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x163cbc: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x163cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163cc0: 0xafa205e4  sw          $v0, 0x5E4($sp)
    ctx->pc = 0x163cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 2));
    // 0x163cc4: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x163cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163cc8: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x163cc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x163ccc: 0xafa405e0  sw          $a0, 0x5E0($sp)
    ctx->pc = 0x163cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 4));
    // 0x163cd0: 0xdba20400  lqc2        $vf2, 0x400($sp)
    ctx->pc = 0x163cd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x163cd4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x163cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x163cd8: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x163cd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163cdc: 0xd8a20030  lqc2        $vf2, 0x30($a1)
    ctx->pc = 0x163cdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x163ce0: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x163ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163ce4: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x163ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163ce8: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x163ce8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x163cec: 0xdba10400  lqc2        $vf1, 0x400($sp)
    ctx->pc = 0x163cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x163cf0: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x163cf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163cf4: 0x2623821  addu        $a3, $s3, $v0
    ctx->pc = 0x163cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x163cf8: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x163cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163cfc: 0xf8a20030  sqc2        $vf2, 0x30($a1)
    ctx->pc = 0x163cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163d00: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x163d00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x163d04: 0x96630022  lhu         $v1, 0x22($s3)
    ctx->pc = 0x163d04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x163d08: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x163d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x163d0c: 0xdba50110  lqc2        $vf5, 0x110($sp)
    ctx->pc = 0x163d0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x163d10: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x163d10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x163d14: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x163d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x163d18: 0xafa305e8  sw          $v1, 0x5E8($sp)
    ctx->pc = 0x163d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 3));
    // 0x163d1c: 0x96630026  lhu         $v1, 0x26($s3)
    ctx->pc = 0x163d1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x163d20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x163d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x163d24: 0xafa205ec  sw          $v0, 0x5EC($sp)
    ctx->pc = 0x163d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 2));
    // 0x163d28: 0x96620028  lhu         $v0, 0x28($s3)
    ctx->pc = 0x163d28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x163d2c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x163d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x163d30: 0xafa305f0  sw          $v1, 0x5F0($sp)
    ctx->pc = 0x163d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1520), GPR_U32(ctx, 3));
    // 0x163d34: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x163d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x163d38: 0xdba40120  lqc2        $vf4, 0x120($sp)
    ctx->pc = 0x163d38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x163d3c: 0xdba30130  lqc2        $vf3, 0x130($sp)
    ctx->pc = 0x163d3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x163d40: 0xdba20140  lqc2        $vf2, 0x140($sp)
    ctx->pc = 0x163d40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x163d44: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x163d44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x163d48: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x163D48u;
    {
        const bool branch_taken_0x163d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D48u;
            // 0x163d4c: 0xac86c300  sw          $a2, -0x3D00($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294951680), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d48) {
            ctx->pc = 0x163D88u;
            goto label_163d88;
        }
    }
    ctx->pc = 0x163D50u;
    // 0x163d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d54: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x163d54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d58: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x163d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x163d5c: 0x0  nop
    ctx->pc = 0x163d5cu;
    // NOP
label_163d60:
    // 0x163d60: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x163d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163d64: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x163d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x163d68: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x163d68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x163d6c: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x163d6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x163d70: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x163d70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x163d74: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x163d74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163d78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x163d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x163d7c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x163d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x163d80: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x163D80u;
    {
        const bool branch_taken_0x163d80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x163D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D80u;
            // 0x163d84: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d80) {
            ctx->pc = 0x163D60u;
            runtime->cooperativeGuestYield();
            goto label_163d60;
        }
    }
    ctx->pc = 0x163D88u;
label_163d88:
    // 0x163d88: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x163d88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x163d8c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x163D8Cu;
    {
        const bool branch_taken_0x163d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d8c) {
            ctx->pc = 0x163D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163D8Cu;
            // 0x163d90: 0x96620016  lhu         $v0, 0x16($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163DD0u;
            goto label_163dd0;
        }
    }
    ctx->pc = 0x163D94u;
    // 0x163d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d98: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x163d98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d9c: 0x8fa205e0  lw          $v0, 0x5E0($sp)
    ctx->pc = 0x163d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
label_163da0:
    // 0x163da0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x163da0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163da4: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x163da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x163da8: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x163da8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x163dac: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x163dacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x163db0: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x163db0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x163db4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x163db4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163db8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x163db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x163dbc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x163dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x163dc0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x163DC0u;
    {
        const bool branch_taken_0x163dc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x163DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DC0u;
            // 0x163dc4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dc0) {
            ctx->pc = 0x163DA0u;
            runtime->cooperativeGuestYield();
            goto label_163da0;
        }
    }
    ctx->pc = 0x163DC8u;
    // 0x163dc8: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x163dc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x163dcc: 0x0  nop
    ctx->pc = 0x163dccu;
    // NOP
label_163dd0:
    // 0x163dd0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x163DD0u;
    {
        const bool branch_taken_0x163dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163dd0) {
            ctx->pc = 0x163DFCu;
            goto label_163dfc;
        }
    }
    ctx->pc = 0x163DD8u;
    // 0x163dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ddc: 0x8fa205e4  lw          $v0, 0x5E4($sp)
    ctx->pc = 0x163ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
label_163de0:
    // 0x163de0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x163de0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x163de4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x163de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x163de8: 0x0  nop
    ctx->pc = 0x163de8u;
    // NOP
    // 0x163dec: 0x0  nop
    ctx->pc = 0x163decu;
    // NOP
    // 0x163df0: 0x0  nop
    ctx->pc = 0x163df0u;
    // NOP
    // 0x163df4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x163DF4u;
    {
        const bool branch_taken_0x163df4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x163DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DF4u;
            // 0x163df8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163df4) {
            ctx->pc = 0x163DE0u;
            runtime->cooperativeGuestYield();
            goto label_163de0;
        }
    }
    ctx->pc = 0x163DFCu;
label_163dfc:
    // 0x163dfc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x163dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x163e00: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x163e00u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x163e04: 0x8fa2058c  lw          $v0, 0x58C($sp)
    ctx->pc = 0x163e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x163e08: 0xd8410100  lqc2        $vf1, 0x100($v0)
    ctx->pc = 0x163e08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x163e0c: 0x4be30898  vmulx.xyzw  $vf2, $vf1, $vf3x
    ctx->pc = 0x163e0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163e10: 0xfba20600  sqc2        $vf2, 0x600($sp)
    ctx->pc = 0x163e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e18: 0xc05891c  jal         func_162470
    ctx->pc = 0x163E18u;
    SET_GPR_U32(ctx, 31, 0x163E20u);
    ctx->pc = 0x163E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163E18u;
            // 0x163e1c: 0xfba306a0  sqc2        $vf3, 0x6A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1696), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162470u;
    if (runtime->hasFunction(0x162470u)) {
        auto targetFn = runtime->lookupFunction(0x162470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E20u; }
        if (ctx->pc != 0x163E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_162470_0x1624a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E20u; }
        if (ctx->pc != 0x163E20u) { return; }
    }
    ctx->pc = 0x163E20u;
    // 0x163e20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x163e20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x163e24: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x163e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    // 0x163e28: 0xdba306a0  lqc2        $vf3, 0x6A0($sp)
    ctx->pc = 0x163e28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1696)));
    // 0x163e2c: 0x4a231058  vmulx.w     $vf1, $vf2, $vf3x
    ctx->pc = 0x163e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163e30: 0x4a220b3c  vmove.w     $vf2, $vf1
    ctx->pc = 0x163e30u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x163e34: 0x8fa3058c  lw          $v1, 0x58C($sp)
    ctx->pc = 0x163e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x163e38: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x163e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x163e3c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x163e3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x163e40: 0xfba20410  sqc2        $vf2, 0x410($sp)
    ctx->pc = 0x163e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163e44: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x163e44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163e48: 0xfba10420  sqc2        $vf1, 0x420($sp)
    ctx->pc = 0x163e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163e4c: 0x4be30a98  vmulx.xyzw  $vf10, $vf1, $vf3x
    ctx->pc = 0x163e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x163e50: 0x4a2a52ac  vsub.w      $vf10, $vf10, $vf10
    ctx->pc = 0x163e50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x163e54: 0x8fa4058c  lw          $a0, 0x58C($sp)
    ctx->pc = 0x163e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x163e58: 0xc4800150  lwc1        $f0, 0x150($a0)
    ctx->pc = 0x163e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e5c: 0xc4810154  lwc1        $f1, 0x154($a0)
    ctx->pc = 0x163e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163e64: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x163e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x163e68: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x163e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x163e6c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x163e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163e70: 0xfba20430  sqc2        $vf2, 0x430($sp)
    ctx->pc = 0x163e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163e74: 0x4be31258  vmulx.xyzw  $vf9, $vf2, $vf3x
    ctx->pc = 0x163e74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x163e78: 0x4a294a6c  vsub.w      $vf9, $vf9, $vf9
    ctx->pc = 0x163e78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x163e7c: 0xce40007c  pref        0x00, 0x7C($s2)
    ctx->pc = 0x163e7cu;
    // PREF instruction (ignored)
    // 0x163e80: 0x9667001c  lhu         $a3, 0x1C($s3)
    ctx->pc = 0x163e80u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x163e84: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x163e84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e88: 0x10e000f0  beqz        $a3, . + 4 + (0xF0 << 2)
    ctx->pc = 0x163E88u;
    {
        const bool branch_taken_0x163e88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E88u;
            // 0x163e8c: 0xafa70610  sw          $a3, 0x610($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1552), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e88) {
            ctx->pc = 0x16424Cu;
            goto label_16424c;
        }
    }
    ctx->pc = 0x163E90u;
    // 0x163e90: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x163e90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e94: 0x0  nop
    ctx->pc = 0x163e94u;
    // NOP
label_163e98:
    // 0x163e98: 0x8fa305e0  lw          $v1, 0x5E0($sp)
    ctx->pc = 0x163e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x163e9c: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x163e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x163ea0: 0x96e40002  lhu         $a0, 0x2($s7)
    ctx->pc = 0x163ea0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x163ea4: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x163ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x163ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163eac: 0x8fa605ec  lw          $a2, 0x5EC($sp)
    ctx->pc = 0x163eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1516)));
    // 0x163eb0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x163eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x163eb4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x163eb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163eb8: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x163eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x163ebc: 0xdba30600  lqc2        $vf3, 0x600($sp)
    ctx->pc = 0x163ebcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x163ec0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x163ec0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163ec4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163ec8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x163ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x163ecc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x163eccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163ed0: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x163ed0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163ed4: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x163ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163ed8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x163ed8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163edc: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x163edcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163ee0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x163ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163ee4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x163ee4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163ee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x163ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163eec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x163eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ef0: 0x0  nop
    ctx->pc = 0x163ef0u;
    // NOP
    // 0x163ef4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x163EF4u;
    {
        const bool branch_taken_0x163ef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163EF4u;
            // 0x163ef8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ef4) {
            ctx->pc = 0x163F50u;
            goto label_163f50;
        }
    }
    ctx->pc = 0x163EFCu;
    // 0x163efc: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x163efcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x163f00: 0x8fa405f0  lw          $a0, 0x5F0($sp)
    ctx->pc = 0x163f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x163f04: 0x106000cc  beqz        $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x163F04u;
    {
        const bool branch_taken_0x163f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F04u;
            // 0x163f08: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f04) {
            ctx->pc = 0x164238u;
            goto label_164238;
        }
    }
    ctx->pc = 0x163F0Cu;
    // 0x163f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f10: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x163f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f14: 0x0  nop
    ctx->pc = 0x163f14u;
    // NOP
label_163f18:
    // 0x163f18: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x163f18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163f1c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x163f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x163f20: 0x8fa705e4  lw          $a3, 0x5E4($sp)
    ctx->pc = 0x163f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
    // 0x163f24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163f28: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x163f28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x163f2c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x163f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x163f30: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x163f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x163f34: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x163f34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163f38: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x163f38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x163f3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x163f40: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x163F40u;
    {
        const bool branch_taken_0x163f40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F40u;
            // 0x163f44: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f40) {
            ctx->pc = 0x163F18u;
            runtime->cooperativeGuestYield();
            goto label_163f18;
        }
    }
    ctx->pc = 0x163F48u;
    // 0x163f48: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x163F48u;
    {
        const bool branch_taken_0x163f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F48u;
            // 0x163f4c: 0x8fa30610  lw          $v1, 0x610($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f48) {
            ctx->pc = 0x16423Cu;
            goto label_16423c;
        }
    }
    ctx->pc = 0x163F50u;
label_163f50:
    // 0x163f50: 0x96f10000  lhu         $s1, 0x0($s7)
    ctx->pc = 0x163f50u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x163f54: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x163f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x163f58: 0xafa20614  sw          $v0, 0x614($sp)
    ctx->pc = 0x163f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1556), GPR_U32(ctx, 2));
    // 0x163f5c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x163f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163f60: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x163F60u;
    {
        const bool branch_taken_0x163f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F60u;
            // 0x163f64: 0x8fa305dc  lw          $v1, 0x5DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f60) {
            ctx->pc = 0x163FE8u;
            goto label_163fe8;
        }
    }
    ctx->pc = 0x163F68u;
    // 0x163f68: 0x82a70147  lb          $a3, 0x147($s5)
    ctx->pc = 0x163f68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 327)));
    // 0x163f6c: 0x764023  subu        $t0, $v1, $s6
    ctx->pc = 0x163f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x163f70: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x163f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x163f74: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x163f74u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x163f78: 0xa2a70146  sb          $a3, 0x146($s5)
    ctx->pc = 0x163f78u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 326), (uint8_t)GPR_U32(ctx, 7));
    // 0x163f7c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x163f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x163f80: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x163f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x163f84: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x163f84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x163f88: 0x8ea20140  lw          $v0, 0x140($s5)
    ctx->pc = 0x163f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x163f8c: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x163f8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x163f90: 0x8fb605dc  lw          $s6, 0x5DC($sp)
    ctx->pc = 0x163f90u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1500)));
    // 0x163f94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x163f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163fa4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x163fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x163fa8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x163fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x163fac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x163facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163fb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163fb8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x163fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x163fbc: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x163fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x163fc0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x163fc4: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x163fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
    // 0x163fc8: 0x82a80147  lb          $t0, 0x147($s5)
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 327)));
    // 0x163fcc: 0xfba906c0  sqc2        $vf9, 0x6C0($sp)
    ctx->pc = 0x163fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x163fd0: 0xfbaa06d0  sqc2        $vf10, 0x6D0($sp)
    ctx->pc = 0x163fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x163fd4: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x163FD4u;
    SET_GPR_U32(ctx, 31, 0x163FDCu);
    ctx->pc = 0x163FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163FD4u;
            // 0x163fd8: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FDCu; }
        if (ctx->pc != 0x163FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FDCu; }
        if (ctx->pc != 0x163FDCu) { return; }
    }
    ctx->pc = 0x163FDCu;
    // 0x163fdc: 0xdbaa06d0  lqc2        $vf10, 0x6D0($sp)
    ctx->pc = 0x163fdcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1744)));
    // 0x163fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x163fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fe4: 0xdba906c0  lqc2        $vf9, 0x6C0($sp)
    ctx->pc = 0x163fe4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1728)));
label_163fe8:
    // 0x163fe8: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x163fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x163fec: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x163fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x163ff0: 0xce4000bc  pref        0x00, 0xBC($s2)
    ctx->pc = 0x163ff0u;
    // PREF instruction (ignored)
    // 0x163ff4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x163ff4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163ff8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x163ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x163ffc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x163ffcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x164000: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x164000u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x164004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164008: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16400c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16400cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x164010: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x164010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x164014: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x164014u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164018: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x164018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16401c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x16401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x164020: 0xdba20410  lqc2        $vf2, 0x410($sp)
    ctx->pc = 0x164020u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x164024: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x164024u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164028: 0x4be228ea  vmul.xyzw   $vf3, $vf5, $vf2
    ctx->pc = 0x164028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16402c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16402cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164030: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x164030u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164034: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x164034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164038: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x164038u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16403c: 0x4be230ea  vmul.xyzw   $vf3, $vf6, $vf2
    ctx->pc = 0x16403cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164040: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x164040u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164044: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x164044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164048: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x164048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16404c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16404cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164050: 0x4be220ea  vmul.xyzw   $vf3, $vf4, $vf2
    ctx->pc = 0x164050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164054: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x164054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164058: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x164058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16405c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16405cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164060: 0xdba70600  lqc2        $vf7, 0x600($sp)
    ctx->pc = 0x164060u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x164064: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x164064u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164068: 0x4be238ea  vmul.xyzw   $vf3, $vf7, $vf2
    ctx->pc = 0x164068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16406c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16406cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x164070: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x164070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164074: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x164074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164078: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x164078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16407c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16407cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164080: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x164080u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164084: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x164084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x164088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16408c: 0x46041981  sub.s       $f6, $f3, $f4
    ctx->pc = 0x16408cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x164090: 0x4be728ac  vsub.xyzw   $vf2, $vf5, $vf7
    ctx->pc = 0x164090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164094: 0x46040941  sub.s       $f5, $f1, $f4
    ctx->pc = 0x164094u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x164098: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x164098u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x16409c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x16409cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1640a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1640a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1640a4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1640a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1640a8: 0xfba20440  sqc2        $vf2, 0x440($sp)
    ctx->pc = 0x1640a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1640ac: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x1640acu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x1640b0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1640b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1640b4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1640b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1640b8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1640b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1640bc: 0x4be2296c  vsub.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x1640bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1640c0: 0x4bea2968  vadd.xyzw   $vf5, $vf5, $vf10
    ctx->pc = 0x1640c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1640c4: 0x4be730ec  vsub.xyzw   $vf3, $vf6, $vf7
    ctx->pc = 0x1640c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1640c8: 0xfba30450  sqc2        $vf3, 0x450($sp)
    ctx->pc = 0x1640c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1640cc: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x1640ccu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x1640d0: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x1640d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1640d4: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1640d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1640d8: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1640d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1640dc: 0x4be330ec  vsub.xyzw   $vf3, $vf6, $vf3
    ctx->pc = 0x1640dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1640e0: 0x4bea18e8  vadd.xyzw   $vf3, $vf3, $vf10
    ctx->pc = 0x1640e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1640e4: 0x4be7206c  vsub.xyzw   $vf1, $vf4, $vf7
    ctx->pc = 0x1640e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1640e8: 0xfba10460  sqc2        $vf1, 0x460($sp)
    ctx->pc = 0x1640e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1640ec: 0x460618c3  div.s       $f3, $f3, $f6
    ctx->pc = 0x1640ecu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[6];
    // 0x1640f0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1640f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1640f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1640f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1640f8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1640f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1640fc: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1640fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164100: 0x4bea2128  vadd.xyzw   $vf4, $vf4, $vf10
    ctx->pc = 0x164100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164104: 0x4be9286c  vsub.xyzw   $vf1, $vf5, $vf9
    ctx->pc = 0x164104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164108: 0x4be918ac  vsub.xyzw   $vf2, $vf3, $vf9
    ctx->pc = 0x164108u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16410c: 0x4be921ac  vsub.xyzw   $vf6, $vf4, $vf9
    ctx->pc = 0x16410cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164110: 0x4be5297c  vftoi0.xyzw $vf5, $vf5
    ctx->pc = 0x164110u;
    { __m128 src = ctx->vu0_vf[5]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164114: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x164114u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164118: 0x4be4217c  vftoi0.xyzw $vf4, $vf4
    ctx->pc = 0x164118u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16411c: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x16411cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164120: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x164120u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164124: 0x4be6317c  vftoi0.xyzw $vf6, $vf6
    ctx->pc = 0x164124u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164128: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x164128u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16412c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x164130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x164134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16413c: 0xfa430010  sqc2        $vf3, 0x10($s2)
    ctx->pc = 0x16413cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164140: 0x91202a  slt         $a0, $a0, $s1
    ctx->pc = 0x164140u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x164144: 0xfa440020  sqc2        $vf4, 0x20($s2)
    ctx->pc = 0x164144u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164148: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x164148u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16414c: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x16414cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164150: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x164150u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x164154: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x164154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x164158: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x164158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x16415c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x16415cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x164160: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x164160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x164164: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x164164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x164168: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x164168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x16416c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x16416cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x164170: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x164170u;
    {
        const bool branch_taken_0x164170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164170u;
            // 0x164174: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164170) {
            ctx->pc = 0x164228u;
            goto label_164228;
        }
    }
    ctx->pc = 0x164178u;
    // 0x164178: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x16417c: 0x2624fffd  addiu       $a0, $s1, -0x3
    ctx->pc = 0x16417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
label_164180:
    // 0x164180: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x164180u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164184: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x164188: 0xdba10600  lqc2        $vf1, 0x600($sp)
    ctx->pc = 0x164188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x16418c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164190: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x164190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x164194: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164194u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164198: 0x4be1216c  vsub.xyzw   $vf5, $vf4, $vf1
    ctx->pc = 0x164198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16419c: 0xdba20410  lqc2        $vf2, 0x410($sp)
    ctx->pc = 0x16419cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1641a0: 0x4be228ea  vmul.xyzw   $vf3, $vf5, $vf2
    ctx->pc = 0x1641a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1641a4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1641a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1641a8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1641a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1641ac: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1641acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1641b0: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1641b0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1641b4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1641b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1641b8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1641b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1641bc: 0x4a221082  vaddz.w     $vf2, $vf2, $vf2z
    ctx->pc = 0x1641bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1641c0: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1641c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1641c4: 0x4b020843  vaddw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x1641c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1641c8: 0xfba201b0  sqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x1641c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1641cc: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1641ccu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1641d0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1641d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1641d4: 0xfba50470  sqc2        $vf5, 0x470($sp)
    ctx->pc = 0x1641d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1641d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1641d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1641dc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1641dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1641e0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1641e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1641e4: 0x4be12958  vmulx.xyzw  $vf5, $vf5, $vf1x
    ctx->pc = 0x1641e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1641e8: 0x4be5212c  vsub.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x1641e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1641ec: 0x4bea2128  vadd.xyzw   $vf4, $vf4, $vf10
    ctx->pc = 0x1641ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1641f0: 0x4be9206c  vsub.xyzw   $vf1, $vf4, $vf9
    ctx->pc = 0x1641f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1641f4: 0x4be4217c  vftoi0.xyzw $vf4, $vf4
    ctx->pc = 0x1641f4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1641f8: 0x4be6097c  vftoi0.xyzw $vf6, $vf1
    ctx->pc = 0x1641f8u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1641fc: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1641fcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164200: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x164200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x164204: 0xae46000c  sw          $a2, 0xC($s2)
    ctx->pc = 0x164204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
    // 0x164208: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16420c: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16420cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x164210: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x164210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x164214: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x164214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x164218: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x164218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x16421c: 0x1480ffd8  bnez        $a0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x16421Cu;
    {
        const bool branch_taken_0x16421c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x164220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16421Cu;
            // 0x164220: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16421c) {
            ctx->pc = 0x164180u;
            runtime->cooperativeGuestYield();
            goto label_164180;
        }
    }
    ctx->pc = 0x164224u;
    // 0x164224: 0x0  nop
    ctx->pc = 0x164224u;
    // NOP
label_164228:
    // 0x164228: 0x8fa20614  lw          $v0, 0x614($sp)
    ctx->pc = 0x164228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1556)));
    // 0x16422c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16422cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164230: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x164230u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x164234: 0xce40007c  pref        0x00, 0x7C($s2)
    ctx->pc = 0x164234u;
    // PREF instruction (ignored)
label_164238:
    // 0x164238: 0x8fa30610  lw          $v1, 0x610($sp)
    ctx->pc = 0x164238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1552)));
label_16423c:
    // 0x16423c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x16423cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x164240: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x164240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x164244: 0x1440ff14  bnez        $v0, . + 4 + (-0xEC << 2)
    ctx->pc = 0x164244u;
    {
        const bool branch_taken_0x164244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164244u;
            // 0x164248: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164244) {
            ctx->pc = 0x163E98u;
            runtime->cooperativeGuestYield();
            goto label_163e98;
        }
    }
    ctx->pc = 0x16424Cu;
label_16424c:
    // 0x16424c: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x16424cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x164250: 0x5040007b  beql        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x164250u;
    {
        const bool branch_taken_0x164250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164250) {
            ctx->pc = 0x164254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164250u;
            // 0x164254: 0x8fa605dc  lw          $a2, 0x5DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164440u;
            goto label_164440;
        }
    }
    ctx->pc = 0x164258u;
    // 0x164258: 0x8fb305e8  lw          $s3, 0x5E8($sp)
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x16425c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16425cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164260: 0x8fb105e4  lw          $s1, 0x5E4($sp)
    ctx->pc = 0x164260u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
    // 0x164264: 0x0  nop
    ctx->pc = 0x164264u;
    // NOP
label_164268:
    // 0x164268: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x164268u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16426c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164270: 0x5462006f  bnel        $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x164270u;
    {
        const bool branch_taken_0x164270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164270) {
            ctx->pc = 0x164274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164270u;
            // 0x164274: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164430u;
            goto label_164430;
        }
    }
    ctx->pc = 0x164278u;
    // 0x164278: 0xce40007c  pref        0x00, 0x7C($s2)
    ctx->pc = 0x164278u;
    // PREF instruction (ignored)
    // 0x16427c: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x16427cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x164280: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x164280u;
    {
        const bool branch_taken_0x164280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164280u;
            // 0x164284: 0x8fa405dc  lw          $a0, 0x5DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164280) {
            ctx->pc = 0x164308u;
            goto label_164308;
        }
    }
    ctx->pc = 0x164288u;
    // 0x164288: 0x82a70147  lb          $a3, 0x147($s5)
    ctx->pc = 0x164288u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 327)));
    // 0x16428c: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x16428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x164290: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x164290u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x164294: 0x964023  subu        $t0, $a0, $s6
    ctx->pc = 0x164294u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x164298: 0xa2a70146  sb          $a3, 0x146($s5)
    ctx->pc = 0x164298u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 326), (uint8_t)GPR_U32(ctx, 7));
    // 0x16429c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1642a0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1642a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1642a4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1642a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1642a8: 0x8ea20140  lw          $v0, 0x140($s5)
    ctx->pc = 0x1642a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x1642ac: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x1642acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x1642b0: 0x8fb605dc  lw          $s6, 0x5DC($sp)
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1500)));
    // 0x1642b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1642b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1642b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1642bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1642c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1642c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1642c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1642c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1642cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1642ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1642d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1642d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1642d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1642d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1642d8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1642d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1642dc: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x1642dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1642e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1642e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1642e4: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x1642e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
    // 0x1642e8: 0x82a80147  lb          $t0, 0x147($s5)
    ctx->pc = 0x1642e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 327)));
    // 0x1642ec: 0xfba906c0  sqc2        $vf9, 0x6C0($sp)
    ctx->pc = 0x1642ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1642f0: 0xfbaa06d0  sqc2        $vf10, 0x6D0($sp)
    ctx->pc = 0x1642f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1642f4: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1642F4u;
    SET_GPR_U32(ctx, 31, 0x1642FCu);
    ctx->pc = 0x1642F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1642F4u;
            // 0x1642f8: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642FCu; }
        if (ctx->pc != 0x1642FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642FCu; }
        if (ctx->pc != 0x1642FCu) { return; }
    }
    ctx->pc = 0x1642FCu;
    // 0x1642fc: 0xdbaa06d0  lqc2        $vf10, 0x6D0($sp)
    ctx->pc = 0x1642fcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1744)));
    // 0x164300: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x164300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164304: 0xdba906c0  lqc2        $vf9, 0x6C0($sp)
    ctx->pc = 0x164304u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1728)));
label_164308:
    // 0x164308: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x164308u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16430c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x16430cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x164310: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x164310u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x164314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164318: 0xdba10600  lqc2        $vf1, 0x600($sp)
    ctx->pc = 0x164318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x16431c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16431cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x164320: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164324: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x164324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x164328: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x164328u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16432c: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16432cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164330: 0x4be129ec  vsub.xyzw   $vf7, $vf5, $vf1
    ctx->pc = 0x164330u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x164334: 0xdba20410  lqc2        $vf2, 0x410($sp)
    ctx->pc = 0x164334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x164338: 0x4be238ea  vmul.xyzw   $vf3, $vf7, $vf2
    ctx->pc = 0x164338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16433c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16433cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164340: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x164340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164344: 0xdba30600  lqc2        $vf3, 0x600($sp)
    ctx->pc = 0x164344u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x164348: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x164348u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16434c: 0x4be3322c  vsub.xyzw   $vf8, $vf6, $vf3
    ctx->pc = 0x16434cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x164350: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x164350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164354: 0x4be240ea  vmul.xyzw   $vf3, $vf8, $vf2
    ctx->pc = 0x164354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164358: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x164358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16435c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16435cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164360: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x164360u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164364: 0x4be228ea  vmul.xyzw   $vf3, $vf5, $vf2
    ctx->pc = 0x164364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164368: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x164368u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16436c: 0x4b031901  vaddy.x     $vf4, $vf3, $vf3y
    ctx->pc = 0x16436cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164370: 0x4a2318c2  vaddz.w     $vf3, $vf3, $vf3z
    ctx->pc = 0x164370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164374: 0x4be230aa  vmul.xyzw   $vf2, $vf6, $vf2
    ctx->pc = 0x164374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164378: 0x4b032043  vaddw.x     $vf1, $vf4, $vf3w
    ctx->pc = 0x164378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16437c: 0xfba401c0  sqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x16437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164380: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x164380u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164384: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x164384u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164388: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x164388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16438c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16438cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164390: 0x4a221082  vaddz.w     $vf2, $vf2, $vf2z
    ctx->pc = 0x164390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164394: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x164394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164398: 0x4b020843  vaddw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x164398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16439c: 0xfba201f0  sqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x16439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1643a0: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1643a0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1643a4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1643a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1643a8: 0xfba70480  sqc2        $vf7, 0x480($sp)
    ctx->pc = 0x1643a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1643ac: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1643acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1643b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1643b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1643b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1643b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1643b8: 0x4be139d8  vmulx.xyzw  $vf7, $vf7, $vf1x
    ctx->pc = 0x1643b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1643bc: 0x4be7296c  vsub.xyzw   $vf5, $vf5, $vf7
    ctx->pc = 0x1643bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643c0: 0x4bea2968  vadd.xyzw   $vf5, $vf5, $vf10
    ctx->pc = 0x1643c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643c4: 0xfba80490  sqc2        $vf8, 0x490($sp)
    ctx->pc = 0x1643c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1643c8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1643c8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1643cc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1643ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1643d0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1643d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1643d4: 0x4be14218  vmulx.xyzw  $vf8, $vf8, $vf1x
    ctx->pc = 0x1643d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1643d8: 0x4be831ac  vsub.xyzw   $vf6, $vf6, $vf8
    ctx->pc = 0x1643d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1643dc: 0x4bea31a8  vadd.xyzw   $vf6, $vf6, $vf10
    ctx->pc = 0x1643dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1643e0: 0x4be9286c  vsub.xyzw   $vf1, $vf5, $vf9
    ctx->pc = 0x1643e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1643e4: 0x4be930ac  vsub.xyzw   $vf2, $vf6, $vf9
    ctx->pc = 0x1643e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1643e8: 0x4be5297c  vftoi0.xyzw $vf5, $vf5
    ctx->pc = 0x1643e8u;
    { __m128 src = ctx->vu0_vf[5]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643ec: 0x4be6317c  vftoi0.xyzw $vf6, $vf6
    ctx->pc = 0x1643ecu;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1643f0: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x1643f0u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1643f4: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x1643f4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1643f8: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1643f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1643fc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1643fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x164400: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x164400u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164404: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x164404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x164408: 0xfa460010  sqc2        $vf6, 0x10($s2)
    ctx->pc = 0x164408u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16440c: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x16440cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x164410: 0xfa410020  sqc2        $vf1, 0x20($s2)
    ctx->pc = 0x164410u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164414: 0xfa420030  sqc2        $vf2, 0x30($s2)
    ctx->pc = 0x164414u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164418: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x164418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x16441c: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x16441cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x164420: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x164420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x164424: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x164424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x164428: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x164428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x16442c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x16442cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_164430:
    // 0x164430: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x164430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x164434: 0x1600ff8c  bnez        $s0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x164434u;
    {
        const bool branch_taken_0x164434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x164438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164434u;
            // 0x164438: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164434) {
            ctx->pc = 0x164268u;
            runtime->cooperativeGuestYield();
            goto label_164268;
        }
    }
    ctx->pc = 0x16443Cu;
    // 0x16443c: 0x8fa605dc  lw          $a2, 0x5DC($sp)
    ctx->pc = 0x16443cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1500)));
label_164440:
    // 0x164440: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x164440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x164444: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x164444u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x164448: 0x8fa70598  lw          $a3, 0x598($sp)
    ctx->pc = 0x164448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x16444c: 0x0  nop
    ctx->pc = 0x16444cu;
    // NOP
label_164450:
    // 0x164450: 0x8fa30594  lw          $v1, 0x594($sp)
    ctx->pc = 0x164450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x164454: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x164454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x164458: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x164458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16445c: 0x1440fdc6  bnez        $v0, . + 4 + (-0x23A << 2)
    ctx->pc = 0x16445Cu;
    {
        const bool branch_taken_0x16445c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16445Cu;
            // 0x164460: 0xafa70598  sw          $a3, 0x598($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16445c) {
            ctx->pc = 0x163B78u;
            runtime->cooperativeGuestYield();
            goto label_163b78;
        }
    }
    ctx->pc = 0x164464u;
    // 0x164464: 0x100003e4  b           . + 4 + (0x3E4 << 2)
    ctx->pc = 0x164464u;
    {
        const bool branch_taken_0x164464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164464u;
            // 0x164468: 0x8fa70590  lw          $a3, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164464) {
            ctx->pc = 0x1653F8u;
            goto label_1653f8;
        }
    }
    ctx->pc = 0x16446Cu;
label_16446c:
    // 0x16446c: 0x8fa4058c  lw          $a0, 0x58C($sp)
    ctx->pc = 0x16446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x164470: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x164470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x164474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x164474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x164478: 0x1040021e  beqz        $v0, . + 4 + (0x21E << 2)
    ctx->pc = 0x164478u;
    {
        const bool branch_taken_0x164478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164478u;
            // 0x16447c: 0x8fa60594  lw          $a2, 0x594($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164478) {
            ctx->pc = 0x164CF4u;
            goto label_164cf4;
        }
    }
    ctx->pc = 0x164480u;
    // 0x164480: 0x18c003dc  blez        $a2, . + 4 + (0x3DC << 2)
    ctx->pc = 0x164480u;
    {
        const bool branch_taken_0x164480 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x164484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164480u;
            // 0x164484: 0xafa00598  sw          $zero, 0x598($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164480) {
            ctx->pc = 0x1653F4u;
            goto label_1653f4;
        }
    }
    ctx->pc = 0x164488u;
label_164488:
    // 0x164488: 0x8fa7058c  lw          $a3, 0x58C($sp)
    ctx->pc = 0x164488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x16448c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16448cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164490: 0x8fa20598  lw          $v0, 0x598($sp)
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x164494: 0x8ce9001c  lw          $t1, 0x1C($a3)
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x164498: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16449c: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1644a0: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x1644a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1644a4: 0x8e960020  lw          $s6, 0x20($s4)
    ctx->pc = 0x1644a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1644a8: 0x8e8a0030  lw          $t2, 0x30($s4)
    ctx->pc = 0x1644a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1644ac: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1644acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1644b0: 0xafa60618  sw          $a2, 0x618($sp)
    ctx->pc = 0x1644b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1560), GPR_U32(ctx, 6));
    // 0x1644b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1644b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1644b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1644b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644bc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1644bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1644c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1644c4: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x1644c8: 0x1229821  addu        $s3, $t1, $v0
    ctx->pc = 0x1644c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1644cc: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x1644ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1644d0: 0x8fa20618  lw          $v0, 0x618($sp)
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
    // 0x1644d4: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x1644d4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1644d8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1644D8u;
    SET_GPR_U32(ctx, 31, 0x1644E0u);
    ctx->pc = 0x1644DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1644D8u;
            // 0x1644dc: 0x4aa823  subu        $s5, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644E0u; }
        if (ctx->pc != 0x1644E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644E0u; }
        if (ctx->pc != 0x1644E0u) { return; }
    }
    ctx->pc = 0x1644E0u;
    // 0x1644e0: 0x8fa4058c  lw          $a0, 0x58C($sp)
    ctx->pc = 0x1644e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x1644e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1644e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644e8: 0x92710011  lbu         $s1, 0x11($s3)
    ctx->pc = 0x1644e8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x1644ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1644ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1644f0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1644f4: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x1644f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x1644f8: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x1644f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x1644fc: 0x8cb00104  lw          $s0, 0x104($a1)
    ctx->pc = 0x1644fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x164500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x164504: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x164504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x164508: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16450c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x16450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x164510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x164510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x164514: 0x104001f0  beqz        $v0, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x164514u;
    {
        const bool branch_taken_0x164514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164514u;
            // 0x164518: 0x8fa70598  lw          $a3, 0x598($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164514) {
            ctx->pc = 0x164CD8u;
            goto label_164cd8;
        }
    }
    ctx->pc = 0x16451Cu;
    // 0x16451c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x16451cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x164520: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x164520u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x164524: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x164524u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x164528: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164528u;
    {
        const bool branch_taken_0x164528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x164528) {
            ctx->pc = 0x16452Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164528u;
            // 0x16452c: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164540u;
            goto label_164540;
        }
    }
    ctx->pc = 0x164530u;
    // 0x164530: 0xc04da64  jal         func_136990
    ctx->pc = 0x164530u;
    SET_GPR_U32(ctx, 31, 0x164538u);
    ctx->pc = 0x164534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164530u;
            // 0x164534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164538u; }
        if (ctx->pc != 0x164538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164538u; }
        if (ctx->pc != 0x164538u) { return; }
    }
    ctx->pc = 0x164538u;
    // 0x164538: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x164538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x16453c: 0x0  nop
    ctx->pc = 0x16453cu;
    // NOP
label_164540:
    // 0x164540: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x164540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x164544: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x164544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x164548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16454c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16454cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164550: 0xfba30200  sqc2        $vf3, 0x200($sp)
    ctx->pc = 0x164550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164554: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x164554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x164558: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x164558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x16455c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x16455cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x164560: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x164560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x164564: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x164564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x164568: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x164568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x16456c: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x16456cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x164570: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x164570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x164574: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x164574u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x164578: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x16457c: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x164580: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x164580u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x164584: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x164588: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x164588u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16458c: 0x96640012  lhu         $a0, 0x12($s3)
    ctx->pc = 0x16458cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x164590: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x164590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x164594: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x164594u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x164598: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x164598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16459c: 0xfba204a0  sqc2        $vf2, 0x4A0($sp)
    ctx->pc = 0x16459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1645a0: 0xfba30200  sqc2        $vf3, 0x200($sp)
    ctx->pc = 0x1645a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1645a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1645a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1645a8: 0xfba20240  sqc2        $vf2, 0x240($sp)
    ctx->pc = 0x1645a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1645ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1645acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1645b0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1645b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1645b4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1645b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1645b8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1645bc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1645bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1645c0: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1645c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1645c4: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1645c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1645c8: 0xfba30250  sqc2        $vf3, 0x250($sp)
    ctx->pc = 0x1645c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1645cc: 0xfba10260  sqc2        $vf1, 0x260($sp)
    ctx->pc = 0x1645ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1645d0: 0xafa20620  sw          $v0, 0x620($sp)
    ctx->pc = 0x1645d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 2));
    // 0x1645d4: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1645d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1645d8: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1645d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1645dc: 0xafa4061c  sw          $a0, 0x61C($sp)
    ctx->pc = 0x1645dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1564), GPR_U32(ctx, 4));
    // 0x1645e0: 0xdba204a0  lqc2        $vf2, 0x4A0($sp)
    ctx->pc = 0x1645e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1645e4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1645e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1645e8: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1645e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1645ec: 0xd8a20030  lqc2        $vf2, 0x30($a1)
    ctx->pc = 0x1645ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1645f0: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x1645f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1645f4: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1645f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1645f8: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x1645f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x1645fc: 0xdba104a0  lqc2        $vf1, 0x4A0($sp)
    ctx->pc = 0x1645fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x164600: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x164600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164604: 0x2623821  addu        $a3, $s3, $v0
    ctx->pc = 0x164604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x164608: 0xfba20280  sqc2        $vf2, 0x280($sp)
    ctx->pc = 0x164608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16460c: 0xf8a20030  sqc2        $vf2, 0x30($a1)
    ctx->pc = 0x16460cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164610: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x164610u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x164614: 0x96630022  lhu         $v1, 0x22($s3)
    ctx->pc = 0x164614u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x164618: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16461c: 0xdba50200  lqc2        $vf5, 0x200($sp)
    ctx->pc = 0x16461cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x164620: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x164620u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x164624: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x164624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x164628: 0xafa30624  sw          $v1, 0x624($sp)
    ctx->pc = 0x164628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1572), GPR_U32(ctx, 3));
    // 0x16462c: 0x96630026  lhu         $v1, 0x26($s3)
    ctx->pc = 0x16462cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x164630: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x164634: 0xafa20628  sw          $v0, 0x628($sp)
    ctx->pc = 0x164634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1576), GPR_U32(ctx, 2));
    // 0x164638: 0x96620028  lhu         $v0, 0x28($s3)
    ctx->pc = 0x164638u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x16463c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x16463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x164640: 0xafa3062c  sw          $v1, 0x62C($sp)
    ctx->pc = 0x164640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1580), GPR_U32(ctx, 3));
    // 0x164644: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x164644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x164648: 0xdba40210  lqc2        $vf4, 0x210($sp)
    ctx->pc = 0x164648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x16464c: 0xdba30220  lqc2        $vf3, 0x220($sp)
    ctx->pc = 0x16464cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x164650: 0xdba20230  lqc2        $vf2, 0x230($sp)
    ctx->pc = 0x164650u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x164654: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x164654u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x164658: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x164658u;
    {
        const bool branch_taken_0x164658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164658u;
            // 0x16465c: 0xac86c300  sw          $a2, -0x3D00($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294951680), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164658) {
            ctx->pc = 0x164698u;
            goto label_164698;
        }
    }
    ctx->pc = 0x164660u;
    // 0x164660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164664: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x164664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164668: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16466c: 0x0  nop
    ctx->pc = 0x16466cu;
    // NOP
label_164670:
    // 0x164670: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x164670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164674: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x164674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x164678: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x164678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x16467c: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x16467cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x164680: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x164680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x164684: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x164684u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164688: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16468c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x164690: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x164690u;
    {
        const bool branch_taken_0x164690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x164694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164690u;
            // 0x164694: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164690) {
            ctx->pc = 0x164670u;
            runtime->cooperativeGuestYield();
            goto label_164670;
        }
    }
    ctx->pc = 0x164698u;
label_164698:
    // 0x164698: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x164698u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16469c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x16469Cu;
    {
        const bool branch_taken_0x16469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16469c) {
            ctx->pc = 0x1646A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16469Cu;
            // 0x1646a0: 0x96620016  lhu         $v0, 0x16($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1646E0u;
            goto label_1646e0;
        }
    }
    ctx->pc = 0x1646A4u;
    // 0x1646a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1646a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1646a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646ac: 0x8fa2061c  lw          $v0, 0x61C($sp)
    ctx->pc = 0x1646acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1564)));
label_1646b0:
    // 0x1646b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1646b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1646b4: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1646b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1646b8: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x1646b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1646bc: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x1646bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1646c0: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x1646c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1646c4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1646c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1646c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1646c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1646cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1646ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1646d0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1646D0u;
    {
        const bool branch_taken_0x1646d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1646D0u;
            // 0x1646d4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646d0) {
            ctx->pc = 0x1646B0u;
            runtime->cooperativeGuestYield();
            goto label_1646b0;
        }
    }
    ctx->pc = 0x1646D8u;
    // 0x1646d8: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x1646d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1646dc: 0x0  nop
    ctx->pc = 0x1646dcu;
    // NOP
label_1646e0:
    // 0x1646e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1646E0u;
    {
        const bool branch_taken_0x1646e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1646e0) {
            ctx->pc = 0x16470Cu;
            goto label_16470c;
        }
    }
    ctx->pc = 0x1646E8u;
    // 0x1646e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1646e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646ec: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x1646ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_1646f0:
    // 0x1646f0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1646f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1646f4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1646f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1646f8: 0x0  nop
    ctx->pc = 0x1646f8u;
    // NOP
    // 0x1646fc: 0x0  nop
    ctx->pc = 0x1646fcu;
    // NOP
    // 0x164700: 0x0  nop
    ctx->pc = 0x164700u;
    // NOP
    // 0x164704: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x164704u;
    {
        const bool branch_taken_0x164704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x164708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164704u;
            // 0x164708: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164704) {
            ctx->pc = 0x1646F0u;
            runtime->cooperativeGuestYield();
            goto label_1646f0;
        }
    }
    ctx->pc = 0x16470Cu;
label_16470c:
    // 0x16470c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x16470cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x164710: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x164710u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x164714: 0x8fa2058c  lw          $v0, 0x58C($sp)
    ctx->pc = 0x164714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x164718: 0xd8410100  lqc2        $vf1, 0x100($v0)
    ctx->pc = 0x164718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x16471c: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x16471cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164720: 0xfba30630  sqc2        $vf3, 0x630($sp)
    ctx->pc = 0x164720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x164724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164728: 0xc05891c  jal         func_162470
    ctx->pc = 0x164728u;
    SET_GPR_U32(ctx, 31, 0x164730u);
    ctx->pc = 0x16472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164728u;
            // 0x16472c: 0xfba20690  sqc2        $vf2, 0x690($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1680), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162470u;
    if (runtime->hasFunction(0x162470u)) {
        auto targetFn = runtime->lookupFunction(0x162470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164730u; }
        if (ctx->pc != 0x164730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_162470_0x1624a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164730u; }
        if (ctx->pc != 0x164730u) { return; }
    }
    ctx->pc = 0x164730u;
    // 0x164730: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x164730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x164734: 0xdba20690  lqc2        $vf2, 0x690($sp)
    ctx->pc = 0x164734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x164738: 0x4a220898  vmulx.w     $vf2, $vf1, $vf2x
    ctx->pc = 0x164738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16473c: 0x4be80b3c  vmove.xyzw  $vf8, $vf1
    ctx->pc = 0x16473cu;
    ctx->vu0_vf[8] = ctx->vu0_vf[1];
    // 0x164740: 0x4a28133c  vmove.w     $vf8, $vf2
    ctx->pc = 0x164740u;
    ctx->vu0_vf[8] = ctx->vu0_vf[2];
    // 0x164744: 0xce40007c  pref        0x00, 0x7C($s2)
    ctx->pc = 0x164744u;
    // PREF instruction (ignored)
    // 0x164748: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x164748u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16474c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x16474cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164750: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x164750u;
    {
        const bool branch_taken_0x164750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164750u;
            // 0x164754: 0xafa20640  sw          $v0, 0x640($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164750) {
            ctx->pc = 0x164AECu;
            goto label_164aec;
        }
    }
    ctx->pc = 0x164758u;
    // 0x164758: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x164758u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16475c: 0x0  nop
    ctx->pc = 0x16475cu;
    // NOP
label_164760:
    // 0x164760: 0x8fa3061c  lw          $v1, 0x61C($sp)
    ctx->pc = 0x164760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1564)));
    // 0x164764: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x164764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x164768: 0x96e40002  lhu         $a0, 0x2($s7)
    ctx->pc = 0x164768u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x16476c: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x16476cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x164770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164774: 0x8fa60628  lw          $a2, 0x628($sp)
    ctx->pc = 0x164774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1576)));
    // 0x164778: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x164778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16477c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16477cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164780: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x164780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x164784: 0xdba30630  lqc2        $vf3, 0x630($sp)
    ctx->pc = 0x164784u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x164788: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x164788u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16478c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16478cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164790: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x164790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x164794: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x164794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164798: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x164798u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16479c: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x16479cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1647a0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1647a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1647a4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1647a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1647a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1647a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1647ac: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1647acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1647b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1647b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1647b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1647b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1647b8: 0x0  nop
    ctx->pc = 0x1647b8u;
    // NOP
    // 0x1647bc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1647BCu;
    {
        const bool branch_taken_0x1647bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1647C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647BCu;
            // 0x1647c0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647bc) {
            ctx->pc = 0x164818u;
            goto label_164818;
        }
    }
    ctx->pc = 0x1647C4u;
    // 0x1647c4: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x1647c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1647c8: 0x8fa4062c  lw          $a0, 0x62C($sp)
    ctx->pc = 0x1647c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1580)));
    // 0x1647cc: 0x106000c2  beqz        $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1647CCu;
    {
        const bool branch_taken_0x1647cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1647CCu;
            // 0x1647d0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647cc) {
            ctx->pc = 0x164AD8u;
            goto label_164ad8;
        }
    }
    ctx->pc = 0x1647D4u;
    // 0x1647d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1647d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1647d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647dc: 0x0  nop
    ctx->pc = 0x1647dcu;
    // NOP
label_1647e0:
    // 0x1647e0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1647e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1647e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1647e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1647e8: 0x8fa70620  lw          $a3, 0x620($sp)
    ctx->pc = 0x1647e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x1647ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1647ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1647f0: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x1647f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1647f4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1647f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1647f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1647f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1647fc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1647fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164800: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x164800u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x164804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164808: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x164808u;
    {
        const bool branch_taken_0x164808 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164808u;
            // 0x16480c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164808) {
            ctx->pc = 0x1647E0u;
            runtime->cooperativeGuestYield();
            goto label_1647e0;
        }
    }
    ctx->pc = 0x164810u;
    // 0x164810: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x164810u;
    {
        const bool branch_taken_0x164810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164810u;
            // 0x164814: 0x8fa30640  lw          $v1, 0x640($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164810) {
            ctx->pc = 0x164ADCu;
            goto label_164adc;
        }
    }
    ctx->pc = 0x164818u;
label_164818:
    // 0x164818: 0x96f10000  lhu         $s1, 0x0($s7)
    ctx->pc = 0x164818u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x16481c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x16481cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x164820: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x164820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
    // 0x164824: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x164824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164828: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x164828u;
    {
        const bool branch_taken_0x164828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164828u;
            // 0x16482c: 0x8fa30618  lw          $v1, 0x618($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164828) {
            ctx->pc = 0x1648A8u;
            goto label_1648a8;
        }
    }
    ctx->pc = 0x164830u;
    // 0x164830: 0x82c70147  lb          $a3, 0x147($s6)
    ctx->pc = 0x164830u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x164834: 0x754023  subu        $t0, $v1, $s5
    ctx->pc = 0x164834u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x164838: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x16483c: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x16483cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x164840: 0xa2c70146  sb          $a3, 0x146($s6)
    ctx->pc = 0x164840u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 326), (uint8_t)GPR_U32(ctx, 7));
    // 0x164844: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x164848: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x164848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16484c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x16484cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x164850: 0x8ec20140  lw          $v0, 0x140($s6)
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
    // 0x164854: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x164854u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x164858: 0x8fb50618  lw          $s5, 0x618($sp)
    ctx->pc = 0x164858u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
    // 0x16485c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16486c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x164870: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x164870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x164874: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x164874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16487c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164880: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x164880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x164884: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x164884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x164888: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x164888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16488c: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x16488cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
    // 0x164890: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x164890u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x164894: 0xfba806b0  sqc2        $vf8, 0x6B0($sp)
    ctx->pc = 0x164894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x164898: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x164898u;
    SET_GPR_U32(ctx, 31, 0x1648A0u);
    ctx->pc = 0x16489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164898u;
            // 0x16489c: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648A0u; }
        if (ctx->pc != 0x1648A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648A0u; }
        if (ctx->pc != 0x1648A0u) { return; }
    }
    ctx->pc = 0x1648A0u;
    // 0x1648a0: 0xdba806b0  lqc2        $vf8, 0x6B0($sp)
    ctx->pc = 0x1648a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1712)));
    // 0x1648a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1648a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1648a8:
    // 0x1648a8: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1648a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1648ac: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1648acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1648b0: 0xce4000bc  pref        0x00, 0xBC($s2)
    ctx->pc = 0x1648b0u;
    // PREF instruction (ignored)
    // 0x1648b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1648b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1648b8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1648b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1648bc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1648bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1648c0: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x1648c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1648c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1648c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1648c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1648c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1648cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1648ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1648d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1648d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1648d4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1648d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1648d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1648d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1648dc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1648dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1648e0: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1648e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1648e4: 0x4be828aa  vmul.xyzw   $vf2, $vf5, $vf8
    ctx->pc = 0x1648e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1648e8: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1648e8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1648ec: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1648ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1648f0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1648f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1648f4: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1648f4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1648f8: 0x4be830aa  vmul.xyzw   $vf2, $vf6, $vf8
    ctx->pc = 0x1648f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1648fc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1648fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164900: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x164900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164904: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x164904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164908: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x164908u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16490c: 0x4be838aa  vmul.xyzw   $vf2, $vf7, $vf8
    ctx->pc = 0x16490cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164910: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x164910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164914: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x164914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164918: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x164918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16491c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16491cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164920: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x164920u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x164924: 0xdba10630  lqc2        $vf1, 0x630($sp)
    ctx->pc = 0x164924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x164928: 0x4be808aa  vmul.xyzw   $vf2, $vf1, $vf8
    ctx->pc = 0x164928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16492c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16492cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164930: 0x4b0800c3  vaddw.x     $vf3, $vf0, $vf8w
    ctx->pc = 0x164930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164934: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x164934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164938: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x164938u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16493c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16493cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164944: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x164944u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x164948: 0xdba10630  lqc2        $vf1, 0x630($sp)
    ctx->pc = 0x164948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x16494c: 0x46041981  sub.s       $f6, $f3, $f4
    ctx->pc = 0x16494cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x164950: 0x4be1292c  vsub.xyzw   $vf4, $vf5, $vf1
    ctx->pc = 0x164950u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164954: 0x46040941  sub.s       $f5, $f1, $f4
    ctx->pc = 0x164954u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x164958: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x164958u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x16495c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x16495cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x164960: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x164960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x164964: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x164964u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x164968: 0xfba404b0  sqc2        $vf4, 0x4B0($sp)
    ctx->pc = 0x164968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16496c: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x16496cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x164970: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x164970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x164974: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x164974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164978: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x164978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16497c: 0x4be4292c  vsub.xyzw   $vf4, $vf5, $vf4
    ctx->pc = 0x16497cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164980: 0xdba10630  lqc2        $vf1, 0x630($sp)
    ctx->pc = 0x164980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x164984: 0x4be130ec  vsub.xyzw   $vf3, $vf6, $vf1
    ctx->pc = 0x164984u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164988: 0xfba304c0  sqc2        $vf3, 0x4C0($sp)
    ctx->pc = 0x164988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16498c: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x16498cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x164990: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x164990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x164994: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x164994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164998: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x164998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16499c: 0x4be330ec  vsub.xyzw   $vf3, $vf6, $vf3
    ctx->pc = 0x16499cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1649a0: 0xdba10630  lqc2        $vf1, 0x630($sp)
    ctx->pc = 0x1649a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x1649a4: 0x4be138ac  vsub.xyzw   $vf2, $vf7, $vf1
    ctx->pc = 0x1649a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1649a8: 0xfba204d0  sqc2        $vf2, 0x4D0($sp)
    ctx->pc = 0x1649a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1649ac: 0x460618c3  div.s       $f3, $f3, $f6
    ctx->pc = 0x1649acu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[6];
    // 0x1649b0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1649b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1649b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1649b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1649b8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1649b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1649bc: 0x4be238ac  vsub.xyzw   $vf2, $vf7, $vf2
    ctx->pc = 0x1649bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1649c0: 0x4be5297c  vftoi0.xyzw $vf5, $vf5
    ctx->pc = 0x1649c0u;
    { __m128 src = ctx->vu0_vf[5]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1649c4: 0x4be6317c  vftoi0.xyzw $vf6, $vf6
    ctx->pc = 0x1649c4u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1649c8: 0x4be7397c  vftoi0.xyzw $vf7, $vf7
    ctx->pc = 0x1649c8u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1649cc: 0x4be4217c  vftoi0.xyzw $vf4, $vf4
    ctx->pc = 0x1649ccu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1649d0: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x1649d0u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1649d4: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x1649d4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1649d8: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1649d8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1649dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1649dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1649e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1649e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1649e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1649e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1649e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1649e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649ec: 0xfa460010  sqc2        $vf6, 0x10($s2)
    ctx->pc = 0x1649ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1649f0: 0x91202a  slt         $a0, $a0, $s1
    ctx->pc = 0x1649f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1649f4: 0xfa470020  sqc2        $vf7, 0x20($s2)
    ctx->pc = 0x1649f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1649f8: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1649f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1649fc: 0xf8a30010  sqc2        $vf3, 0x10($a1)
    ctx->pc = 0x1649fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164a00: 0xf8a20020  sqc2        $vf2, 0x20($a1)
    ctx->pc = 0x164a00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164a04: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x164a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x164a08: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x164a08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x164a0c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x164a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x164a10: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x164a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x164a14: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x164a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x164a18: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x164a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x164a1c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x164a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x164a20: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x164A20u;
    {
        const bool branch_taken_0x164a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A20u;
            // 0x164a24: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a20) {
            ctx->pc = 0x164AC8u;
            goto label_164ac8;
        }
    }
    ctx->pc = 0x164A28u;
    // 0x164a28: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x164a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x164a2c: 0x2624fffd  addiu       $a0, $s1, -0x3
    ctx->pc = 0x164a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
label_164a30:
    // 0x164a30: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x164a30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164a34: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x164a34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x164a38: 0xdba10630  lqc2        $vf1, 0x630($sp)
    ctx->pc = 0x164a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x164a3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164a40: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x164a44: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164a44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164a48: 0x4be120ec  vsub.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x164a48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164a4c: 0x4be818aa  vmul.xyzw   $vf2, $vf3, $vf8
    ctx->pc = 0x164a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164a50: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x164a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164a54: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x164a54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164a58: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x164a58u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164a5c: 0x4be820aa  vmul.xyzw   $vf2, $vf4, $vf8
    ctx->pc = 0x164a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164a60: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x164a60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164a64: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x164a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164a68: 0x4a221082  vaddz.w     $vf2, $vf2, $vf2z
    ctx->pc = 0x164a68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164a6c: 0xfba10290  sqc2        $vf1, 0x290($sp)
    ctx->pc = 0x164a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164a70: 0x4b020843  vaddw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x164a70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164a74: 0xfba202a0  sqc2        $vf2, 0x2A0($sp)
    ctx->pc = 0x164a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164a78: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x164a78u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164a7c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x164a7cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164a80: 0xfba304e0  sqc2        $vf3, 0x4E0($sp)
    ctx->pc = 0x164a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164a84: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x164a84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x164a88: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x164a88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x164a8c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x164a8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x164a90: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x164a90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164a94: 0x4be320ec  vsub.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x164a94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164a98: 0x4be4217c  vftoi0.xyzw $vf4, $vf4
    ctx->pc = 0x164a98u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164a9c: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x164a9cu;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164aa0: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x164aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164aa4: 0xae46000c  sw          $a2, 0xC($s2)
    ctx->pc = 0x164aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
    // 0x164aa8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x164aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x164aac: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x164aacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164ab0: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x164ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x164ab4: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x164ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x164ab8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x164ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x164abc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x164abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x164ac0: 0x1480ffdb  bnez        $a0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x164AC0u;
    {
        const bool branch_taken_0x164ac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x164AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164AC0u;
            // 0x164ac4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ac0) {
            ctx->pc = 0x164A30u;
            runtime->cooperativeGuestYield();
            goto label_164a30;
        }
    }
    ctx->pc = 0x164AC8u;
label_164ac8:
    // 0x164ac8: 0x8fa20644  lw          $v0, 0x644($sp)
    ctx->pc = 0x164ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
    // 0x164acc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x164accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ad0: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x164ad0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x164ad4: 0xce40007c  pref        0x00, 0x7C($s2)
    ctx->pc = 0x164ad4u;
    // PREF instruction (ignored)
label_164ad8:
    // 0x164ad8: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_164adc:
    // 0x164adc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x164adcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x164ae0: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x164ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x164ae4: 0x1440ff1e  bnez        $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x164AE4u;
    {
        const bool branch_taken_0x164ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164AE4u;
            // 0x164ae8: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ae4) {
            ctx->pc = 0x164760u;
            runtime->cooperativeGuestYield();
            goto label_164760;
        }
    }
    ctx->pc = 0x164AECu;
label_164aec:
    // 0x164aec: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x164aecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x164af0: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x164AF0u;
    {
        const bool branch_taken_0x164af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164af0) {
            ctx->pc = 0x164AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164AF0u;
            // 0x164af4: 0x8fa60618  lw          $a2, 0x618($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164CC8u;
            goto label_164cc8;
        }
    }
    ctx->pc = 0x164AF8u;
    // 0x164af8: 0x8fb30624  lw          $s3, 0x624($sp)
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1572)));
    // 0x164afc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b00: 0x8fb10620  lw          $s1, 0x620($sp)
    ctx->pc = 0x164b00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x164b04: 0x0  nop
    ctx->pc = 0x164b04u;
    // NOP
label_164b08:
    // 0x164b08: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x164b08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164b10: 0x54620069  bnel        $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x164B10u;
    {
        const bool branch_taken_0x164b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164b10) {
            ctx->pc = 0x164B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164B10u;
            // 0x164b14: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164CB8u;
            goto label_164cb8;
        }
    }
    ctx->pc = 0x164B18u;
    // 0x164b18: 0xce40007c  pref        0x00, 0x7C($s2)
    ctx->pc = 0x164b18u;
    // PREF instruction (ignored)
    // 0x164b1c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x164b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x164b20: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x164B20u;
    {
        const bool branch_taken_0x164b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164B20u;
            // 0x164b24: 0x8fa40618  lw          $a0, 0x618($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b20) {
            ctx->pc = 0x164BA0u;
            goto label_164ba0;
        }
    }
    ctx->pc = 0x164B28u;
    // 0x164b28: 0x82c70147  lb          $a3, 0x147($s6)
    ctx->pc = 0x164b28u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x164b2c: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x164b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x164b30: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x164b30u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x164b34: 0x954023  subu        $t0, $a0, $s5
    ctx->pc = 0x164b34u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x164b38: 0xa2c70146  sb          $a3, 0x146($s6)
    ctx->pc = 0x164b38u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 326), (uint8_t)GPR_U32(ctx, 7));
    // 0x164b3c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x164b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x164b40: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x164b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x164b44: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x164b44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x164b48: 0x8ec20140  lw          $v0, 0x140($s6)
    ctx->pc = 0x164b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
    // 0x164b4c: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x164b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x164b50: 0x8fb50618  lw          $s5, 0x618($sp)
    ctx->pc = 0x164b50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
    // 0x164b54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x164b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164b64: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x164b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x164b68: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x164b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x164b6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164b70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164b78: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x164b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x164b7c: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x164b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x164b80: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x164b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x164b84: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x164b84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
    // 0x164b88: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x164b88u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x164b8c: 0xfba806b0  sqc2        $vf8, 0x6B0($sp)
    ctx->pc = 0x164b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x164b90: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x164B90u;
    SET_GPR_U32(ctx, 31, 0x164B98u);
    ctx->pc = 0x164B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B90u;
            // 0x164b94: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B98u; }
        if (ctx->pc != 0x164B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B98u; }
        if (ctx->pc != 0x164B98u) { return; }
    }
    ctx->pc = 0x164B98u;
    // 0x164b98: 0xdba806b0  lqc2        $vf8, 0x6B0($sp)
    ctx->pc = 0x164b98u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1712)));
    // 0x164b9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x164b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164ba0:
    // 0x164ba0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x164ba0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x164ba4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x164ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x164ba8: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x164ba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x164bac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164bb0: 0xdba10630  lqc2        $vf1, 0x630($sp)
    ctx->pc = 0x164bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x164bb4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164bb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x164bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x164bbc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x164bbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164bc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x164bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x164bc4: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x164bc4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164bc8: 0x4be1292c  vsub.xyzw   $vf4, $vf5, $vf1
    ctx->pc = 0x164bc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164bcc: 0x4be820aa  vmul.xyzw   $vf2, $vf4, $vf8
    ctx->pc = 0x164bccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164bd0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x164bd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164bd4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x164bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164bd8: 0xdba20630  lqc2        $vf2, 0x630($sp)
    ctx->pc = 0x164bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x164bdc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x164bdcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164be0: 0x4be230ec  vsub.xyzw   $vf3, $vf6, $vf2
    ctx->pc = 0x164be0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164be4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x164be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164be8: 0x4be818aa  vmul.xyzw   $vf2, $vf3, $vf8
    ctx->pc = 0x164be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164bec: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x164becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164bf0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x164bf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164bf4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x164bf4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164bf8: 0x4be828aa  vmul.xyzw   $vf2, $vf5, $vf8
    ctx->pc = 0x164bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164bfc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x164bfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x164c00: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x164c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164c04: 0x4a221082  vaddz.w     $vf2, $vf2, $vf2z
    ctx->pc = 0x164c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164c08: 0xfba102b0  sqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x164c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164c0c: 0x4b020843  vaddw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x164c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164c10: 0xfba202c0  sqc2        $vf2, 0x2C0($sp)
    ctx->pc = 0x164c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164c14: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x164c14u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164c18: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x164c18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164c1c: 0x4be8306a  vmul.xyzw   $vf1, $vf6, $vf8
    ctx->pc = 0x164c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164c20: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x164c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164c24: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x164c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164c28: 0xfba202d0  sqc2        $vf2, 0x2D0($sp)
    ctx->pc = 0x164c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164c2c: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x164c2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164c30: 0xfba102e0  sqc2        $vf1, 0x2E0($sp)
    ctx->pc = 0x164c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164c34: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x164c34u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164c38: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x164c38u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164c3c: 0xfba404f0  sqc2        $vf4, 0x4F0($sp)
    ctx->pc = 0x164c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164c40: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x164c40u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x164c44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x164c44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x164c48: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x164c48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164c4c: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x164c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164c50: 0x4be4292c  vsub.xyzw   $vf4, $vf5, $vf4
    ctx->pc = 0x164c50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164c54: 0xfba30500  sqc2        $vf3, 0x500($sp)
    ctx->pc = 0x164c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164c58: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x164c58u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x164c5c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x164c5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x164c60: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x164c60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x164c64: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x164c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164c68: 0x4be330ec  vsub.xyzw   $vf3, $vf6, $vf3
    ctx->pc = 0x164c68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164c6c: 0x4be5297c  vftoi0.xyzw $vf5, $vf5
    ctx->pc = 0x164c6cu;
    { __m128 src = ctx->vu0_vf[5]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164c70: 0x4be6317c  vftoi0.xyzw $vf6, $vf6
    ctx->pc = 0x164c70u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x164c74: 0x4be4217c  vftoi0.xyzw $vf4, $vf4
    ctx->pc = 0x164c74u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164c78: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x164c78u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164c7c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x164c7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x164c80: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x164c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x164c84: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x164c84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164c88: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x164c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x164c8c: 0xfa460010  sqc2        $vf6, 0x10($s2)
    ctx->pc = 0x164c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x164c90: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x164c90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x164c94: 0xfa440020  sqc2        $vf4, 0x20($s2)
    ctx->pc = 0x164c94u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164c98: 0xfa430030  sqc2        $vf3, 0x30($s2)
    ctx->pc = 0x164c98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164c9c: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x164c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x164ca0: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x164ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x164ca4: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x164ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x164ca8: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x164ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x164cac: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x164cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x164cb0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x164cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x164cb4: 0x0  nop
    ctx->pc = 0x164cb4u;
    // NOP
label_164cb8:
    // 0x164cb8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x164cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x164cbc: 0x1600ff92  bnez        $s0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x164CBCu;
    {
        const bool branch_taken_0x164cbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x164CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CBCu;
            // 0x164cc0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cbc) {
            ctx->pc = 0x164B08u;
            runtime->cooperativeGuestYield();
            goto label_164b08;
        }
    }
    ctx->pc = 0x164CC4u;
    // 0x164cc4: 0x8fa60618  lw          $a2, 0x618($sp)
    ctx->pc = 0x164cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
label_164cc8:
    // 0x164cc8: 0xd51023  subu        $v0, $a2, $s5
    ctx->pc = 0x164cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x164ccc: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x164cccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x164cd0: 0x8fa70598  lw          $a3, 0x598($sp)
    ctx->pc = 0x164cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x164cd4: 0x0  nop
    ctx->pc = 0x164cd4u;
    // NOP
label_164cd8:
    // 0x164cd8: 0x8fa30594  lw          $v1, 0x594($sp)
    ctx->pc = 0x164cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x164cdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x164cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x164ce0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x164ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x164ce4: 0x1440fde8  bnez        $v0, . + 4 + (-0x218 << 2)
    ctx->pc = 0x164CE4u;
    {
        const bool branch_taken_0x164ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CE4u;
            // 0x164ce8: 0xafa70598  sw          $a3, 0x598($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ce4) {
            ctx->pc = 0x164488u;
            runtime->cooperativeGuestYield();
            goto label_164488;
        }
    }
    ctx->pc = 0x164CECu;
    // 0x164cec: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x164CECu;
    {
        const bool branch_taken_0x164cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CECu;
            // 0x164cf0: 0x8fa70590  lw          $a3, 0x590($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cec) {
            ctx->pc = 0x1653F8u;
            goto label_1653f8;
        }
    }
    ctx->pc = 0x164CF4u;
label_164cf4:
    // 0x164cf4: 0x8fa40594  lw          $a0, 0x594($sp)
    ctx->pc = 0x164cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x164cf8: 0x188001be  blez        $a0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x164CF8u;
    {
        const bool branch_taken_0x164cf8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x164CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CF8u;
            // 0x164cfc: 0xafa00598  sw          $zero, 0x598($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cf8) {
            ctx->pc = 0x1653F4u;
            goto label_1653f4;
        }
    }
    ctx->pc = 0x164D00u;
label_164d00:
    // 0x164d00: 0x8fa6058c  lw          $a2, 0x58C($sp)
    ctx->pc = 0x164d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x164d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d08: 0x8fa70598  lw          $a3, 0x598($sp)
    ctx->pc = 0x164d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x164d0c: 0x8cc9001c  lw          $t1, 0x1C($a2)
    ctx->pc = 0x164d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x164d10: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x164d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x164d14: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x164d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x164d18: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x164d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x164d1c: 0x8e960020  lw          $s6, 0x20($s4)
    ctx->pc = 0x164d1cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x164d20: 0x8e8a0030  lw          $t2, 0x30($s4)
    ctx->pc = 0x164d20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x164d24: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x164d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x164d28: 0xafa60648  sw          $a2, 0x648($sp)
    ctx->pc = 0x164d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 6));
    // 0x164d2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164d30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x164d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d34: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x164d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x164d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164d3c: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x164d3cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x164d40: 0x1229821  addu        $s3, $t1, $v0
    ctx->pc = 0x164d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x164d44: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x164d44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x164d48: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x164d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
    // 0x164d4c: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x164d4cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x164d50: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x164D50u;
    SET_GPR_U32(ctx, 31, 0x164D58u);
    ctx->pc = 0x164D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D50u;
            // 0x164d54: 0x4aa823  subu        $s5, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D58u; }
        if (ctx->pc != 0x164D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D58u; }
        if (ctx->pc != 0x164D58u) { return; }
    }
    ctx->pc = 0x164D58u;
    // 0x164d58: 0x8fa4058c  lw          $a0, 0x58C($sp)
    ctx->pc = 0x164d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x164d5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d60: 0x92720011  lbu         $s2, 0x11($s3)
    ctx->pc = 0x164d60u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x164d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164d68: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x164d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x164d6c: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x164d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
    // 0x164d70: 0x3244001f  andi        $a0, $s2, 0x1F
    ctx->pc = 0x164d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x164d74: 0x8cb00104  lw          $s0, 0x104($a1)
    ctx->pc = 0x164d74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x164d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x164d7c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x164d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x164d80: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x164d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x164d84: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x164d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x164d88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x164d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x164d8c: 0x10400194  beqz        $v0, . + 4 + (0x194 << 2)
    ctx->pc = 0x164D8Cu;
    {
        const bool branch_taken_0x164d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D8Cu;
            // 0x164d90: 0x8fa40598  lw          $a0, 0x598($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d8c) {
            ctx->pc = 0x1653E0u;
            goto label_1653e0;
        }
    }
    ctx->pc = 0x164D94u;
    // 0x164d94: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x164d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x164d98: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x164d98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x164d9c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x164d9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x164da0: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164DA0u;
    {
        const bool branch_taken_0x164da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x164da0) {
            ctx->pc = 0x164DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164DA0u;
            // 0x164da4: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164DB8u;
            goto label_164db8;
        }
    }
    ctx->pc = 0x164DA8u;
    // 0x164da8: 0xc04da64  jal         func_136990
    ctx->pc = 0x164DA8u;
    SET_GPR_U32(ctx, 31, 0x164DB0u);
    ctx->pc = 0x164DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164DA8u;
            // 0x164dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DB0u; }
        if (ctx->pc != 0x164DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DB0u; }
        if (ctx->pc != 0x164DB0u) { return; }
    }
    ctx->pc = 0x164DB0u;
    // 0x164db0: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x164db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x164db4: 0x0  nop
    ctx->pc = 0x164db4u;
    // NOP
label_164db8:
    // 0x164db8: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x164db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x164dbc: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x164dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x164dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164dc4: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x164dc4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164dc8: 0xfba302f0  sqc2        $vf3, 0x2F0($sp)
    ctx->pc = 0x164dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164dcc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x164dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x164dd0: 0x7fa20300  sq          $v0, 0x300($sp)
    ctx->pc = 0x164dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 2));
    // 0x164dd4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x164dd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x164dd8: 0x7fa20310  sq          $v0, 0x310($sp)
    ctx->pc = 0x164dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 2));
    // 0x164ddc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x164ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x164de0: 0x7fa20320  sq          $v0, 0x320($sp)
    ctx->pc = 0x164de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 2));
    // 0x164de4: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x164de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x164de8: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x164de8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x164dec: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x164decu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x164df0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x164df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x164df4: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x164df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x164df8: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x164df8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x164dfc: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x164dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x164e00: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x164e00u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x164e04: 0x96640012  lhu         $a0, 0x12($s3)
    ctx->pc = 0x164e04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x164e08: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x164e08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x164e0c: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x164e0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x164e10: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x164e10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164e14: 0xfba20510  sqc2        $vf2, 0x510($sp)
    ctx->pc = 0x164e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164e18: 0xfba302f0  sqc2        $vf3, 0x2F0($sp)
    ctx->pc = 0x164e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164e1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x164e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x164e20: 0xfba20330  sqc2        $vf2, 0x330($sp)
    ctx->pc = 0x164e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164e24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164e28: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x164e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x164e2c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x164e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x164e30: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x164e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x164e34: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x164e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164e38: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x164e38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x164e3c: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x164e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164e40: 0xfba30340  sqc2        $vf3, 0x340($sp)
    ctx->pc = 0x164e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164e44: 0xfba10350  sqc2        $vf1, 0x350($sp)
    ctx->pc = 0x164e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164e48: 0xafa20650  sw          $v0, 0x650($sp)
    ctx->pc = 0x164e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 2));
    // 0x164e4c: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x164e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164e50: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x164e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x164e54: 0xafa4064c  sw          $a0, 0x64C($sp)
    ctx->pc = 0x164e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1612), GPR_U32(ctx, 4));
    // 0x164e58: 0xdba20510  lqc2        $vf2, 0x510($sp)
    ctx->pc = 0x164e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x164e5c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x164e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x164e60: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x164e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164e64: 0xd8a20030  lqc2        $vf2, 0x30($a1)
    ctx->pc = 0x164e64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x164e68: 0xfba10360  sqc2        $vf1, 0x360($sp)
    ctx->pc = 0x164e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164e6c: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x164e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164e70: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x164e70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x164e74: 0xdba10510  lqc2        $vf1, 0x510($sp)
    ctx->pc = 0x164e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x164e78: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x164e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x164e7c: 0x2623821  addu        $a3, $s3, $v0
    ctx->pc = 0x164e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x164e80: 0xfba20370  sqc2        $vf2, 0x370($sp)
    ctx->pc = 0x164e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164e84: 0xf8a20030  sqc2        $vf2, 0x30($a1)
    ctx->pc = 0x164e84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x164e88: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x164e88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x164e8c: 0x96630022  lhu         $v1, 0x22($s3)
    ctx->pc = 0x164e8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x164e90: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x164e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x164e94: 0xdba502f0  lqc2        $vf5, 0x2F0($sp)
    ctx->pc = 0x164e94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x164e98: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x164e98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x164e9c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x164e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x164ea0: 0xafa30654  sw          $v1, 0x654($sp)
    ctx->pc = 0x164ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 3));
    // 0x164ea4: 0x96630026  lhu         $v1, 0x26($s3)
    ctx->pc = 0x164ea4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x164ea8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x164ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x164eac: 0xafa20658  sw          $v0, 0x658($sp)
    ctx->pc = 0x164eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1624), GPR_U32(ctx, 2));
    // 0x164eb0: 0x96620028  lhu         $v0, 0x28($s3)
    ctx->pc = 0x164eb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x164eb4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x164eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x164eb8: 0xafa3065c  sw          $v1, 0x65C($sp)
    ctx->pc = 0x164eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1628), GPR_U32(ctx, 3));
    // 0x164ebc: 0x2624021  addu        $t0, $s3, $v0
    ctx->pc = 0x164ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x164ec0: 0xdba40300  lqc2        $vf4, 0x300($sp)
    ctx->pc = 0x164ec0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x164ec4: 0xdba30310  lqc2        $vf3, 0x310($sp)
    ctx->pc = 0x164ec4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x164ec8: 0xdba20320  lqc2        $vf2, 0x320($sp)
    ctx->pc = 0x164ec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x164ecc: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x164eccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x164ed0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x164ED0u;
    {
        const bool branch_taken_0x164ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164ED0u;
            // 0x164ed4: 0xac86c300  sw          $a2, -0x3D00($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294951680), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ed0) {
            ctx->pc = 0x164F10u;
            goto label_164f10;
        }
    }
    ctx->pc = 0x164ED8u;
    // 0x164ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164edc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x164edcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ee0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x164ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x164ee4: 0x0  nop
    ctx->pc = 0x164ee4u;
    // NOP
label_164ee8:
    // 0x164ee8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x164ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164eec: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x164eecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x164ef0: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x164ef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x164ef4: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x164ef4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x164ef8: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x164ef8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x164efc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x164efcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164f00: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164f04: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x164f08: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x164F08u;
    {
        const bool branch_taken_0x164f08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x164F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F08u;
            // 0x164f0c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f08) {
            ctx->pc = 0x164EE8u;
            runtime->cooperativeGuestYield();
            goto label_164ee8;
        }
    }
    ctx->pc = 0x164F10u;
label_164f10:
    // 0x164f10: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x164f10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x164f14: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x164F14u;
    {
        const bool branch_taken_0x164f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f14) {
            ctx->pc = 0x164F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164F14u;
            // 0x164f18: 0x96620016  lhu         $v0, 0x16($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164F58u;
            goto label_164f58;
        }
    }
    ctx->pc = 0x164F1Cu;
    // 0x164f1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f20: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x164f20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f24: 0x8fa2064c  lw          $v0, 0x64C($sp)
    ctx->pc = 0x164f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1612)));
label_164f28:
    // 0x164f28: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x164f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164f2c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x164f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x164f30: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x164f30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x164f34: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x164f34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x164f38: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x164f38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x164f3c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x164f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x164f40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164f44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x164f48: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x164F48u;
    {
        const bool branch_taken_0x164f48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x164F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F48u;
            // 0x164f4c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f48) {
            ctx->pc = 0x164F28u;
            runtime->cooperativeGuestYield();
            goto label_164f28;
        }
    }
    ctx->pc = 0x164F50u;
    // 0x164f50: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x164f50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x164f54: 0x0  nop
    ctx->pc = 0x164f54u;
    // NOP
label_164f58:
    // 0x164f58: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164F58u;
    {
        const bool branch_taken_0x164f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f58) {
            ctx->pc = 0x164F84u;
            goto label_164f84;
        }
    }
    ctx->pc = 0x164F60u;
    // 0x164f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f64: 0x8fa20650  lw          $v0, 0x650($sp)
    ctx->pc = 0x164f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_164f68:
    // 0x164f68: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x164f68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x164f6c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x164f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x164f70: 0x0  nop
    ctx->pc = 0x164f70u;
    // NOP
    // 0x164f74: 0x0  nop
    ctx->pc = 0x164f74u;
    // NOP
    // 0x164f78: 0x0  nop
    ctx->pc = 0x164f78u;
    // NOP
    // 0x164f7c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x164F7Cu;
    {
        const bool branch_taken_0x164f7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x164F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F7Cu;
            // 0x164f80: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f7c) {
            ctx->pc = 0x164F68u;
            runtime->cooperativeGuestYield();
            goto label_164f68;
        }
    }
    ctx->pc = 0x164F84u;
label_164f84:
    // 0x164f84: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x164f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x164f88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x164f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x164f8c: 0x8fa7058c  lw          $a3, 0x58C($sp)
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
    // 0x164f90: 0xd8e10100  lqc2        $vf1, 0x100($a3)
    ctx->pc = 0x164f90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x164f94: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x164f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164f98: 0xfba30660  sqc2        $vf3, 0x660($sp)
    ctx->pc = 0x164f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164f9c: 0x8ce2012c  lw          $v0, 0x12C($a3)
    ctx->pc = 0x164f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 300)));
    // 0x164fa0: 0xafa20670  sw          $v0, 0x670($sp)
    ctx->pc = 0x164fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1648), GPR_U32(ctx, 2));
    // 0x164fa4: 0xce20007c  pref        0x00, 0x7C($s1)
    ctx->pc = 0x164fa4u;
    // PREF instruction (ignored)
    // 0x164fa8: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x164fa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x164fac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x164facu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164fb0: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x164FB0u;
    {
        const bool branch_taken_0x164fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164FB0u;
            // 0x164fb4: 0xafa30674  sw          $v1, 0x674($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fb0) {
            ctx->pc = 0x165274u;
            goto label_165274;
        }
    }
    ctx->pc = 0x164FB8u;
    // 0x164fb8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x164fb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164fbc: 0x0  nop
    ctx->pc = 0x164fbcu;
    // NOP
label_164fc0:
    // 0x164fc0: 0x96e40002  lhu         $a0, 0x2($s7)
    ctx->pc = 0x164fc0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x164fc4: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x164fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x164fc8: 0x8fa6064c  lw          $a2, 0x64C($sp)
    ctx->pc = 0x164fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1612)));
    // 0x164fcc: 0x8fa70658  lw          $a3, 0x658($sp)
    ctx->pc = 0x164fccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
    // 0x164fd0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x164fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x164fd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x164fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x164fd8: 0xdba30660  lqc2        $vf3, 0x660($sp)
    ctx->pc = 0x164fd8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x164fdc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x164fdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164fe0: 0xe38021  addu        $s0, $a3, $v1
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x164fe4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x164fe4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164fe8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x164fec: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x164fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x164ff0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x164ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164ff4: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x164ff4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164ff8: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x164ff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x164ffc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x164ffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165000: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x165000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165004: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x165004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165008: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x165008u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16500c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16500cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x165010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165014: 0x0  nop
    ctx->pc = 0x165014u;
    // NOP
    // 0x165018: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x165018u;
    {
        const bool branch_taken_0x165018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165018u;
            // 0x16501c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165018) {
            ctx->pc = 0x165070u;
            goto label_165070;
        }
    }
    ctx->pc = 0x165020u;
    // 0x165020: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x165020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x165024: 0x8fa4065c  lw          $a0, 0x65C($sp)
    ctx->pc = 0x165024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
    // 0x165028: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x165028u;
    {
        const bool branch_taken_0x165028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165028u;
            // 0x16502c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165028) {
            ctx->pc = 0x165260u;
            goto label_165260;
        }
    }
    ctx->pc = 0x165030u;
    // 0x165030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x165030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165034: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x165034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_165038:
    // 0x165038: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x165038u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16503c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x165040: 0x8fa70650  lw          $a3, 0x650($sp)
    ctx->pc = 0x165040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x165044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165048: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x165048u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x16504c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x16504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x165050: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x165050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x165054: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x165054u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165058: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x165058u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16505c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165060: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x165060u;
    {
        const bool branch_taken_0x165060 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x165064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165060u;
            // 0x165064: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165060) {
            ctx->pc = 0x165038u;
            runtime->cooperativeGuestYield();
            goto label_165038;
        }
    }
    ctx->pc = 0x165068u;
    // 0x165068: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x165068u;
    {
        const bool branch_taken_0x165068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16506Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165068u;
            // 0x16506c: 0x8fa30674  lw          $v1, 0x674($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165068) {
            ctx->pc = 0x165264u;
            goto label_165264;
        }
    }
    ctx->pc = 0x165070u;
label_165070:
    // 0x165070: 0x96f20000  lhu         $s2, 0x0($s7)
    ctx->pc = 0x165070u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x165074: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x165074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x165078: 0xafa20678  sw          $v0, 0x678($sp)
    ctx->pc = 0x165078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1656), GPR_U32(ctx, 2));
    // 0x16507c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x16507cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x165080: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x165080u;
    {
        const bool branch_taken_0x165080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165080u;
            // 0x165084: 0x8fa30648  lw          $v1, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165080) {
            ctx->pc = 0x165100u;
            goto label_165100;
        }
    }
    ctx->pc = 0x165088u;
    // 0x165088: 0x82c70147  lb          $a3, 0x147($s6)
    ctx->pc = 0x165088u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x16508c: 0x754023  subu        $t0, $v1, $s5
    ctx->pc = 0x16508cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x165090: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x165094: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x165094u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x165098: 0xa2c70146  sb          $a3, 0x146($s6)
    ctx->pc = 0x165098u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 326), (uint8_t)GPR_U32(ctx, 7));
    // 0x16509c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x16509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1650a0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1650a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1650a4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1650a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1650a8: 0x8ec20140  lw          $v0, 0x140($s6)
    ctx->pc = 0x1650a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
    // 0x1650ac: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x1650acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x1650b0: 0x8fb50648  lw          $s5, 0x648($sp)
    ctx->pc = 0x1650b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
    // 0x1650b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1650b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1650b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1650bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1650c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1650c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1650c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1650c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1650c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1650cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1650ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1650d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1650d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1650d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1650d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1650d8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1650d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1650dc: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x1650dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1650e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1650e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1650e4: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x1650e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
    // 0x1650e8: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x1650e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x1650ec: 0x7fa90680  sq          $t1, 0x680($sp)
    ctx->pc = 0x1650ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 9));
    // 0x1650f0: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x1650F0u;
    SET_GPR_U32(ctx, 31, 0x1650F8u);
    ctx->pc = 0x1650F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1650F0u;
            // 0x1650f4: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650F8u; }
        if (ctx->pc != 0x1650F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650F8u; }
        if (ctx->pc != 0x1650F8u) { return; }
    }
    ctx->pc = 0x1650F8u;
    // 0x1650f8: 0x7ba90680  lq          $t1, 0x680($sp)
    ctx->pc = 0x1650f8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x1650fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1650fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165100:
    // 0x165100: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x165100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x165104: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x165104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x165108: 0xce2000bc  pref        0x00, 0xBC($s1)
    ctx->pc = 0x165108u;
    // PREF instruction (ignored)
    // 0x16510c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x16510cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165110: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x165110u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x165114: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x165114u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165118: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16511c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x165120: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x165120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x165124: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x165124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x165128: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x165128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x16512c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x16512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x165130: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x165130u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165134: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x165134u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165138: 0xdba10660  lqc2        $vf1, 0x660($sp)
    ctx->pc = 0x165138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x16513c: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x16513cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165140: 0x4be128ec  vsub.xyzw   $vf3, $vf5, $vf1
    ctx->pc = 0x165140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x165144: 0xfba30520  sqc2        $vf3, 0x520($sp)
    ctx->pc = 0x165144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x165148: 0x8fa30670  lw          $v1, 0x670($sp)
    ctx->pc = 0x165148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x16514c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x16514cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x165150: 0x4be418d8  vmulx.xyzw  $vf3, $vf3, $vf4x
    ctx->pc = 0x165150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x165154: 0x4be328e8  vadd.xyzw   $vf3, $vf5, $vf3
    ctx->pc = 0x165154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x165158: 0x4be130ac  vsub.xyzw   $vf2, $vf6, $vf1
    ctx->pc = 0x165158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16515c: 0xfba20530  sqc2        $vf2, 0x530($sp)
    ctx->pc = 0x16515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x165160: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x165160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165164: 0x4be230a8  vadd.xyzw   $vf2, $vf6, $vf2
    ctx->pc = 0x165164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165168: 0xdba80660  lqc2        $vf8, 0x660($sp)
    ctx->pc = 0x165168u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x16516c: 0x4be8386c  vsub.xyzw   $vf1, $vf7, $vf8
    ctx->pc = 0x16516cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165170: 0xfba10540  sqc2        $vf1, 0x540($sp)
    ctx->pc = 0x165170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x165174: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x165174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165178: 0x4be13868  vadd.xyzw   $vf1, $vf7, $vf1
    ctx->pc = 0x165178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16517c: 0x4be5297c  vftoi0.xyzw $vf5, $vf5
    ctx->pc = 0x16517cu;
    { __m128 src = ctx->vu0_vf[5]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x165180: 0x4be6317c  vftoi0.xyzw $vf6, $vf6
    ctx->pc = 0x165180u;
    { __m128 src = ctx->vu0_vf[6]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165184: 0x4be7397c  vftoi0.xyzw $vf7, $vf7
    ctx->pc = 0x165184u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x165188: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x165188u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16518c: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x16518cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165190: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x165190u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165194: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x165194u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x165198: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x165198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16519c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1651a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1651a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1651a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1651a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651a8: 0xfa260010  sqc2        $vf6, 0x10($s1)
    ctx->pc = 0x1651a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1651ac: 0x92202a  slt         $a0, $a0, $s2
    ctx->pc = 0x1651acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1651b0: 0xfa270020  sqc2        $vf7, 0x20($s1)
    ctx->pc = 0x1651b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1651b4: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1651b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1651b8: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x1651b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1651bc: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1651bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1651c0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1651c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1651c4: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1651c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x1651c8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1651c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1651cc: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1651ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1651d0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1651d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1651d4: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1651d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1651d8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1651d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1651dc: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1651DCu;
    {
        const bool branch_taken_0x1651dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1651DCu;
            // 0x1651e0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651dc) {
            ctx->pc = 0x165250u;
            goto label_165250;
        }
    }
    ctx->pc = 0x1651E4u;
    // 0x1651e4: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x1651e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1651e8: 0x2644fffd  addiu       $a0, $s2, -0x3
    ctx->pc = 0x1651e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
    // 0x1651ec: 0x0  nop
    ctx->pc = 0x1651ecu;
    // NOP
label_1651f0:
    // 0x1651f0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1651f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1651f4: 0xdba20660  lqc2        $vf2, 0x660($sp)
    ctx->pc = 0x1651f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x1651f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1651f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1651fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1651fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x165200: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x165200u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165204: 0x4be2186c  vsub.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x165204u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165208: 0xfba10550  sqc2        $vf1, 0x550($sp)
    ctx->pc = 0x165208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16520c: 0x8fa70670  lw          $a3, 0x670($sp)
    ctx->pc = 0x16520cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x165210: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x165210u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x165214: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x165214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165218: 0x4be11868  vadd.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x165218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16521c: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x16521cu;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x165220: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x165220u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165224: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x165224u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x165228: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x165228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x16522c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x16522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x165230: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x165230u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x165234: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x165234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x165238: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x165238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x16523c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x16523cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x165240: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x165240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x165244: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x165244u;
    {
        const bool branch_taken_0x165244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x165248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165244u;
            // 0x165248: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165244) {
            ctx->pc = 0x1651F0u;
            runtime->cooperativeGuestYield();
            goto label_1651f0;
        }
    }
    ctx->pc = 0x16524Cu;
    // 0x16524c: 0x0  nop
    ctx->pc = 0x16524cu;
    // NOP
label_165250:
    // 0x165250: 0x8fa20678  lw          $v0, 0x678($sp)
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
    // 0x165254: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165258: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x165258u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16525c: 0xce20007c  pref        0x00, 0x7C($s1)
    ctx->pc = 0x16525cu;
    // PREF instruction (ignored)
label_165260:
    // 0x165260: 0x8fa30674  lw          $v1, 0x674($sp)
    ctx->pc = 0x165260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1652)));
label_165264:
    // 0x165264: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x165264u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x165268: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x165268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16526c: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x16526Cu;
    {
        const bool branch_taken_0x16526c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16526Cu;
            // 0x165270: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16526c) {
            ctx->pc = 0x164FC0u;
            runtime->cooperativeGuestYield();
            goto label_164fc0;
        }
    }
    ctx->pc = 0x165274u;
label_165274:
    // 0x165274: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x165274u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x165278: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x165278u;
    {
        const bool branch_taken_0x165278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16527Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165278u;
            // 0x16527c: 0x8fa30648  lw          $v1, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165278) {
            ctx->pc = 0x1653D0u;
            goto label_1653d0;
        }
    }
    ctx->pc = 0x165280u;
    // 0x165280: 0x8fb30654  lw          $s3, 0x654($sp)
    ctx->pc = 0x165280u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
    // 0x165284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165288: 0x8fb20650  lw          $s2, 0x650($sp)
    ctx->pc = 0x165288u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x16528c: 0x0  nop
    ctx->pc = 0x16528cu;
    // NOP
label_165290:
    // 0x165290: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x165290u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x165294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165298: 0x54620049  bnel        $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x165298u;
    {
        const bool branch_taken_0x165298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165298) {
            ctx->pc = 0x16529Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165298u;
            // 0x16529c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1653C0u;
            goto label_1653c0;
        }
    }
    ctx->pc = 0x1652A0u;
    // 0x1652a0: 0xce20007c  pref        0x00, 0x7C($s1)
    ctx->pc = 0x1652a0u;
    // PREF instruction (ignored)
    // 0x1652a4: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x1652a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1652a8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1652A8u;
    {
        const bool branch_taken_0x1652a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1652A8u;
            // 0x1652ac: 0x8fa40648  lw          $a0, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652a8) {
            ctx->pc = 0x165328u;
            goto label_165328;
        }
    }
    ctx->pc = 0x1652B0u;
    // 0x1652b0: 0x82c70147  lb          $a3, 0x147($s6)
    ctx->pc = 0x1652b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x1652b4: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x1652b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1652b8: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x1652b8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1652bc: 0x954023  subu        $t0, $a0, $s5
    ctx->pc = 0x1652bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x1652c0: 0xa2c70146  sb          $a3, 0x146($s6)
    ctx->pc = 0x1652c0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 326), (uint8_t)GPR_U32(ctx, 7));
    // 0x1652c4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1652c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1652c8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1652c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1652cc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1652ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1652d0: 0x8ec20140  lw          $v0, 0x140($s6)
    ctx->pc = 0x1652d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
    // 0x1652d4: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x1652d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x1652d8: 0x8fb50648  lw          $s5, 0x648($sp)
    ctx->pc = 0x1652d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
    // 0x1652dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1652dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1652e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1652e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1652e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1652ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1652ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1652f0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1652f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1652f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1652f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1652f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1652f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1652fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1652fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165300: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x165300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x165304: 0x8e870034  lw          $a3, 0x34($s4)
    ctx->pc = 0x165304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x165308: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x165308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16530c: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x16530cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
    // 0x165310: 0x82c80147  lb          $t0, 0x147($s6)
    ctx->pc = 0x165310u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 327)));
    // 0x165314: 0x7fa90680  sq          $t1, 0x680($sp)
    ctx->pc = 0x165314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 9));
    // 0x165318: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x165318u;
    SET_GPR_U32(ctx, 31, 0x165320u);
    ctx->pc = 0x16531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165318u;
            // 0x16531c: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165320u; }
        if (ctx->pc != 0x165320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165320u; }
        if (ctx->pc != 0x165320u) { return; }
    }
    ctx->pc = 0x165320u;
    // 0x165320: 0x7ba90680  lq          $t1, 0x680($sp)
    ctx->pc = 0x165320u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x165324: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165328:
    // 0x165328: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x165328u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16532c: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x16532cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x165330: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165334: 0xdba10660  lqc2        $vf1, 0x660($sp)
    ctx->pc = 0x165334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x165338: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x165338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16533c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x165340: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x165340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x165344: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x165344u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165348: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x165348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16534c: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x16534cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165350: 0xfba20560  sqc2        $vf2, 0x560($sp)
    ctx->pc = 0x165350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x165354: 0x8fa30670  lw          $v1, 0x670($sp)
    ctx->pc = 0x165354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x165358: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x165358u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16535c: 0x4be51098  vmulx.xyzw  $vf2, $vf2, $vf5x
    ctx->pc = 0x16535cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165360: 0x4be218a8  vadd.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x165360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165364: 0xdba60660  lqc2        $vf6, 0x660($sp)
    ctx->pc = 0x165364u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x165368: 0x4be6206c  vsub.xyzw   $vf1, $vf4, $vf6
    ctx->pc = 0x165368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16536c: 0xfba10570  sqc2        $vf1, 0x570($sp)
    ctx->pc = 0x16536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x165370: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x165370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165374: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x165374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165378: 0x4be3197c  vftoi0.xyzw $vf3, $vf3
    ctx->pc = 0x165378u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16537c: 0x4be4217c  vftoi0.xyzw $vf4, $vf4
    ctx->pc = 0x16537cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x165380: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x165380u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x165384: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x165384u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x165388: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x165388u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16538c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x16538cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x165390: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x165390u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x165394: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x165394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x165398: 0xfa240010  sqc2        $vf4, 0x10($s1)
    ctx->pc = 0x165398u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16539c: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x16539cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x1653a0: 0xfa220020  sqc2        $vf2, 0x20($s1)
    ctx->pc = 0x1653a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1653a4: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1653a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1653a8: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x1653a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x1653ac: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1653acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1653b0: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x1653b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x1653b4: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x1653b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x1653b8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1653b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1653bc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1653bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1653c0:
    // 0x1653c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1653c4: 0x1600ffb2  bnez        $s0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1653C4u;
    {
        const bool branch_taken_0x1653c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1653C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1653C4u;
            // 0x1653c8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653c4) {
            ctx->pc = 0x165290u;
            runtime->cooperativeGuestYield();
            goto label_165290;
        }
    }
    ctx->pc = 0x1653CCu;
    // 0x1653cc: 0x8fa30648  lw          $v1, 0x648($sp)
    ctx->pc = 0x1653ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_1653d0:
    // 0x1653d0: 0x751023  subu        $v0, $v1, $s5
    ctx->pc = 0x1653d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1653d4: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x1653d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x1653d8: 0x8fa40598  lw          $a0, 0x598($sp)
    ctx->pc = 0x1653d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1432)));
    // 0x1653dc: 0x0  nop
    ctx->pc = 0x1653dcu;
    // NOP
label_1653e0:
    // 0x1653e0: 0x8fa60594  lw          $a2, 0x594($sp)
    ctx->pc = 0x1653e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x1653e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1653e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1653e8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1653e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1653ec: 0x1440fe44  bnez        $v0, . + 4 + (-0x1BC << 2)
    ctx->pc = 0x1653ECu;
    {
        const bool branch_taken_0x1653ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1653F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1653ECu;
            // 0x1653f0: 0xafa40598  sw          $a0, 0x598($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653ec) {
            ctx->pc = 0x164D00u;
            runtime->cooperativeGuestYield();
            goto label_164d00;
        }
    }
    ctx->pc = 0x1653F4u;
label_1653f4:
    // 0x1653f4: 0x8fa70590  lw          $a3, 0x590($sp)
    ctx->pc = 0x1653f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
label_1653f8:
    // 0x1653f8: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x1653f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_1653fc:
    // 0x1653fc: 0x80e50147  lb          $a1, 0x147($a3)
    ctx->pc = 0x1653fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 327)));
    // 0x165400: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x165400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x165404: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x165404u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x165408: 0xa0e50146  sb          $a1, 0x146($a3)
    ctx->pc = 0x165408u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 326), (uint8_t)GPR_U32(ctx, 5));
    // 0x16540c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x16540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x165410: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x165410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x165414: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x165414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x165418: 0x8ce20140  lw          $v0, 0x140($a3)
    ctx->pc = 0x165418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 320)));
    // 0x16541c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x16541cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x165420: 0x8fa40590  lw          $a0, 0x590($sp)
    ctx->pc = 0x165420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x165424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165428: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x165428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16542c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x165430: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16543c: 0xc050424  jal         func_141090
    ctx->pc = 0x16543Cu;
    SET_GPR_U32(ctx, 31, 0x165444u);
    ctx->pc = 0x165440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16543Cu;
            // 0x165440: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141090u;
    if (runtime->hasFunction(0x141090u)) {
        auto targetFn = runtime->lookupFunction(0x141090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165444u; }
        if (ctx->pc != 0x165444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_141090_0x1410e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165444u; }
        if (ctx->pc != 0x165444u) { return; }
    }
    ctx->pc = 0x165444u;
    // 0x165444: 0x0  nop
    ctx->pc = 0x165444u;
    // NOP
label_165448:
    // 0x165448: 0x8fa2058c  lw          $v0, 0x58C($sp)
    ctx->pc = 0x165448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1420)));
label_16544c:
    // 0x16544c: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x16544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x165450: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x165454: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x165454u;
    {
        const bool branch_taken_0x165454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165454u;
            // 0x165458: 0x8fa30588  lw          $v1, 0x588($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165454) {
            ctx->pc = 0x1654A0u;
            goto label_1654a0;
        }
    }
    ctx->pc = 0x16545Cu;
    // 0x16545c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x16545cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x165460: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x165460u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x165464: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x165464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x165468: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x165468u;
    {
        const bool branch_taken_0x165468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165468u;
            // 0x16546c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165468) {
            ctx->pc = 0x1654A0u;
            goto label_1654a0;
        }
    }
    ctx->pc = 0x165470u;
    // 0x165470: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x165470u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165474: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x165474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x165478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16547c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165480: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165484: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x165484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x165488: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x165488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x16548c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x16548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x165490: 0x40f809  jalr        $v0
    ctx->pc = 0x165490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165498u);
        ctx->pc = 0x165494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165490u;
            // 0x165494: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x165498u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162840u: goto label_162840;
            case 0x1628B0u: goto label_1628b0;
            case 0x1628CCu: goto label_1628cc;
            case 0x162908u: goto label_162908;
            case 0x16292Cu: goto label_16292c;
            case 0x162988u: goto label_162988;
            case 0x1629D0u: goto label_1629d0;
            case 0x1629E8u: goto label_1629e8;
            case 0x162A58u: goto label_162a58;
            case 0x162A7Cu: goto label_162a7c;
            case 0x162A80u: goto label_162a80;
            case 0x162AA4u: goto label_162aa4;
            case 0x162AACu: goto label_162aac;
            case 0x162B58u: goto label_162b58;
            case 0x162B68u: goto label_162b68;
            case 0x162BC8u: goto label_162bc8;
            case 0x162BD4u: goto label_162bd4;
            case 0x162CF0u: goto label_162cf0;
            case 0x162D10u: goto label_162d10;
            case 0x162D14u: goto label_162d14;
            case 0x162D48u: goto label_162d48;
            case 0x162D64u: goto label_162d64;
            case 0x162D80u: goto label_162d80;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DE0u: goto label_162de0;
            case 0x162DECu: goto label_162dec;
            case 0x162E48u: goto label_162e48;
            case 0x162E58u: goto label_162e58;
            case 0x162EA8u: goto label_162ea8;
            case 0x162EECu: goto label_162eec;
            case 0x162EF4u: goto label_162ef4;
            case 0x162F00u: goto label_162f00;
            case 0x162F68u: goto label_162f68;
            case 0x162F98u: goto label_162f98;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x163004u: goto label_163004;
            case 0x163040u: goto label_163040;
            case 0x163090u: goto label_163090;
            case 0x1630E8u: goto label_1630e8;
            case 0x163188u: goto label_163188;
            case 0x1631D4u: goto label_1631d4;
            case 0x163200u: goto label_163200;
            case 0x1632E8u: goto label_1632e8;
            case 0x1632F8u: goto label_1632f8;
            case 0x163338u: goto label_163338;
            case 0x16334Cu: goto label_16334c;
            case 0x16338Cu: goto label_16338c;
            case 0x1633A0u: goto label_1633a0;
            case 0x1633B0u: goto label_1633b0;
            case 0x163418u: goto label_163418;
            case 0x163454u: goto label_163454;
            case 0x163464u: goto label_163464;
            case 0x163470u: goto label_163470;
            case 0x163528u: goto label_163528;
            case 0x163658u: goto label_163658;
            case 0x163680u: goto label_163680;
            case 0x163698u: goto label_163698;
            case 0x1636C8u: goto label_1636c8;
            case 0x1636D8u: goto label_1636d8;
            case 0x1636F4u: goto label_1636f4;
            case 0x163730u: goto label_163730;
            case 0x1637A8u: goto label_1637a8;
            case 0x1637E0u: goto label_1637e0;
            case 0x163870u: goto label_163870;
            case 0x163960u: goto label_163960;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639E4u: goto label_1639e4;
            case 0x163A00u: goto label_163a00;
            case 0x163A98u: goto label_163a98;
            case 0x163B30u: goto label_163b30;
            case 0x163B40u: goto label_163b40;
            case 0x163B50u: goto label_163b50;
            case 0x163B6Cu: goto label_163b6c;
            case 0x163B78u: goto label_163b78;
            case 0x163C30u: goto label_163c30;
            case 0x163D60u: goto label_163d60;
            case 0x163D88u: goto label_163d88;
            case 0x163DA0u: goto label_163da0;
            case 0x163DD0u: goto label_163dd0;
            case 0x163DE0u: goto label_163de0;
            case 0x163DFCu: goto label_163dfc;
            case 0x163E98u: goto label_163e98;
            case 0x163F18u: goto label_163f18;
            case 0x163F50u: goto label_163f50;
            case 0x163FE8u: goto label_163fe8;
            case 0x164180u: goto label_164180;
            case 0x164228u: goto label_164228;
            case 0x164238u: goto label_164238;
            case 0x16423Cu: goto label_16423c;
            case 0x16424Cu: goto label_16424c;
            case 0x164268u: goto label_164268;
            case 0x164308u: goto label_164308;
            case 0x164430u: goto label_164430;
            case 0x164440u: goto label_164440;
            case 0x164450u: goto label_164450;
            case 0x16446Cu: goto label_16446c;
            case 0x164488u: goto label_164488;
            case 0x164540u: goto label_164540;
            case 0x164670u: goto label_164670;
            case 0x164698u: goto label_164698;
            case 0x1646B0u: goto label_1646b0;
            case 0x1646E0u: goto label_1646e0;
            case 0x1646F0u: goto label_1646f0;
            case 0x16470Cu: goto label_16470c;
            case 0x164760u: goto label_164760;
            case 0x1647E0u: goto label_1647e0;
            case 0x164818u: goto label_164818;
            case 0x1648A8u: goto label_1648a8;
            case 0x164A30u: goto label_164a30;
            case 0x164AC8u: goto label_164ac8;
            case 0x164AD8u: goto label_164ad8;
            case 0x164ADCu: goto label_164adc;
            case 0x164AECu: goto label_164aec;
            case 0x164B08u: goto label_164b08;
            case 0x164BA0u: goto label_164ba0;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CF4u: goto label_164cf4;
            case 0x164D00u: goto label_164d00;
            case 0x164DB8u: goto label_164db8;
            case 0x164EE8u: goto label_164ee8;
            case 0x164F10u: goto label_164f10;
            case 0x164F28u: goto label_164f28;
            case 0x164F58u: goto label_164f58;
            case 0x164F68u: goto label_164f68;
            case 0x164F84u: goto label_164f84;
            case 0x164FC0u: goto label_164fc0;
            case 0x165038u: goto label_165038;
            case 0x165070u: goto label_165070;
            case 0x165100u: goto label_165100;
            case 0x1651F0u: goto label_1651f0;
            case 0x165250u: goto label_165250;
            case 0x165260u: goto label_165260;
            case 0x165264u: goto label_165264;
            case 0x165274u: goto label_165274;
            case 0x165290u: goto label_165290;
            case 0x165328u: goto label_165328;
            case 0x1653C0u: goto label_1653c0;
            case 0x1653D0u: goto label_1653d0;
            case 0x1653E0u: goto label_1653e0;
            case 0x1653F4u: goto label_1653f4;
            case 0x1653F8u: goto label_1653f8;
            case 0x1653FCu: goto label_1653fc;
            case 0x165448u: goto label_165448;
            case 0x16544Cu: goto label_16544c;
            case 0x1654A0u: goto label_1654a0;
            case 0x1654ACu: goto label_1654ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x165498u; }
            if (ctx->pc != 0x165498u) { return; }
        }
        }
    }
    ctx->pc = 0x165498u;
    // 0x165498: 0x8fa30588  lw          $v1, 0x588($sp)
    ctx->pc = 0x165498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
    // 0x16549c: 0x0  nop
    ctx->pc = 0x16549cu;
    // NOP
label_1654a0:
    // 0x1654a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1654a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1654a4: 0x1460f738  bnez        $v1, . + 4 + (-0x8C8 << 2)
    ctx->pc = 0x1654A4u;
    {
        const bool branch_taken_0x1654a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1654A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1654A4u;
            // 0x1654a8: 0xafa30588  sw          $v1, 0x588($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654a4) {
            ctx->pc = 0x163188u;
            runtime->cooperativeGuestYield();
            goto label_163188;
        }
    }
    ctx->pc = 0x1654ACu;
label_1654ac:
    // 0x1654ac: 0x7bb00770  lq          $s0, 0x770($sp)
    ctx->pc = 0x1654acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1904)));
    // 0x1654b0: 0x7bb10760  lq          $s1, 0x760($sp)
    ctx->pc = 0x1654b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1888)));
    // 0x1654b4: 0x7bb20750  lq          $s2, 0x750($sp)
    ctx->pc = 0x1654b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1872)));
    // 0x1654b8: 0x7bb30740  lq          $s3, 0x740($sp)
    ctx->pc = 0x1654b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1856)));
    // 0x1654bc: 0x7bb40730  lq          $s4, 0x730($sp)
    ctx->pc = 0x1654bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1840)));
    // 0x1654c0: 0x7bb50720  lq          $s5, 0x720($sp)
    ctx->pc = 0x1654c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1824)));
    // 0x1654c4: 0x7bb60710  lq          $s6, 0x710($sp)
    ctx->pc = 0x1654c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1808)));
    // 0x1654c8: 0x7bb70700  lq          $s7, 0x700($sp)
    ctx->pc = 0x1654c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
    // 0x1654cc: 0x7bbe06f0  lq          $fp, 0x6F0($sp)
    ctx->pc = 0x1654ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
    // 0x1654d0: 0xdfbf06e0  ld          $ra, 0x6E0($sp)
    ctx->pc = 0x1654d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1760)));
    // 0x1654d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1654D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1654D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1654D4u;
            // 0x1654d8: 0x27bd0780  addiu       $sp, $sp, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162840u: goto label_162840;
            case 0x1628B0u: goto label_1628b0;
            case 0x1628CCu: goto label_1628cc;
            case 0x162908u: goto label_162908;
            case 0x16292Cu: goto label_16292c;
            case 0x162988u: goto label_162988;
            case 0x1629D0u: goto label_1629d0;
            case 0x1629E8u: goto label_1629e8;
            case 0x162A58u: goto label_162a58;
            case 0x162A7Cu: goto label_162a7c;
            case 0x162A80u: goto label_162a80;
            case 0x162AA4u: goto label_162aa4;
            case 0x162AACu: goto label_162aac;
            case 0x162B58u: goto label_162b58;
            case 0x162B68u: goto label_162b68;
            case 0x162BC8u: goto label_162bc8;
            case 0x162BD4u: goto label_162bd4;
            case 0x162CF0u: goto label_162cf0;
            case 0x162D10u: goto label_162d10;
            case 0x162D14u: goto label_162d14;
            case 0x162D48u: goto label_162d48;
            case 0x162D64u: goto label_162d64;
            case 0x162D80u: goto label_162d80;
            case 0x162D9Cu: goto label_162d9c;
            case 0x162DE0u: goto label_162de0;
            case 0x162DECu: goto label_162dec;
            case 0x162E48u: goto label_162e48;
            case 0x162E58u: goto label_162e58;
            case 0x162EA8u: goto label_162ea8;
            case 0x162EECu: goto label_162eec;
            case 0x162EF4u: goto label_162ef4;
            case 0x162F00u: goto label_162f00;
            case 0x162F68u: goto label_162f68;
            case 0x162F98u: goto label_162f98;
            case 0x162FB4u: goto label_162fb4;
            case 0x162FB8u: goto label_162fb8;
            case 0x163004u: goto label_163004;
            case 0x163040u: goto label_163040;
            case 0x163090u: goto label_163090;
            case 0x1630E8u: goto label_1630e8;
            case 0x163188u: goto label_163188;
            case 0x1631D4u: goto label_1631d4;
            case 0x163200u: goto label_163200;
            case 0x1632E8u: goto label_1632e8;
            case 0x1632F8u: goto label_1632f8;
            case 0x163338u: goto label_163338;
            case 0x16334Cu: goto label_16334c;
            case 0x16338Cu: goto label_16338c;
            case 0x1633A0u: goto label_1633a0;
            case 0x1633B0u: goto label_1633b0;
            case 0x163418u: goto label_163418;
            case 0x163454u: goto label_163454;
            case 0x163464u: goto label_163464;
            case 0x163470u: goto label_163470;
            case 0x163528u: goto label_163528;
            case 0x163658u: goto label_163658;
            case 0x163680u: goto label_163680;
            case 0x163698u: goto label_163698;
            case 0x1636C8u: goto label_1636c8;
            case 0x1636D8u: goto label_1636d8;
            case 0x1636F4u: goto label_1636f4;
            case 0x163730u: goto label_163730;
            case 0x1637A8u: goto label_1637a8;
            case 0x1637E0u: goto label_1637e0;
            case 0x163870u: goto label_163870;
            case 0x163960u: goto label_163960;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639E4u: goto label_1639e4;
            case 0x163A00u: goto label_163a00;
            case 0x163A98u: goto label_163a98;
            case 0x163B30u: goto label_163b30;
            case 0x163B40u: goto label_163b40;
            case 0x163B50u: goto label_163b50;
            case 0x163B6Cu: goto label_163b6c;
            case 0x163B78u: goto label_163b78;
            case 0x163C30u: goto label_163c30;
            case 0x163D60u: goto label_163d60;
            case 0x163D88u: goto label_163d88;
            case 0x163DA0u: goto label_163da0;
            case 0x163DD0u: goto label_163dd0;
            case 0x163DE0u: goto label_163de0;
            case 0x163DFCu: goto label_163dfc;
            case 0x163E98u: goto label_163e98;
            case 0x163F18u: goto label_163f18;
            case 0x163F50u: goto label_163f50;
            case 0x163FE8u: goto label_163fe8;
            case 0x164180u: goto label_164180;
            case 0x164228u: goto label_164228;
            case 0x164238u: goto label_164238;
            case 0x16423Cu: goto label_16423c;
            case 0x16424Cu: goto label_16424c;
            case 0x164268u: goto label_164268;
            case 0x164308u: goto label_164308;
            case 0x164430u: goto label_164430;
            case 0x164440u: goto label_164440;
            case 0x164450u: goto label_164450;
            case 0x16446Cu: goto label_16446c;
            case 0x164488u: goto label_164488;
            case 0x164540u: goto label_164540;
            case 0x164670u: goto label_164670;
            case 0x164698u: goto label_164698;
            case 0x1646B0u: goto label_1646b0;
            case 0x1646E0u: goto label_1646e0;
            case 0x1646F0u: goto label_1646f0;
            case 0x16470Cu: goto label_16470c;
            case 0x164760u: goto label_164760;
            case 0x1647E0u: goto label_1647e0;
            case 0x164818u: goto label_164818;
            case 0x1648A8u: goto label_1648a8;
            case 0x164A30u: goto label_164a30;
            case 0x164AC8u: goto label_164ac8;
            case 0x164AD8u: goto label_164ad8;
            case 0x164ADCu: goto label_164adc;
            case 0x164AECu: goto label_164aec;
            case 0x164B08u: goto label_164b08;
            case 0x164BA0u: goto label_164ba0;
            case 0x164CB8u: goto label_164cb8;
            case 0x164CC8u: goto label_164cc8;
            case 0x164CD8u: goto label_164cd8;
            case 0x164CF4u: goto label_164cf4;
            case 0x164D00u: goto label_164d00;
            case 0x164DB8u: goto label_164db8;
            case 0x164EE8u: goto label_164ee8;
            case 0x164F10u: goto label_164f10;
            case 0x164F28u: goto label_164f28;
            case 0x164F58u: goto label_164f58;
            case 0x164F68u: goto label_164f68;
            case 0x164F84u: goto label_164f84;
            case 0x164FC0u: goto label_164fc0;
            case 0x165038u: goto label_165038;
            case 0x165070u: goto label_165070;
            case 0x165100u: goto label_165100;
            case 0x1651F0u: goto label_1651f0;
            case 0x165250u: goto label_165250;
            case 0x165260u: goto label_165260;
            case 0x165264u: goto label_165264;
            case 0x165274u: goto label_165274;
            case 0x165290u: goto label_165290;
            case 0x165328u: goto label_165328;
            case 0x1653C0u: goto label_1653c0;
            case 0x1653D0u: goto label_1653d0;
            case 0x1653E0u: goto label_1653e0;
            case 0x1653F4u: goto label_1653f4;
            case 0x1653F8u: goto label_1653f8;
            case 0x1653FCu: goto label_1653fc;
            case 0x165448u: goto label_165448;
            case 0x16544Cu: goto label_16544c;
            case 0x1654A0u: goto label_1654a0;
            case 0x1654ACu: goto label_1654ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1654DCu;
    // 0x1654dc: 0x0  nop
    ctx->pc = 0x1654dcu;
    // NOP
}
