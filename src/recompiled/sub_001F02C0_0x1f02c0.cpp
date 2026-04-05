#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F02C0
// Address: 0x1f02c0 - 0x1f0328
void sub_001F02C0_0x1f02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F02C0_0x1f02c0");
#endif

    ctx->pc = 0x1f02c0u;

    // 0x1f02c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f02c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f02c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f02c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f02c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f02c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f02ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f02d0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f02d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f02d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f02d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f02d8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f02d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f02dc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f02dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f02e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f02e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f02e4: 0x46006083  div.s       $f2, $f12, $f0
    ctx->pc = 0x1f02e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[2] = ctx->f[12] / ctx->f[0];
    // 0x1f02e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f02e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02ec: 0x46006b03  div.s       $f12, $f13, $f0
    ctx->pc = 0x1f02ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[12] = ctx->f[13] / ctx->f[0];
    // 0x1f02f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1f02f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f02f4: 0x46011342  mul.s       $f13, $f2, $f1
    ctx->pc = 0x1f02f4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f02f8: 0xc061248  jal         func_184920
    ctx->pc = 0x1F02F8u;
    SET_GPR_U32(ctx, 31, 0x1F0300u);
    ctx->pc = 0x1F02FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02F8u;
            // 0x1f02fc: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0300u; }
        if (ctx->pc != 0x1F0300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0300u; }
        if (ctx->pc != 0x1F0300u) { return; }
    }
    ctx->pc = 0x1F0300u;
    // 0x1f0300: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1f0300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0304: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f0304u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0308: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1f0308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f030c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1f030cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f0310: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1f0310u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0314: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f0314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0318: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f0318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f031c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F031Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F031Cu;
            // 0x1f0320: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0324u;
    // 0x1f0324: 0x0  nop
    ctx->pc = 0x1f0324u;
    // NOP
}
