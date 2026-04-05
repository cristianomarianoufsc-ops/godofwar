#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_108cc8
// Address: 0x108cc8 - 0x108d68
void entry_108cc8_0x108d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_108cc8_0x108d68");
#endif

    ctx->pc = 0x108cc8u;

    // 0x108cc8: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x108cc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x108ccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108cd0: 0x4be219fd  vabs.xyzw   $vf2, $vf3
    ctx->pc = 0x108cd0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x108cd4: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x108cd4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108cd8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x108cd8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x108cdc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x108cdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108ce0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x108ce0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108ce4: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x108ce4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x108ce8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x108ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x108cec: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x108cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108cf0: 0x0  nop
    ctx->pc = 0x108cf0u;
    // NOP
    // 0x108cf4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x108CF4u;
    {
        const bool branch_taken_0x108cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108cf4) {
            ctx->pc = 0x108CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108CF4u;
            // 0x108cf8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108CFCu;
            goto label_108cfc;
        }
    }
    ctx->pc = 0x108CFCu;
label_108cfc:
    // 0x108cfc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x108CFCu;
    {
        const bool branch_taken_0x108cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x108cfc) {
            ctx->pc = 0x108D34u;
            goto label_108d34;
        }
    }
    ctx->pc = 0x108D04u;
    // 0x108d04: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x108d04u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108d08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108d0c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x108d0cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108d10: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x108d10u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x108d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108d18: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x108d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108d1c: 0x0  nop
    ctx->pc = 0x108d1cu;
    // NOP
    // 0x108d20: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x108D20u;
    {
        const bool branch_taken_0x108d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108d20) {
            ctx->pc = 0x108D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108D20u;
            // 0x108d24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108D28u;
            goto label_108d28;
        }
    }
    ctx->pc = 0x108D28u;
label_108d28:
    // 0x108d28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x108D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D2Cu;
            // 0x108d30: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108CFCu: goto label_108cfc;
            case 0x108D28u: goto label_108d28;
            case 0x108D34u: goto label_108d34;
            case 0x108D58u: goto label_108d58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108D34u;
label_108d34:
    // 0x108d34: 0x4be119fd  vabs.xyzw   $vf1, $vf3
    ctx->pc = 0x108d34u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108d38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x108d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108d3c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x108d3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108d40: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x108d40u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x108d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108d48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x108d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108d4c: 0x0  nop
    ctx->pc = 0x108d4cu;
    // NOP
    // 0x108d50: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x108D50u;
    {
        const bool branch_taken_0x108d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108d50) {
            ctx->pc = 0x108D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108D50u;
            // 0x108d54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108D58u;
            goto label_108d58;
        }
    }
    ctx->pc = 0x108D58u;
label_108d58:
    // 0x108d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108d5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108d60: 0x3e00008  jr          $ra
    ctx->pc = 0x108D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D60u;
            // 0x108d64: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108CFCu: goto label_108cfc;
            case 0x108D28u: goto label_108d28;
            case 0x108D34u: goto label_108d34;
            case 0x108D58u: goto label_108d58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108D68u;
}
