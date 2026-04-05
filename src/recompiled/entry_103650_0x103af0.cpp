#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_103650
// Address: 0x103650 - 0x103af0
void entry_103650_0x103af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_103650_0x103af0");
#endif

    ctx->pc = 0x103650u;

    // 0x103650: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x103650u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x103654: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x103654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x103658: 0xd8ec0000  lqc2        $vf12, 0x0($a3)
    ctx->pc = 0x103658u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10365c: 0x248d06a0  addiu       $t5, $a0, 0x6A0
    ctx->pc = 0x10365cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 1696));
    // 0x103660: 0x4bea606c  vsub.xyzw   $vf1, $vf12, $vf10
    ctx->pc = 0x103660u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103664: 0xc48e113c  lwc1        $f14, 0x113C($a0)
    ctx->pc = 0x103664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x103668: 0xc48d1134  lwc1        $f13, 0x1134($a0)
    ctx->pc = 0x103668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x10366c: 0xd8cb0000  lqc2        $vf11, 0x0($a2)
    ctx->pc = 0x10366cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x103670: 0x4bea58ac  vsub.xyzw   $vf2, $vf11, $vf10
    ctx->pc = 0x103670u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103674: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x103674u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x103678: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x103678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10367c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x10367cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103680: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x103680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103684: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x103684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103688: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x103688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10368c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x10368cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103690: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x103690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x103694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103698: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x103698u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10369c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10369cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1036a0: 0x460102c4  c1          0x102C4
    ctx->pc = 0x1036a0u;
    ctx->f[11] = FPU_SQRT_S(ctx->f[0]);
    // 0x1036a4: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x1036a4u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[11];
    // 0x1036a8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1036a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1036ac: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1036acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1036b0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1036b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1036b4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1036b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1036b8: 0x4bea086a  vmul.xyzw   $vf1, $vf1, $vf10
    ctx->pc = 0x1036b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1036bc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1036bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1036c0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1036c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1036c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1036c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036c8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1036c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1036cc: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1036ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036d0: 0x19200105  blez        $t1, . + 4 + (0x105 << 2)
    ctx->pc = 0x1036D0u;
    {
        const bool branch_taken_0x1036d0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1036D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1036D0u;
            // 0x1036d4: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036d0) {
            ctx->pc = 0x103AE8u;
            goto label_103ae8;
        }
    }
    ctx->pc = 0x1036D8u;
