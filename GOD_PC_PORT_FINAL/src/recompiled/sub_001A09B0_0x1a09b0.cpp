#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A09B0
// Address: 0x1a09b0 - 0x1a0b18
void sub_001A09B0_0x1a09b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A09B0_0x1a09b0");
#endif

    ctx->pc = 0x1a09b0u;

    // 0x1a09b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a09b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a09b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a09b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a09b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a09bc: 0xc067d16  jal         func_19F458
    ctx->pc = 0x1A09BCu;
    SET_GPR_U32(ctx, 31, 0x1A09C4u);
    ctx->pc = 0x19F458u;
    if (runtime->hasFunction(0x19F458u)) {
        auto targetFn = runtime->lookupFunction(0x19F458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09C4u; }
        if (ctx->pc != 0x1A09C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F458_0x19f458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09C4u; }
        if (ctx->pc != 0x1A09C4u) { return; }
    }
    ctx->pc = 0x1A09C4u;
    // 0x1a09c4: 0xc05d656  jal         func_175958
    ctx->pc = 0x1A09C4u;
    SET_GPR_U32(ctx, 31, 0x1A09CCu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09CCu; }
        if (ctx->pc != 0x1A09CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09CCu; }
        if (ctx->pc != 0x1A09CCu) { return; }
    }
    ctx->pc = 0x1A09CCu;
    // 0x1a09cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a09ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a09d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a09d4: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a09d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a09d8: 0x24a53f88  addiu       $a1, $a1, 0x3F88
    ctx->pc = 0x1a09d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16264));
    // 0x1a09dc: 0x24c6f868  addiu       $a2, $a2, -0x798
    ctx->pc = 0x1a09dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965352));
    // 0x1a09e0: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1A09E0u;
    SET_GPR_U32(ctx, 31, 0x1A09E8u);
    ctx->pc = 0x1A09E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09E0u;
            // 0x1a09e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09E8u; }
        if (ctx->pc != 0x1A09E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09E8u; }
        if (ctx->pc != 0x1A09E8u) { return; }
    }
    ctx->pc = 0x1A09E8u;
    // 0x1a09e8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a09e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a09ec: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a09ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a09f0: 0x24a53fa0  addiu       $a1, $a1, 0x3FA0
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16288));
    // 0x1a09f4: 0x24c6fdf8  addiu       $a2, $a2, -0x208
    ctx->pc = 0x1a09f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966776));
    // 0x1a09f8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1A09F8u;
    SET_GPR_U32(ctx, 31, 0x1A0A00u);
    ctx->pc = 0x1A09FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09F8u;
            // 0x1a09fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A00u; }
        if (ctx->pc != 0x1A0A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A00u; }
        if (ctx->pc != 0x1A0A00u) { return; }
    }
    ctx->pc = 0x1A0A00u;
    // 0x1a0a00: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a0a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a0a04: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a0a04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a0a08: 0x24a53fb8  addiu       $a1, $a1, 0x3FB8
    ctx->pc = 0x1a0a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16312));
    // 0x1a0a0c: 0x24c60408  addiu       $a2, $a2, 0x408
    ctx->pc = 0x1a0a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1032));
    // 0x1a0a10: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1A0A10u;
    SET_GPR_U32(ctx, 31, 0x1A0A18u);
    ctx->pc = 0x1A0A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A10u;
            // 0x1a0a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A18u; }
        if (ctx->pc != 0x1A0A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A18u; }
        if (ctx->pc != 0x1A0A18u) { return; }
    }
    ctx->pc = 0x1A0A18u;
    // 0x1a0a18: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a0a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a0a1c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a0a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a0a20: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0
    ctx->pc = 0x1a0a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
    // 0x1a0a24: 0x24c607a0  addiu       $a2, $a2, 0x7A0
    ctx->pc = 0x1a0a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1952));
    // 0x1a0a28: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1A0A28u;
    SET_GPR_U32(ctx, 31, 0x1A0A30u);
    ctx->pc = 0x1A0A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A28u;
            // 0x1a0a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A30u; }
        if (ctx->pc != 0x1A0A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A30u; }
        if (ctx->pc != 0x1A0A30u) { return; }
    }
    ctx->pc = 0x1A0A30u;
    // 0x1a0a30: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a0a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a0a34: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a0a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a0a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a3c: 0x24a53fe8  addiu       $a1, $a1, 0x3FE8
    ctx->pc = 0x1a0a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16360));
    // 0x1a0a40: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1A0A40u;
    SET_GPR_U32(ctx, 31, 0x1A0A48u);
    ctx->pc = 0x1A0A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A40u;
            // 0x1a0a44: 0x24c608f8  addiu       $a2, $a2, 0x8F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A48u; }
        if (ctx->pc != 0x1A0A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A48u; }
        if (ctx->pc != 0x1A0A48u) { return; }
    }
    ctx->pc = 0x1A0A48u;
    // 0x1a0a48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0a50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A50u;
            // 0x1a0a54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0A58u;
    // 0x1a0a58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0a5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0a60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a0a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0a64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0a68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0a6c: 0xd8620050  lqc2        $vf2, 0x50($v1)
    ctx->pc = 0x1a0a6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1a0a70: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x1a0a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1a0a74: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1a0a74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0a78: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1a0a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a0a7c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1a0a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0a80: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1a0a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0a84: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1a0a84u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1a0a88: 0x4a0003bf  vwaitq
    ctx->pc = 0x1a0a88u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1a0a8c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1a0a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0a90: 0x4a0002ff  vnop
    ctx->pc = 0x1a0a90u;
    // NOP operation, no action needed for VU0
    // 0x1a0a94: 0x4a0002ff  vnop
    ctx->pc = 0x1a0a94u;
    // NOP operation, no action needed for VU0
    // 0x1a0a98: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1a0a9c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1a0a9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a0aa0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a0aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a0aa4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1a0aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a0aa8: 0x4a830080  vaddx.y     $vf2, $vf0, $vf3x
    ctx->pc = 0x1a0aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0aac: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1a0aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a0ab0: 0x4be2106a  vmul.xyzw   $vf1, $vf2, $vf2
    ctx->pc = 0x1a0ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0ab4: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x1a0ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a0ab8: 0x4b0118c2  vaddz.x     $vf3, $vf3, $vf1z
    ctx->pc = 0x1a0ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a0abc: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1a0abcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1a0ac0: 0x4a6303be  vrsqrt      $Q, $vf0w, $vf3x
    ctx->pc = 0x1a0ac0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1a0ac4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1a0ac4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1a0ac8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1a0ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0acc: 0x4a0002ff  vnop
    ctx->pc = 0x1a0accu;
    // NOP operation, no action needed for VU0
    // 0x1a0ad0: 0x4a0002ff  vnop
    ctx->pc = 0x1a0ad0u;
    // NOP operation, no action needed for VU0
    // 0x1a0ad4: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1a0ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a0ad8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1a0ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0adc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1a0adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0ae0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1a0ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0ae4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a0ae4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0ae8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a0ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0aec: 0xc060f88  jal         func_183E20
    ctx->pc = 0x1A0AECu;
    SET_GPR_U32(ctx, 31, 0x1A0AF4u);
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AF4u; }
        if (ctx->pc != 0x1A0AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AF4u; }
        if (ctx->pc != 0x1A0AF4u) { return; }
    }
    ctx->pc = 0x1A0AF4u;
    // 0x1a0af4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1a0af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1a0af8: 0x34212ee4  ori         $at, $at, 0x2EE4
    ctx->pc = 0x1a0af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12004);
    // 0x1a0afc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0b00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a0b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0b04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a0b08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a0b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a0b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B0Cu;
            // 0x1a0b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0B14u;
    // 0x1a0b14: 0x0  nop
    ctx->pc = 0x1a0b14u;
    // NOP
}
