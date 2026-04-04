#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_103578
// Address: 0x103578 - 0x103650
void entry_103578_0x103650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_103578_0x103650");
#endif

    ctx->pc = 0x103578u;

    // 0x103578: 0x8c880080  lw          $t0, 0x80($a0)
    ctx->pc = 0x103578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x10357c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10357cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103580: 0x248b06a0  addiu       $t3, $a0, 0x6A0
    ctx->pc = 0x103580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1696));
    // 0x103584: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x103584u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x103588: 0x1900002f  blez        $t0, . + 4 + (0x2F << 2)
    ctx->pc = 0x103588u;
    {
        const bool branch_taken_0x103588 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x10358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103588u;
            // 0x10358c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103588) {
            ctx->pc = 0x103648u;
            goto label_103648;
        }
    }
    ctx->pc = 0x103590u;
    // 0x103590: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x103590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x103594: 0x0  nop
    ctx->pc = 0x103594u;
    // NOP
label_103598:
    // 0x103598: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x103598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10359c: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x10359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1035a0: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1035a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1035a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1035a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1035a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1035ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1035acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1035b0: 0x19200021  blez        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1035B0u;
    {
        const bool branch_taken_0x1035b0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1035B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1035B0u;
            // 0x1035b4: 0x460000c2  mul.s       $f3, $f0, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035b0) {
            ctx->pc = 0x103638u;
            goto label_103638;
        }
    }
    ctx->pc = 0x1035B8u;
    // 0x1035b8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1035b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035bc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1035bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1035c0:
    // 0x1035c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1035c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1035c4: 0x4be408ec  vsub.xyzw   $vf3, $vf1, $vf4
    ctx->pc = 0x1035c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1035c8: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1035c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1035cc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1035ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1035d0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1035d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1035d4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1035d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1035d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1035d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1035dc: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x1035dcu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1035e0: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x1035e0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1035e4: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x1035e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1035e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1035e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1035ec: 0x0  nop
    ctx->pc = 0x1035ecu;
    // NOP
    // 0x1035f0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1035F0u;
    {
        const bool branch_taken_0x1035f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1035f0) {
            ctx->pc = 0x1035F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1035F0u;
            // 0x1035f4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x103630u;
            goto label_103630;
        }
    }
    ctx->pc = 0x1035F8u;
    // 0x1035f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1035f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1035fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1035fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103600: 0x46020044  c1          0x20044
    ctx->pc = 0x103600u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x103604: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x103604u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x103608: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x103608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x10360c: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x10360cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x103610: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x103610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103614: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x103614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103618: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x103618u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x10361c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10361cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103620: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x103620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103624: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x103624u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103628: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x103628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10362c: 0x0  nop
    ctx->pc = 0x10362cu;
    // NOP
label_103630:
    // 0x103630: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x103630u;
    {
        const bool branch_taken_0x103630 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x103634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103630u;
            // 0x103634: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103630) {
            ctx->pc = 0x1035C0u;
            runtime->cooperativeGuestYield();
            goto label_1035c0;
        }
    }
    ctx->pc = 0x103638u;
label_103638:
    // 0x103638: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x103638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10363c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x10363cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x103640: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x103640u;
    {
        const bool branch_taken_0x103640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103640u;
            // 0x103644: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103640) {
            ctx->pc = 0x103598u;
            runtime->cooperativeGuestYield();
            goto label_103598;
        }
    }
    ctx->pc = 0x103648u;
label_103648:
    // 0x103648: 0x3e00008  jr          $ra
    ctx->pc = 0x103648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10364Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103648u;
            // 0x10364c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103598u: goto label_103598;
            case 0x1035C0u: goto label_1035c0;
            case 0x103630u: goto label_103630;
            case 0x103638u: goto label_103638;
            case 0x103648u: goto label_103648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103650u;
}
