#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3350
// Address: 0x1c3350 - 0x1c3440
void sub_001C3350_0x1c3350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3350_0x1c3350");
#endif

    ctx->pc = 0x1c3350u;

    // 0x1c3350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c3350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c3354: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x1c3354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1c3358: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c3358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c335c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1c335cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1c3360: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c3360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c3364: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1c3364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1c3368: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c3368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c336c: 0xd8840120  lqc2        $vf4, 0x120($a0)
    ctx->pc = 0x1c336cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x1c3370: 0x24422820  addiu       $v0, $v0, 0x2820
    ctx->pc = 0x1c3370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10272));
    // 0x1c3374: 0xd8630030  lqc2        $vf3, 0x30($v1)
    ctx->pc = 0x1c3374u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1c3378: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1c3378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c337c: 0xaca04f40  sw          $zero, 0x4F40($a1)
    ctx->pc = 0x1c337cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20288), GPR_U32(ctx, 0));
    // 0x1c3380: 0x4be40859  vmuly.xyzw  $vf1, $vf1, $vf4y
    ctx->pc = 0x1c3380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3384: 0xae004f44  sw          $zero, 0x4F44($s0)
    ctx->pc = 0x1c3384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20292), GPR_U32(ctx, 0));
    // 0x1c3388: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c3388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c338c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1c338cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1c3390: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1c3390u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c3394: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c3394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3398: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1c3398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c339c: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1c339cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c33a0: 0x4be4085a  vmulz.xyzw  $vf1, $vf1, $vf4z
    ctx->pc = 0x1c33a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c33a4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c33a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c33a8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c33a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c33ac: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1c33acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c33b0: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1c33b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c33b4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c33b8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c33b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c33bc: 0x244227d0  addiu       $v0, $v0, 0x27D0
    ctx->pc = 0x1c33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10192));
    // 0x1c33c0: 0xd8620020  lqc2        $vf2, 0x20($v1)
    ctx->pc = 0x1c33c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c33c4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1c33c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c33c8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c33c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c33cc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c33ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c33d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c33d4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1c33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x1c33d8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1c33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1c33dc: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x1c33dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x1c33e0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1c33e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c33e4: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c33e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c33e8: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1c33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1c33ec: 0x24c62d50  addiu       $a2, $a2, 0x2D50
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11600));
    // 0x1c33f0: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1c33f4: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x1c33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x1c33f8: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1c33f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1c33fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c33fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3400: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1c3400u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c3404: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1c3404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1c3408: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1c3408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1c340c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1c340cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1c3410: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c3410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c3414: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1c3414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1c3418: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c3418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1c341c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1c341cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1c3420: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1c3420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1c3424: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x1C3424u;
    SET_GPR_U32(ctx, 31, 0x1C342Cu);
    ctx->pc = 0x1C3428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3424u;
            // 0x1c3428: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C342Cu; }
        if (ctx->pc != 0x1C342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C342Cu; }
        if (ctx->pc != 0x1C342Cu) { return; }
    }
    ctx->pc = 0x1C342Cu;
    // 0x1c342c: 0x8e024f44  lw          $v0, 0x4F44($s0)
    ctx->pc = 0x1c342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20292)));
    // 0x1c3430: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c3430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3434: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c3434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3438: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3438u;
            // 0x1c343c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3440u;
}
