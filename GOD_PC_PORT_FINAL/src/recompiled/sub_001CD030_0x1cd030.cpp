#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD030
// Address: 0x1cd030 - 0x1cd210
void sub_001CD030_0x1cd030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD030_0x1cd030");
#endif

    ctx->pc = 0x1cd030u;

    // 0x1cd030: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cd030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cd034: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1cd034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1cd038: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1cd038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1cd03c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1cd03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1cd040: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cd040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd044: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cd044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1cd048: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cd048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd04c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cd04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1cd050: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cd050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1cd054: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1cd054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1cd058: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1cd058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd05c: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x1cd05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x1cd060: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1cd060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1cd064: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1cd064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1cd068: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1CD068u;
    {
        const bool branch_taken_0x1cd068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD068u;
            // 0x1cd06c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd068) {
            ctx->pc = 0x1CD180u;
            goto label_1cd180;
        }
    }
    ctx->pc = 0x1CD070u;
    // 0x1cd070: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd074: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1cd074u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd078: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1CD078u;
    SET_GPR_U32(ctx, 31, 0x1CD080u);
    ctx->pc = 0x1CD07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD078u;
            // 0x1cd07c: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD080u; }
        if (ctx->pc != 0x1CD080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD080u; }
        if (ctx->pc != 0x1CD080u) { return; }
    }
    ctx->pc = 0x1CD080u;
    // 0x1cd080: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1cd080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1cd084: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1cd084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1cd088: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1CD088u;
    SET_GPR_U32(ctx, 31, 0x1CD090u);
    ctx->pc = 0x1CD08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD088u;
            // 0x1cd08c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD090u; }
        if (ctx->pc != 0x1CD090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD090u; }
        if (ctx->pc != 0x1CD090u) { return; }
    }
    ctx->pc = 0x1CD090u;
    // 0x1cd090: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1cd090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1cd094: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CD094u;
    SET_GPR_U32(ctx, 31, 0x1CD09Cu);
    ctx->pc = 0x1CD098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD094u;
            // 0x1cd098: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD09Cu; }
        if (ctx->pc != 0x1CD09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD09Cu; }
        if (ctx->pc != 0x1CD09Cu) { return; }
    }
    ctx->pc = 0x1CD09Cu;
    // 0x1cd09c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1cd09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1cd0a0: 0xc4540158  lwc1        $f20, 0x158($v0)
    ctx->pc = 0x1cd0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd0a4: 0xc461c658  lwc1        $f1, -0x39A8($v1)
    ctx->pc = 0x1cd0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd0a8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cd0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cd0ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd0b0: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1cd0b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1cd0b4: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1cd0b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd0b8: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1cd0b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd0bc: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1cd0bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd0c0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1cd0c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cd0c4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1cd0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd0c8: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1cd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cd0cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cd0ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cd0d0: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1cd0d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd0d4: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1cd0d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd0d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0dc: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1cd0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd0e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cd0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0e8: 0xc073b84  jal         func_1CEE10
    ctx->pc = 0x1CD0E8u;
    SET_GPR_U32(ctx, 31, 0x1CD0F0u);
    ctx->pc = 0x1CD0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0E8u;
            // 0x1cd0ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE10u;
    if (runtime->hasFunction(0x1CEE10u)) {
        auto targetFn = runtime->lookupFunction(0x1CEE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0F0u; }
        if (ctx->pc != 0x1CD0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEE10_0x1cee10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0F0u; }
        if (ctx->pc != 0x1CD0F0u) { return; }
    }
    ctx->pc = 0x1CD0F0u;
    // 0x1cd0f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cd0f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1cd0f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1cd0f8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1cd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1cd0fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD104u);
        ctx->pc = 0x1CD100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0FCu;
            // 0x1cd100: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD104u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD170u: goto label_1cd170;
            case 0x1CD180u: goto label_1cd180;
            case 0x1CD1D0u: goto label_1cd1d0;
            case 0x1CD1D8u: goto label_1cd1d8;
            case 0x1CD1F0u: goto label_1cd1f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD104u; }
            if (ctx->pc != 0x1CD104u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD104u;
    // 0x1cd104: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1cd104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd108: 0x8e25029c  lw          $a1, 0x29C($s1)
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    // 0x1cd10c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1cd10cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cd110: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cd110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd114: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cd114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd118: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x1cd118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1cd11c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cd11cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cd120: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cd120u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cd124: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1cd124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd128: 0x4a0002ff  vnop
    ctx->pc = 0x1cd128u;
    // NOP operation, no action needed for VU0
    // 0x1cd12c: 0x4a0002ff  vnop
    ctx->pc = 0x1cd12cu;
    // NOP operation, no action needed for VU0
    // 0x1cd130: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1cd130u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cd134: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1cd134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd138: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1cd138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd13c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd140: 0x4be31058  vmulx.xyzw  $vf1, $vf2, $vf3x
    ctx->pc = 0x1cd140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd144: 0xc085dbe  jal         func_2176F8
    ctx->pc = 0x1CD144u;
    SET_GPR_U32(ctx, 31, 0x1CD14Cu);
    ctx->pc = 0x1CD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD144u;
            // 0x1cd148: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2176F8u;
    if (runtime->hasFunction(0x2176F8u)) {
        auto targetFn = runtime->lookupFunction(0x2176F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD14Cu; }
        if (ctx->pc != 0x1CD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2176f8_0x217810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD14Cu; }
        if (ctx->pc != 0x1CD14Cu) { return; }
    }
    ctx->pc = 0x1CD14Cu;
    // 0x1cd14c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD14Cu;
    {
        const bool branch_taken_0x1cd14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd14c) {
            ctx->pc = 0x1CD170u;
            goto label_1cd170;
        }
    }
    ctx->pc = 0x1CD154u;
    // 0x1cd154: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1cd154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cd158: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1cd158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd15c: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1cd15cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd160: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1cd160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd164: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1cd164u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd168: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1cd168u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd16c: 0x0  nop
    ctx->pc = 0x1cd16cu;
    // NOP
