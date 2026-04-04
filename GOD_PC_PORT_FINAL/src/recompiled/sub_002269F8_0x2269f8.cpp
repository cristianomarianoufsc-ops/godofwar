#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002269F8
// Address: 0x2269f8 - 0x226bc0
void sub_002269F8_0x2269f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002269F8_0x2269f8");
#endif

    ctx->pc = 0x2269f8u;

    // 0x2269f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2269f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2269fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x226a00: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x226a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x226a04: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a0c: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x226a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x226a10: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x226a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x226a14: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x226a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x226a18: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x226a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x226a1c: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x226a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x226a20: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x226a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x226a24: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x226a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x226a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x226a2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x226a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a30: 0x8c64d2ac  lw          $a0, -0x2D54($v1)
    ctx->pc = 0x226a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x226a34: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x226a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x226a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x226a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a40: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x226a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x226a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x226a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x226a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226a4c: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x226A4Cu;
    SET_GPR_U32(ctx, 31, 0x226A54u);
    ctx->pc = 0x226A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226A4Cu;
            // 0x226a50: 0xfba40080  sqc2        $vf4, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A54u; }
        if (ctx->pc != 0x226A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A54u; }
        if (ctx->pc != 0x226A54u) { return; }
    }
    ctx->pc = 0x226A54u;
    // 0x226a54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x226a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x226a58: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x226a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x226a5c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226a60: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x226a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x226a64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x226a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x226a68: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x226a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226a6c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x226a6cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x226a70: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x226a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226a74: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x226a74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226a78: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x226a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x226a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x226a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x226a80: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x226a80u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x226a84: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x226a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x226a88: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x226a88u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x226a8c: 0x4a460840  vaddx.z     $vf1, $vf1, $vf6x
    ctx->pc = 0x226a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226a90: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x226a90u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x226a94: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x226a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x226a98: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x226a98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226a9c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x226a9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x226aa0: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x226aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226aa4: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x226aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226aa8: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x226aa8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x226aac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x226aacu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x226ab0: 0x4a0003bf  vwaitq
    ctx->pc = 0x226ab0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x226ab4: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x226ab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x226ab8: 0x4a0002ff  vnop
    ctx->pc = 0x226ab8u;
    // NOP operation, no action needed for VU0
    // 0x226abc: 0x4a0002ff  vnop
    ctx->pc = 0x226abcu;
    // NOP operation, no action needed for VU0
    // 0x226ac0: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x226ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226ac4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x226ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226ac8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x226ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226acc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x226accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226ad0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x226ad4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226ad8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x226ad8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ae0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x226ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226ae4: 0x0  nop
    ctx->pc = 0x226ae4u;
    // NOP
    // 0x226ae8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x226AE8u;
    {
        const bool branch_taken_0x226ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x226AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226AE8u;
            // 0x226aec: 0x4be12b3c  vmove.xyzw  $vf1, $vf5 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[5];
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ae8) {
            ctx->pc = 0x226B30u;
            goto label_226b30;
        }
    }
    ctx->pc = 0x226AF0u;
    // 0x226af0: 0x4a860840  vaddx.y     $vf1, $vf1, $vf6x
    ctx->pc = 0x226af0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226af4: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x226af4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x226af8: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x226af8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x226afc: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x226afcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226b00: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x226b00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x226b04: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x226b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226b08: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x226b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226b0c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x226b0cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x226b10: 0x4a0003bf  vwaitq
    ctx->pc = 0x226b10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x226b14: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x226b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226b18: 0x4a0002ff  vnop
    ctx->pc = 0x226b18u;
    // NOP operation, no action needed for VU0
    // 0x226b1c: 0x4a0002ff  vnop
    ctx->pc = 0x226b1cu;
    // NOP operation, no action needed for VU0
    // 0x226b20: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x226b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226b24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226B24u;
    {
        const bool branch_taken_0x226b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226B24u;
            // 0x226b28: 0xfba10050  sqc2        $vf1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b24) {
            ctx->pc = 0x226B34u;
            goto label_226b34;
        }
    }
    ctx->pc = 0x226B2Cu;
    // 0x226b2c: 0x0  nop
    ctx->pc = 0x226b2cu;
    // NOP
label_226b30:
    // 0x226b30: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x226b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_226b34:
    // 0x226b34: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x226b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226b38: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x226b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226b3c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x226b3cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x226b40: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x226b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x226b44: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x226b44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226b48: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x226b48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x226b4c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x226b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226b50: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x226b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226b54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x226b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b58: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x226b58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x226b5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x226b5cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x226b60: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x226b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226b64: 0x4a0002ff  vnop
    ctx->pc = 0x226b64u;
    // NOP operation, no action needed for VU0
    // 0x226b68: 0x4a0002ff  vnop
    ctx->pc = 0x226b68u;
    // NOP operation, no action needed for VU0
    // 0x226b6c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x226b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b70: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x226b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b78: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x226b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226b7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x226b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b80: 0xc089a42  jal         func_226908
    ctx->pc = 0x226B80u;
    SET_GPR_U32(ctx, 31, 0x226B88u);
    ctx->pc = 0x226B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226B80u;
            // 0x226b84: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226908u;
    if (runtime->hasFunction(0x226908u)) {
        auto targetFn = runtime->lookupFunction(0x226908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B88u; }
        if (ctx->pc != 0x226B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226908_0x226908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B88u; }
        if (ctx->pc != 0x226B88u) { return; }
    }
    ctx->pc = 0x226B88u;
    // 0x226b88: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x226B88u;
    {
        const bool branch_taken_0x226b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226B88u;
            // 0x226b8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b88) {
            ctx->pc = 0x226BA0u;
            goto label_226ba0;
        }
    }
    ctx->pc = 0x226B90u;
    // 0x226b90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x226b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x226b94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x226b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x226b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x226b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x226b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x226b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226ba0:
    // 0x226ba0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x226ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226ba4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x226ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x226ba8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x226ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226bac: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x226bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226bb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x226bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x226BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226BB4u;
            // 0x226bb8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226B30u: goto label_226b30;
            case 0x226B34u: goto label_226b34;
            case 0x226BA0u: goto label_226ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226BBCu;
    // 0x226bbc: 0x0  nop
    ctx->pc = 0x226bbcu;
    // NOP
}
