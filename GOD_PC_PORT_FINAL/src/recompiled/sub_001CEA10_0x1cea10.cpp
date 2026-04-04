#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CEA10
// Address: 0x1cea10 - 0x1cee10
void sub_001CEA10_0x1cea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEA10_0x1cea10");
#endif

    ctx->pc = 0x1cea10u;

    // 0x1cea10: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1cea14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cea18: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1cea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1cea1c: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1cea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1cea20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cea20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea24: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1cea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x1cea28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cea28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea2c: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x1cea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x1cea30: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1cea30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea34: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1cea34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1cea38: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1cea38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea3c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1cea3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1cea40: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1cea40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1cea44: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1cea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1cea48: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1cea48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1cea4c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1cea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1cea50: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x1cea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x1cea54: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1cea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1cea58: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1cea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1cea5c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cea60: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x1cea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x1cea64: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cea68: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1cea68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cea6c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEA6Cu;
    {
        const bool branch_taken_0x1cea6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CEA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA6Cu;
            // 0x1cea70: 0x8e720320  lw          $s2, 0x320($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea6c) {
            ctx->pc = 0x1CEA7Cu;
            goto label_1cea7c;
        }
    }
    ctx->pc = 0x1CEA74u;
    // 0x1cea74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CEA74u;
    {
        const bool branch_taken_0x1cea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA74u;
            // 0x1cea78: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea74) {
            ctx->pc = 0x1CEA9Cu;
            goto label_1cea9c;
        }
    }
    ctx->pc = 0x1CEA7Cu;
label_1cea7c:
    // 0x1cea7c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cea80: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cea80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cea84: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cea84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cea88: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEA88u;
    {
        const bool branch_taken_0x1cea88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CEA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA88u;
            // 0x1cea8c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea88) {
            ctx->pc = 0x1CEA9Cu;
            goto label_1cea9c;
        }
    }
    ctx->pc = 0x1CEA90u;
    // 0x1cea90: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CEA90u;
    SET_GPR_U32(ctx, 31, 0x1CEA98u);
    ctx->pc = 0x1CEA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA90u;
            // 0x1cea94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA98u; }
        if (ctx->pc != 0x1CEA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA98u; }
        if (ctx->pc != 0x1CEA98u) { return; }
    }
    ctx->pc = 0x1CEA98u;
    // 0x1cea98: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1cea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cea9c:
    // 0x1cea9c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1cea9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ceaa0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ceaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ceaa4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1ceaa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ceaa8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1ceaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1ceaac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ceaacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ceab0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1ceab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1ceab4: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1ceab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ceab8: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x1ceab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ceabc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1ceabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1ceac0: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1ceac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ceac4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1ceac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1ceac8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ceac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceacc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ceaccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cead0: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1cead0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cead4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cead4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cead8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cead8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ceadc: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1ceadcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ceae0: 0x4a0002ff  vnop
    ctx->pc = 0x1ceae0u;
    // NOP operation, no action needed for VU0
    // 0x1ceae4: 0x4a0002ff  vnop
    ctx->pc = 0x1ceae4u;
    // NOP operation, no action needed for VU0
    // 0x1ceae8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1ceae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ceaec: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1ceaecu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1ceaf0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1ceaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ceaf4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1ceaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ceaf8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ceaf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceafc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ceafcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceb00: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1ceb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1ceb04: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ceb04u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ceb08: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ceb08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ceb0c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ceb0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ceb10: 0x4a0002ff  vnop
    ctx->pc = 0x1ceb10u;
    // NOP operation, no action needed for VU0
    // 0x1ceb14: 0x4a0002ff  vnop
    ctx->pc = 0x1ceb14u;
    // NOP operation, no action needed for VU0
    // 0x1ceb18: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ceb18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ceb1c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1ceb1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ceb20: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1ceb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ceb24: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1ceb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ceb28: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1ceb28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceb2c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1ceb2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceb30: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ceb30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ceb34: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ceb34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ceb38: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ceb38u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ceb3c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ceb3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ceb40: 0x4a0002ff  vnop
    ctx->pc = 0x1ceb40u;
    // NOP operation, no action needed for VU0
    // 0x1ceb44: 0x4a0002ff  vnop
    ctx->pc = 0x1ceb44u;
    // NOP operation, no action needed for VU0
    // 0x1ceb48: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1ceb48u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1ceb4c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1ceb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ceb50: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEB50u;
    {
        const bool branch_taken_0x1ceb50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB50u;
            // 0x1ceb54: 0xfba10060  sqc2        $vf1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb50) {
            ctx->pc = 0x1CEB68u;
            goto label_1ceb68;
        }
    }
    ctx->pc = 0x1CEB58u;
    // 0x1ceb58: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1ceb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ceb5c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1CEB5Cu;
    {
        const bool branch_taken_0x1ceb5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ceb5c) {
            ctx->pc = 0x1CEB98u;
            goto label_1ceb98;
        }
    }
    ctx->pc = 0x1CEB64u;
    // 0x1ceb64: 0x0  nop
    ctx->pc = 0x1ceb64u;
    // NOP
