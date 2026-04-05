#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A330
// Address: 0x12a330 - 0x12a6c8
void sub_0012A330_0x12a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A330_0x12a330");
#endif

    ctx->pc = 0x12a330u;

    // 0x12a330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12a334: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x12a334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a338: 0x319fc  dsll32      $v1, $v1, 7
    ctx->pc = 0x12a338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 7));
    // 0x12a33c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x12a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x12a340: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12a344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12a344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a348: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x12a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x12a34c: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x12a34cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12a350: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x12a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x12a354: 0xde0200c0  ld          $v0, 0xC0($s0)
    ctx->pc = 0x12a354u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x12a358: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a35c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x12A35Cu;
    {
        const bool branch_taken_0x12a35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A35Cu;
            // 0x12a360: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a35c) {
            ctx->pc = 0x12A4D0u;
            goto label_12a4d0;
        }
    }
    ctx->pc = 0x12A364u;
    // 0x12a364: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x12a364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x12a368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a36c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A36Cu;
    {
        const bool branch_taken_0x12a36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A36Cu;
            // 0x12a370: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a36c) {
            ctx->pc = 0x12A37Cu;
            goto label_12a37c;
        }
    }
    ctx->pc = 0x12A374u;
    // 0x12a374: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12A374u;
    {
        const bool branch_taken_0x12a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A374u;
            // 0x12a378: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a374) {
            ctx->pc = 0x12A398u;
            goto label_12a398;
        }
    }
    ctx->pc = 0x12A37Cu;
label_12a37c:
    // 0x12a37c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x12a37cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x12a380: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x12a380u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x12a384: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A384u;
    {
        const bool branch_taken_0x12a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x12A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A384u;
            // 0x12a388: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a384) {
            ctx->pc = 0x12A398u;
            goto label_12a398;
        }
    }
    ctx->pc = 0x12A38Cu;
    // 0x12a38c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x12A38Cu;
    SET_GPR_U32(ctx, 31, 0x12A394u);
    ctx->pc = 0x12A390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A38Cu;
            // 0x12a390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A394u; }
        if (ctx->pc != 0x12A394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A394u; }
        if (ctx->pc != 0x12A394u) { return; }
    }
    ctx->pc = 0x12A394u;
    // 0x12a394: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x12a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_12a398:
    // 0x12a398: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x12a398u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12a39c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x12a39cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a3a0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x12a3a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a3a4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x12a3a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a3a8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x12a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12a3ac: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12a3acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12a3b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x12a3b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12a3b4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x12a3b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a3b8: 0x4a0002ff  vnop
    ctx->pc = 0x12a3b8u;
    // NOP operation, no action needed for VU0
    // 0x12a3bc: 0x4a0002ff  vnop
    ctx->pc = 0x12a3bcu;
    // NOP operation, no action needed for VU0
    // 0x12a3c0: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x12a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12a3c4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x12a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12a3c8: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x12a3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x12a3cc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x12a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x12a3d0: 0x8c48004c  lw          $t0, 0x4C($v0)
    ctx->pc = 0x12a3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x12a3d4: 0x8c490048  lw          $t1, 0x48($v0)
    ctx->pc = 0x12a3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x12a3d8: 0x71092389  pcpyld      $a0, $t0, $t1
    ctx->pc = 0x12a3d8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x12a3dc: 0x8c63011c  lw          $v1, 0x11C($v1)
    ctx->pc = 0x12a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x12a3e0: 0x8c480054  lw          $t0, 0x54($v0)
    ctx->pc = 0x12a3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x12a3e4: 0x8c490050  lw          $t1, 0x50($v0)
    ctx->pc = 0x12a3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x12a3e8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x12a3e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x12a3ec: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x12a3ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x12a3f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a3f4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x12a3f4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12a3f8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x12a3f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12a3fc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12a400: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12A400u;
    {
        const bool branch_taken_0x12a400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A400u;
            // 0x12a404: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a400) {
            ctx->pc = 0x12A434u;
            goto label_12a434;
        }
    }
    ctx->pc = 0x12A408u;
    // 0x12a408: 0x8cf00104  lw          $s0, 0x104($a3)
    ctx->pc = 0x12a408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x12a40c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12a410: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x12a410u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x12a414: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x12a414u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x12a418: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A418u;
    {
        const bool branch_taken_0x12a418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12a418) {
            ctx->pc = 0x12A41Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A418u;
            // 0x12a41c: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A430u;
            goto label_12a430;
        }
    }
    ctx->pc = 0x12A420u;
    // 0x12a420: 0xc04da64  jal         func_136990
    ctx->pc = 0x12A420u;
    SET_GPR_U32(ctx, 31, 0x12A428u);
    ctx->pc = 0x12A424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A420u;
            // 0x12a424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A428u; }
        if (ctx->pc != 0x12A428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A428u; }
        if (ctx->pc != 0x12A428u) { return; }
    }
    ctx->pc = 0x12A428u;
    // 0x12a428: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x12a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12a42c: 0x0  nop
    ctx->pc = 0x12a42cu;
    // NOP