label_1036d8:
    // 0x1036d8: 0x1022018  mult        $a0, $t0, $v0
    ctx->pc = 0x1036d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1036dc: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x1036dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1036e0: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x1036e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1036e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1036e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1036e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1036e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1036ec: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1036ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1036f0: 0xc44a0024  lwc1        $f10, 0x24($v0)
    ctx->pc = 0x1036f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1036f4: 0xc44c0028  lwc1        $f12, 0x28($v0)
    ctx->pc = 0x1036f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1036f8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1036f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1036fc: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x1036fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x103700: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x103700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x103704: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103708: 0x48a33800  qmtc2.ni    $v1, $vf7
    ctx->pc = 0x103708u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10370c: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x10370cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103710: 0x4be7086a  vmul.xyzw   $vf1, $vf1, $vf7
    ctx->pc = 0x103710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103714: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x103714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103718: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x103718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10371c: 0x48ac0800  qmtc2.ni    $t4, $vf1
    ctx->pc = 0x10371cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x103720: 0x4b020844  vsubx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x103720u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103724: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x103724u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103728: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x103728u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10372c: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x10372cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103730: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x103730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103734: 0x0  nop
    ctx->pc = 0x103734u;
    // NOP
    // 0x103738: 0x450000b6  bc1f        . + 4 + (0xB6 << 2)
    ctx->pc = 0x103738u;
    {
        const bool branch_taken_0x103738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10373Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103738u;
            // 0x10373c: 0x4be5533c  vmove.xyzw  $vf5, $vf10 (Delay Slot)
        ctx->vu0_vf[5] = ctx->vu0_vf[10];
        ctx->in_delay_slot = false;
        if (branch_taken_0x103738) {
            ctx->pc = 0x103A14u;
            goto label_103a14;
        }
    }
    ctx->pc = 0x103740u;
    // 0x103740: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x103740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x103744: 0x4be85b3c  vmove.xyzw  $vf8, $vf11
    ctx->pc = 0x103744u;
    ctx->vu0_vf[8] = ctx->vu0_vf[11];
    // 0x103748: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x103748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10374c: 0x4be9633c  vmove.xyzw  $vf9, $vf12
    ctx->pc = 0x10374cu;
    ctx->vu0_vf[9] = ctx->vu0_vf[12];
    // 0x103750: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x103750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x103754: 0x4be5406c  vsub.xyzw   $vf1, $vf8, $vf5
    ctx->pc = 0x103754u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103758: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x103758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10375c: 0x4be5492c  vsub.xyzw   $vf4, $vf9, $vf5
    ctx->pc = 0x10375cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103760: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x103760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103764: 0x4be538ec  vsub.xyzw   $vf3, $vf7, $vf5
    ctx->pc = 0x103764u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103768: 0x4be60b3c  vmove.xyzw  $vf6, $vf1
    ctx->pc = 0x103768u;
    ctx->vu0_vf[6] = ctx->vu0_vf[1];
    // 0x10376c: 0x4be330aa  vmul.xyzw   $vf2, $vf6, $vf3
    ctx->pc = 0x10376cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103770: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x103770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103774: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x103774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103778: 0x4be320ea  vmul.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x103778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10377c: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x10377cu;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103780: 0x448e1800  mtc1        $t6, $f3
    ctx->pc = 0x103780u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x103784: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x103784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x103788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10378c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10378cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103790: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x103790u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103794: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x103794u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103798: 0x448e3800  mtc1        $t6, $f7
    ctx->pc = 0x103798u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10379c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x10379Cu;
    {
        const bool branch_taken_0x10379c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10379c) {
            ctx->pc = 0x1037B8u;
            goto label_1037b8;
        }
    }
    ctx->pc = 0x1037A4u;
    // 0x1037a4: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x1037a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1037a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1037A8u;
    {
        const bool branch_taken_0x1037a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1037a8) {
            ctx->pc = 0x1037B8u;
            goto label_1037b8;
        }
    }
    ctx->pc = 0x1037B0u;
    // 0x1037b0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1037B0u;
    {
        const bool branch_taken_0x1037b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1037B0u;
            // 0x1037b4: 0x4be42b3c  vmove.xyzw  $vf4, $vf5 (Delay Slot)
        ctx->vu0_vf[4] = ctx->vu0_vf[5];
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037b0) {
            ctx->pc = 0x1039C0u;
            goto label_1039c0;
        }
    }
    ctx->pc = 0x1037B8u;
