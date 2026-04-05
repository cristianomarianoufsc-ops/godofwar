#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CEE10
// Address: 0x1cee10 - 0x1cf780
void sub_001CEE10_0x1cee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEE10_0x1cee10");
#endif

    ctx->pc = 0x1cee10u;

    // 0x1cee10: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1cee14: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x1cee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
    // 0x1cee18: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x1cee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
    // 0x1cee1c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1cee1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee20: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x1cee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
    // 0x1cee24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cee24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee28: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x1cee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
    // 0x1cee2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cee2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee30: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x1cee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
    // 0x1cee34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1cee34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee38: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x1cee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
    // 0x1cee3c: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x1cee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
    // 0x1cee40: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x1cee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x1cee44: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x1cee44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x1cee48: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x1cee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x1cee4c: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x1cee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
    // 0x1cee50: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x1cee50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cee54: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x1cee54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cee58: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1cee58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee5c: 0xda610010  lqc2        $vf1, 0x10($s3)
    ctx->pc = 0x1cee5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1cee60: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1cee60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1cee64: 0x4be2085b  vmulw.xyzw  $vf1, $vf1, $vf2w
    ctx->pc = 0x1cee64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cee68: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1cee68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cee6c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1cee6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1cee70: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1cee70u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cee74: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1cee74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1cee78: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x1cee78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1cee7c: 0xc0739a6  jal         func_1CE698
    ctx->pc = 0x1CEE7Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE84u);
    ctx->pc = 0x1CEE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE7Cu;
            // 0x1cee80: 0x27a900d0  addiu       $t1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE698u;
    if (runtime->hasFunction(0x1CE698u)) {
        auto targetFn = runtime->lookupFunction(0x1CE698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE84u; }
        if (ctx->pc != 0x1CEE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE698_0x1ce698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE84u; }
        if (ctx->pc != 0x1CEE84u) { return; }
    }
    ctx->pc = 0x1CEE84u;
    // 0x1cee84: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x1cee84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1cee88: 0xfa850000  sqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1cee88u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1cee8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cee8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cee90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cee90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cee94: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1cee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cee98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cee98u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1cee9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cee9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ceea0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ceea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ceea4: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1ceea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ceea8: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x1ceea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ceeac: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x1ceeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ceeb0: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1ceeb0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ceeb4: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x1ceeb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceeb8: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1ceeb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ceebc: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1ceebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1ceec0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1ceec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ceec4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1ceec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ceec8: 0x8ec20174  lw          $v0, 0x174($s6)
    ctx->pc = 0x1ceec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
    // 0x1ceecc: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1ceeccu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1ceed0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ceed0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ceed4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ceed4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ceed8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1ceed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceedc: 0x4a0002ff  vnop
    ctx->pc = 0x1ceedcu;
    // NOP operation, no action needed for VU0
    // 0x1ceee0: 0x4a0002ff  vnop
    ctx->pc = 0x1ceee0u;
    // NOP operation, no action needed for VU0
    // 0x1ceee4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ceee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ceee8: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x1ceee8u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x1ceeec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CEEECu;
    {
        const bool branch_taken_0x1ceeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEEECu;
            // 0x1ceef0: 0xfba10000  sqc2        $vf1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceeec) {
            ctx->pc = 0x1CEF38u;
            goto label_1cef38;
        }
    }
    ctx->pc = 0x1CEEF4u;
    // 0x1ceef4: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x1ceef4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceef8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1ceef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1ceefc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ceefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cef00: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cef00u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cef04: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1cef04u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cef08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cef08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cef0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cef0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cef10: 0x0  nop
    ctx->pc = 0x1cef10u;
    // NOP
    // 0x1cef14: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1CEF14u;
    {
        const bool branch_taken_0x1cef14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF14u;
            // 0x1cef18: 0xdba200e0  lqc2        $vf2, 0xE0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef14) {
            ctx->pc = 0x1CEF3Cu;
            goto label_1cef3c;
        }
    }
    ctx->pc = 0x1CEF1Cu;
    // 0x1cef1c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1cef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1cef20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cef20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cef24: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1cef24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cef28: 0x4a222840  vaddx.w     $vf1, $vf5, $vf2x
    ctx->pc = 0x1cef28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cef2c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1cef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cef30: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1cef30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cef34: 0x0  nop
    ctx->pc = 0x1cef34u;
    // NOP
label_1cef38:
    // 0x1cef38: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1cef38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1cef3c:
    // 0x1cef3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cef40: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1cef40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cef44: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1cef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cef48: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cef48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cef4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cef4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cef50: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x1cef50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cef54: 0x0  nop
    ctx->pc = 0x1cef54u;
    // NOP
    // 0x1cef58: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEF58u;
    {
        const bool branch_taken_0x1cef58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cef58) {
            ctx->pc = 0x1CEF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF58u;
            // 0x1cef5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEF60u;
            goto label_1cef60;
        }
    }
    ctx->pc = 0x1CEF60u;
label_1cef60:
    // 0x1cef60: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cef60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cef64: 0x8c8202d8  lw          $v0, 0x2D8($a0)
    ctx->pc = 0x1cef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x1cef68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cef68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cef6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEF6Cu;
    {
        const bool branch_taken_0x1cef6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF6Cu;
            // 0x1cef70: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef6c) {
            ctx->pc = 0x1CEFA0u;
            goto label_1cefa0;
        }
    }
    ctx->pc = 0x1CEF74u;
    // 0x1cef74: 0x8ec20174  lw          $v0, 0x174($s6)
    ctx->pc = 0x1cef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
    // 0x1cef78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cef78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cef7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEF7Cu;
    {
        const bool branch_taken_0x1cef7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF7Cu;
            // 0x1cef80: 0x7ba500c0  lq          $a1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef7c) {
            ctx->pc = 0x1CEFA0u;
            goto label_1cefa0;
        }
    }
    ctx->pc = 0x1CEF84u;
    // 0x1cef84: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1cef84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef88: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1cef88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef90: 0xc073a26  jal         func_1CE898
    ctx->pc = 0x1CEF90u;
    SET_GPR_U32(ctx, 31, 0x1CEF98u);
    ctx->pc = 0x1CEF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF90u;
            // 0x1cef94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE898u;
    if (runtime->hasFunction(0x1CE898u)) {
        auto targetFn = runtime->lookupFunction(0x1CE898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF98u; }
        if (ctx->pc != 0x1CEF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE898_0x1ce898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF98u; }
        if (ctx->pc != 0x1CEF98u) { return; }
    }
    ctx->pc = 0x1CEF98u;
    // 0x1cef98: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x1CEF98u;
    {
        const bool branch_taken_0x1cef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF98u;
            // 0x1cef9c: 0x8ec20174  lw          $v0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef98) {
            ctx->pc = 0x1CF6B8u;
            goto label_1cf6b8;
        }
    }
    ctx->pc = 0x1CEFA0u;
