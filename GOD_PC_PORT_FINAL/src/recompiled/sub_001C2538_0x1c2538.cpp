#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2538
// Address: 0x1c2538 - 0x1c26d0
void sub_001C2538_0x1c2538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2538_0x1c2538");
#endif

    ctx->pc = 0x1c2538u;

    // 0x1c2538: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c2538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c253c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c253cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2540: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c2540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1c2544: 0x8c50cd24  lw          $s0, -0x32DC($v0)
    ctx->pc = 0x1c2544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954276)));
    // 0x1c2548: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c2548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1c254c: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1C254Cu;
    {
        const bool branch_taken_0x1c254c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C254Cu;
            // 0x1c2550: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c254c) {
            ctx->pc = 0x1C26B8u;
            goto label_1c26b8;
        }
    }
    ctx->pc = 0x1C2554u;
    // 0x1c2554: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c2554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2558: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1c2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1c255c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c255cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2560: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c2560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c2564: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1c2564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c2568: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1c2568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c256c: 0x40f809  jalr        $v0
    ctx->pc = 0x1C256Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2574u);
        ctx->pc = 0x1C2570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C256Cu;
            // 0x1c2570: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C2574u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C25ACu: goto label_1c25ac;
            case 0x1C25C8u: goto label_1c25c8;
            case 0x1C26B8u: goto label_1c26b8;
            case 0x1C26BCu: goto label_1c26bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C2574u; }
            if (ctx->pc != 0x1C2574u) { return; }
        }
        }
    }
    ctx->pc = 0x1C2574u;
    // 0x1c2574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c2574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2578: 0xc082458  jal         func_209160
    ctx->pc = 0x1C2578u;
    SET_GPR_U32(ctx, 31, 0x1C2580u);
    ctx->pc = 0x1C257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2578u;
            // 0x1c257c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209160u;
    if (runtime->hasFunction(0x209160u)) {
        auto targetFn = runtime->lookupFunction(0x209160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2580u; }
        if (ctx->pc != 0x1C2580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209160_0x209160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2580u; }
        if (ctx->pc != 0x1C2580u) { return; }
    }
    ctx->pc = 0x1C2580u;
    // 0x1c2580: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c2580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2584: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c2584u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2588: 0x0  nop
    ctx->pc = 0x1c2588u;
    // NOP
    // 0x1c258c: 0x4503004b  bc1tl       . + 4 + (0x4B << 2)
    ctx->pc = 0x1C258Cu;
    {
        const bool branch_taken_0x1c258c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c258c) {
            ctx->pc = 0x1C2590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C258Cu;
            // 0x1c2590: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C26BCu;
            goto label_1c26bc;
        }
    }
    ctx->pc = 0x1C2594u;
    // 0x1c2594: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1c2594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c2598: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c259c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C259Cu;
    {
        const bool branch_taken_0x1c259c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C25A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C259Cu;
            // 0x1c25a0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c259c) {
            ctx->pc = 0x1C25ACu;
            goto label_1c25ac;
        }
    }
    ctx->pc = 0x1C25A4u;
    // 0x1c25a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C25A4u;
    {
        const bool branch_taken_0x1c25a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C25A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25A4u;
            // 0x1c25a8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25a4) {
            ctx->pc = 0x1C25C8u;
            goto label_1c25c8;
        }
    }
    ctx->pc = 0x1C25ACu;
