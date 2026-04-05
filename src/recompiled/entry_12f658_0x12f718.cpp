#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12f658
// Address: 0x12f658 - 0x12f718
void entry_12f658_0x12f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12f658_0x12f718");
#endif

    ctx->pc = 0x12f658u;

    // 0x12f658: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x12f658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f65c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f660: 0x8d0a0014  lw          $t2, 0x14($t0)
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x12f664: 0x1940002a  blez        $t2, . + 4 + (0x2A << 2)
    ctx->pc = 0x12F664u;
    {
        const bool branch_taken_0x12f664 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x12F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F664u;
            // 0x12f668: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f664) {
            ctx->pc = 0x12F710u;
            goto label_12f710;
        }
    }
    ctx->pc = 0x12F66Cu;
    // 0x12f66c: 0x0  nop
    ctx->pc = 0x12f66cu;
    // NOP
label_12f670:
    // 0x12f670: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x12f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f674: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x12f674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x12f678: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x12f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x12f67c: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x12f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x12f680: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12f680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12f684: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x12f684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x12f688: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x12f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12f68c: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x12f68cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x12f690: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x12f690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12f694: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x12f694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12f698: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x12f698u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f69c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x12f69cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f6a0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x12f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x12f6a4: 0x4be310ec  vsub.xyzw   $vf3, $vf2, $vf3
    ctx->pc = 0x12f6a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f6a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12f6a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f6ac: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f6acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f6b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12f6b4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x12f6b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f6b8: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x12f6b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f6bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12f6c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f6c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f6c4: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x12f6c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f6c8: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f6c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f6cc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x12f6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f6d0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x12f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x12f6d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f6d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f6d8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x12f6d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f6dc: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12f6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f6e0: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x12f6e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f6e4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x12f6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f6e8: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x12f6e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f6ec: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x12f6ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f6f0: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x12f6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f6f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x12f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x12f6f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f6f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f6fc: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x12f6fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f700: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x12f700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x12f704: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x12f704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12f708: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12F708u;
    {
        const bool branch_taken_0x12f708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F708u;
            // 0x12f70c: 0xf8830000  sqc2        $vf3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f708) {
            ctx->pc = 0x12F670u;
            runtime->cooperativeGuestYield();
            goto label_12f670;
        }
    }
    ctx->pc = 0x12F710u;
label_12f710:
    // 0x12f710: 0x3e00008  jr          $ra
    ctx->pc = 0x12F710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F710u;
            // 0x12f714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F670u: goto label_12f670;
            case 0x12F710u: goto label_12f710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F718u;
}