label_1cefa0:
    // 0x1cefa0: 0x8ec30174  lw          $v1, 0x174($s6)
    ctx->pc = 0x1cefa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
    // 0x1cefa4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cefa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1cefa8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEFA8u;
    {
        const bool branch_taken_0x1cefa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFA8u;
            // 0x1cefac: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefa8) {
            ctx->pc = 0x1CEFDCu;
            goto label_1cefdc;
        }
    }
    ctx->pc = 0x1CEFB0u;
    // 0x1cefb0: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1cefb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cefb4: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x1cefb4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cefb8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cefb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cefbc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1cefbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cefc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cefc4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1cefc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cefc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefcc: 0xc073a84  jal         func_1CEA10
    ctx->pc = 0x1CEFCCu;
    SET_GPR_U32(ctx, 31, 0x1CEFD4u);
    ctx->pc = 0x1CEFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFCCu;
            // 0x1cefd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA10u;
    if (runtime->hasFunction(0x1CEA10u)) {
        auto targetFn = runtime->lookupFunction(0x1CEA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFD4u; }
        if (ctx->pc != 0x1CEFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEA10_0x1cea10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFD4u; }
        if (ctx->pc != 0x1CEFD4u) { return; }
    }
    ctx->pc = 0x1CEFD4u;
    // 0x1cefd4: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x1CEFD4u;
    {
        const bool branch_taken_0x1cefd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFD4u;
            // 0x1cefd8: 0x8ec20174  lw          $v0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefd4) {
            ctx->pc = 0x1CF6B8u;
            goto label_1cf6b8;
        }
    }
    ctx->pc = 0x1CEFDCu;
label_1cefdc:
    // 0x1cefdc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1CEFDCu;
    {
        const bool branch_taken_0x1cefdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFDCu;
            // 0x1cefe0: 0x3062004c  andi        $v0, $v1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefdc) {
            ctx->pc = 0x1CF100u;
            goto label_1cf100;
        }
    }
    ctx->pc = 0x1CEFE4u;
    // 0x1cefe4: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CEFE4u;
    SET_GPR_U32(ctx, 31, 0x1CEFECu);
    ctx->pc = 0x1CEFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFE4u;
            // 0x1cefe8: 0x8c840320  lw          $a0, 0x320($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFECu; }
        if (ctx->pc != 0x1CEFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFECu; }
        if (ctx->pc != 0x1CEFECu) { return; }
    }
    ctx->pc = 0x1CEFECu;
    // 0x1cefec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1cefecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ceff0: 0xc44001b4  lwc1        $f0, 0x1B4($v0)
    ctx->pc = 0x1ceff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceff4: 0xc461c658  lwc1        $f1, -0x39A8($v1)
    ctx->pc = 0x1ceff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ceff8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ceff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ceffc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ceffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cf000: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cf000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cf004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf008: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cf008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cf00c: 0x12a0001e  beqz        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CF00Cu;
    {
        const bool branch_taken_0x1cf00c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF00Cu;
            // 0x1cf010: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf00c) {
            ctx->pc = 0x1CF088u;
            goto label_1cf088;
        }
    }
    ctx->pc = 0x1CF014u;
    // 0x1cf014: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1cf014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cf018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf01c: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1cf01cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf020: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1cf020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf024: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cf024u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf02c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf030: 0x0  nop
    ctx->pc = 0x1cf030u;
    // NOP
    // 0x1cf034: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF034u;
    {
        const bool branch_taken_0x1cf034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf034) {
            ctx->pc = 0x1CF038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF034u;
            // 0x1cf038: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF03Cu;
            goto label_1cf03c;
        }
    }
    ctx->pc = 0x1CF03Cu;
label_1cf03c:
    // 0x1cf03c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF03Cu;
    {
        const bool branch_taken_0x1cf03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf03c) {
            ctx->pc = 0x1CF050u;
            goto label_1cf050;
        }
    }
    ctx->pc = 0x1CF044u;
    // 0x1cf044: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1cf044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cf048: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF048u;
    {
        const bool branch_taken_0x1cf048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf048) {
            ctx->pc = 0x1CF06Cu;
            goto label_1cf06c;
        }
    }
    ctx->pc = 0x1CF050u;
label_1cf050:
    // 0x1cf050: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1cf050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1cf054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf058: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1cf058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1cf05c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf060: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF060u;
    {
        const bool branch_taken_0x1cf060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf060) {
            ctx->pc = 0x1CF06Cu;
            goto label_1cf06c;
        }
    }
    ctx->pc = 0x1CF068u;
    // 0x1cf068: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1cf068u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_1cf06c:
    // 0x1cf06c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1cf06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1cf070: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1cf070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1cf074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf078: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1cf078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf07c: 0x0  nop
    ctx->pc = 0x1cf07cu;
    // NOP
    // 0x1cf080: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF080u;
    {
        const bool branch_taken_0x1cf080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf080) {
            ctx->pc = 0x1CF084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF080u;
            // 0x1cf084: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF088u;
            goto label_1cf088;
        }
    }
    ctx->pc = 0x1CF088u;