label_1ceb68:
    // 0x1ceb68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ceb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb6c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB74u);
    ctx->pc = 0x1CEB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB6Cu;
            // 0x1ceb70: 0x3c15002a  lui         $s5, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB74u; }
        if (ctx->pc != 0x1CEB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB74u; }
        if (ctx->pc != 0x1CEB74u) { return; }
    }
    ctx->pc = 0x1CEB74u;
    // 0x1ceb74: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x1ceb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceb78: 0xc6a1c658  lwc1        $f1, -0x39A8($s5)
    ctx->pc = 0x1ceb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ceb7c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ceb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ceb80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ceb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ceb84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ceb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ceb88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ceb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ceb8c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ceb8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ceb90: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1CEB90u;
    {
        const bool branch_taken_0x1ceb90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ceb90) {
            ctx->pc = 0x1CEBC0u;
            goto label_1cebc0;
        }
    }
    ctx->pc = 0x1CEB98u;
label_1ceb98:
    // 0x1ceb98: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ceb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ceb9c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ceb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ceba0: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1ceba0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ceba4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ceba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ceba8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cebac: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1cebacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cebb0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cebb0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cebb4: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1cebb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1cebb8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1CEBB8u;
    {
        const bool branch_taken_0x1cebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBB8u;
            // 0x1cebbc: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebb8) {
            ctx->pc = 0x1CECB0u;
            goto label_1cecb0;
        }
    }
    ctx->pc = 0x1CEBC0u;
label_1cebc0:
    // 0x1cebc0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CEBC0u;
    SET_GPR_U32(ctx, 31, 0x1CEBC8u);
    ctx->pc = 0x1CEBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBC0u;
            // 0x1cebc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBC8u; }
        if (ctx->pc != 0x1CEBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBC8u; }
        if (ctx->pc != 0x1CEBC8u) { return; }
    }
    ctx->pc = 0x1CEBC8u;
    // 0x1cebc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cebc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebcc: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CEBCCu;
    SET_GPR_U32(ctx, 31, 0x1CEBD4u);
    ctx->pc = 0x1CEBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBCCu;
            // 0x1cebd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBD4u; }
        if (ctx->pc != 0x1CEBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBD4u; }
        if (ctx->pc != 0x1CEBD4u) { return; }
    }
    ctx->pc = 0x1CEBD4u;
    // 0x1cebd4: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x1cebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cebd8: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1cebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cebdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cebdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cebe0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEBE0u;
    {
        const bool branch_taken_0x1cebe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cebe0) {
            ctx->pc = 0x1CEBF8u;
            goto label_1cebf8;
        }
    }
    ctx->pc = 0x1CEBE8u;
    // 0x1cebe8: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CEBE8u;
    SET_GPR_U32(ctx, 31, 0x1CEBF0u);
    ctx->pc = 0x1CEBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBE8u;
            // 0x1cebec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBF0u; }
        if (ctx->pc != 0x1CEBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEBF0u; }
        if (ctx->pc != 0x1CEBF0u) { return; }
    }
    ctx->pc = 0x1CEBF0u;
    // 0x1cebf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEBF0u;
    {
        const bool branch_taken_0x1cebf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBF0u;
            // 0x1cebf4: 0xc442010c  lwc1        $f2, 0x10C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebf0) {
            ctx->pc = 0x1CEC04u;
            goto label_1cec04;
        }
    }
    ctx->pc = 0x1CEBF8u;
label_1cebf8:
    // 0x1cebf8: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CEBF8u;
    SET_GPR_U32(ctx, 31, 0x1CEC00u);
    ctx->pc = 0x1CEBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBF8u;
            // 0x1cebfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC00u; }
        if (ctx->pc != 0x1CEC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC00u; }
        if (ctx->pc != 0x1CEC00u) { return; }
    }
    ctx->pc = 0x1CEC00u;
    // 0x1cec00: 0xc4420110  lwc1        $f2, 0x110($v0)
    ctx->pc = 0x1cec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cec04:
    // 0x1cec04: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cec04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cec08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cec08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cec0c: 0xc6a1c658  lwc1        $f1, -0x39A8($s5)
    ctx->pc = 0x1cec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cec10: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1cec10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1cec14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cec14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cec18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cec18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cec1c: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CEC1Cu;
    {
        const bool branch_taken_0x1cec1c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC1Cu;
            // 0x1cec20: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec1c) {
            ctx->pc = 0x1CEC38u;
            goto label_1cec38;
        }
    }
    ctx->pc = 0x1CEC24u;
    // 0x1cec24: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cec24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cec28: 0x0  nop
    ctx->pc = 0x1cec28u;
    // NOP
    // 0x1cec2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEC2Cu;
    {
        const bool branch_taken_0x1cec2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC2Cu;
            // 0x1cec30: 0xdba300c0  lqc2        $vf3, 0xC0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec2c) {
            ctx->pc = 0x1CEC3Cu;
            goto label_1cec3c;
        }
    }
    ctx->pc = 0x1CEC34u;
    // 0x1cec34: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x1cec34u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[2] = ctx->f[20] / ctx->f[0];
