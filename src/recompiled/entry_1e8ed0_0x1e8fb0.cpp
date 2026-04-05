#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1e8ed0
// Address: 0x1e8ed0 - 0x1e8fb0
void entry_1e8ed0_0x1e8fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1e8ed0_0x1e8fb0");
#endif

    ctx->pc = 0x1e8ed0u;

    // 0x1e8ed0: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x1e8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1e8ed4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e8ed8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e8ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e8edc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e8edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e8ee0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8ee4: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x1e8ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1e8ee8: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1e8ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1e8eec: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1e8eecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1e8ef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8ef4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e8ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8ef8: 0xe4810150  swc1        $f1, 0x150($a0)
    ctx->pc = 0x1e8ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x1e8efc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8f00: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x1e8f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x1e8f04: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1e8f04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f08: 0xac820174  sw          $v0, 0x174($a0)
    ctx->pc = 0x1e8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 2));
    // 0x1e8f0c: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1e8f0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1e8f10: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e8f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8f14: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e8f14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f18: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1e8f18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8f1c: 0xd8810050  lqc2        $vf1, 0x50($a0)
    ctx->pc = 0x1e8f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1e8f20: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e8f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8f24: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e8f24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f28: 0xf8820050  sqc2        $vf2, 0x50($a0)
    ctx->pc = 0x1e8f28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e8f2c: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1e8f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1e8f30: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1e8f30u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1e8f34: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1e8f34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e8f38: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e8f38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f3c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e8f3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f40: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e8f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f44: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e8f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f48: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x1e8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x1e8f4c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e8f4cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e8f50: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e8f50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e8f54: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e8f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f58: 0x4a0002ff  vnop
    ctx->pc = 0x1e8f58u;
    // NOP operation, no action needed for VU0
    // 0x1e8f5c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8f5cu;
    // NOP operation, no action needed for VU0
    // 0x1e8f60: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e8f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e8f64: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e8f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1e8f68: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1e8f68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e8f6c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e8f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8f70: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1e8f70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8f74: 0xd8810050  lqc2        $vf1, 0x50($a0)
    ctx->pc = 0x1e8f74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1e8f78: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1e8f78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e8f7c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e8f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8f80: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e8f80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f84: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e8f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f88: 0xf8420020  sqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1e8f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e8f8c: 0xd8810260  lqc2        $vf1, 0x260($a0)
    ctx->pc = 0x1e8f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 608)));
    // 0x1e8f90: 0x4b010084  vsubx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e8f90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f94: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e8f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8f98: 0xf8810260  sqc2        $vf1, 0x260($a0)
    ctx->pc = 0x1e8f98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8f9c: 0x4b010086  vsubz.x     $vf2, $vf0, $vf1z
    ctx->pc = 0x1e8f9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e8fa0: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e8fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8fa4: 0xf8810260  sqc2        $vf1, 0x260($a0)
    ctx->pc = 0x1e8fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FA8u;
            // 0x1e8fac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8FB0u;
}
