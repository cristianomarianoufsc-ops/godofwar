#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16e870
// Address: 0x16e870 - 0x16ebe8
void entry_16e870_0x16ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16e870_0x16ebe8");
#endif

    ctx->pc = 0x16e870u;

    // 0x16e870: 0x48a54000  qmtc2.ni    $a1, $vf8
    ctx->pc = 0x16e870u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x16e874: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x16e874u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x16e878: 0x4be8232c  vsub.xyzw   $vf12, $vf4, $vf8
    ctx->pc = 0x16e878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16e87c: 0x48a42800  qmtc2.ni    $a0, $vf5
    ctx->pc = 0x16e87cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16e880: 0x48a73800  qmtc2.ni    $a3, $vf7
    ctx->pc = 0x16e880u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x16e884: 0x48a84800  qmtc2.ni    $t0, $vf9
    ctx->pc = 0x16e884u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16e888: 0x4be84b6c  vsub.xyzw   $vf13, $vf9, $vf8
    ctx->pc = 0x16e888u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x16e88c: 0x4be828ec  vsub.xyzw   $vf3, $vf5, $vf8
    ctx->pc = 0x16e88cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e890: 0x4bec18aa  vmul.xyzw   $vf2, $vf3, $vf12
    ctx->pc = 0x16e890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e894: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16e894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e898: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16e898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e89c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e89cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e8a0: 0x4be428ac  vsub.xyzw   $vf2, $vf5, $vf4
    ctx->pc = 0x16e8a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e8a4: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x16e8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x16e8a8: 0x4be4406c  vsub.xyzw   $vf1, $vf8, $vf4
    ctx->pc = 0x16e8a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e8ac: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x16e8acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e8b0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16e8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e8b4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16e8b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e8b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e8b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e8bc: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x16e8bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x16e8c0: 0x4bed18ea  vmul.xyzw   $vf3, $vf3, $vf13
    ctx->pc = 0x16e8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e8c4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16e8c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e8c8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16e8c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e8cc: 0x4be928ac  vsub.xyzw   $vf2, $vf5, $vf9
    ctx->pc = 0x16e8ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e8d0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e8d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e8d4: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x16e8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x16e8d8: 0x4be9406c  vsub.xyzw   $vf1, $vf8, $vf9
    ctx->pc = 0x16e8d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e8dc: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x16e8dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e8e0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16e8e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e8e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e8e8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16e8e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e8ec: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e8ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e8f0: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x16e8f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e8f4: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x16e8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x16e8f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16E8F8u;
    {
        const bool branch_taken_0x16e8f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e8f8) {
            ctx->pc = 0x16E910u;
            goto label_16e910;
        }
    }
    ctx->pc = 0x16E900u;
    // 0x16e900: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x16e900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e904: 0x0  nop
    ctx->pc = 0x16e904u;
    // NOP
    // 0x16e908: 0x450100b5  bc1t        . + 4 + (0xB5 << 2)
    ctx->pc = 0x16E908u;
    {
        const bool branch_taken_0x16e908 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E908u;
            // 0x16e90c: 0x48224000  qmfc2.ni    $v0, $vf8 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e908) {
            ctx->pc = 0x16EBE0u;
            goto label_16ebe0;
        }
    }
    ctx->pc = 0x16E910u;
label_16e910:
    // 0x16e910: 0x4be43aec  vsub.xyzw   $vf11, $vf7, $vf4
    ctx->pc = 0x16e910u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x16e914: 0x4be4286c  vsub.xyzw   $vf1, $vf5, $vf4
    ctx->pc = 0x16e914u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e918: 0x4beb086a  vmul.xyzw   $vf1, $vf1, $vf11
    ctx->pc = 0x16e918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e91c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x16e91cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e920: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x16e920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e924: 0x4be728ec  vsub.xyzw   $vf3, $vf5, $vf7
    ctx->pc = 0x16e924u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e928: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16e928u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16e92c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16e92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16e930: 0x4be7206c  vsub.xyzw   $vf1, $vf4, $vf7
    ctx->pc = 0x16e930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e934: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x16e934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e938: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16e938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e93c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e940: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16e940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e944: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e944u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e948: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x16e948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e94c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x16e94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x16e950: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16E950u;
    {
        const bool branch_taken_0x16e950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e950) {
            ctx->pc = 0x16E968u;
            goto label_16e968;
        }
    }
    ctx->pc = 0x16E958u;
    // 0x16e958: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16e958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e95c: 0x0  nop
    ctx->pc = 0x16e95cu;
    // NOP
    // 0x16e960: 0x4501009f  bc1t        . + 4 + (0x9F << 2)
    ctx->pc = 0x16E960u;
    {
        const bool branch_taken_0x16e960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E960u;
            // 0x16e964: 0x48222000  qmfc2.ni    $v0, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e960) {
            ctx->pc = 0x16EBE0u;
            goto label_16ebe0;
        }
    }
    ctx->pc = 0x16E968u;