label_1cec38:
    // 0x1cec38: 0xdba300c0  lqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1cec38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1cec3c:
    // 0x1cec3c: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1cec3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cec40: 0x4be4186a  vmul.xyzw   $vf1, $vf3, $vf4
    ctx->pc = 0x1cec40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cec44: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1cec44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cec48: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1cec48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cec4c: 0xdba100b0  lqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1cec4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cec50: 0x4b020084  vsubx.x     $vf2, $vf0, $vf2x
    ctx->pc = 0x1cec50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cec54: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x1cec54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cec58: 0xdba30090  lqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1cec58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cec5c: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1cec5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cec60: 0x4be3092a  vmul.xyzw   $vf4, $vf1, $vf3
    ctx->pc = 0x1cec60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cec64: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1cec64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cec68: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1cec68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cec6c: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1cec6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cec70: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1cec70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cec74: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1cec74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cec78: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cec78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cec7c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cec7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cec80: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cec80u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cec84: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cec84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cec88: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1cec88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cec8c: 0x4a0002ff  vnop
    ctx->pc = 0x1cec8cu;
    // NOP operation, no action needed for VU0
    // 0x1cec90: 0x4a0002ff  vnop
    ctx->pc = 0x1cec90u;
    // NOP operation, no action needed for VU0
    // 0x1cec94: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1cec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cec98: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1cec98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cec9c: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1cec9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ceca0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1ceca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ceca4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ceca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ceca8: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x1ceca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cecac: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1cecacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1cecb0:
    // 0x1cecb0: 0x8e6202d8  lw          $v0, 0x2D8($s3)
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 728)));
    // 0x1cecb4: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1cecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1cecb8: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CECB8u;
    {
        const bool branch_taken_0x1cecb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cecb8) {
            ctx->pc = 0x1CECBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECB8u;
            // 0x1cecbc: 0x8e620174  lw          $v0, 0x174($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CED30u;
            goto label_1ced30;
        }
    }
    ctx->pc = 0x1CECC0u;
    // 0x1cecc0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1cecc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecc8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1cecc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ceccc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1cecccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1cecd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cecd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cecd4: 0x9442008a  lhu         $v0, 0x8A($v0)
    ctx->pc = 0x1cecd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 138)));
    // 0x1cecd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cecd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cecdc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1cecdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1cece0: 0xc073982  jal         func_1CE608
    ctx->pc = 0x1CECE0u;
    SET_GPR_U32(ctx, 31, 0x1CECE8u);
    ctx->pc = 0x1CECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECE0u;
            // 0x1cece4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE608u;
    if (runtime->hasFunction(0x1CE608u)) {
        auto targetFn = runtime->lookupFunction(0x1CE608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECE8u; }
        if (ctx->pc != 0x1CECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE608_0x1ce608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECE8u; }
        if (ctx->pc != 0x1CECE8u) { return; }
    }
    ctx->pc = 0x1CECE8u;
    // 0x1cece8: 0x8e6302d8  lw          $v1, 0x2D8($s3)
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 728)));
    // 0x1cecec: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1cececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1cecf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CECF0u;
    {
        const bool branch_taken_0x1cecf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECF0u;
            // 0x1cecf4: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecf0) {
            ctx->pc = 0x1CED10u;
            goto label_1ced10;
        }
    }
    ctx->pc = 0x1CECF8u;
    // 0x1cecf8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1cecf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cecfc: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1cecfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ced00: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ced00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ced04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CED04u;
    {
        const bool branch_taken_0x1ced04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED04u;
            // 0x1ced08: 0xfa210000  sqc2        $vf1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced04) {
            ctx->pc = 0x1CED20u;
            goto label_1ced20;
        }
    }
    ctx->pc = 0x1CED0Cu;
    // 0x1ced0c: 0x0  nop
    ctx->pc = 0x1ced0cu;
    // NOP