label_1cf088:
    // 0x1cf088: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1cf088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cf08c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cf08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cf090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf094: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1cf094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf098: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cf098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cf09c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cf09cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1cf0a0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1cf0a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cf0a4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1cf0a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0a8: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1cf0a8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1cf0ac: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1cf0acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0b0: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1cf0b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cf0b4: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cf0b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0b8: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1cf0b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cf0bc: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cf0bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0c0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1cf0c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0c4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cf0c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0c8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cf0c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0cc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cf0ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cf0d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cf0d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cf0d4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1cf0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0d8: 0x4a0002ff  vnop
    ctx->pc = 0x1cf0d8u;
    // NOP operation, no action needed for VU0
    // 0x1cf0dc: 0x4a0002ff  vnop
    ctx->pc = 0x1cf0dcu;
    // NOP operation, no action needed for VU0
    // 0x1cf0e0: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1cf0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cf0e4: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1cf0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cf0e8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1cf0e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cf0ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cf0ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cf0f0: 0x4a212080  vaddx.w     $vf2, $vf4, $vf1x
    ctx->pc = 0x1cf0f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0f4: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x1CF0F4u;
    {
        const bool branch_taken_0x1cf0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF0F4u;
            // 0x1cf0f8: 0xfa420000  sqc2        $vf2, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0f4) {
            ctx->pc = 0x1CF6B4u;
            goto label_1cf6b4;
        }
    }
    ctx->pc = 0x1CF0FCu;
    // 0x1cf0fc: 0x0  nop
    ctx->pc = 0x1cf0fcu;
    // NOP
label_1cf100:
    // 0x1cf100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF100u;
    {
        const bool branch_taken_0x1cf100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF100u;
            // 0x1cf104: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf100) {
            ctx->pc = 0x1CF120u;
            goto label_1cf120;
        }
    }
    ctx->pc = 0x1CF108u;
    // 0x1cf108: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cf108u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cf10c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1cf10cu;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x1cf110: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cf110u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cf114: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x1CF114u;
    {
        const bool branch_taken_0x1cf114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF114u;
            // 0x1cf118: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf114) {
            ctx->pc = 0x1CF6B4u;
            goto label_1cf6b4;
        }
    }
    ctx->pc = 0x1CF11Cu;
    // 0x1cf11c: 0x0  nop
    ctx->pc = 0x1cf11cu;
    // NOP
label_1cf120:
    // 0x1cf120: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x1CF120u;
    {
        const bool branch_taken_0x1cf120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF120u;
            // 0x1cf124: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf120) {
            ctx->pc = 0x1CF364u;
            goto label_1cf364;
        }
    }
    ctx->pc = 0x1CF128u;
    // 0x1cf128: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1cf128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cf12c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF12Cu;
    {
        const bool branch_taken_0x1cf12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf12c) {
            ctx->pc = 0x1CF130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF12Cu;
            // 0x1cf130: 0x7ba40120  lq          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF148u;
            goto label_1cf148;
        }
    }
    ctx->pc = 0x1CF134u;
    // 0x1cf134: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1cf134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1cf138: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1cf138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cf13c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CF13Cu;
    {
        const bool branch_taken_0x1cf13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf13c) {
            ctx->pc = 0x1CF140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF13Cu;
            // 0x1cf140: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1D0u;
            goto label_1cf1d0;
        }
    }
    ctx->pc = 0x1CF144u;
    // 0x1cf144: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1cf144u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1cf148:
    // 0x1cf148: 0xdba10120  lqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1cf148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cf14c: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x1cf14cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x1cf150: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1cf150u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1cf154: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1cf154u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf158: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cf158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf15c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1cf15cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cf160: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x1cf160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x1cf164: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf168: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1cf168u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cf16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cf170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf174: 0x0  nop
    ctx->pc = 0x1cf174u;
    // NOP
    // 0x1cf178: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1CF178u;
    {
        const bool branch_taken_0x1cf178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF178u;
            // 0x1cf17c: 0x48242000  qmfc2.ni    $a0, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf178) {
            ctx->pc = 0x1CF1A8u;
            goto label_1cf1a8;
        }
    }
    ctx->pc = 0x1CF180u;
    // 0x1cf180: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x1cf180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
    // 0x1cf184: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cf184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cf188: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf18c: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1cf18cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cf190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cf194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf198: 0x0  nop
    ctx->pc = 0x1cf198u;
    // NOP
    // 0x1cf19c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF19Cu;
    {
        const bool branch_taken_0x1cf19c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf19c) {
            ctx->pc = 0x1CF1A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF19Cu;
            // 0x1cf1a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1A8u;
            goto label_1cf1a8;
        }
    }
    ctx->pc = 0x1CF1A4u;
    // 0x1cf1a4: 0x0  nop
    ctx->pc = 0x1cf1a4u;
    // NOP
label_1cf1a8:
    // 0x1cf1a8: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1CF1A8u;
    {
        const bool branch_taken_0x1cf1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1A8u;
            // 0x1cf1ac: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1a8) {
            ctx->pc = 0x1CF328u;
            goto label_1cf328;
        }
    }
    ctx->pc = 0x1CF1B0u;
    // 0x1cf1b0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cf1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cf1b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf1b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf1bc: 0x0  nop
    ctx->pc = 0x1cf1bcu;
    // NOP
    // 0x1cf1c0: 0x4503013c  bc1tl       . + 4 + (0x13C << 2)
    ctx->pc = 0x1CF1C0u;
    {
        const bool branch_taken_0x1cf1c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf1c0) {
            ctx->pc = 0x1CF1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1C0u;
            // 0x1cf1c4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF6B4u;
            goto label_1cf6b4;
        }
    }
    ctx->pc = 0x1CF1C8u;
    // 0x1cf1c8: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1CF1C8u;
    {
        const bool branch_taken_0x1cf1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1C8u;
            // 0x1cf1cc: 0x8ec20174  lw          $v0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1c8) {
            ctx->pc = 0x1CF6B8u;
            goto label_1cf6b8;
        }
    }
    ctx->pc = 0x1CF1D0u;