label_12a430:
    // 0x12a430: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x12a430u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_12a434:
    // 0x12a434: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x12a434u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a438: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x12a438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a43c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a43cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a440: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a444: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x12a444u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a448: 0x4a2110c0  vaddx.w     $vf3, $vf2, $vf1x
    ctx->pc = 0x12a448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a44c: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x12a44cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a450: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x12a450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a454: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x12a454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a458: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x12a458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a45c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a45cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a460: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a464: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12a464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a468: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12a468u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12a46c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a470: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a474: 0x0  nop
    ctx->pc = 0x12a474u;
    // NOP
    // 0x12a478: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x12A478u;
    {
        const bool branch_taken_0x12a478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A478u;
            // 0x12a47c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a478) {
            ctx->pc = 0x12A4D0u;
            goto label_12a4d0;
        }
    }
    ctx->pc = 0x12A480u;
    // 0x12a480: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x12a480u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a484: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x12a484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a488: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a48c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a490: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12a490u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12a494: 0x4a0003bf  vwaitq
    ctx->pc = 0x12a494u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12a498: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x12a498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a49c: 0x4a0002ff  vnop
    ctx->pc = 0x12a49cu;
    // NOP operation, no action needed for VU0
    // 0x12a4a0: 0x4a0002ff  vnop
    ctx->pc = 0x12a4a0u;
    // NOP operation, no action needed for VU0
    // 0x12a4a4: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x12a4a4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x12a4a8: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x12a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12a4ac: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x12a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12a4b0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a4b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a4b4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a4b8: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x12a4b8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12a4bc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x12a4bcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a4c0: 0x46000004  c1          0x4
    ctx->pc = 0x12a4c0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x12a4c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12A4C4u;
    {
        const bool branch_taken_0x12a4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4C4u;
            // 0x12a4c8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4c4) {
            ctx->pc = 0x12A4D8u;
            goto label_12a4d8;
        }
    }
    ctx->pc = 0x12A4CCu;
    // 0x12a4cc: 0x0  nop
    ctx->pc = 0x12a4ccu;
    // NOP
