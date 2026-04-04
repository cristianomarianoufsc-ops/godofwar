#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3390
// Address: 0x1d3390 - 0x1d35d0
void sub_001D3390_0x1d3390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3390_0x1d3390");
#endif

    ctx->pc = 0x1d3390u;

    // 0x1d3390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d3390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d3394: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d3394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1d3398: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d3398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1d339c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d339cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d33a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d33a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d33a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d33a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d33ac: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x1d33acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d33b0: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1d33b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1d33b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d33b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33b8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1d33b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1d33bc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1d33bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1d33c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d33c4: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1d33c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1d33c8: 0x3c01749d  lui         $at, 0x749D
    ctx->pc = 0x1d33c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29853 << 16));
    // 0x1d33cc: 0x3421c5ae  ori         $at, $at, 0xC5AE
    ctx->pc = 0x1d33ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50606);
    // 0x1d33d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d33d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d33d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d33d8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d33dc: 0x9454002c  lhu         $s4, 0x2C($v0)
    ctx->pc = 0x1d33dcu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1d33e0: 0x1280006f  beqz        $s4, . + 4 + (0x6F << 2)
    ctx->pc = 0x1D33E0u;
    {
        const bool branch_taken_0x1d33e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33E0u;
            // 0x1d33e4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33e0) {
            ctx->pc = 0x1D35A0u;
            goto label_1d35a0;
        }
    }
    ctx->pc = 0x1D33E8u;
    // 0x1d33e8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1d33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d33ec: 0x0  nop
    ctx->pc = 0x1d33ecu;
    // NOP
label_1d33f0:
    // 0x1d33f0: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x1D33F0u;
    SET_GPR_U32(ctx, 31, 0x1D33F8u);
    ctx->pc = 0x1D33F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33F0u;
            // 0x1d33f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33F8u; }
        if (ctx->pc != 0x1D33F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33F8u; }
        if (ctx->pc != 0x1D33F8u) { return; }
    }
    ctx->pc = 0x1D33F8u;
    // 0x1d33f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1d33f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d33fc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1d33fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3400: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1d3400u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d3404: 0x4be41b3c  vmove.xyzw  $vf4, $vf3
    ctx->pc = 0x1d3404u;
    ctx->vu0_vf[4] = ctx->vu0_vf[3];
    // 0x1d3408: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d340c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1d340cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d3410: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1d3410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d3414: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1d3414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1d3418: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1d3418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d341c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x1d341cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d3424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3428: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1d3428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d342c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1d342cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d3430: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d3430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3434: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d3434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3438: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1d3438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d343c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d343cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d3440: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d3440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d3444: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x1D3444u;
    {
        const bool branch_taken_0x1d3444 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3444u;
            // 0x1d3448: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3444) {
            ctx->pc = 0x1D3590u;
            goto label_1d3590;
        }
    }
    ctx->pc = 0x1D344Cu;
    // 0x1d344c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d344cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d3450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d3450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3454: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x1d3454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3458: 0x0  nop
    ctx->pc = 0x1d3458u;
    // NOP
    // 0x1d345c: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1D345Cu;
    {
        const bool branch_taken_0x1d345c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D345Cu;
            // 0x1d3460: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d345c) {
            ctx->pc = 0x1D3520u;
            goto label_1d3520;
        }
    }
    ctx->pc = 0x1D3464u;
    // 0x1d3464: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3464u;
    {
        const bool branch_taken_0x1d3464 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3464) {
            ctx->pc = 0x1D34B0u;
            goto label_1d34b0;
        }
    }
    ctx->pc = 0x1D346Cu;
    // 0x1d346c: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x1d346cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3470: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d3470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3474: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d3474u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d3478: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d3478u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d347c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d347cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3480: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x1D3480u;
    {
        const bool branch_taken_0x1d3480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3480) {
            ctx->pc = 0x1D357Cu;
            goto label_1d357c;
        }
    }
    ctx->pc = 0x1D3488u;
    // 0x1d3488: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x1d3488u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d348c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d348cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d3490: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1d3490u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1d3494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3498: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d3498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d349c: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x1D349Cu;
    {
        const bool branch_taken_0x1d349c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d349c) {
            ctx->pc = 0x1D357Cu;
            goto label_1d357c;
        }
    }
    ctx->pc = 0x1D34A4u;
    // 0x1d34a4: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x1d34a4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d34a8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1D34A8u;
    {
        const bool branch_taken_0x1d34a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34A8u;
            // 0x1d34ac: 0x48240800  qmfc2.ni    $a0, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34a8) {
            ctx->pc = 0x1D3564u;
            goto label_1d3564;
        }
    }
    ctx->pc = 0x1D34B0u;
