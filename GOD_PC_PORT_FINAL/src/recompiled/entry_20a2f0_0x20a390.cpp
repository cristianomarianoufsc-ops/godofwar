#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20a2f0
// Address: 0x20a2f0 - 0x20a390
void entry_20a2f0_0x20a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20a2f0_0x20a390");
#endif

    ctx->pc = 0x20a2f0u;

    // 0x20a2f0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x20a2f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a2f4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20a2f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20a2f8: 0xd8830030  lqc2        $vf3, 0x30($a0)
    ctx->pc = 0x20a2f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20a2fc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a300: 0x3c03c320  lui         $v1, 0xC320
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49952 << 16));
    // 0x20a304: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x20a304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20a308: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x20a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20a30c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A30Cu;
    {
        const bool branch_taken_0x20a30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a30c) {
            ctx->pc = 0x20A310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A30Cu;
            // 0x20a310: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A314u;
            goto label_20a314;
        }
    }
    ctx->pc = 0x20A314u;
label_20a314:
    // 0x20a314: 0x4be41058  vmulx.xyzw  $vf1, $vf2, $vf4x
    ctx->pc = 0x20a314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a318: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x20a318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a31c: 0xd8850020  lqc2        $vf5, 0x20($a0)
    ctx->pc = 0x20a31cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x20a320: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x20a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20a324: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A324u;
    {
        const bool branch_taken_0x20a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a324) {
            ctx->pc = 0x20A328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A324u;
            // 0x20a328: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A32Cu;
            goto label_20a32c;
        }
    }
    ctx->pc = 0x20A32Cu;
label_20a32c:
    // 0x20a32c: 0x4be42918  vmulx.xyzw  $vf4, $vf5, $vf4x
    ctx->pc = 0x20a32cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20a330: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x20a330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a334: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x20a334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20a338: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x20a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x20a33c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20a33cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20a340: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20a340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a344: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x20a344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20a348: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x20a348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a34c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20a34cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a350: 0x4be218ec  vsub.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x20a350u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a354: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x20a354u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x20a358: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x20a358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a35c: 0x4be5086a  vmul.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x20a35cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a360: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x20a360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a364: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x20a364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a368: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x20a368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x20a36c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a370: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20a370u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20a374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a378: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a37c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a37cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20a380: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20a380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a384: 0x3e00008  jr          $ra
    ctx->pc = 0x20A384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A384u;
            // 0x20a388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A314u: goto label_20a314;
            case 0x20A32Cu: goto label_20a32c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A38Cu;
    // 0x20a38c: 0x0  nop
    ctx->pc = 0x20a38cu;
    // NOP
}