label_1cf1d0:
    // 0x1cf1d0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1cf1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1cf1d4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1cf1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1cf1d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1CF1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF1E0u);
        ctx->pc = 0x1CF1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1D8u;
            // 0x1cf1dc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF1E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEF38u: goto label_1cef38;
            case 0x1CEF3Cu: goto label_1cef3c;
            case 0x1CEF60u: goto label_1cef60;
            case 0x1CEFA0u: goto label_1cefa0;
            case 0x1CEFDCu: goto label_1cefdc;
            case 0x1CF03Cu: goto label_1cf03c;
            case 0x1CF050u: goto label_1cf050;
            case 0x1CF06Cu: goto label_1cf06c;
            case 0x1CF088u: goto label_1cf088;
            case 0x1CF100u: goto label_1cf100;
            case 0x1CF120u: goto label_1cf120;
            case 0x1CF148u: goto label_1cf148;
            case 0x1CF1A8u: goto label_1cf1a8;
            case 0x1CF1D0u: goto label_1cf1d0;
            case 0x1CF228u: goto label_1cf228;
            case 0x1CF248u: goto label_1cf248;
            case 0x1CF264u: goto label_1cf264;
            case 0x1CF2C0u: goto label_1cf2c0;
            case 0x1CF2DCu: goto label_1cf2dc;
            case 0x1CF328u: goto label_1cf328;
            case 0x1CF33Cu: goto label_1cf33c;
            case 0x1CF364u: goto label_1cf364;
            case 0x1CF388u: goto label_1cf388;
            case 0x1CF3A4u: goto label_1cf3a4;
            case 0x1CF438u: goto label_1cf438;
            case 0x1CF470u: goto label_1cf470;
            case 0x1CF488u: goto label_1cf488;
            case 0x1CF490u: goto label_1cf490;
            case 0x1CF518u: goto label_1cf518;
            case 0x1CF52Cu: goto label_1cf52c;
            case 0x1CF570u: goto label_1cf570;
            case 0x1CF578u: goto label_1cf578;
            case 0x1CF598u: goto label_1cf598;
            case 0x1CF620u: goto label_1cf620;
            case 0x1CF63Cu: goto label_1cf63c;
            case 0x1CF6A0u: goto label_1cf6a0;
            case 0x1CF6B4u: goto label_1cf6b4;
            case 0x1CF6B8u: goto label_1cf6b8;
            case 0x1CF720u: goto label_1cf720;
            case 0x1CF740u: goto label_1cf740;
            case 0x1CF750u: goto label_1cf750;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF1E0u; }
            if (ctx->pc != 0x1CF1E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF1E0u;
    // 0x1cf1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1e4: 0x50800134  beql        $a0, $zero, . + 4 + (0x134 << 2)
    ctx->pc = 0x1CF1E4u;
    {
        const bool branch_taken_0x1cf1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1e4) {
            ctx->pc = 0x1CF1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1E4u;
            // 0x1cf1e8: 0x8ec20174  lw          $v0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF6B8u;
            goto label_1cf6b8;
        }
    }
    ctx->pc = 0x1CF1ECu;
    // 0x1cf1ec: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1cf1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cf1f0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1cf1f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf1f4: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1cf1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1cf1f8: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1cf1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf1fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf200: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1cf200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cf204: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1cf204u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cf208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf20c: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1cf20cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cf210: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1cf210u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cf214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf218: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf21c: 0x0  nop
    ctx->pc = 0x1cf21cu;
    // NOP
    // 0x1cf220: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF220u;
    {
        const bool branch_taken_0x1cf220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf220) {
            ctx->pc = 0x1CF224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF220u;
            // 0x1cf224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF228u;
            goto label_1cf228;
        }
    }
    ctx->pc = 0x1CF228u;
label_1cf228:
    // 0x1cf228: 0x10a00122  beqz        $a1, . + 4 + (0x122 << 2)
    ctx->pc = 0x1CF228u;
    {
        const bool branch_taken_0x1cf228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF228u;
            // 0x1cf22c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf228) {
            ctx->pc = 0x1CF6B4u;
            goto label_1cf6b4;
        }
    }
    ctx->pc = 0x1CF230u;
    // 0x1cf230: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1cf230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cf234: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1cf234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cf238: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF238u;
    {
        const bool branch_taken_0x1cf238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF238u;
            // 0x1cf23c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf238) {
            ctx->pc = 0x1CF248u;
            goto label_1cf248;
        }
    }
    ctx->pc = 0x1CF240u;
    // 0x1cf240: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF240u;
    {
        const bool branch_taken_0x1cf240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF240u;
            // 0x1cf244: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf240) {
            ctx->pc = 0x1CF264u;
            goto label_1cf264;
        }
    }
    ctx->pc = 0x1CF248u;
label_1cf248:
    // 0x1cf248: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cf248u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cf24c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cf24cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cf250: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF250u;
    {
        const bool branch_taken_0x1cf250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CF254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF250u;
            // 0x1cf254: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf250) {
            ctx->pc = 0x1CF264u;
            goto label_1cf264;
        }
    }
    ctx->pc = 0x1CF258u;
    // 0x1cf258: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CF258u;
    SET_GPR_U32(ctx, 31, 0x1CF260u);
    ctx->pc = 0x1CF25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF258u;
            // 0x1cf25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF260u; }
        if (ctx->pc != 0x1CF260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF260u; }
        if (ctx->pc != 0x1CF260u) { return; }
    }
    ctx->pc = 0x1CF260u;
    // 0x1cf260: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1cf260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cf264:
    // 0x1cf264: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1cf264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1cf268: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1cf268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cf26c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1cf26cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf270: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1cf270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf274: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1cf274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cf278: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cf278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cf27c: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1cf27cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf280: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1cf280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf284: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1cf284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf288: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cf288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf28c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cf28cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf290: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1cf290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cf294: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cf294u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf298: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cf298u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf29c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x1cf29cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cf2a0: 0x46000504  c1          0x504
    ctx->pc = 0x1cf2a0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cf2a4: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1cf2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1cf2a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf2ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF2ACu;
    {
        const bool branch_taken_0x1cf2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2ACu;
            // 0x1cf2b0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2ac) {
            ctx->pc = 0x1CF2C0u;
            goto label_1cf2c0;
        }
    }
    ctx->pc = 0x1CF2B4u;
    // 0x1cf2b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF2B4u;
    {
        const bool branch_taken_0x1cf2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2B4u;
            // 0x1cf2b8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2b4) {
            ctx->pc = 0x1CF2DCu;
            goto label_1cf2dc;
        }
    }
    ctx->pc = 0x1CF2BCu;
    // 0x1cf2bc: 0x0  nop
    ctx->pc = 0x1cf2bcu;
    // NOP