label_16e968:
    // 0x16e968: 0x4be74aac  vsub.xyzw   $vf10, $vf9, $vf7
    ctx->pc = 0x16e968u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x16e96c: 0x4be7286c  vsub.xyzw   $vf1, $vf5, $vf7
    ctx->pc = 0x16e96cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e970: 0x4bea086a  vmul.xyzw   $vf1, $vf1, $vf10
    ctx->pc = 0x16e970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e974: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x16e974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e978: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x16e978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e97c: 0x4be928ec  vsub.xyzw   $vf3, $vf5, $vf9
    ctx->pc = 0x16e97cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e980: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16e980u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16e984: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16e984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16e988: 0x4be9386c  vsub.xyzw   $vf1, $vf7, $vf9
    ctx->pc = 0x16e988u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e98c: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x16e98cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e990: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16e990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e998: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16e998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e99c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e99cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e9a0: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x16e9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e9a4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x16e9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16e9a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16E9A8u;
    {
        const bool branch_taken_0x16e9a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e9a8) {
            ctx->pc = 0x16E9C0u;
            goto label_16e9c0;
        }
    }
    ctx->pc = 0x16E9B0u;
    // 0x16e9b0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x16e9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e9b4: 0x0  nop
    ctx->pc = 0x16e9b4u;
    // NOP
    // 0x16e9b8: 0x45010089  bc1t        . + 4 + (0x89 << 2)
    ctx->pc = 0x16E9B8u;
    {
        const bool branch_taken_0x16e9b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9B8u;
            // 0x16e9bc: 0x48223800  qmfc2.ni    $v0, $vf7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9b8) {
            ctx->pc = 0x16EBE0u;
            goto label_16ebe0;
        }
    }
    ctx->pc = 0x16E9C0u;
label_16e9c0:
    // 0x16e9c0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x16e9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e9c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16E9C4u;
    {
        const bool branch_taken_0x16e9c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e9c4) {
            ctx->pc = 0x16E9DCu;
            goto label_16e9dc;
        }
    }
    ctx->pc = 0x16E9CCu;
    // 0x16e9cc: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x16e9ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e9d0: 0x0  nop
    ctx->pc = 0x16e9d0u;
    // NOP
    // 0x16e9d4: 0x45010082  bc1t        . + 4 + (0x82 << 2)
    ctx->pc = 0x16E9D4u;
    {
        const bool branch_taken_0x16e9d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9D4u;
            // 0x16e9d8: 0x48224800  qmfc2.ni    $v0, $vf9 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9d4) {
            ctx->pc = 0x16EBE0u;
            goto label_16ebe0;
        }
    }
    ctx->pc = 0x16E9DCu;
