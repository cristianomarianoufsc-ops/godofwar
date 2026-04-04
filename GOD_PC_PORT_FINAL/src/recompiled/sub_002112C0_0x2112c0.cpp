#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002112C0
// Address: 0x2112c0 - 0x211370
void sub_002112C0_0x2112c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002112C0_0x2112c0");
#endif

    ctx->pc = 0x2112c0u;

    // 0x2112c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2112c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2112c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2112c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2112c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2112c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2112cc: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x2112ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x2112d0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2112d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2112d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2112D4u;
    {
        const bool branch_taken_0x2112d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2112D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2112D4u;
            // 0x2112d8: 0x48a51000  qmtc2.ni    $a1, $vf2 (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112d4) {
            ctx->pc = 0x2112E8u;
            goto label_2112e8;
        }
    }
    ctx->pc = 0x2112DCu;
    // 0x2112dc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2112dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2112e0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2112E0u;
    {
        const bool branch_taken_0x2112e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2112e0) {
            ctx->pc = 0x211358u;
            goto label_211358;
        }
    }
    ctx->pc = 0x2112E8u;
label_2112e8:
    // 0x2112e8: 0xd8810100  lqc2        $vf1, 0x100($a0)
    ctx->pc = 0x2112e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2112ec: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2112ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2112f0: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x2112f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2112f4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x2112f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2112f8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x2112f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2112fc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2112fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x211300: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x211300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x211304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211308: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x211308u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21130c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21130cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211310: 0x46000084  c1          0x84
    ctx->pc = 0x211310u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x211314: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x211314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211318: 0x0  nop
    ctx->pc = 0x211318u;
    // NOP
    // 0x21131c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x21131Cu;
    {
        const bool branch_taken_0x21131c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21131Cu;
            // 0x211320: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21131c) {
            ctx->pc = 0x211358u;
            goto label_211358;
        }
    }
    ctx->pc = 0x211324u;
    // 0x211324: 0x8c830260  lw          $v1, 0x260($a0)
    ctx->pc = 0x211324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
    // 0x211328: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x211328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21132c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x21132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211330: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x211330u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x211334: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211338: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x211338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21133c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x21133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x211340: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211344: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x211344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x211348: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x211348u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x21134c: 0x460c0028  max.s       $f0, $f0, $f12
    ctx->pc = 0x21134cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[12]);
    // 0x211350: 0x46030329  min.s       $f12, $f0, $f3
    ctx->pc = 0x211350u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[3]);
    // 0x211354: 0x0  nop
    ctx->pc = 0x211354u;
    // NOP
label_211358:
    // 0x211358: 0xc08448a  jal         func_211228
    ctx->pc = 0x211358u;
    SET_GPR_U32(ctx, 31, 0x211360u);
    ctx->pc = 0x211228u;
    if (runtime->hasFunction(0x211228u)) {
        auto targetFn = runtime->lookupFunction(0x211228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211360u; }
        if (ctx->pc != 0x211360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211228_0x211228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211360u; }
        if (ctx->pc != 0x211360u) { return; }
    }
    ctx->pc = 0x211360u;
    // 0x211360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211364: 0x3e00008  jr          $ra
    ctx->pc = 0x211364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211364u;
            // 0x211368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2112E8u: goto label_2112e8;
            case 0x211358u: goto label_211358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21136Cu;
    // 0x21136c: 0x0  nop
    ctx->pc = 0x21136cu;
    // NOP
}