label_1037b8:
    // 0x1037b8: 0x4be838ac  vsub.xyzw   $vf2, $vf7, $vf8
    ctx->pc = 0x1037b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1037bc: 0x4be230ea  vmul.xyzw   $vf3, $vf6, $vf2
    ctx->pc = 0x1037bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1037c0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1037c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1037c4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1037c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1037c8: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1037c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1037cc: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x1037ccu;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1037d0: 0x448e2000  mtc1        $t6, $f4
    ctx->pc = 0x1037d0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1037d4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1037d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1037d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1037d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1037dc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1037dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1037e0: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x1037e0u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1037e4: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1037e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1037e8: 0x448e4000  mtc1        $t6, $f8
    ctx->pc = 0x1037e8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1037ec: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1037ECu;
    {
        const bool branch_taken_0x1037ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1037ec) {
            ctx->pc = 0x1037F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1037ECu;
            // 0x1037f0: 0x46081842  mul.s       $f1, $f3, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103810u;
            goto label_103810;
        }
    }
    ctx->pc = 0x1037F4u;
    // 0x1037f4: 0x46044036  c.le.s      $f8, $f4
    ctx->pc = 0x1037f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1037f8: 0x0  nop
    ctx->pc = 0x1037f8u;
    // NOP
    // 0x1037fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1037FCu;
    {
        const bool branch_taken_0x1037fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1037fc) {
            ctx->pc = 0x103800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1037FCu;
            // 0x103800: 0x46081842  mul.s       $f1, $f3, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103810u;
            goto label_103810;
        }
    }
    ctx->pc = 0x103804u;
    // 0x103804: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x103804u;
    {
        const bool branch_taken_0x103804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103804u;
            // 0x103808: 0x4be4433c  vmove.xyzw  $vf4, $vf8 (Delay Slot)
        ctx->vu0_vf[4] = ctx->vu0_vf[8];
        ctx->in_delay_slot = false;
        if (branch_taken_0x103804) {
            ctx->pc = 0x1039C0u;
            goto label_1039c0;
        }
    }
    ctx->pc = 0x10380Cu;
    // 0x10380c: 0x0  nop
    ctx->pc = 0x10380cu;
    // NOP
label_103810:
    // 0x103810: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x103810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x103814: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x103814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x103818: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x103818u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x10381c: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x10381cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103820: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x103820u;
    {
        const bool branch_taken_0x103820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103820) {
            ctx->pc = 0x103860u;
            goto label_103860;
        }
    }
    ctx->pc = 0x103828u;
    // 0x103828: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x103828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10382c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x10382Cu;
    {
        const bool branch_taken_0x10382c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10382c) {
            ctx->pc = 0x103860u;
            goto label_103860;
        }
    }
    ctx->pc = 0x103834u;
    // 0x103834: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x103834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103838: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x103838u;
    {
        const bool branch_taken_0x103838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103838) {
            ctx->pc = 0x103860u;
            goto label_103860;
        }
    }
    ctx->pc = 0x103840u;
    // 0x103840: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x103840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x103844: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x103844u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x103848: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x103848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x10384c: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x10384cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x103850: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x103850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103854: 0x4be12928  vadd.xyzw   $vf4, $vf5, $vf1
    ctx->pc = 0x103854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103858: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x103858u;
    {
        const bool branch_taken_0x103858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103858u;
            // 0x10385c: 0xf8640000  sqc2        $vf4, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103858) {
            ctx->pc = 0x1039C4u;
            goto label_1039c4;
        }
    }
    ctx->pc = 0x103860u;
label_103860:
    // 0x103860: 0x4be938ac  vsub.xyzw   $vf2, $vf7, $vf9
    ctx->pc = 0x103860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103864: 0x4be230ea  vmul.xyzw   $vf3, $vf6, $vf2
    ctx->pc = 0x103864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103868: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x103868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10386c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10386cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103870: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x103870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103874: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x103874u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103878: 0x448e2800  mtc1        $t6, $f5
    ctx->pc = 0x103878u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10387c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10387cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103880: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x103880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x103884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103888: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x103888u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10388c: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x10388cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x103890: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x103890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103894: 0x0  nop
    ctx->pc = 0x103894u;
    // NOP
    // 0x103898: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x103898u;
    {
        const bool branch_taken_0x103898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103898) {
            ctx->pc = 0x10389Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x103898u;
            // 0x10389c: 0x46021842  mul.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1038B8u;
            goto label_1038b8;
        }
    }
    ctx->pc = 0x1038A0u;
    // 0x1038a0: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x1038a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1038a4: 0x0  nop
    ctx->pc = 0x1038a4u;
    // NOP
    // 0x1038a8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1038A8u;
    {
        const bool branch_taken_0x1038a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1038a8) {
            ctx->pc = 0x1038ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1038A8u;
            // 0x1038ac: 0x46021842  mul.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1038B8u;
            goto label_1038b8;
        }
    }
    ctx->pc = 0x1038B0u;
    // 0x1038b0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1038B0u;
    {
        const bool branch_taken_0x1038b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1038B0u;
            // 0x1038b4: 0x4be44b3c  vmove.xyzw  $vf4, $vf9 (Delay Slot)
        ctx->vu0_vf[4] = ctx->vu0_vf[9];
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038b0) {
            ctx->pc = 0x1039C0u;
            goto label_1039c0;
        }
    }
    ctx->pc = 0x1038B8u;
