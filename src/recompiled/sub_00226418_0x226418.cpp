#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226418
// Address: 0x226418 - 0x226580
void sub_00226418_0x226418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226418_0x226418");
#endif

    ctx->pc = 0x226418u;

    // 0x226418: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x226418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22641c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x226420: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x226420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x226424: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x226424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x226428: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x226428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22642c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22642cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x226430: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x226430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x226434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x226438: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22643c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x22643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x226440: 0xc0909c4  jal         func_242710
    ctx->pc = 0x226440u;
    SET_GPR_U32(ctx, 31, 0x226448u);
    ctx->pc = 0x226444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226440u;
            // 0x226444: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226448u; }
        if (ctx->pc != 0x226448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226448u; }
        if (ctx->pc != 0x226448u) { return; }
    }
    ctx->pc = 0x226448u;
    // 0x226448: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x226448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22644c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22644cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226450: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x226450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x226454: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x226454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x226458: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x226458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22645c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x22645cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x226460: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x226460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x226464: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x226464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x226468: 0x8c426ea8  lw          $v0, 0x6EA8($v0)
    ctx->pc = 0x226468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28328)));
    // 0x22646c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x226470: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226470u;
    {
        const bool branch_taken_0x226470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226470u;
            // 0x226474: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226470) {
            ctx->pc = 0x226480u;
            goto label_226480;
        }
    }
    ctx->pc = 0x226478u;
    // 0x226478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x226478u;
    {
        const bool branch_taken_0x226478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22647Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226478u;
            // 0x22647c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226478) {
            ctx->pc = 0x226484u;
            goto label_226484;
        }
    }
    ctx->pc = 0x226480u;
label_226480:
    // 0x226480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226484:
    // 0x226484: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x226484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x226488: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22648c: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x22648Cu;
    {
        const bool branch_taken_0x22648c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22648c) {
            ctx->pc = 0x226490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22648Cu;
            // 0x226490: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226568u;
            goto label_226568;
        }
    }
    ctx->pc = 0x226494u;
    // 0x226494: 0x0  nop
    ctx->pc = 0x226494u;
    // NOP
label_226498:
    // 0x226498: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22649c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2264a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2264a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2264a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2264a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2264a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2264a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2264ac: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2264ACu;
    {
        const bool branch_taken_0x2264ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2264B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2264ACu;
            // 0x2264b0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264ac) {
            ctx->pc = 0x226544u;
            goto label_226544;
        }
    }
    ctx->pc = 0x2264B4u;
    // 0x2264b4: 0x0  nop
    ctx->pc = 0x2264b4u;
    // NOP
label_2264b8:
    // 0x2264b8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2264b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2264bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2264bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2264c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2264c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2264c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2264c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2264c8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2264C8u;
    {
        const bool branch_taken_0x2264c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2264CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2264C8u;
            // 0x2264cc: 0x8c640078  lw          $a0, 0x78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264c8) {
            ctx->pc = 0x226520u;
            goto label_226520;
        }
    }
    ctx->pc = 0x2264D0u;
    // 0x2264d0: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x2264d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2264d4: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x2264d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2264d8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2264d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2264dc: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x2264dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2264e0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x2264e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2264e4: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x2264e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264e8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x2264e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2264ec: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2264ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2264f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2264f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2264f4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2264f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2264f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2264f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2264fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2264fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x226500: 0x46000004  c1          0x4
    ctx->pc = 0x226500u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x226504: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x226504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226508: 0x0  nop
    ctx->pc = 0x226508u;
    // NOP
    // 0x22650c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22650Cu;
    {
        const bool branch_taken_0x22650c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x226510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22650Cu;
            // 0x226510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22650c) {
            ctx->pc = 0x226518u;
            goto label_226518;
        }
    }
    ctx->pc = 0x226514u;
    // 0x226514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226518:
    // 0x226518: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226518u;
    {
        const bool branch_taken_0x226518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226518u;
            // 0x22651c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226518) {
            ctx->pc = 0x226534u;
            goto label_226534;
        }
    }
    ctx->pc = 0x226520u;
label_226520:
    // 0x226520: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x226520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226524: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x226524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226528: 0xc089626  jal         func_225898
    ctx->pc = 0x226528u;
    SET_GPR_U32(ctx, 31, 0x226530u);
    ctx->pc = 0x22652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226528u;
            // 0x22652c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225898u;
    if (runtime->hasFunction(0x225898u)) {
        auto targetFn = runtime->lookupFunction(0x225898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226530u; }
        if (ctx->pc != 0x226530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_225898_0x225940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226530u; }
        if (ctx->pc != 0x226530u) { return; }
    }
    ctx->pc = 0x226530u;
    // 0x226530: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x226530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_226534:
    // 0x226534: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x226534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x226538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22653c: 0x1443ffde  bne         $v0, $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x22653Cu;
    {
        const bool branch_taken_0x22653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x226540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22653Cu;
            // 0x226540: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22653c) {
            ctx->pc = 0x2264B8u;
            runtime->cooperativeGuestYield();
            goto label_2264b8;
        }
    }
    ctx->pc = 0x226544u;
label_226544:
    // 0x226544: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226548: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x226548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22654c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22654cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x226550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226554: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x226554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x226558: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x226558u;
    {
        const bool branch_taken_0x226558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226558u;
            // 0x22655c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226558) {
            ctx->pc = 0x226498u;
            runtime->cooperativeGuestYield();
            goto label_226498;
        }
    }
    ctx->pc = 0x226560u;
    // 0x226560: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x226560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226564: 0x0  nop
    ctx->pc = 0x226564u;
    // NOP
label_226568:
    // 0x226568: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x226568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22656c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22656cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x226570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226574: 0x3e00008  jr          $ra
    ctx->pc = 0x226574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226574u;
            // 0x226578: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226480u: goto label_226480;
            case 0x226484u: goto label_226484;
            case 0x226498u: goto label_226498;
            case 0x2264B8u: goto label_2264b8;
            case 0x226518u: goto label_226518;
            case 0x226520u: goto label_226520;
            case 0x226534u: goto label_226534;
            case 0x226544u: goto label_226544;
            case 0x226568u: goto label_226568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22657Cu;
    // 0x22657c: 0x0  nop
    ctx->pc = 0x22657cu;
    // NOP
}