label_16e9dc:
    // 0x16e9dc: 0x4be820ac  vsub.xyzw   $vf2, $vf4, $vf8
    ctx->pc = 0x16e9dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e9e0: 0x4be8386c  vsub.xyzw   $vf1, $vf7, $vf8
    ctx->pc = 0x16e9e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e9e4: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x16e9e4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x16e9e8: 0x4bc209ae  vopmsub.xyz $vf6, $vf1, $vf2
    ctx->pc = 0x16e9e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16e9ec: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x16e9ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e9f0: 0x4be5406c  vsub.xyzw   $vf1, $vf8, $vf5
    ctx->pc = 0x16e9f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e9f4: 0x4be520ac  vsub.xyzw   $vf2, $vf4, $vf5
    ctx->pc = 0x16e9f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e9f8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x16e9f8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x16e9fc: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x16e9fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16ea00: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x16ea00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ea04: 0x4be1306a  vmul.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x16ea04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ea08: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x16ea08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ea0c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x16ea0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ea10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16ea10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ea14: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16ea14u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ea18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ea18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ea1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ea1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ea20: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x16EA20u;
    {
        const bool branch_taken_0x16ea20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ea20) {
            ctx->pc = 0x16EA60u;
            goto label_16ea60;
        }
    }
    ctx->pc = 0x16EA28u;
    // 0x16ea28: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x16ea28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ea2c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x16EA2Cu;
    {
        const bool branch_taken_0x16ea2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ea2c) {
            ctx->pc = 0x16EA60u;
            goto label_16ea60;
        }
    }
    ctx->pc = 0x16EA34u;
    // 0x16ea34: 0x46070836  c.le.s      $f1, $f7
    ctx->pc = 0x16ea34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ea38: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16EA38u;
    {
        const bool branch_taken_0x16ea38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ea38) {
            ctx->pc = 0x16EA60u;
            goto label_16ea60;
        }
    }
    ctx->pc = 0x16EA40u;
    // 0x16ea40: 0x46073000  add.s       $f0, $f6, $f7
    ctx->pc = 0x16ea40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x16ea44: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x16ea44u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[0];
    // 0x16ea48: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16ea48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16ea4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16ea4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16ea50: 0x4be16058  vmulx.xyzw  $vf1, $vf12, $vf1x
    ctx->pc = 0x16ea50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ea54: 0x4be140a8  vadd.xyzw   $vf2, $vf8, $vf1
    ctx->pc = 0x16ea54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ea58: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA58u;
            // 0x16ea5c: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E910u: goto label_16e910;
            case 0x16E968u: goto label_16e968;
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EBC8u: goto label_16ebc8;
            case 0x16EBE0u: goto label_16ebe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EA60u;
label_16ea60:
    // 0x16ea60: 0x4be5206c  vsub.xyzw   $vf1, $vf4, $vf5
    ctx->pc = 0x16ea60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ea64: 0x4be538ac  vsub.xyzw   $vf2, $vf7, $vf5
    ctx->pc = 0x16ea64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ea68: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x16ea68u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x16ea6c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x16ea6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16ea70: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x16ea70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ea74: 0x4be1306a  vmul.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x16ea74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ea78: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x16ea78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ea7c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x16ea7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ea80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16ea80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ea84: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16ea84u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ea88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ea88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ea8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ea8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ea90: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x16EA90u;
    {
        const bool branch_taken_0x16ea90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ea90) {
            ctx->pc = 0x16EAD0u;
            goto label_16ead0;
        }
    }
    ctx->pc = 0x16EA98u;
    // 0x16ea98: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x16ea98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ea9c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x16EA9Cu;
    {
        const bool branch_taken_0x16ea9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ea9c) {
            ctx->pc = 0x16EAD0u;
            goto label_16ead0;
        }
    }
    ctx->pc = 0x16EAA4u;
    // 0x16eaa4: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x16eaa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eaa8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16EAA8u;
    {
        const bool branch_taken_0x16eaa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eaa8) {
            ctx->pc = 0x16EAD0u;
            goto label_16ead0;
        }
    }
    ctx->pc = 0x16EAB0u;
    // 0x16eab0: 0x46051800  add.s       $f0, $f3, $f5
    ctx->pc = 0x16eab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x16eab4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16eab4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x16eab8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16eab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16eabc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16eabcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16eac0: 0x4be15858  vmulx.xyzw  $vf1, $vf11, $vf1x
    ctx->pc = 0x16eac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eac4: 0x4be120a8  vadd.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x16eac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eac8: 0x3e00008  jr          $ra
    ctx->pc = 0x16EAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EAC8u;
            // 0x16eacc: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E910u: goto label_16e910;
            case 0x16E968u: goto label_16e968;
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EBC8u: goto label_16ebc8;
            case 0x16EBE0u: goto label_16ebe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EAD0u;
