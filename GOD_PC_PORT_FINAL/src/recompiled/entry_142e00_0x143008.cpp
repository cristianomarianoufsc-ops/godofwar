#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_142e00
// Address: 0x142e00 - 0x143008
void entry_142e00_0x143008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_142e00_0x143008");
#endif

    ctx->pc = 0x142e00u;

    // 0x142e00: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x142e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x142e04: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x142e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x142e08: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x142e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x142e0c: 0xc462bfc8  lwc1        $f2, -0x4038($v1)
    ctx->pc = 0x142e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294950856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142e10: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x142e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142e14: 0x24a4bc00  addiu       $a0, $a1, -0x4400
    ctx->pc = 0x142e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949888));
    // 0x142e18: 0xc4830040  lwc1        $f3, 0x40($a0)
    ctx->pc = 0x142e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142e1c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142e20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142e24: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x142e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x142e28: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x142e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e2c: 0x0  nop
    ctx->pc = 0x142e2cu;
    // NOP
    // 0x142e30: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x142E30u;
    {
        const bool branch_taken_0x142e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E30u;
            // 0x142e34: 0xe460bfc8  swc1        $f0, -0x4038($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294950856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e30) {
            ctx->pc = 0x142E78u;
            goto label_142e78;
        }
    }
    ctx->pc = 0x142E38u;
    // 0x142e38: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x142e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e3c: 0x0  nop
    ctx->pc = 0x142e3cu;
    // NOP
    // 0x142e40: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x142E40u;
    {
        const bool branch_taken_0x142e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142e40) {
            ctx->pc = 0x142E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142E40u;
            // 0x142e44: 0xc4830044  lwc1        $f3, 0x44($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x142E7Cu;
            goto label_142e7c;
        }
    }
    ctx->pc = 0x142E48u;
    // 0x142e48: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x142e48u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
    // 0x142e4c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x142e4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142e50: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x142e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x142e54: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x142e54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142e58: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x142e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142e5c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x142e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142e60: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x142e60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x142e64: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x142e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142e68: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x142e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142e6c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x142e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x142e70: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x142E70u;
    {
        const bool branch_taken_0x142e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E70u;
            // 0x142e74: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e70) {
            ctx->pc = 0x142F30u;
            goto label_142f30;
        }
    }
    ctx->pc = 0x142E78u;
label_142e78:
    // 0x142e78: 0xc4830044  lwc1        $f3, 0x44($a0)
    ctx->pc = 0x142e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_142e7c:
    // 0x142e7c: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x142e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142e80: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x142e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e84: 0x0  nop
    ctx->pc = 0x142e84u;
    // NOP
    // 0x142e88: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x142E88u;
    {
        const bool branch_taken_0x142e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E88u;
            // 0x142e8c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e88) {
            ctx->pc = 0x142ED0u;
            goto label_142ed0;
        }
    }
    ctx->pc = 0x142E90u;
    // 0x142e90: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x142e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e94: 0x0  nop
    ctx->pc = 0x142e94u;
    // NOP
    // 0x142e98: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x142E98u;
    {
        const bool branch_taken_0x142e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142e98) {
            ctx->pc = 0x142E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142E98u;
            // 0x142e9c: 0x24a4bc00  addiu       $a0, $a1, -0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949888));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142ED4u;
            goto label_142ed4;
        }
    }
    ctx->pc = 0x142EA0u;
    // 0x142ea0: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x142ea0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
    // 0x142ea4: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x142ea4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x142ea8: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x142ea8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x142eac: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x142eacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142eb0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x142eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142eb4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x142eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142eb8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x142eb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x142ebc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x142ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142ec0: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x142ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142ec4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x142ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x142ec8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x142EC8u;
    {
        const bool branch_taken_0x142ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142EC8u;
            // 0x142ecc: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ec8) {
            ctx->pc = 0x142F30u;
            goto label_142f30;
        }
    }
    ctx->pc = 0x142ED0u;
label_142ed0:
    // 0x142ed0: 0x24a4bc00  addiu       $a0, $a1, -0x4400
    ctx->pc = 0x142ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949888));