label_1cf2c0:
    // 0x1cf2c0: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1cf2c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1cf2c4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cf2c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cf2c8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF2C8u;
    {
        const bool branch_taken_0x1cf2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CF2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2C8u;
            // 0x1cf2cc: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2c8) {
            ctx->pc = 0x1CF2DCu;
            goto label_1cf2dc;
        }
    }
    ctx->pc = 0x1CF2D0u;
    // 0x1cf2d0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CF2D0u;
    SET_GPR_U32(ctx, 31, 0x1CF2D8u);
    ctx->pc = 0x1CF2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2D0u;
            // 0x1cf2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2D8u; }
        if (ctx->pc != 0x1CF2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF2D8u; }
        if (ctx->pc != 0x1CF2D8u) { return; }
    }
    ctx->pc = 0x1CF2D8u;
    // 0x1cf2d8: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1cf2dc:
    // 0x1cf2dc: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1cf2dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1cf2e0: 0xdba20140  lqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1cf2e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cf2e4: 0x4be1106a  vmul.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1cf2e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf2e8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1cf2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf2ec: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1cf2ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf2f0: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x1cf2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x1cf2f4: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cf2f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cf2f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf2fc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1cf2fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cf300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cf300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf308: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1CF308u;
    {
        const bool branch_taken_0x1cf308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf308) {
            ctx->pc = 0x1CF33Cu;
            goto label_1cf33c;
        }
    }
    ctx->pc = 0x1CF310u;
    // 0x1cf310: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cf310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cf314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf318: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1cf318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf31c: 0x0  nop
    ctx->pc = 0x1cf31cu;
    // NOP
    // 0x1cf320: 0x450200e5  bc1fl       . + 4 + (0xE5 << 2)
    ctx->pc = 0x1CF320u;
    {
        const bool branch_taken_0x1cf320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf320) {
            ctx->pc = 0x1CF324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF320u;
            // 0x1cf324: 0x8ec20174  lw          $v0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF6B8u;
            goto label_1cf6b8;
        }
    }
    ctx->pc = 0x1CF328u;
label_1cf328:
    // 0x1cf328: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf32c: 0xc073982  jal         func_1CE608
    ctx->pc = 0x1CF32Cu;
    SET_GPR_U32(ctx, 31, 0x1CF334u);
    ctx->pc = 0x1CF330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF32Cu;
            // 0x1cf330: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE608u;
    if (runtime->hasFunction(0x1CE608u)) {
        auto targetFn = runtime->lookupFunction(0x1CE608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF334u; }
        if (ctx->pc != 0x1CF334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE608_0x1ce608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF334u; }
        if (ctx->pc != 0x1CF334u) { return; }
    }
    ctx->pc = 0x1CF334u;
    // 0x1cf334: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1CF334u;
    {
        const bool branch_taken_0x1cf334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF334u;
            // 0x1cf338: 0x8ec20174  lw          $v0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf334) {
            ctx->pc = 0x1CF6B8u;
            goto label_1cf6b8;
        }
    }
    ctx->pc = 0x1CF33Cu;
label_1cf33c:
    // 0x1cf33c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1cf33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cf340: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cf340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf344: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1cf344u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cf348: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cf348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf34c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1cf34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cf350: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1cf350u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cf354: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cf354u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cf358: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1cf358u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1cf35c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1CF35Cu;
    {
        const bool branch_taken_0x1cf35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF35Cu;
            // 0x1cf360: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf35c) {
            ctx->pc = 0x1CF6B4u;
            goto label_1cf6b4;
        }
    }
    ctx->pc = 0x1CF364u;
label_1cf364:
    // 0x1cf364: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1cf364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cf368: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1CF368u;
    {
        const bool branch_taken_0x1cf368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf368) {
            ctx->pc = 0x1CF36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF368u;
            // 0x1cf36c: 0x96620072  lhu         $v0, 0x72($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 114)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF470u;
            goto label_1cf470;
        }
    }
    ctx->pc = 0x1CF370u;
    // 0x1cf370: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1cf370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cf374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf378: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF378u;
    {
        const bool branch_taken_0x1cf378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF378u;
            // 0x1cf37c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf378) {
            ctx->pc = 0x1CF388u;
            goto label_1cf388;
        }
    }
    ctx->pc = 0x1CF380u;
    // 0x1cf380: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF380u;
    {
        const bool branch_taken_0x1cf380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF380u;
            // 0x1cf384: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf380) {
            ctx->pc = 0x1CF3A4u;
            goto label_1cf3a4;
        }
    }
    ctx->pc = 0x1CF388u;