label_1c25ac:
    // 0x1c25ac: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1c25acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c25b0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1c25b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1c25b4: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C25B4u;
    {
        const bool branch_taken_0x1c25b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C25B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25B4u;
            // 0x1c25b8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25b4) {
            ctx->pc = 0x1C25C8u;
            goto label_1c25c8;
        }
    }
    ctx->pc = 0x1C25BCu;
    // 0x1c25bc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1C25BCu;
    SET_GPR_U32(ctx, 31, 0x1C25C4u);
    ctx->pc = 0x1C25C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25BCu;
            // 0x1c25c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25C4u; }
        if (ctx->pc != 0x1C25C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25C4u; }
        if (ctx->pc != 0x1C25C4u) { return; }
    }
    ctx->pc = 0x1C25C4u;
    // 0x1c25c4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1c25c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1c25c8:
    // 0x1c25c8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1c25c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c25cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c25d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c25d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c25d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c25d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1c25d8: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1c25d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c25dc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c25e0: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x1c25e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1c25e4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1c25e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c25e8: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x1c25e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c25ec: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1c25ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c25f0: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x1c25f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x1c25f4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c25f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c25f8: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1c25f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c25fc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c2600: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c2600u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c2604: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c2604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2608: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x1c2608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c260c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2610: 0x3c03ff9c  lui         $v1, 0xFF9C
    ctx->pc = 0x1c2610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65436 << 16));
    // 0x1c2614: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1c2614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1c2618: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1c2618u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1c261c: 0x3463e00f  ori         $v1, $v1, 0xE00F
    ctx->pc = 0x1c261cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57359);
    // 0x1c2620: 0x2502f170  addiu       $v0, $t0, -0xE90
    ctx->pc = 0x1c2620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963568));
    // 0x1c2624: 0xad03f170  sw          $v1, -0xE90($t0)
    ctx->pc = 0x1c2624u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963568), GPR_U32(ctx, 3));
    // 0x1c2628: 0x3c060b13  lui         $a2, 0xB13
    ctx->pc = 0x1c2628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2835 << 16));
    // 0x1c262c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1c262cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c2630: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2634: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1c2634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1c2638: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c2638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c263c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1c263cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2640: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1c2640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1c2644: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1c2644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1c2648: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1c2648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1c264c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c264cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1c2650: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c2650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1c2654: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1c2654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1c2658: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1c2658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1c265c: 0xc047864  jal         func_11E190
    ctx->pc = 0x1C265Cu;
    SET_GPR_U32(ctx, 31, 0x1C2664u);
    ctx->pc = 0x1C2660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C265Cu;
            // 0x1c2660: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2664u; }
        if (ctx->pc != 0x1C2664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2664u; }
        if (ctx->pc != 0x1C2664u) { return; }
    }
    ctx->pc = 0x1C2664u;
    // 0x1c2664: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C2664u;
    {
        const bool branch_taken_0x1c2664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2664u;
            // 0x1c2668: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2664) {
            ctx->pc = 0x1C26BCu;
            goto label_1c26bc;
        }
    }
    ctx->pc = 0x1C266Cu;
    // 0x1c266c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c2670: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1c2670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1c2674: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1c2678: 0x40f809  jalr        $v0
    ctx->pc = 0x1C2678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2680u);
        ctx->pc = 0x1C267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2678u;
            // 0x1c267c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C2680u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C25ACu: goto label_1c25ac;
            case 0x1C25C8u: goto label_1c25c8;
            case 0x1C26B8u: goto label_1c26b8;
            case 0x1C26BCu: goto label_1c26bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C2680u; }
            if (ctx->pc != 0x1C2680u) { return; }
        }
        }
    }
    ctx->pc = 0x1C2680u;
    // 0x1c2680: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x1c2680u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x1c2684: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1c2684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1c2688: 0x25087790  addiu       $t0, $t0, 0x7790
    ctx->pc = 0x1c2688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30608));
    // 0x1c268c: 0x8c645e7c  lw          $a0, 0x5E7C($v1)
    ctx->pc = 0x1c268cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24188)));
    // 0x1c2690: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x1c2690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x1c2694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c2694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c2698: 0x8d090028  lw          $t1, 0x28($t0)
    ctx->pc = 0x1c2698u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x1c269c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x1c269cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1c26a0: 0x79070000  lq          $a3, 0x0($t0)
    ctx->pc = 0x1c26a0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c26a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c26a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1c26a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c26ac: 0xc0805a8  jal         func_2016A0
    ctx->pc = 0x1C26ACu;
    SET_GPR_U32(ctx, 31, 0x1C26B4u);
    ctx->pc = 0x1C26B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26ACu;
            // 0x1c26b0: 0x79080010  lq          $t0, 0x10($t0) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2016A0u;
    if (runtime->hasFunction(0x2016A0u)) {
        auto targetFn = runtime->lookupFunction(0x2016A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26B4u; }
        if (ctx->pc != 0x1C26B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002016A0_0x2016a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26B4u; }
        if (ctx->pc != 0x1C26B4u) { return; }
    }
    ctx->pc = 0x1C26B4u;
    // 0x1c26b4: 0x0  nop
    ctx->pc = 0x1c26b4u;
    // NOP
label_1c26b8:
    // 0x1c26b8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1c26b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c26bc:
    // 0x1c26bc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1c26bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c26c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c26c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c26c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C26C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C26C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26C4u;
            // 0x1c26c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C25ACu: goto label_1c25ac;
            case 0x1C25C8u: goto label_1c25c8;
            case 0x1C26B8u: goto label_1c26b8;
            case 0x1C26BCu: goto label_1c26bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C26CCu;
    // 0x1c26cc: 0x0  nop
    ctx->pc = 0x1c26ccu;
    // NOP
}
