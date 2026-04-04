#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202E38
// Address: 0x202e38 - 0x202ee0
void sub_00202E38_0x202e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202E38_0x202e38");
#endif

    ctx->pc = 0x202e38u;

    // 0x202e38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202e3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x202e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x202e40: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x202e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x202e44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x202e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x202e48: 0xc080b3a  jal         func_202CE8
    ctx->pc = 0x202E48u;
    SET_GPR_U32(ctx, 31, 0x202E50u);
    ctx->pc = 0x202E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202E48u;
            // 0x202e4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202CE8u;
    if (runtime->hasFunction(0x202CE8u)) {
        auto targetFn = runtime->lookupFunction(0x202CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E50u; }
        if (ctx->pc != 0x202E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202CE8_0x202ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E50u; }
        if (ctx->pc != 0x202E50u) { return; }
    }
    ctx->pc = 0x202E50u;
    // 0x202e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202e54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x202e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x202e58: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x202e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x202e5c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x202e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x202e60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x202e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x202e64: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x202e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x202e68: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x202e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x202e6c: 0x40f809  jalr        $v0
    ctx->pc = 0x202E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202E74u);
        ctx->pc = 0x202E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202E6Cu;
            // 0x202e70: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x202E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x202E74u; }
            if (ctx->pc != 0x202E74u) { return; }
        }
        }
    }
    ctx->pc = 0x202E74u;
    // 0x202e74: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x202e74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x202e78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x202e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x202e7c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x202e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x202e80: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x202e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202e84: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x202e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x202e88: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x202e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x202e8c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x202e8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x202e90: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x202e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x202e94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x202e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202e98: 0x84430048  lh          $v1, 0x48($v0)
    ctx->pc = 0x202e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x202e9c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x202e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x202ea0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x202ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x202ea4: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x202ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x202ea8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x202ea8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x202eac: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x202eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x202eb0: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x202eb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x202eb4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x202eb4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x202eb8: 0x40f809  jalr        $v0
    ctx->pc = 0x202EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202EC0u);
        ctx->pc = 0x202EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202EB8u;
            // 0x202ebc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x202EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x202EC0u; }
            if (ctx->pc != 0x202EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x202EC0u;
    // 0x202ec0: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x202ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x202ec4: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x202ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x202ec8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x202ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x202ecc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x202eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202ed0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x202ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202ed4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x202ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x202ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202ED8u;
            // 0x202edc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202EE0u;
}