label_142ed4:
    // 0x142ed4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142ed8: 0xc4830048  lwc1        $f3, 0x48($a0)
    ctx->pc = 0x142ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142edc: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x142edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142ee0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x142ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142ee4: 0x0  nop
    ctx->pc = 0x142ee4u;
    // NOP
    // 0x142ee8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x142EE8u;
    {
        const bool branch_taken_0x142ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142EE8u;
            // 0x142eec: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ee8) {
            ctx->pc = 0x142F5Cu;
            goto label_142f5c;
        }
    }
    ctx->pc = 0x142EF0u;
    // 0x142ef0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x142ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142ef4: 0x0  nop
    ctx->pc = 0x142ef4u;
    // NOP
    // 0x142ef8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x142EF8u;
    {
        const bool branch_taken_0x142ef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142EF8u;
            // 0x142efc: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ef8) {
            ctx->pc = 0x142F60u;
            goto label_142f60;
        }
    }
    ctx->pc = 0x142F00u;
    // 0x142f00: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x142f00u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
    // 0x142f04: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x142f04u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x142f08: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x142f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x142f0c: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x142f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142f10: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x142f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142f14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x142f14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142f18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x142f18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x142f1c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x142f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142f20: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x142f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142f24: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x142f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x142f28: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x142f2c: 0x0  nop
    ctx->pc = 0x142f2cu;
    // NOP
label_142f30:
    // 0x142f30: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x142f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142f34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x142f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x142f38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x142f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142f44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x142f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x142f48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x142f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x142f4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142f50: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x142f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x142f54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x142F54u;
    {
        const bool branch_taken_0x142f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f54) {
            ctx->pc = 0x142F6Cu;
            goto label_142f6c;
        }
    }
    ctx->pc = 0x142F5Cu;
label_142f5c:
    // 0x142f5c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x142f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_142f60:
    // 0x142f60: 0x2442bc30  addiu       $v0, $v0, -0x43D0
    ctx->pc = 0x142f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949936));
    // 0x142f64: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x142f64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142f68: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x142f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_142f6c:
    // 0x142f6c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x142f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x142f70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x142f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x142f74: 0x4b021858  vmulx.x     $vf1, $vf3, $vf2x
    ctx->pc = 0x142f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142f78: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x142f78u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142f80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142f84: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x142f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x142f88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x142f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x142f8c: 0xac62bfcc  sw          $v0, -0x4034($v1)
    ctx->pc = 0x142f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950860), GPR_U32(ctx, 2));
    // 0x142f90: 0x4a821858  vmulx.y     $vf1, $vf3, $vf2x
    ctx->pc = 0x142f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142f94: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x142f94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142f98: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x142f98u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x142f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142fa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142fa4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x142fa8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x142fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x142fac: 0xac62bfd0  sw          $v0, -0x4030($v1)
    ctx->pc = 0x142facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950864), GPR_U32(ctx, 2));
    // 0x142fb0: 0x4a421898  vmulx.z     $vf2, $vf3, $vf2x
    ctx->pc = 0x142fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x142fb4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x142fb4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x142fb8: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x142fb8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x142fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142fc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142fc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142fc4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x142fc8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x142fc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x142fcc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x142fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x142fd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x142fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x142fd4: 0xac62bfd4  sw          $v0, -0x402C($v1)
    ctx->pc = 0x142fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950868), GPR_U32(ctx, 2));
    // 0x142fd8: 0x4a211858  vmulx.w     $vf1, $vf3, $vf1x
    ctx->pc = 0x142fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142fdc: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x142fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142fe0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x142fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x142fe4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x142fe4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142fe8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x142fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x142fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142ff0: 0xac65bfdc  sw          $a1, -0x4024($v1)
    ctx->pc = 0x142ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950876), GPR_U32(ctx, 5));
    // 0x142ff4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142ff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142ff8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x142ff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x142ffc: 0xac82bfd8  sw          $v0, -0x4028($a0)
    ctx->pc = 0x142ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950872), GPR_U32(ctx, 2));
    // 0x143000: 0x3e00008  jr          $ra
    ctx->pc = 0x143000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143000u;
            // 0x143004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142E78u: goto label_142e78;
            case 0x142E7Cu: goto label_142e7c;
            case 0x142ED0u: goto label_142ed0;
            case 0x142ED4u: goto label_142ed4;
            case 0x142F30u: goto label_142f30;
            case 0x142F5Cu: goto label_142f5c;
            case 0x142F60u: goto label_142f60;
            case 0x142F6Cu: goto label_142f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143008u;
}