label_1cf388:
    // 0x1cf388: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1cf388u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1cf38c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cf38cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cf390: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF390u;
    {
        const bool branch_taken_0x1cf390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CF394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF390u;
            // 0x1cf394: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf390) {
            ctx->pc = 0x1CF3A4u;
            goto label_1cf3a4;
        }
    }
    ctx->pc = 0x1CF398u;
    // 0x1cf398: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CF398u;
    SET_GPR_U32(ctx, 31, 0x1CF3A0u);
    ctx->pc = 0x1CF39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF398u;
            // 0x1cf39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF3A0u; }
        if (ctx->pc != 0x1CF3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF3A0u; }
        if (ctx->pc != 0x1CF3A0u) { return; }
    }
    ctx->pc = 0x1CF3A0u;
    // 0x1cf3a0: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1cf3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1cf3a4:
    // 0x1cf3a4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1cf3a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cf3a8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1cf3a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cf3ac: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1cf3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1cf3b0: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1cf3b0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cf3b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf3b8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1cf3bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf3c0: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1cf3c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf3c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cf3c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf3c8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1cf3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1cf3cc: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x1cf3ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1cf3d0: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1cf3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cf3d4: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1cf3d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1cf3d8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1CF3D8u;
    {
        const bool branch_taken_0x1cf3d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF3D8u;
            // 0x1cf3dc: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3d8) {
            ctx->pc = 0x1CF438u;
            goto label_1cf438;
        }
    }
    ctx->pc = 0x1CF3E0u;
    // 0x1cf3e0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1cf3e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf3e4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cf3e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf3e8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cf3e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf3ec: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cf3ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cf3f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cf3f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cf3f4: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1cf3f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cf3f8: 0x4a0002ff  vnop
    ctx->pc = 0x1cf3f8u;
    // NOP operation, no action needed for VU0
    // 0x1cf3fc: 0x4a0002ff  vnop
    ctx->pc = 0x1cf3fcu;
    // NOP operation, no action needed for VU0
    // 0x1cf400: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1cf400u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf404: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1cf404u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1cf408: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1cf408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf40c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1cf40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf410: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cf410u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf414: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1cf414u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cf418: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1cf418u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1cf41c: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1cf41cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cf420: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1cf420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1cf424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cf424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf428: 0xc073982  jal         func_1CE608
    ctx->pc = 0x1CF428u;
    SET_GPR_U32(ctx, 31, 0x1CF430u);
    ctx->pc = 0x1CF42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF428u;
            // 0x1cf42c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE608u;
    if (runtime->hasFunction(0x1CE608u)) {
        auto targetFn = runtime->lookupFunction(0x1CE608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF430u; }
        if (ctx->pc != 0x1CF430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE608_0x1ce608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF430u; }
        if (ctx->pc != 0x1CF430u) { return; }
    }
    ctx->pc = 0x1CF430u;
    // 0x1cf430: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1CF430u;
    {
        const bool branch_taken_0x1cf430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF430u;
            // 0x1cf434: 0x8ec20174  lw          $v0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf430) {
            ctx->pc = 0x1CF6B8u;
            goto label_1cf6b8;
        }
    }
    ctx->pc = 0x1CF438u;
label_1cf438:
    // 0x1cf438: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x1cf438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf43c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1cf43cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf440: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1cf440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf444: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1cf444u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1cf448: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1cf448u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cf44c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cf44cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cf450: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1cf450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf454: 0x4a0002ff  vnop
    ctx->pc = 0x1cf454u;
    // NOP operation, no action needed for VU0
    // 0x1cf458: 0x4a0002ff  vnop
    ctx->pc = 0x1cf458u;
    // NOP operation, no action needed for VU0
    // 0x1cf45c: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1cf45cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf460: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cf460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf464: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1cf464u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1cf468: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1CF468u;
    {
        const bool branch_taken_0x1cf468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF468u;
            // 0x1cf46c: 0xfa410000  sqc2        $vf1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf468) {
            ctx->pc = 0x1CF6B4u;
            goto label_1cf6b4;
        }
    }
    ctx->pc = 0x1CF470u;
label_1cf470:
    // 0x1cf470: 0x30420022  andi        $v0, $v0, 0x22
    ctx->pc = 0x1cf470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34);
    // 0x1cf474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF474u;
    {
        const bool branch_taken_0x1cf474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF474u;
            // 0x1cf478: 0x8c840320  lw          $a0, 0x320($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf474) {
            ctx->pc = 0x1CF488u;
            goto label_1cf488;
        }
    }
    ctx->pc = 0x1CF47Cu;
    // 0x1cf47c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1cf47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cf480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF480u;
    {
        const bool branch_taken_0x1cf480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF480u;
            // 0x1cf484: 0xc4540064  lwc1        $f20, 0x64($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf480) {
            ctx->pc = 0x1CF490u;
            goto label_1cf490;
        }
    }
    ctx->pc = 0x1CF488u;
label_1cf488:
    // 0x1cf488: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1cf488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cf48c: 0xc4540068  lwc1        $f20, 0x68($v0)
    ctx->pc = 0x1cf48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cf490:
    // 0x1cf490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf498: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cf49c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cf49cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cf4a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf4a4: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1cf4a4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x1cf4a8: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1cf4a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1cf4ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cf4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cf4b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1cf4b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cf4b4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1cf4b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cf4b8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cf4b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf4bc: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1cf4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf4c0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CF4C0u;
    SET_GPR_U32(ctx, 31, 0x1CF4C8u);
    ctx->pc = 0x1CF4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4C0u;
            // 0x1cf4c4: 0xfba40160  sqc2        $vf4, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4C8u; }
        if (ctx->pc != 0x1CF4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4C8u; }
        if (ctx->pc != 0x1CF4C8u) { return; }
    }
    ctx->pc = 0x1CF4C8u;
    // 0x1cf4c8: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x1cf4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf4cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cf4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cf4d0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cf4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cf4d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf4d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1cf4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1cf4dc: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x1cf4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf4e0: 0xdba40160  lqc2        $vf4, 0x160($sp)
    ctx->pc = 0x1cf4e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cf4e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cf4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cf4e8: 0x12a0002b  beqz        $s5, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CF4E8u;
    {
        const bool branch_taken_0x1cf4e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4E8u;
            // 0x1cf4ec: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4e8) {
            ctx->pc = 0x1CF598u;
            goto label_1cf598;
        }
    }
    ctx->pc = 0x1CF4F0u;
    // 0x1cf4f0: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1cf4f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cf4f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf4f8: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1cf4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf4fc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1cf4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf500: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cf500u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf50c: 0x0  nop
    ctx->pc = 0x1cf50cu;
    // NOP
    // 0x1cf510: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF510u;
    {
        const bool branch_taken_0x1cf510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf510) {
            ctx->pc = 0x1CF514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF510u;
            // 0x1cf514: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF518u;
            goto label_1cf518;
        }
    }
    ctx->pc = 0x1CF518u;
label_1cf518:
    // 0x1cf518: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF518u;
    {
        const bool branch_taken_0x1cf518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf518) {
            ctx->pc = 0x1CF52Cu;
            goto label_1cf52c;
        }
    }
    ctx->pc = 0x1CF520u;
    // 0x1cf520: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cf520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cf524: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CF524u;
    {
        const bool branch_taken_0x1cf524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf524) {
            ctx->pc = 0x1CF578u;
            goto label_1cf578;
        }
    }
    ctx->pc = 0x1CF52Cu;
