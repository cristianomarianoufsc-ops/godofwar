#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124840
// Address: 0x124840 - 0x1249c8
void sub_00124840_0x124840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124840_0x124840");
#endif

    ctx->pc = 0x124840u;

    // 0x124840: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x124840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x124844: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x124844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x124848: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x124848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x12484c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12484cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124850: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x124850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x124854: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x124854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x124858: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x124858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12485c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x12485cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124860: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x124860u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x124864: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x124864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x124868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12486c: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x12486cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x124870: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x124870u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x124874: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x124874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x124878: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x124878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12487c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x12487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124880: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x124880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124884: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x124884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124888: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x124888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12488c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x12488cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x124890: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x124890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x124894: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124898: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x124898u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12489c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12489cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1248a0: 0x46000004  c1          0x4
    ctx->pc = 0x1248a0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1248a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1248a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1248a8: 0x0  nop
    ctx->pc = 0x1248a8u;
    // NOP
    // 0x1248ac: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1248ACu;
    {
        const bool branch_taken_0x1248ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1248B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248ACu;
            // 0x1248b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248ac) {
            ctx->pc = 0x124910u;
            goto label_124910;
        }
    }
    ctx->pc = 0x1248B4u;
    // 0x1248b4: 0xc04c050  jal         func_130140
    ctx->pc = 0x1248B4u;
    SET_GPR_U32(ctx, 31, 0x1248BCu);
    ctx->pc = 0x1248B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248B4u;
            // 0x1248b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248BCu; }
        if (ctx->pc != 0x1248BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248BCu; }
        if (ctx->pc != 0x1248BCu) { return; }
    }
    ctx->pc = 0x1248BCu;
    // 0x1248bc: 0xdba300a0  lqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1248bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1248c0: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1248c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1248c4: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1248c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1248c8: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1248c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1248cc: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1248ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1248d0: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1248d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1248d4: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1248d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1248d8: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1248d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1248dc: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1248dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1248e0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1248e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1248e4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1248e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1248e8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1248e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1248ec: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1248ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1248f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1248f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1248f4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1248f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1248f8: 0x4a0002ff  vnop
    ctx->pc = 0x1248f8u;
    // NOP operation, no action needed for VU0
    // 0x1248fc: 0x4a0002ff  vnop
    ctx->pc = 0x1248fcu;
    // NOP operation, no action needed for VU0
    // 0x124900: 0xfa2200d0  sqc2        $vf2, 0xD0($s1)
    ctx->pc = 0x124900u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124904: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124904u;
    {
        const bool branch_taken_0x124904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124904u;
            // 0x124908: 0xfba20050  sqc2        $vf2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124904) {
            ctx->pc = 0x124918u;
            goto label_124918;
        }
    }
    ctx->pc = 0x12490Cu;
    // 0x12490c: 0x0  nop
    ctx->pc = 0x12490cu;
    // NOP
label_124910:
    // 0x124910: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x124910u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124914: 0xfa2100d0  sqc2        $vf1, 0xD0($s1)
    ctx->pc = 0x124914u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_124918:
    // 0x124918: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x124918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12491c: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x12491cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x124920: 0x8c45bde8  lw          $a1, -0x4218($v0)
    ctx->pc = 0x124920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x124924: 0xc04c050  jal         func_130140
    ctx->pc = 0x124924u;
    SET_GPR_U32(ctx, 31, 0x12492Cu);
    ctx->pc = 0x124928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124924u;
            // 0x124928: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12492Cu; }
        if (ctx->pc != 0x12492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12492Cu; }
        if (ctx->pc != 0x12492Cu) { return; }
    }
    ctx->pc = 0x12492Cu;
    // 0x12492c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x124930: 0x8e3000a8  lw          $s0, 0xA8($s1)
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x124934: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x124934u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x124938: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x124938u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x12493c: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12493Cu;
    {
        const bool branch_taken_0x12493c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12493c) {
            ctx->pc = 0x124940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12493Cu;
            // 0x124940: 0xde030068  ld          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124950u;
            goto label_124950;
        }
    }
    ctx->pc = 0x124944u;
    // 0x124944: 0xc056f5e  jal         func_15BD78
    ctx->pc = 0x124944u;
    SET_GPR_U32(ctx, 31, 0x12494Cu);
    ctx->pc = 0x124948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124944u;
            // 0x124948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD78u;
    if (runtime->hasFunction(0x15BD78u)) {
        auto targetFn = runtime->lookupFunction(0x15BD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12494Cu; }
        if (ctx->pc != 0x12494Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD78_0x15bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12494Cu; }
        if (ctx->pc != 0x12494Cu) { return; }
    }
    ctx->pc = 0x12494Cu;
    // 0x12494c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x12494cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_124950:
    // 0x124950: 0xde020140  ld          $v0, 0x140($s0)
    ctx->pc = 0x124950u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x124954: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x124954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x124958: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x124958u;
    {
        const bool branch_taken_0x124958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124958u;
            // 0x12495c: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124958) {
            ctx->pc = 0x12498Cu;
            goto label_12498c;
        }
    }
    ctx->pc = 0x124960u;
    // 0x124960: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x124960u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x124964: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x124964u;
    SET_GPR_U32(ctx, 31, 0x12496Cu);
    ctx->pc = 0x124968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124964u;
            // 0x124968: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12496Cu; }
        if (ctx->pc != 0x12496Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12496Cu; }
        if (ctx->pc != 0x12496Cu) { return; }
    }
    ctx->pc = 0x12496Cu;
    // 0x12496c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x12496cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x124970: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x124970u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x124974: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x124974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x124978: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x124978u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x12497c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x12497cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124980: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x124980u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x124984: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x124984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x124988: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x124988u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
label_12498c:
    // 0x12498c: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x12498cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x124990: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x124990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x124994: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x124994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x124998: 0x7e2200e0  sq          $v0, 0xE0($s1)
    ctx->pc = 0x124998u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
    // 0x12499c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x12499cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1249a0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1249a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1249a4: 0x7e2200f0  sq          $v0, 0xF0($s1)
    ctx->pc = 0x1249a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 240), GPR_VEC(ctx, 2));
    // 0x1249a8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1249a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1249ac: 0x7e220100  sq          $v0, 0x100($s1)
    ctx->pc = 0x1249acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), GPR_VEC(ctx, 2));
    // 0x1249b0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1249b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1249b4: 0x7e220110  sq          $v0, 0x110($s1)
    ctx->pc = 0x1249b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 272), GPR_VEC(ctx, 2));
    // 0x1249b8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1249b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1249bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1249BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1249C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1249BCu;
            // 0x1249c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124910u: goto label_124910;
            case 0x124918u: goto label_124918;
            case 0x124950u: goto label_124950;
            case 0x12498Cu: goto label_12498c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1249C4u;
    // 0x1249c4: 0x0  nop
    ctx->pc = 0x1249c4u;
    // NOP
}
