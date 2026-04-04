#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12f718
// Address: 0x12f718 - 0x12f7b8
void entry_12f718_0x12f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12f718_0x12f7b8");
#endif

    ctx->pc = 0x12f718u;

    // 0x12f718: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f71c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f724: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x12f724u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x12f728: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x12f728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x12f72c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f72cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f730: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x12f730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x12f734: 0x70481b89  pcpyld      $v1, $v0, $t0
    ctx->pc = 0x12f734u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x12f738: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x12f738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x12f73c: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x12f73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12f740: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x12f740u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x12f744: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x12f744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12f748: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12f748u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12f74c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12f74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x12f750: 0x18c00017  blez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x12F750u;
    {
        const bool branch_taken_0x12f750 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x12F754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F750u;
            // 0x12f754: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f750) {
            ctx->pc = 0x12F7B0u;
            goto label_12f7b0;
        }
    }
    ctx->pc = 0x12F758u;
    // 0x12f758: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x12f758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f75c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x12f75cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f764: 0x0  nop
    ctx->pc = 0x12f764u;
    // NOP
label_12f768:
    // 0x12f768: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12f76c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12f770: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x12f770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f774: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x12f774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f778: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f77c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12f780: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x12f780u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f784: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f788: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12f78c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12f790: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x12f790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f794: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x12f794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f798: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f79c: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x12f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f7a0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12f7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12f7a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f7a8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x12F7A8u;
    {
        const bool branch_taken_0x12f7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7A8u;
            // 0x12f7ac: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7a8) {
            ctx->pc = 0x12F768u;
            runtime->cooperativeGuestYield();
            goto label_12f768;
        }
    }
    ctx->pc = 0x12F7B0u;
label_12f7b0:
    // 0x12f7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7B0u;
            // 0x12f7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F768u: goto label_12f768;
            case 0x12F7B0u: goto label_12f7b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F7B8u;
}