label_1cf52c:
    // 0x1cf52c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1cf52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1cf530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf534: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1cf534u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1cf538: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1cf538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf53c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1CF53Cu;
    {
        const bool branch_taken_0x1cf53c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf53c) {
            ctx->pc = 0x1CF578u;
            goto label_1cf578;
        }
    }
    ctx->pc = 0x1CF544u;
    // 0x1cf544: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1cf544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cf548: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1cf54c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1cf54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1cf550: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF550u;
    {
        const bool branch_taken_0x1cf550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF550u;
            // 0x1cf554: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf550) {
            ctx->pc = 0x1CF570u;
            goto label_1cf570;
        }
    }
    ctx->pc = 0x1CF558u;
    // 0x1cf558: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cf558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cf55c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cf560: 0x8c8202d8  lw          $v0, 0x2D8($a0)
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x1cf564: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cf564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cf568: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x1cf568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x1cf56c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1cf56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf570:
    // 0x1cf570: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1cf570u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1cf574: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1cf574u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1cf578:
    // 0x1cf578: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1cf578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1cf57c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1cf57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1cf580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf584: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cf584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf588: 0x0  nop
    ctx->pc = 0x1cf588u;
    // NOP
    // 0x1cf58c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF58Cu;
    {
        const bool branch_taken_0x1cf58c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf58c) {
            ctx->pc = 0x1CF590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF58Cu;
            // 0x1cf590: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF598u;
            goto label_1cf598;
        }
    }
    ctx->pc = 0x1CF594u;
    // 0x1cf594: 0x0  nop
    ctx->pc = 0x1cf594u;
    // NOP
label_1cf598:
    // 0x1cf598: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1cf598u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cf59c: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x1cf59cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x1cf5a0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1cf5a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf5a4: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1cf5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf5a8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1cf5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cf5ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1cf5acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cf5b0: 0xdba10120  lqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1cf5b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cf5b4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1cf5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1cf5b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf5bc: 0xdba30150  lqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1cf5bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cf5c0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1cf5c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cf5c4: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1cf5c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf5c8: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1cf5c8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cf5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf5d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf5d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf5d4: 0x0  nop
    ctx->pc = 0x1cf5d4u;
    // NOP
    // 0x1cf5d8: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x1CF5D8u;
    {
        const bool branch_taken_0x1cf5d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF5D8u;
            // 0x1cf5dc: 0xfa410000  sqc2        $vf1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5d8) {
            ctx->pc = 0x1CF6B4u;
            goto label_1cf6b4;
        }
    }
    ctx->pc = 0x1CF5E0u;
    // 0x1cf5e0: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x1cf5e4: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cf5e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cf5e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf5ec: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1cf5ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cf5f0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1cf5f0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cf5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf5f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf5fc: 0x0  nop
    ctx->pc = 0x1cf5fcu;
    // NOP
    // 0x1cf600: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1CF600u;
    {
        const bool branch_taken_0x1cf600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF600u;
            // 0x1cf604: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf600) {
            ctx->pc = 0x1CF6A0u;
            goto label_1cf6a0;
        }
    }
    ctx->pc = 0x1CF608u;
    // 0x1cf608: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cf60c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf610: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF610u;
    {
        const bool branch_taken_0x1cf610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF610u;
            // 0x1cf614: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf610) {
            ctx->pc = 0x1CF620u;
            goto label_1cf620;
        }
    }
    ctx->pc = 0x1CF618u;
    // 0x1cf618: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF618u;
    {
        const bool branch_taken_0x1cf618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF618u;
            // 0x1cf61c: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf618) {
            ctx->pc = 0x1CF63Cu;
            goto label_1cf63c;
        }
    }
    ctx->pc = 0x1CF620u;
label_1cf620:
    // 0x1cf620: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1cf620u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1cf624: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cf624u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cf628: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF628u;
    {
        const bool branch_taken_0x1cf628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CF62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF628u;
            // 0x1cf62c: 0x26230070  addiu       $v1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf628) {
            ctx->pc = 0x1CF63Cu;
            goto label_1cf63c;
        }
    }
    ctx->pc = 0x1CF630u;
    // 0x1cf630: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CF630u;
    SET_GPR_U32(ctx, 31, 0x1CF638u);
    ctx->pc = 0x1CF634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF630u;
            // 0x1cf634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF638u; }
        if (ctx->pc != 0x1CF638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF638u; }
        if (ctx->pc != 0x1CF638u) { return; }
    }
    ctx->pc = 0x1CF638u;
    // 0x1cf638: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x1cf638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1cf63c:
    // 0x1cf63c: 0xd8620020  lqc2        $vf2, 0x20($v1)
    ctx->pc = 0x1cf63cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1cf640: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1cf640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cf644: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1cf644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cf648: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1cf648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf64c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1cf64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cf650: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cf650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf654: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cf654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf658: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cf658u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cf65c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cf65cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cf660: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1cf660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf664: 0x4a0002ff  vnop
    ctx->pc = 0x1cf664u;
    // NOP operation, no action needed for VU0
    // 0x1cf668: 0x4a0002ff  vnop
    ctx->pc = 0x1cf668u;
    // NOP operation, no action needed for VU0
    // 0x1cf66c: 0xdba10130  lqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1cf66cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cf670: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1cf670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cf674: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1cf674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cf678: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cf678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf67c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cf67cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf680: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1cf680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1cf684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf688: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cf688u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cf68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf690: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf694: 0x0  nop
    ctx->pc = 0x1cf694u;
    // NOP
    // 0x1cf698: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF698u;
    {
        const bool branch_taken_0x1cf698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf698) {
            ctx->pc = 0x1CF69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF698u;
            // 0x1cf69c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF6A0u;
            goto label_1cf6a0;
        }
    }
    ctx->pc = 0x1CF6A0u;
