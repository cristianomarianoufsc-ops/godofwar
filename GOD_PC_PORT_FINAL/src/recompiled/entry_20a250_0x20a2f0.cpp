#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20a250
// Address: 0x20a250 - 0x20a2f0
void entry_20a250_0x20a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20a250_0x20a2f0");
#endif

    ctx->pc = 0x20a250u;

    // 0x20a250: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x20a250u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a254: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20a258: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x20a258u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20a25c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a260: 0x3c03c320  lui         $v1, 0xC320
    ctx->pc = 0x20a260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49952 << 16));
    // 0x20a264: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x20a264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20a268: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x20a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20a26c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A26Cu;
    {
        const bool branch_taken_0x20a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a26c) {
            ctx->pc = 0x20A270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A26Cu;
            // 0x20a270: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A274u;
            goto label_20a274;
        }
    }
    ctx->pc = 0x20A274u;
label_20a274:
    // 0x20a274: 0x4be42858  vmulx.xyzw  $vf1, $vf5, $vf4x
    ctx->pc = 0x20a274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a278: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20a278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a27c: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x20a27cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x20a280: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x20a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20a284: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A284u;
    {
        const bool branch_taken_0x20a284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a284) {
            ctx->pc = 0x20A288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A284u;
            // 0x20a288: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A28Cu;
            goto label_20a28c;
        }
    }
    ctx->pc = 0x20A28Cu;
label_20a28c:
    // 0x20a28c: 0x4be41918  vmulx.xyzw  $vf4, $vf3, $vf4x
    ctx->pc = 0x20a28cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20a290: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x20a290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a294: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x20a294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20a298: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x20a29c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x20a29cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20a2a0: 0x4be42858  vmulx.xyzw  $vf1, $vf5, $vf4x
    ctx->pc = 0x20a2a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a2a4: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x20a2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20a2a8: 0x4be418d8  vmulx.xyzw  $vf3, $vf3, $vf4x
    ctx->pc = 0x20a2a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a2ac: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x20a2acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a2b0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20a2b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a2b4: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x20a2b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x20a2b8: 0x4be2186c  vsub.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x20a2b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a2bc: 0x4be5086a  vmul.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x20a2bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a2c0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x20a2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a2c4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x20a2c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a2c8: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x20a2cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a2d0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20a2d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20a2d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a2d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a2d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a2dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a2dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20a2e0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20a2e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x20A2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2E4u;
            // 0x20a2e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A274u: goto label_20a274;
            case 0x20A28Cu: goto label_20a28c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A2ECu;
    // 0x20a2ec: 0x0  nop
    ctx->pc = 0x20a2ecu;
    // NOP
}