label_1038b8:
    // 0x1038b8: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x1038b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x1038bc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1038bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1038c0: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x1038c0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1038c4: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x1038c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1038c8: 0x0  nop
    ctx->pc = 0x1038c8u;
    // NOP
    // 0x1038cc: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1038CCu;
    {
        const bool branch_taken_0x1038cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1038cc) {
            ctx->pc = 0x1038D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1038CCu;
            // 0x1038d0: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103918u;
            goto label_103918;
        }
    }
    ctx->pc = 0x1038D4u;
    // 0x1038d4: 0x46071836  c.le.s      $f3, $f7
    ctx->pc = 0x1038d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1038d8: 0x0  nop
    ctx->pc = 0x1038d8u;
    // NOP
    // 0x1038dc: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1038DCu;
    {
        const bool branch_taken_0x1038dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1038dc) {
            ctx->pc = 0x1038E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1038DCu;
            // 0x1038e0: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103918u;
            goto label_103918;
        }
    }
    ctx->pc = 0x1038E4u;
    // 0x1038e4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1038e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1038e8: 0x0  nop
    ctx->pc = 0x1038e8u;
    // NOP
    // 0x1038ec: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1038ECu;
    {
        const bool branch_taken_0x1038ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1038ec) {
            ctx->pc = 0x1038F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1038ECu;
            // 0x1038f0: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103918u;
            goto label_103918;
        }
    }
    ctx->pc = 0x1038F4u;
    // 0x1038f4: 0x46023801  sub.s       $f0, $f7, $f2
    ctx->pc = 0x1038f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x1038f8: 0x46003803  div.s       $f0, $f7, $f0
    ctx->pc = 0x1038f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[0] = ctx->f[7] / ctx->f[0];
    // 0x1038fc: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x1038fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x103900: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x103900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x103904: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x103904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103908: 0x4be12928  vadd.xyzw   $vf4, $vf5, $vf1
    ctx->pc = 0x103908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10390c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x10390Cu;
    {
        const bool branch_taken_0x10390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10390Cu;
            // 0x103910: 0xf8640000  sqc2        $vf4, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10390c) {
            ctx->pc = 0x1039C4u;
            goto label_1039c4;
        }
    }
    ctx->pc = 0x103914u;
    // 0x103914: 0x0  nop
    ctx->pc = 0x103914u;
    // NOP
label_103918:
    // 0x103918: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x103918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x10391c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10391cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x103920: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x103920u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x103924: 0x46033836  c.le.s      $f7, $f3
    ctx->pc = 0x103924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103928: 0x0  nop
    ctx->pc = 0x103928u;
    // NOP
    // 0x10392c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x10392Cu;
    {
        const bool branch_taken_0x10392c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10392c) {
            ctx->pc = 0x103930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10392Cu;
            // 0x103930: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103980u;
            goto label_103980;
        }
    }
    ctx->pc = 0x103934u;
    // 0x103934: 0x46044041  sub.s       $f1, $f8, $f4
    ctx->pc = 0x103934u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x103938: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x103938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10393c: 0x0  nop
    ctx->pc = 0x10393cu;
    // NOP
    // 0x103940: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x103940u;
    {
        const bool branch_taken_0x103940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103940) {
            ctx->pc = 0x103944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x103940u;
            // 0x103944: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103980u;
            goto label_103980;
        }
    }
    ctx->pc = 0x103948u;
    // 0x103948: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x103948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x10394c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x10394cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103950: 0x0  nop
    ctx->pc = 0x103950u;
    // NOP
    // 0x103954: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x103954u;
    {
        const bool branch_taken_0x103954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103954) {
            ctx->pc = 0x103958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x103954u;
            // 0x103958: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103980u;
            goto label_103980;
        }
    }
    ctx->pc = 0x10395Cu;
    // 0x10395c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10395cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x103960: 0x4be8486c  vsub.xyzw   $vf1, $vf9, $vf8
    ctx->pc = 0x103960u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103964: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x103964u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x103968: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x103968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x10396c: 0x48ae1000  qmtc2.ni    $t6, $vf2
    ctx->pc = 0x10396cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x103970: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x103970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103974: 0x4be14128  vadd.xyzw   $vf4, $vf8, $vf1
    ctx->pc = 0x103974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103978: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x103978u;
    {
        const bool branch_taken_0x103978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103978u;
            // 0x10397c: 0xf8640000  sqc2        $vf4, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103978) {
            ctx->pc = 0x1039C4u;
            goto label_1039c4;
        }
    }
    ctx->pc = 0x103980u;
