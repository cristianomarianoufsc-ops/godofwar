#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226EE0
// Address: 0x226ee0 - 0x2270a8
void sub_00226EE0_0x226ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226EE0_0x226ee0");
#endif

    ctx->pc = 0x226ee0u;

    // 0x226ee0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x226ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x226ee4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x226ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x226ee8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x226ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x226eec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ef4: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x226ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x226ef8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x226ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x226efc: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x226efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x226f00: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x226f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x226f04: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x226f04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x226f08: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x226f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x226f0c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x226f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f10: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x226f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x226f14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x226f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f18: 0x8c64d2ac  lw          $a0, -0x2D54($v1)
    ctx->pc = 0x226f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x226f1c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x226f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x226f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x226f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f28: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x226f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x226f2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x226f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f30: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x226f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226f34: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x226F34u;
    SET_GPR_U32(ctx, 31, 0x226F3Cu);
    ctx->pc = 0x226F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226F34u;
            // 0x226f38: 0xfba40080  sqc2        $vf4, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F3Cu; }
        if (ctx->pc != 0x226F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F3Cu; }
        if (ctx->pc != 0x226F3Cu) { return; }
    }
    ctx->pc = 0x226F3Cu;
    // 0x226f3c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x226f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x226f40: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x226f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x226f44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226f48: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x226f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x226f4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x226f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x226f50: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x226f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226f54: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x226f54u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x226f58: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x226f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226f5c: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x226f5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226f60: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x226f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x226f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x226f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x226f68: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x226f68u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x226f6c: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x226f6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x226f70: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x226f70u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x226f74: 0x4a460840  vaddx.z     $vf1, $vf1, $vf6x
    ctx->pc = 0x226f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226f78: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x226f78u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x226f7c: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x226f7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x226f80: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x226f80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226f84: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x226f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x226f88: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x226f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226f8c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x226f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226f90: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x226f90u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x226f94: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x226f94u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x226f98: 0x4a0003bf  vwaitq
    ctx->pc = 0x226f98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x226f9c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x226f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x226fa0: 0x4a0002ff  vnop
    ctx->pc = 0x226fa0u;
    // NOP operation, no action needed for VU0
    // 0x226fa4: 0x4a0002ff  vnop
    ctx->pc = 0x226fa4u;
    // NOP operation, no action needed for VU0
    // 0x226fa8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x226fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226fac: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x226facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226fb0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x226fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226fb4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x226fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226fb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x226fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x226fbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226fc0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x226fc0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226fc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x226fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226fcc: 0x0  nop
    ctx->pc = 0x226fccu;
    // NOP
    // 0x226fd0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x226FD0u;
    {
        const bool branch_taken_0x226fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x226FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226FD0u;
            // 0x226fd4: 0x4be12b3c  vmove.xyzw  $vf1, $vf5 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[5];
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fd0) {
            ctx->pc = 0x227018u;
            goto label_227018;
        }
    }
    ctx->pc = 0x226FD8u;
    // 0x226fd8: 0x4a860840  vaddx.y     $vf1, $vf1, $vf6x
    ctx->pc = 0x226fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226fdc: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x226fdcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x226fe0: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x226fe0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x226fe4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x226fe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x226fe8: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x226fe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x226fec: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x226fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226ff0: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x226ff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x226ff4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x226ff4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x226ff8: 0x4a0003bf  vwaitq
    ctx->pc = 0x226ff8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x226ffc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x226ffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x227000: 0x4a0002ff  vnop
    ctx->pc = 0x227000u;
    // NOP operation, no action needed for VU0
    // 0x227004: 0x4a0002ff  vnop
    ctx->pc = 0x227004u;
    // NOP operation, no action needed for VU0
    // 0x227008: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x227008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22700c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22700Cu;
    {
        const bool branch_taken_0x22700c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22700Cu;
            // 0x227010: 0xfba10050  sqc2        $vf1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22700c) {
            ctx->pc = 0x22701Cu;
            goto label_22701c;
        }
    }
    ctx->pc = 0x227014u;
    // 0x227014: 0x0  nop
    ctx->pc = 0x227014u;
    // NOP
label_227018:
    // 0x227018: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x227018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_22701c:
    // 0x22701c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x22701cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227020: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x227020u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227024: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x227024u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x227028: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x227028u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x22702c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x22702cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x227030: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x227030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x227034: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x227034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x227038: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x227038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22703c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22703cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227040: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x227040u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x227044: 0x4a0003bf  vwaitq
    ctx->pc = 0x227044u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x227048: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x227048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22704c: 0x4a0002ff  vnop
    ctx->pc = 0x22704cu;
    // NOP operation, no action needed for VU0
    // 0x227050: 0x4a0002ff  vnop
    ctx->pc = 0x227050u;
    // NOP operation, no action needed for VU0
    // 0x227054: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x227054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227058: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x227058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22705c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227060: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x227060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x227064: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x227064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227068: 0xc0899c0  jal         func_226700
    ctx->pc = 0x227068u;
    SET_GPR_U32(ctx, 31, 0x227070u);
    ctx->pc = 0x22706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227068u;
            // 0x22706c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226700u;
    if (runtime->hasFunction(0x226700u)) {
        auto targetFn = runtime->lookupFunction(0x226700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227070u; }
        if (ctx->pc != 0x227070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226700_0x226908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227070u; }
        if (ctx->pc != 0x227070u) { return; }
    }
    ctx->pc = 0x227070u;
    // 0x227070: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227070u;
    {
        const bool branch_taken_0x227070 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x227074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227070u;
            // 0x227074: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227070) {
            ctx->pc = 0x227088u;
            goto label_227088;
        }
    }
    ctx->pc = 0x227078u;
    // 0x227078: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x227078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22707c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x22707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x227080: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x227080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x227084: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227088:
    // 0x227088: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x227088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22708c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x22708cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x227090: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x227090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x227094: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x227094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x227098: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x227098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22709c: 0x3e00008  jr          $ra
    ctx->pc = 0x22709Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2270A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22709Cu;
            // 0x2270a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227018u: goto label_227018;
            case 0x22701Cu: goto label_22701c;
            case 0x227088u: goto label_227088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2270A4u;
    // 0x2270a4: 0x0  nop
    ctx->pc = 0x2270a4u;
    // NOP
}