label_1ced10:
    // 0x1ced10: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CED10u;
    {
        const bool branch_taken_0x1ced10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED10u;
            // 0x1ced14: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced10) {
            ctx->pc = 0x1CEDDCu;
            goto label_1ceddc;
        }
    }
    ctx->pc = 0x1CED18u;
    // 0x1ced18: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ced18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ced1c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1ced1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ced20:
    // 0x1ced20: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1ced20u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1ced24: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1CED24u;
    {
        const bool branch_taken_0x1ced24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED24u;
            // 0x1ced28: 0xfa210000  sqc2        $vf1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced24) {
            ctx->pc = 0x1CEDD8u;
            goto label_1cedd8;
        }
    }
    ctx->pc = 0x1CED2Cu;
    // 0x1ced2c: 0x0  nop
    ctx->pc = 0x1ced2cu;
    // NOP
label_1ced30:
    // 0x1ced30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ced34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ced34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ced38: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CED38u;
    {
        const bool branch_taken_0x1ced38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED38u;
            // 0x1ced3c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced38) {
            ctx->pc = 0x1CEDDCu;
            goto label_1ceddc;
        }
    }
    ctx->pc = 0x1CED40u;
    // 0x1ced40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ced40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ced44: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1ced44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ced48: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1ced48u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ced4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ced4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ced50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ced50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ced54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CED54u;
    {
        const bool branch_taken_0x1ced54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ced54) {
            ctx->pc = 0x1CED70u;
            goto label_1ced70;
        }
    }
    ctx->pc = 0x1CED5Cu;
    // 0x1ced5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ced60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ced60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ced64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CED64u;
    {
        const bool branch_taken_0x1ced64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ced64) {
            ctx->pc = 0x1CED78u;
            goto label_1ced78;
        }
    }
    ctx->pc = 0x1CED6Cu;
    // 0x1ced6c: 0x0  nop
    ctx->pc = 0x1ced6cu;
    // NOP
label_1ced70:
    // 0x1ced70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ced74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ced74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1ced78:
    // 0x1ced78: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ced78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ced7c: 0x4a420840  vaddx.z     $vf1, $vf1, $vf2x
    ctx->pc = 0x1ced7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ced80: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1ced80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ced84: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1ced84u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1ced88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ced88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ced8c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1ced8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ced90: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1ced90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ced94: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1ced94u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ced98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ced98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ced9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ced9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ceda0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEDA0u;
    {
        const bool branch_taken_0x1ceda0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ceda0) {
            ctx->pc = 0x1CEDB8u;
            goto label_1cedb8;
        }
    }
    ctx->pc = 0x1CEDA8u;
    // 0x1ceda8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cedac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cedacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cedb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEDB0u;
    {
        const bool branch_taken_0x1cedb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cedb0) {
            ctx->pc = 0x1CEDC0u;
            goto label_1cedc0;
        }
    }
    ctx->pc = 0x1CEDB8u;
label_1cedb8:
    // 0x1cedb8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1cedbc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cedbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cedc0:
    // 0x1cedc0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1cedc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cedc4: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1cedc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cedc8: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1cedc8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cedcc: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1cedccu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1cedd0: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1cedd0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cedd4: 0x0  nop
    ctx->pc = 0x1cedd4u;
    // NOP
label_1cedd8:
    // 0x1cedd8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1cedd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1ceddc:
    // 0x1ceddc: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1ceddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cede0: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1cede0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cede4: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1cede4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cede8: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1cede8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cedec: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x1cedecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1cedf0: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x1cedf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cedf4: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x1cedf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cedf8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1cedf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cedfc: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1cedfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cee00: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1cee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cee04: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE04u;
            // 0x1cee08: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEA7Cu: goto label_1cea7c;
            case 0x1CEA9Cu: goto label_1cea9c;
            case 0x1CEB68u: goto label_1ceb68;
            case 0x1CEB98u: goto label_1ceb98;
            case 0x1CEBC0u: goto label_1cebc0;
            case 0x1CEBF8u: goto label_1cebf8;
            case 0x1CEC04u: goto label_1cec04;
            case 0x1CEC38u: goto label_1cec38;
            case 0x1CEC3Cu: goto label_1cec3c;
            case 0x1CECB0u: goto label_1cecb0;
            case 0x1CED10u: goto label_1ced10;
            case 0x1CED20u: goto label_1ced20;
            case 0x1CED30u: goto label_1ced30;
            case 0x1CED70u: goto label_1ced70;
            case 0x1CED78u: goto label_1ced78;
            case 0x1CEDB8u: goto label_1cedb8;
            case 0x1CEDC0u: goto label_1cedc0;
            case 0x1CEDD8u: goto label_1cedd8;
            case 0x1CEDDCu: goto label_1ceddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEE0Cu;
    // 0x1cee0c: 0x0  nop
    ctx->pc = 0x1cee0cu;
    // NOP
}