label_1cd170:
    // 0x1cd170: 0xc072f70  jal         func_1CBDC0
    ctx->pc = 0x1CD170u;
    SET_GPR_U32(ctx, 31, 0x1CD178u);
    ctx->pc = 0x1CD174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD170u;
            // 0x1cd174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDC0u;
    if (runtime->hasFunction(0x1CBDC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CBDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD178u; }
        if (ctx->pc != 0x1CD178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDC0_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD178u; }
        if (ctx->pc != 0x1CD178u) { return; }
    }
    ctx->pc = 0x1CD178u;
    // 0x1cd178: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CD178u;
    {
        const bool branch_taken_0x1cd178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD178u;
            // 0x1cd17c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd178) {
            ctx->pc = 0x1CD1F0u;
            goto label_1cd1f0;
        }
    }
    ctx->pc = 0x1CD180u;
label_1cd180:
    // 0x1cd180: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd184: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1cd184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cd188: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD188u;
    {
        const bool branch_taken_0x1cd188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd188) {
            ctx->pc = 0x1CD18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD188u;
            // 0x1cd18c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD1F0u;
            goto label_1cd1f0;
        }
    }
    ctx->pc = 0x1CD190u;
    // 0x1cd190: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1cd190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd194: 0x4a820845  vsuby.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x1cd194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd198: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cd198u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd19c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1cd19cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd1a0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1cd1a0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cd1a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd1ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cd1acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd1b0: 0x0  nop
    ctx->pc = 0x1cd1b0u;
    // NOP
    // 0x1cd1b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD1B4u;
    {
        const bool branch_taken_0x1cd1b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1B4u;
            // 0x1cd1b8: 0xfa620000  sqc2        $vf2, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd1b4) {
            ctx->pc = 0x1CD1D0u;
            goto label_1cd1d0;
        }
    }
    ctx->pc = 0x1CD1BCu;
    // 0x1cd1bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd1c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cd1c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cd1c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD1C4u;
    {
        const bool branch_taken_0x1cd1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1c4) {
            ctx->pc = 0x1CD1D8u;
            goto label_1cd1d8;
        }
    }
    ctx->pc = 0x1CD1CCu;
    // 0x1cd1cc: 0x0  nop
    ctx->pc = 0x1cd1ccu;
    // NOP
label_1cd1d0:
    // 0x1cd1d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd1d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cd1d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cd1d8:
    // 0x1cd1d8: 0x4a411080  vaddx.z     $vf2, $vf2, $vf1x
    ctx->pc = 0x1cd1d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd1dc: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1cd1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd1e0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1cd1e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd1e4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1cd1e4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1cd1e8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1cd1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd1ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1cd1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cd1f0:
    // 0x1cd1f0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1cd1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cd1f4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1cd1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd1f8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1cd1f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cd1fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cd1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd200: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cd200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd204: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD204u;
            // 0x1cd208: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD170u: goto label_1cd170;
            case 0x1CD180u: goto label_1cd180;
            case 0x1CD1D0u: goto label_1cd1d0;
            case 0x1CD1D8u: goto label_1cd1d8;
            case 0x1CD1F0u: goto label_1cd1f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD20Cu;
    // 0x1cd20c: 0x0  nop
    ctx->pc = 0x1cd20cu;
    // NOP
}