label_1d34b0:
    // 0x1d34b0: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x1d34b0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d34b4: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x1d34b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x1d34b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d34b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d34bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d34bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d34c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d34c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d34c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d34c8: 0x0  nop
    ctx->pc = 0x1d34c8u;
    // NOP
    // 0x1d34cc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1D34CCu;
    {
        const bool branch_taken_0x1d34cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34CCu;
            // 0x1d34d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34cc) {
            ctx->pc = 0x1D3514u;
            goto label_1d3514;
        }
    }
    ctx->pc = 0x1D34D4u;
    // 0x1d34d4: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x1d34d4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d34d8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d34d8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d34dc: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1d34dcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1d34e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d34e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d34e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d34e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d34e8: 0x0  nop
    ctx->pc = 0x1d34e8u;
    // NOP
    // 0x1d34ec: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1D34ECu;
    {
        const bool branch_taken_0x1d34ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D34F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34ECu;
            // 0x1d34f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34ec) {
            ctx->pc = 0x1D3518u;
            goto label_1d3518;
        }
    }
    ctx->pc = 0x1D34F4u;
    // 0x1d34f4: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x1d34f4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d34f8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d34f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d34fc: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1d34fcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1d3500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3504: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d3504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3508: 0x0  nop
    ctx->pc = 0x1d3508u;
    // NOP
    // 0x1d350c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D350Cu;
    {
        const bool branch_taken_0x1d350c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d350c) {
            ctx->pc = 0x1D3510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D350Cu;
            // 0x1d3510: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3514u;
            goto label_1d3514;
        }
    }
    ctx->pc = 0x1D3514u;
label_1d3514:
    // 0x1d3514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3518:
    // 0x1d3518: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D3518u;
    {
        const bool branch_taken_0x1d3518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3518u;
            // 0x1d351c: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3518) {
            ctx->pc = 0x1D358Cu;
            goto label_1d358c;
        }
    }
    ctx->pc = 0x1D3520u;
label_1d3520:
    // 0x1d3520: 0x16600016  bnez        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D3520u;
    {
        const bool branch_taken_0x1d3520 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3520u;
            // 0x1d3524: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3520) {
            ctx->pc = 0x1D357Cu;
            goto label_1d357c;
        }
    }
    ctx->pc = 0x1D3528u;
    // 0x1d3528: 0x4be121fd  vabs.xyzw   $vf1, $vf4
    ctx->pc = 0x1d3528u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[4], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d352c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d352cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d3530: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d3530u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3534: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d3534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3538: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3538u;
    {
        const bool branch_taken_0x1d3538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3538) {
            ctx->pc = 0x1D357Cu;
            goto label_1d357c;
        }
    }
    ctx->pc = 0x1D3540u;
    // 0x1d3540: 0x4be121fd  vabs.xyzw   $vf1, $vf4
    ctx->pc = 0x1d3540u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[4], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3544: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d3544u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d3548: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1d3548u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1d354c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d354cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3550: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d3550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3554: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3554u;
    {
        const bool branch_taken_0x1d3554 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3554) {
            ctx->pc = 0x1D357Cu;
            goto label_1d357c;
        }
    }
    ctx->pc = 0x1D355Cu;
    // 0x1d355c: 0x4be121fd  vabs.xyzw   $vf1, $vf4
    ctx->pc = 0x1d355cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[4], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3560: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1d3560u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_1d3564:
    // 0x1d3564: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1d3564u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1d3568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d356c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d356cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3570: 0x0  nop
    ctx->pc = 0x1d3570u;
    // NOP
    // 0x1d3574: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D3574u;
    {
        const bool branch_taken_0x1d3574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3574) {
            ctx->pc = 0x1D3578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3574u;
            // 0x1d3578: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D357Cu;
            goto label_1d357c;
        }
    }
    ctx->pc = 0x1D357Cu;
label_1d357c:
    // 0x1d357c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D357Cu;
    {
        const bool branch_taken_0x1d357c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D357Cu;
            // 0x1d3580: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d357c) {
            ctx->pc = 0x1D3590u;
            goto label_1d3590;
        }
    }
    ctx->pc = 0x1D3584u;
    // 0x1d3584: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x1d3584u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x1d3588: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d358c:
    // 0x1d358c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d3590:
    // 0x1d3590: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1d3590u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3594: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1d3594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1d3598: 0x5440ff95  bnel        $v0, $zero, . + 4 + (-0x6B << 2)
    ctx->pc = 0x1D3598u;
    {
        const bool branch_taken_0x1d3598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3598) {
            ctx->pc = 0x1D359Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3598u;
            // 0x1d359c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D33F0u;
            runtime->cooperativeGuestYield();
            goto label_1d33f0;
        }
    }
    ctx->pc = 0x1D35A0u;
label_1d35a0:
    // 0x1d35a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d35a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d35a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d35a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d35a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d35ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d35acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d35b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d35b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d35b4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1d35b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d35b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d35b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d35bc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1d35bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d35c0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1d35c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d35c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D35C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35C4u;
            // 0x1d35c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D33F0u: goto label_1d33f0;
            case 0x1D34B0u: goto label_1d34b0;
            case 0x1D3514u: goto label_1d3514;
            case 0x1D3518u: goto label_1d3518;
            case 0x1D3520u: goto label_1d3520;
            case 0x1D3564u: goto label_1d3564;
            case 0x1D357Cu: goto label_1d357c;
            case 0x1D358Cu: goto label_1d358c;
            case 0x1D3590u: goto label_1d3590;
            case 0x1D35A0u: goto label_1d35a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D35CCu;
    // 0x1d35cc: 0x0  nop
    ctx->pc = 0x1d35ccu;
    // NOP
}