label_12a4d0:
    // 0x12a4d0: 0xc44014e4  lwc1        $f0, 0x14E4($v0)
    ctx->pc = 0x12a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a4d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x12a4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12a4d8:
    // 0x12a4d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x12a4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a4dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12a4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x12A4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4E0u;
            // 0x12a4e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A37Cu: goto label_12a37c;
            case 0x12A398u: goto label_12a398;
            case 0x12A430u: goto label_12a430;
            case 0x12A434u: goto label_12a434;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D8u: goto label_12a4d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A4E8u;
    // 0x12a4e8: 0xd8c80030  lqc2        $vf8, 0x30($a2)
    ctx->pc = 0x12a4e8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x12a4ec: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12a4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12a4f0: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x12a4f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12a4f4: 0xd8c40020  lqc2        $vf4, 0x20($a2)
    ctx->pc = 0x12a4f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x12a4f8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x12a4f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12a4fc: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x12a4fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a500: 0x4be640aa  vmul.xyzw   $vf2, $vf8, $vf6
    ctx->pc = 0x12a500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a504: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a508: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x12a508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a50c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x12a50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a510: 0xfba80030  sqc2        $vf8, 0x30($sp)
    ctx->pc = 0x12a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x12a514: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a518: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a51c: 0x4b060847  vsubw.x     $vf1, $vf1, $vf6w
    ctx->pc = 0x12a51cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a520: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12a520u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12a524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a528: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12a528u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12a52c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12a52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x12a530: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12a530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12a534: 0x48a33800  qmtc2.ni    $v1, $vf7
    ctx->pc = 0x12a534u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a538: 0x4be731d8  vmulx.xyzw  $vf7, $vf6, $vf7x
    ctx->pc = 0x12a538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12a53c: 0x4be741e8  vadd.xyzw   $vf7, $vf8, $vf7
    ctx->pc = 0x12a53cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12a540: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x12a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a544: 0x4be0026c  vsub.xyzw   $vf9, $vf0, $vf0
    ctx->pc = 0x12a544u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x12a548: 0x4be4492c  vsub.xyzw   $vf4, $vf9, $vf4
    ctx->pc = 0x12a548u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a54c: 0x4be82128  vadd.xyzw   $vf4, $vf4, $vf8
    ctx->pc = 0x12a54cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a550: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x12a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a554: 0x4be620aa  vmul.xyzw   $vf2, $vf4, $vf6
    ctx->pc = 0x12a554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a558: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a55c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a55cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a560: 0x4b060847  vsubw.x     $vf1, $vf1, $vf6w
    ctx->pc = 0x12a560u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a564: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12a564u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12a568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a56c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12a56cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12a570: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12a570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x12a574: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12a574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12a578: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12a578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a57c: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x12a57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a580: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x12a580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a584: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x12a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a588: 0x4be7212c  vsub.xyzw   $vf4, $vf4, $vf7
    ctx->pc = 0x12a588u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a58c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x12a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a590: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x12a590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a594: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a598: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a59c: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x12a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a5a0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12a5a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12a5a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x12a5a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12a5a8: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x12a5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a5ac: 0x4a0002ff  vnop
    ctx->pc = 0x12a5acu;
    // NOP operation, no action needed for VU0
    // 0x12a5b0: 0x4a0002ff  vnop
    ctx->pc = 0x12a5b0u;
    // NOP operation, no action needed for VU0
    // 0x12a5b4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x12a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a5b8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x12a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a5bc: 0x4be348ec  vsub.xyzw   $vf3, $vf9, $vf3
    ctx->pc = 0x12a5bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a5c0: 0x4be818e8  vadd.xyzw   $vf3, $vf3, $vf8
    ctx->pc = 0x12a5c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a5c4: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x12a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a5c8: 0x4be618aa  vmul.xyzw   $vf2, $vf3, $vf6
    ctx->pc = 0x12a5c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a5cc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a5ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a5d0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a5d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a5d4: 0x4b060847  vsubw.x     $vf1, $vf1, $vf6w
    ctx->pc = 0x12a5d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a5d8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12a5d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12a5dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a5e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12a5e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12a5e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12a5e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x12a5e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12a5e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12a5ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12a5ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a5f0: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x12a5f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a5f4: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x12a5f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a5f8: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x12a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a5fc: 0x4be718ec  vsub.xyzw   $vf3, $vf3, $vf7
    ctx->pc = 0x12a5fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a600: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x12a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a604: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x12a604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a608: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a60c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a60cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a610: 0x4be82968  vadd.xyzw   $vf5, $vf5, $vf8
    ctx->pc = 0x12a610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a614: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12a614u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12a618: 0x4a0003bf  vwaitq
    ctx->pc = 0x12a618u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12a61c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x12a61cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a620: 0x4a0002ff  vnop
    ctx->pc = 0x12a620u;
    // NOP operation, no action needed for VU0
    // 0x12a624: 0x4a0002ff  vnop
    ctx->pc = 0x12a624u;
    // NOP operation, no action needed for VU0
    // 0x12a628: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x12a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a62c: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x12a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a630: 0x4be628aa  vmul.xyzw   $vf2, $vf5, $vf6
    ctx->pc = 0x12a630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a634: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a638: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a63c: 0x4b060847  vsubw.x     $vf1, $vf1, $vf6w
    ctx->pc = 0x12a63cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a640: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12a640u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12a644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a648: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12a648u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12a64c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12a64cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x12a650: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12a650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12a654: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12a654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a658: 0x4be13198  vmulx.xyzw  $vf6, $vf6, $vf1x
    ctx->pc = 0x12a658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12a65c: 0x4be62968  vadd.xyzw   $vf5, $vf5, $vf6
    ctx->pc = 0x12a65cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a660: 0x4be7296c  vsub.xyzw   $vf5, $vf5, $vf7
    ctx->pc = 0x12a660u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a664: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x12a664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12a668: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12a668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a66c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12a66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12a670: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x12a670u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a674: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12a674u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12a678: 0x4a0003bf  vwaitq
    ctx->pc = 0x12a678u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12a67c: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x12a67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a680: 0x4a0002ff  vnop
    ctx->pc = 0x12a680u;
    // NOP operation, no action needed for VU0
    // 0x12a684: 0x4a0002ff  vnop
    ctx->pc = 0x12a684u;
    // NOP operation, no action needed for VU0
    // 0x12a688: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x12a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a68c: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x12a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a690: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x12a690u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a694: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x12a694u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a698: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x12a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a69c: 0x4a27033c  vmove.w     $vf7, $vf0
    ctx->pc = 0x12a69cu;
    ctx->vu0_vf[7] = ctx->vu0_vf[0];
    // 0x12a6a0: 0x4be348ec  vsub.xyzw   $vf3, $vf9, $vf3
    ctx->pc = 0x12a6a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12a6a4: 0x4be44a6c  vsub.xyzw   $vf9, $vf9, $vf4
    ctx->pc = 0x12a6a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x12a6a8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x12a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12a6ac: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x12a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a6b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12a6b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6b4: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x12a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x12a6b8: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x12a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12a6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x12A6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6BCu;
            // 0x12a6c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A37Cu: goto label_12a37c;
            case 0x12A398u: goto label_12a398;
            case 0x12A430u: goto label_12a430;
            case 0x12A434u: goto label_12a434;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D8u: goto label_12a4d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A6C4u;
    // 0x12a6c4: 0x0  nop
    ctx->pc = 0x12a6c4u;
    // NOP
}