label_1cf6a0:
    // 0x1cf6a0: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF6A0u;
    {
        const bool branch_taken_0x1cf6a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf6a0) {
            ctx->pc = 0x1CF6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6A0u;
            // 0x1cf6a4: 0x8ec20174  lw          $v0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF6B8u;
            goto label_1cf6b8;
        }
    }
    ctx->pc = 0x1CF6A8u;
    // 0x1cf6a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf6a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf6ac: 0xc073982  jal         func_1CE608
    ctx->pc = 0x1CF6ACu;
    SET_GPR_U32(ctx, 31, 0x1CF6B4u);
    ctx->pc = 0x1CF6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6ACu;
            // 0x1cf6b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE608u;
    if (runtime->hasFunction(0x1CE608u)) {
        auto targetFn = runtime->lookupFunction(0x1CE608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6B4u; }
        if (ctx->pc != 0x1CF6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE608_0x1ce608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6B4u; }
        if (ctx->pc != 0x1CF6B4u) { return; }
    }
    ctx->pc = 0x1CF6B4u;
label_1cf6b4:
    // 0x1cf6b4: 0x8ec20174  lw          $v0, 0x174($s6)
    ctx->pc = 0x1cf6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
label_1cf6b8:
    // 0x1cf6b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1cf6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1cf6bc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CF6BCu;
    {
        const bool branch_taken_0x1cf6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6BCu;
            // 0x1cf6c0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6bc) {
            ctx->pc = 0x1CF750u;
            goto label_1cf750;
        }
    }
    ctx->pc = 0x1CF6C4u;
    // 0x1cf6c4: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1cf6c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cf6c8: 0xdba10120  lqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1cf6c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cf6cc: 0x4be308aa  vmul.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1cf6ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cf6d0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cf6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf6d4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cf6d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf6d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cf6d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf6dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cf6dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cf6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf6e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf6e8: 0x0  nop
    ctx->pc = 0x1cf6e8u;
    // NOP
    // 0x1cf6ec: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1CF6ECu;
    {
        const bool branch_taken_0x1cf6ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6ECu;
            // 0x1cf6f0: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6ec) {
            ctx->pc = 0x1CF720u;
            goto label_1cf720;
        }
    }
    ctx->pc = 0x1CF6F4u;
    // 0x1cf6f4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cf6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cf6f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf6fc: 0x90420098  lbu         $v0, 0x98($v0)
    ctx->pc = 0x1cf6fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1cf700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cf704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cf708: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cf708u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1cf70c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cf70cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1cf710: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1cf710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cf714: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CF714u;
    {
        const bool branch_taken_0x1cf714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf714) {
            ctx->pc = 0x1CF740u;
            goto label_1cf740;
        }
    }
    ctx->pc = 0x1CF71Cu;
    // 0x1cf71c: 0x0  nop
    ctx->pc = 0x1cf71cu;
    // NOP
label_1cf720:
    // 0x1cf720: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cf720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cf724: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf728: 0x90420099  lbu         $v0, 0x99($v0)
    ctx->pc = 0x1cf728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 153)));
    // 0x1cf72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cf730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cf734: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cf734u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1cf738: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cf738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cf73c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cf73cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cf740:
    // 0x1cf740: 0x4a211858  vmulx.w     $vf1, $vf3, $vf1x
    ctx->pc = 0x1cf740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf744: 0x4a230b3c  vmove.w     $vf3, $vf1
    ctx->pc = 0x1cf744u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x1cf748: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1cf748u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cf74c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1cf74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cf750:
    // 0x1cf750: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x1cf750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1cf754: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x1cf754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1cf758: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x1cf758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1cf75c: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x1cf75cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1cf760: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x1cf760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1cf764: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x1cf764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1cf768: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x1cf768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1cf76c: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x1cf76cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cf770: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x1cf770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1cf774: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x1cf774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf778: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF778u;
            // 0x1cf77c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEF38u: goto label_1cef38;
            case 0x1CEF3Cu: goto label_1cef3c;
            case 0x1CEF60u: goto label_1cef60;
            case 0x1CEFA0u: goto label_1cefa0;
            case 0x1CEFDCu: goto label_1cefdc;
            case 0x1CF03Cu: goto label_1cf03c;
            case 0x1CF050u: goto label_1cf050;
            case 0x1CF06Cu: goto label_1cf06c;
            case 0x1CF088u: goto label_1cf088;
            case 0x1CF100u: goto label_1cf100;
            case 0x1CF120u: goto label_1cf120;
            case 0x1CF148u: goto label_1cf148;
            case 0x1CF1A8u: goto label_1cf1a8;
            case 0x1CF1D0u: goto label_1cf1d0;
            case 0x1CF228u: goto label_1cf228;
            case 0x1CF248u: goto label_1cf248;
            case 0x1CF264u: goto label_1cf264;
            case 0x1CF2C0u: goto label_1cf2c0;
            case 0x1CF2DCu: goto label_1cf2dc;
            case 0x1CF328u: goto label_1cf328;
            case 0x1CF33Cu: goto label_1cf33c;
            case 0x1CF364u: goto label_1cf364;
            case 0x1CF388u: goto label_1cf388;
            case 0x1CF3A4u: goto label_1cf3a4;
            case 0x1CF438u: goto label_1cf438;
            case 0x1CF470u: goto label_1cf470;
            case 0x1CF488u: goto label_1cf488;
            case 0x1CF490u: goto label_1cf490;
            case 0x1CF518u: goto label_1cf518;
            case 0x1CF52Cu: goto label_1cf52c;
            case 0x1CF570u: goto label_1cf570;
            case 0x1CF578u: goto label_1cf578;
            case 0x1CF598u: goto label_1cf598;
            case 0x1CF620u: goto label_1cf620;
            case 0x1CF63Cu: goto label_1cf63c;
            case 0x1CF6A0u: goto label_1cf6a0;
            case 0x1CF6B4u: goto label_1cf6b4;
            case 0x1CF6B8u: goto label_1cf6b8;
            case 0x1CF720u: goto label_1cf720;
            case 0x1CF740u: goto label_1cf740;
            case 0x1CF750u: goto label_1cf750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF780u;
}
