#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0012f158
// Address: 0x12f158 - 0x12f1d8
void FUN_0012f158_0x12f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f158_0x12f158");
#endif

    ctx->pc = 0x12f158u;

    // 0x12f158: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12f158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12f15c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f15cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f160: 0xc4810088  lwc1        $f1, 0x88($a0)
    ctx->pc = 0x12f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f168: 0x8c42bde8  lw          $v0, -0x4218($v0)
    ctx->pc = 0x12f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x12f16c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f170: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x12f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x12f174: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x12F174u;
    {
        const bool branch_taken_0x12f174 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F174u;
            // 0x12f178: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f174) {
            ctx->pc = 0x12F188u;
            goto label_12f188;
        }
    }
    ctx->pc = 0x12F17Cu;
    // 0x12f17c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x12f17cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f180: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12F180u;
    {
        const bool branch_taken_0x12f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F180u;
            // 0x12f184: 0x48220800  qmfc2.ni    $v0, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f180) {
            ctx->pc = 0x12F1D0u;
            goto label_12f1d0;
        }
    }
    ctx->pc = 0x12F188u;
label_12f188:
    // 0x12f188: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x12f188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x12f18c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x12f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f190: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x12f190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12f194: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x12f194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12f198: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12f198u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f19c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x12f19cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x12f1a0: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x12f1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x12f1a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f1a8: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x12f1a8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x12f1ac: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x12f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12f1b0: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x12f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12f1b4: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x12f1b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x12f1b8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12f1b8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12f1bc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x12f1bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f1c0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x12f1c4: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x12f1c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f1c8: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x12f1c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f1cc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x12f1ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_12f1d0:
    // 0x12f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1D0u;
            // 0x12f1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F188u: goto label_12f188;
            case 0x12F1D0u: goto label_12f1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F1D8u;
}
