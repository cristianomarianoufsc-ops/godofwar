#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D268
// Address: 0x13d268 - 0x13d328
void sub_0013D268_0x13d268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D268_0x13d268");
#endif

    ctx->pc = 0x13d268u;

    // 0x13d268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13d268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13d26c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13d270: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d274: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x13d274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d278: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x13d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x13d27c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13d27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d280: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x13D280u;
    SET_GPR_U32(ctx, 31, 0x13D288u);
    ctx->pc = 0x13D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D280u;
            // 0x13d284: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D288u; }
        if (ctx->pc != 0x13D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13cff0_0x13d268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D288u; }
        if (ctx->pc != 0x13D288u) { return; }
    }
    ctx->pc = 0x13D288u;
    // 0x13d288: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13D288u;
    {
        const bool branch_taken_0x13d288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D288u;
            // 0x13d28c: 0xdba40010  lqc2        $vf4, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d288) {
            ctx->pc = 0x13D310u;
            goto label_13d310;
        }
    }
    ctx->pc = 0x13D290u;
    // 0x13d290: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13d290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d294: 0x4be120aa  vmul.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x13d294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d298: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13d298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d29c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13d29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d2a0: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13d2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
    // 0x13d2a4: 0x3421e6ff  ori         $at, $at, 0xE6FF
    ctx->pc = 0x13d2a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59135);
    // 0x13d2a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d2ac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d2acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d2b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13d2b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13d2b4: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x13d2b4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x13d2b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d2bc: 0x0  nop
    ctx->pc = 0x13d2bcu;
    // NOP
    // 0x13d2c0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x13D2C0u;
    {
        const bool branch_taken_0x13d2c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D2C0u;
            // 0x13d2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2c0) {
            ctx->pc = 0x13D318u;
            goto label_13d318;
        }
    }
    ctx->pc = 0x13D2C8u;
    // 0x13d2c8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x13d2c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d2d0: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13d2d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d2d4: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x13d2d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d2d8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13d2d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d2dc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13d2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d2e0: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x13d2e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d2e4: 0x4a211044  vsubx.w     $vf1, $vf2, $vf1x
    ctx->pc = 0x13d2e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d2e8: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x13d2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d2ec: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13d2ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13d2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d2f4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x13d2f4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x13d2f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13d2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d2fc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13d2fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13d300: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x13d300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13d304: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x13d304u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13d308: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D308u;
    {
        const bool branch_taken_0x13d308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D308u;
            // 0x13d30c: 0xfa030000  sqc2        $vf3, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d308) {
            ctx->pc = 0x13D318u;
            goto label_13d318;
        }
    }
    ctx->pc = 0x13D310u;
label_13d310:
    // 0x13d310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d314: 0x0  nop
    ctx->pc = 0x13d314u;
    // NOP
label_13d318:
    // 0x13d318: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13d318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d31c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d320: 0x3e00008  jr          $ra
    ctx->pc = 0x13D320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D320u;
            // 0x13d324: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D310u: goto label_13d310;
            case 0x13D318u: goto label_13d318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D328u;
}