label_103980:
    // 0x103980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x103980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x103984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103988: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x103988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x10398c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10398cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x103990: 0x46004842  mul.s       $f1, $f9, $f0
    ctx->pc = 0x103990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x103994: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x103994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x103998: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x103998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x10399c: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x10399cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x1039a0: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1039a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1039a4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1039a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1039a8: 0x4be228a8  vadd.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x1039a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1039ac: 0x440e0800  mfc1        $t6, $f1
    ctx->pc = 0x1039acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x1039b0: 0x48ae1800  qmtc2.ni    $t6, $vf3
    ctx->pc = 0x1039b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x1039b4: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1039b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1039b8: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1039b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1039bc: 0x4be11128  vadd.xyzw   $vf4, $vf2, $vf1
    ctx->pc = 0x1039bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1039c0:
    // 0x1039c0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1039c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1039c4:
    // 0x1039c4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1039c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1039c8: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1039c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1039cc: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1039ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1039d0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1039d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1039d4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1039d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1039d8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1039d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1039dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1039dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1039e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1039e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1039e4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1039e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1039e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1039e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1039ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1039ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1039f0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1039f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1039f4: 0x0  nop
    ctx->pc = 0x1039f4u;
    // NOP
    // 0x1039f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1039F8u;
    {
        const bool branch_taken_0x1039f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1039FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1039F8u;
            // 0x1039fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039f8) {
            ctx->pc = 0x103A10u;
            goto label_103a10;
        }
    }
    ctx->pc = 0x103A00u;
    // 0x103a00: 0x46010004  c1          0x10004
    ctx->pc = 0x103a00u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x103a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103a08: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x103a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x103a0c: 0x0  nop
    ctx->pc = 0x103a0cu;
    // NOP