label_16ead0:
    // 0x16ead0: 0x4be5386c  vsub.xyzw   $vf1, $vf7, $vf5
    ctx->pc = 0x16ead0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ead4: 0x4be548ac  vsub.xyzw   $vf2, $vf9, $vf5
    ctx->pc = 0x16ead4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ead8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x16ead8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x16eadc: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x16eadcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16eae0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x16eae0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eae4: 0x4be1306a  vmul.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x16eae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eae8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x16eae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eaec: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x16eaecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eaf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16eaf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16eaf4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16eaf4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16eaf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eaf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eafc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16eafcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eb00: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x16EB00u;
    {
        const bool branch_taken_0x16eb00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eb00) {
            ctx->pc = 0x16EB40u;
            goto label_16eb40;
        }
    }
    ctx->pc = 0x16EB08u;
    // 0x16eb08: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x16eb08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eb0c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x16EB0Cu;
    {
        const bool branch_taken_0x16eb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eb0c) {
            ctx->pc = 0x16EB40u;
            goto label_16eb40;
        }
    }
    ctx->pc = 0x16EB14u;
    // 0x16eb14: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x16eb14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eb18: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16EB18u;
    {
        const bool branch_taken_0x16eb18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eb18) {
            ctx->pc = 0x16EB40u;
            goto label_16eb40;
        }
    }
    ctx->pc = 0x16EB20u;
    // 0x16eb20: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x16eb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x16eb24: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x16eb24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x16eb28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16eb28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16eb2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16eb2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16eb30: 0x4be15058  vmulx.xyzw  $vf1, $vf10, $vf1x
    ctx->pc = 0x16eb30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eb34: 0x4be138a8  vadd.xyzw   $vf2, $vf7, $vf1
    ctx->pc = 0x16eb34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eb38: 0x3e00008  jr          $ra
    ctx->pc = 0x16EB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB38u;
            // 0x16eb3c: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E910u: goto label_16e910;
            case 0x16E968u: goto label_16e968;
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EBC8u: goto label_16ebc8;
            case 0x16EBE0u: goto label_16ebe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EB40u;
label_16eb40:
    // 0x16eb40: 0x4be5486c  vsub.xyzw   $vf1, $vf9, $vf5
    ctx->pc = 0x16eb40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eb44: 0x4be540ac  vsub.xyzw   $vf2, $vf8, $vf5
    ctx->pc = 0x16eb44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eb48: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x16eb48u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x16eb4c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x16eb4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16eb50: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x16eb50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eb54: 0x4be1306a  vmul.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x16eb54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eb58: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x16eb58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eb5c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x16eb5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eb60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16eb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16eb64: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16eb64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16eb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eb6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16eb6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eb70: 0x0  nop
    ctx->pc = 0x16eb70u;
    // NOP
    // 0x16eb74: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x16EB74u;
    {
        const bool branch_taken_0x16eb74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eb74) {
            ctx->pc = 0x16EB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB74u;
            // 0x16eb78: 0x46094000  add.s       $f0, $f8, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16EBC8u;
            goto label_16ebc8;
        }
    }
    ctx->pc = 0x16EB7Cu;
    // 0x16eb7c: 0x4be6312a  vmul.xyzw   $vf4, $vf6, $vf6
    ctx->pc = 0x16eb7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16eb80: 0x4be828ec  vsub.xyzw   $vf3, $vf5, $vf8
    ctx->pc = 0x16eb80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16eb84: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x16eb84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eb88: 0x4be618ea  vmul.xyzw   $vf3, $vf3, $vf6
    ctx->pc = 0x16eb88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16eb8c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x16eb8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eb90: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x16eb90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eb94: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16eb94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16eb98: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x16eb98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eb9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16eb9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16eba0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16eba0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16eba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eba8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16eba8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x16ebac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16ebacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16ebb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16ebb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16ebb4: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x16ebb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ebb8: 0x4be128ac  vsub.xyzw   $vf2, $vf5, $vf1
    ctx->pc = 0x16ebb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ebbc: 0x3e00008  jr          $ra
    ctx->pc = 0x16EBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EBBCu;
            // 0x16ebc0: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E910u: goto label_16e910;
            case 0x16E968u: goto label_16e968;
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EBC8u: goto label_16ebc8;
            case 0x16EBE0u: goto label_16ebe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EBC4u;
    // 0x16ebc4: 0x0  nop
    ctx->pc = 0x16ebc4u;
    // NOP
label_16ebc8:
    // 0x16ebc8: 0x46004003  div.s       $f0, $f8, $f0
    ctx->pc = 0x16ebc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[0] = ctx->f[8] / ctx->f[0];
    // 0x16ebcc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16ebccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16ebd0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16ebd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16ebd4: 0x4be16858  vmulx.xyzw  $vf1, $vf13, $vf1x
    ctx->pc = 0x16ebd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ebd8: 0x4be140a8  vadd.xyzw   $vf2, $vf8, $vf1
    ctx->pc = 0x16ebd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ebdc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x16ebdcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_16ebe0:
    // 0x16ebe0: 0x3e00008  jr          $ra
    ctx->pc = 0x16EBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E910u: goto label_16e910;
            case 0x16E968u: goto label_16e968;
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EBC8u: goto label_16ebc8;
            case 0x16EBE0u: goto label_16ebe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EBE8u;
}
