#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1958b0
// Address: 0x1958b0 - 0x195ad8
void entry_1958b0_0x195ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1958b0_0x195ad8");
#endif

    ctx->pc = 0x1958b0u;

    // 0x1958b0: 0x700454a9  por         $t2, $zero, $a0
    ctx->pc = 0x1958b0u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1958b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1958b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1958b8: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1958bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1958c0: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x1958c0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x1958c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1958c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1958c8: 0x3c070d33  lui         $a3, 0xD33
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3379 << 16));
    // 0x1958cc: 0x3c080019  lui         $t0, 0x19
    ctx->pc = 0x1958ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25 << 16));
    // 0x1958d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1958d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1958d4: 0x2562f170  addiu       $v0, $t3, -0xE90
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963568));
    // 0x1958d8: 0xad63f170  sw          $v1, -0xE90($t3)
    ctx->pc = 0x1958d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294963568), GPR_U32(ctx, 3));
    // 0x1958dc: 0x700534a9  por         $a2, $zero, $a1
    ctx->pc = 0x1958dcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1958e0: 0x250857d8  addiu       $t0, $t0, 0x57D8
    ctx->pc = 0x1958e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22488));
    // 0x1958e4: 0x34e70040  ori         $a3, $a3, 0x40
    ctx->pc = 0x1958e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1958e8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1958e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1958ec: 0x700a2ca9  por         $a1, $zero, $t2
    ctx->pc = 0x1958ecu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1958f0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1958f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1958f4: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x1958f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x1958f8: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x1958f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
    // 0x1958fc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1958fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x195900: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x195900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x195904: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x195904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x195908: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x195908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x19590c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x19590cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x195910: 0xc047864  jal         func_11E190
    ctx->pc = 0x195910u;
    SET_GPR_U32(ctx, 31, 0x195918u);
    ctx->pc = 0x195914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195910u;
            // 0x195914: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195918u; }
        if (ctx->pc != 0x195918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195918u; }
        if (ctx->pc != 0x195918u) { return; }
    }
    ctx->pc = 0x195918u;
    // 0x195918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19591c: 0x3e00008  jr          $ra
    ctx->pc = 0x19591Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19591Cu;
            // 0x195920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195A78u: goto label_195a78;
            case 0x195AA0u: goto label_195aa0;
            case 0x195ACCu: goto label_195acc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195924u;
    // 0x195924: 0x0  nop
    ctx->pc = 0x195924u;
    // NOP
    // 0x195928: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x195928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19592c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19592cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195930: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x195930u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x195934: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x195934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x195938: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x195938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x19593c: 0x4be5133c  vmove.xyzw  $vf5, $vf2
    ctx->pc = 0x19593cu;
    ctx->vu0_vf[5] = ctx->vu0_vf[2];
    // 0x195940: 0x4be211aa  vmul.xyzw   $vf6, $vf2, $vf2
    ctx->pc = 0x195940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x195944: 0x4b063041  vaddy.x     $vf1, $vf6, $vf6y
    ctx->pc = 0x195944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x195948: 0x4b060842  vaddz.x     $vf1, $vf1, $vf6z
    ctx->pc = 0x195948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19594c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x19594cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x195950: 0x4a0003bf  vwaitq
    ctx->pc = 0x195950u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x195954: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x195954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x195958: 0x4a0002ff  vnop
    ctx->pc = 0x195958u;
    // NOP operation, no action needed for VU0
    // 0x19595c: 0x4a0002ff  vnop
    ctx->pc = 0x19595cu;
    // NOP operation, no action needed for VU0
    // 0x195960: 0x4be410ea  vmul.xyzw   $vf3, $vf2, $vf4
    ctx->pc = 0x195960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x195964: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x195964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x195968: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x195968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19596c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x19596cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x195970: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x195970u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x195974: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x195974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195978: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x195978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19597c: 0x0  nop
    ctx->pc = 0x19597cu;
    // NOP
    // 0x195980: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x195980u;
    {
        const bool branch_taken_0x195980 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195980u;
            // 0x195984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195980) {
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x195988u;
    // 0x195988: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x195988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x19598c: 0x46080834  c.lt.s      $f1, $f8
    ctx->pc = 0x19598cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195990: 0x0  nop
    ctx->pc = 0x195990u;
    // NOP
    // 0x195994: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x195994u;
    {
        const bool branch_taken_0x195994 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195994u;
            // 0x195998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195994) {
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x19599Cu;
    // 0x19599c: 0x4be520aa  vmul.xyzw   $vf2, $vf4, $vf5
    ctx->pc = 0x19599cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1959a0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1959a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1959a4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1959a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1959a8: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1959a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1959ac: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1959acu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1959b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1959b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1959b4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1959b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1959b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1959b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1959bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1959bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1959c0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1959c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1959c4: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1959c4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1959c8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1959c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1959cc: 0x4b063041  vaddy.x     $vf1, $vf6, $vf6y
    ctx->pc = 0x1959ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1959d0: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x1959d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1959d4: 0x4b060842  vaddz.x     $vf1, $vf1, $vf6z
    ctx->pc = 0x1959d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1959d8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1959d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1959dc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1959dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1959e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1959e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1959e4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1959e8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1959e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1959ec: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1959ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1959f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1959f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1959f4: 0x46002181  sub.s       $f6, $f4, $f0
    ctx->pc = 0x1959f4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1959f8: 0x46003105  abs.s       $f4, $f6
    ctx->pc = 0x1959f8u;
    ctx->f[4] = FPU_ABS_S(ctx->f[6]);
    // 0x1959fc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1959fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x195a00: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x195a00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x195a04: 0x46043836  c.le.s      $f7, $f4
    ctx->pc = 0x195a04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195a08: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x195a08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x195a0c: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x195A0Cu;
    {
        const bool branch_taken_0x195a0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x195A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A0Cu;
            // 0x195a10: 0x46011841  sub.s       $f1, $f3, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a0c) {
            ctx->pc = 0x195AA0u;
            goto label_195aa0;
        }
    }
    ctx->pc = 0x195A14u;
    // 0x195a14: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x195a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x195a18: 0x46004106  mov.s       $f4, $f8
    ctx->pc = 0x195a18u;
    ctx->f[4] = FPU_MOV_S(ctx->f[8]);
    // 0x195a1c: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x195a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x195a20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x195a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x195a24: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x195a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195a28: 0x0  nop
    ctx->pc = 0x195a28u;
    // NOP
    // 0x195a2c: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x195A2Cu;
    {
        const bool branch_taken_0x195a2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A2Cu;
            // 0x195a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a2c) {
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x195A34u;
    // 0x195a34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x195a38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x195a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195a3c: 0x46000084  c1          0x84
    ctx->pc = 0x195a3cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x195a40: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x195a40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x195a44: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x195a44u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x195a48: 0x460200c1  sub.s       $f3, $f0, $f2
    ctx->pc = 0x195a48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x195a4c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x195a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x195a50: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x195a50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x195a54: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x195a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195a58: 0x0  nop
    ctx->pc = 0x195a58u;
    // NOP
    // 0x195a5c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x195A5Cu;
    {
        const bool branch_taken_0x195a5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A5Cu;
            // 0x195a60: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a5c) {
            ctx->pc = 0x195A78u;
            goto label_195a78;
        }
    }
    ctx->pc = 0x195A64u;
    // 0x195a64: 0x46036834  c.lt.s      $f13, $f3
    ctx->pc = 0x195a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195a68: 0x0  nop
    ctx->pc = 0x195a68u;
    // NOP
    // 0x195a6c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x195A6Cu;
    {
        const bool branch_taken_0x195a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x195A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A6Cu;
            // 0x195a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a6c) {
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x195A74u;
    // 0x195a74: 0x0  nop
    ctx->pc = 0x195a74u;
    // NOP
label_195a78:
    // 0x195a78: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x195a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195a7c: 0x0  nop
    ctx->pc = 0x195a7cu;
    // NOP
    // 0x195a80: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x195A80u;
    {
        const bool branch_taken_0x195a80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A80u;
            // 0x195a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a80) {
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x195A88u;
    // 0x195a88: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x195a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195a8c: 0x0  nop
    ctx->pc = 0x195a8cu;
    // NOP
    // 0x195a90: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x195A90u;
    {
        const bool branch_taken_0x195a90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195a90) {
            ctx->pc = 0x195A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195A90u;
            // 0x195a94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x195A98u;
    // 0x195a98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x195A98u;
    {
        const bool branch_taken_0x195a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a98) {
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x195AA0u;
label_195aa0:
    // 0x195aa0: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x195aa0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x195aa4: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x195aa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195aa8: 0x0  nop
    ctx->pc = 0x195aa8u;
    // NOP
    // 0x195aac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x195AACu;
    {
        const bool branch_taken_0x195aac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195AACu;
            // 0x195ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195aac) {
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x195AB4u;
    // 0x195ab4: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x195ab4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x195ab8: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x195ab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195abc: 0x0  nop
    ctx->pc = 0x195abcu;
    // NOP
    // 0x195ac0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x195AC0u;
    {
        const bool branch_taken_0x195ac0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195AC0u;
            // 0x195ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ac0) {
            ctx->pc = 0x195ACCu;
            goto label_195acc;
        }
    }
    ctx->pc = 0x195AC8u;
    // 0x195ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195acc:
    // 0x195acc: 0x3e00008  jr          $ra
    ctx->pc = 0x195ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195ACCu;
            // 0x195ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195A78u: goto label_195a78;
            case 0x195AA0u: goto label_195aa0;
            case 0x195ACCu: goto label_195acc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195AD4u;
    // 0x195ad4: 0x0  nop
    ctx->pc = 0x195ad4u;
    // NOP
}