label_103a10:
    // 0x103a10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x103a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103a14:
    // 0x103a14: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x103A14u;
    {
        const bool branch_taken_0x103a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A14u;
            // 0x103a18: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a14) {
            ctx->pc = 0x103AD8u;
            goto label_103ad8;
        }
    }
    ctx->pc = 0x103A1Cu;
    // 0x103a1c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x103A1Cu;
    {
        const bool branch_taken_0x103a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A1Cu;
            // 0x103a20: 0x46005081  sub.s       $f2, $f10, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a1c) {
            ctx->pc = 0x103A78u;
            goto label_103a78;
        }
    }
    ctx->pc = 0x103A24u;
    // 0x103a24: 0x460e5803  div.s       $f0, $f11, $f14
    ctx->pc = 0x103a24u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[11] * 0.0f); } else ctx->f[0] = ctx->f[11] / ctx->f[14];
    // 0x103a28: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x103a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103a2c: 0x0  nop
    ctx->pc = 0x103a2cu;
    // NOP
    // 0x103a30: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x103A30u;
    {
        const bool branch_taken_0x103a30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A30u;
            // 0x103a34: 0xdba10020  lqc2        $vf1, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a30) {
            ctx->pc = 0x103A78u;
            goto label_103a78;
        }
    }
    ctx->pc = 0x103A38u;
    // 0x103a38: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x103a38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103a3c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x103a3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103a40: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x103a40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103a44: 0x4be218aa  vmul.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x103a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103a48: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x103a48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103a4c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x103a4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103a50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x103a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x103a54: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x103a54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103a58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x103a58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103a5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x103a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103a60: 0x0  nop
    ctx->pc = 0x103a60u;
    // NOP
    // 0x103a64: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x103A64u;
    {
        const bool branch_taken_0x103a64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103a64) {
            ctx->pc = 0x103A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x103A64u;
            // 0x103a68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x103ADCu;
            goto label_103adc;
        }
    }
    ctx->pc = 0x103A6Cu;
    // 0x103a6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x103A6Cu;
    {
        const bool branch_taken_0x103a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A6Cu;
            // 0x103a70: 0xfba30070  sqc2        $vf3, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a6c) {
            ctx->pc = 0x103AB0u;
            goto label_103ab0;
        }
    }
    ctx->pc = 0x103A74u;
    // 0x103a74: 0x0  nop
    ctx->pc = 0x103a74u;
    // NOP
label_103a78:
    // 0x103a78: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x103a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103a7c: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x103a7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103a80: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x103a80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103a84: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x103a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103a88: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x103a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103a8c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x103a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103a90: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x103a90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x103a94: 0x4a0003bf  vwaitq
    ctx->pc = 0x103a94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x103a98: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x103a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103a9c: 0x4a0002ff  vnop
    ctx->pc = 0x103a9cu;
    // NOP operation, no action needed for VU0
    // 0x103aa0: 0x4a0002ff  vnop
    ctx->pc = 0x103aa0u;
    // NOP operation, no action needed for VU0
    // 0x103aa4: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x103aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x103aa8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x103aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x103aac: 0x0  nop
    ctx->pc = 0x103aacu;
    // NOP
label_103ab0:
    // 0x103ab0: 0x440e1000  mfc1        $t6, $f2
    ctx->pc = 0x103ab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x103ab4: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x103ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x103ab8: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x103ab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103abc: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x103abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103ac0: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x103ac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x103ac4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x103ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103ac8: 0xf9410000  sqc2        $vf1, 0x0($t2)
    ctx->pc = 0x103ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103acc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x103accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x103ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x103ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x103ad4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x103ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_103ad8:
    // 0x103ad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x103ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_103adc:
    // 0x103adc: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x103adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x103ae0: 0x1440fefd  bnez        $v0, . + 4 + (-0x103 << 2)
    ctx->pc = 0x103AE0u;
    {
        const bool branch_taken_0x103ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103AE0u;
            // 0x103ae4: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ae0) {
            ctx->pc = 0x1036D8u;
            runtime->cooperativeGuestYield();
            goto label_1036d8;
        }
    }
    ctx->pc = 0x103AE8u;
label_103ae8:
    // 0x103ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x103AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103AE8u;
            // 0x103aec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1036D8u: goto label_1036d8;
            case 0x1037B8u: goto label_1037b8;
            case 0x103810u: goto label_103810;
            case 0x103860u: goto label_103860;
            case 0x1038B8u: goto label_1038b8;
            case 0x103918u: goto label_103918;
            case 0x103980u: goto label_103980;
            case 0x1039C0u: goto label_1039c0;
            case 0x1039C4u: goto label_1039c4;
            case 0x103A10u: goto label_103a10;
            case 0x103A14u: goto label_103a14;
            case 0x103A78u: goto label_103a78;
            case 0x103AB0u: goto label_103ab0;
            case 0x103AD8u: goto label_103ad8;
            case 0x103ADCu: goto label_103adc;
            case 0x103AE8u: goto label_103ae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103AF0u;
}
