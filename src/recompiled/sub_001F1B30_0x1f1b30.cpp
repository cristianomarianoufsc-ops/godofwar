#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1B30
// Address: 0x1f1b30 - 0x1f1c98
void sub_001F1B30_0x1f1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1B30_0x1f1b30");
#endif

    ctx->pc = 0x1f1b30u;

    // 0x1f1b30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f1b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f1b34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f1b38: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f1b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f1b3c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1f1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1f1b40: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f1b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f1b44: 0x24703330  addiu       $s0, $v1, 0x3330
    ctx->pc = 0x1f1b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13104));
    // 0x1f1b48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f1b4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f1b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b50: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f1b50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f1b54: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f1b54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1b58: 0x8c42cd60  lw          $v0, -0x32A0($v0)
    ctx->pc = 0x1f1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954336)));
    // 0x1f1b5c: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1f1b5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1b60: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f1b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1b64: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1f1b64u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1f1b68: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1f1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1b6c: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B74u);
    ctx->pc = 0x1F1B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B6Cu;
            // 0x1f1b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F38B0u;
    if (runtime->hasFunction(0x1F38B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F38B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B74u; }
        if (ctx->pc != 0x1F1B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f38b0_0x1f38e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B74u; }
        if (ctx->pc != 0x1F1B74u) { return; }
    }
    ctx->pc = 0x1F1B74u;
    // 0x1f1b74: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F1B74u;
    {
        const bool branch_taken_0x1f1b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B74u;
            // 0x1f1b78: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b74) {
            ctx->pc = 0x1F1BB0u;
            goto label_1f1bb0;
        }
    }
    ctx->pc = 0x1F1B7Cu;
    // 0x1f1b7c: 0xc6140014  lwc1        $f20, 0x14($s0)
    ctx->pc = 0x1f1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1b80: 0xc07ce38  jal         func_1F38E0
    ctx->pc = 0x1F1B80u;
    SET_GPR_U32(ctx, 31, 0x1F1B88u);
    ctx->pc = 0x1F1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B80u;
            // 0x1f1b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F38E0u;
    if (runtime->hasFunction(0x1F38E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F38E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B88u; }
        if (ctx->pc != 0x1F1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f38e0_0x1f38e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B88u; }
        if (ctx->pc != 0x1F1B88u) { return; }
    }
    ctx->pc = 0x1F1B88u;
    // 0x1f1b88: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1f1b88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1b8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f1b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f1b90: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1f1b90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1b94: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f1b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1b98: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1f1b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f1b9c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1f1b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f1ba0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1f1ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1ba4: 0x4be11868  vadd.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1f1ba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1ba8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1F1BA8u;
    {
        const bool branch_taken_0x1f1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BA8u;
            // 0x1f1bac: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ba8) {
            ctx->pc = 0x1F1C78u;
            goto label_1f1c78;
        }
    }
    ctx->pc = 0x1F1BB0u;
label_1f1bb0:
    // 0x1f1bb0: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1f1bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1f1bb4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F1BB4u;
    {
        const bool branch_taken_0x1f1bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BB4u;
            // 0x1f1bb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bb4) {
            ctx->pc = 0x1F1C70u;
            goto label_1f1c70;
        }
    }
    ctx->pc = 0x1F1BBCu;
    // 0x1f1bbc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f1bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f1bc0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f1bc4: 0x0  nop
    ctx->pc = 0x1f1bc4u;
    // NOP
label_1f1bc8:
    // 0x1f1bc8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f1bcc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1f1bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f1bd0: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x1f1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x1f1bd4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f1bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1bd8: 0xc07cd3e  jal         func_1F34F8
    ctx->pc = 0x1F1BD8u;
    SET_GPR_U32(ctx, 31, 0x1F1BE0u);
    ctx->pc = 0x1F1BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BD8u;
            // 0x1f1bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F8u;
    if (runtime->hasFunction(0x1F34F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F34F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1BE0u; }
        if (ctx->pc != 0x1F1BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34F8_0x1f34f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1BE0u; }
        if (ctx->pc != 0x1F1BE0u) { return; }
    }
    ctx->pc = 0x1F1BE0u;
    // 0x1f1be0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1BE0u;
    {
        const bool branch_taken_0x1f1be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1be0) {
            ctx->pc = 0x1F1BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BE0u;
            // 0x1f1be4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1C30u;
            goto label_1f1c30;
        }
    }
    ctx->pc = 0x1F1BE8u;
    // 0x1f1be8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1f1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f1bec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f1bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f1bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f1bf4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F1BF4u;
    {
        const bool branch_taken_0x1f1bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1bf4) {
            ctx->pc = 0x1F1BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BF4u;
            // 0x1f1bf8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1C30u;
            goto label_1f1c30;
        }
    }
    ctx->pc = 0x1F1BFCu;
    // 0x1f1bfc: 0xc07cd5e  jal         func_1F3578
    ctx->pc = 0x1F1BFCu;
    SET_GPR_U32(ctx, 31, 0x1F1C04u);
    ctx->pc = 0x1F1C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BFCu;
            // 0x1f1c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3578u;
    if (runtime->hasFunction(0x1F3578u)) {
        auto targetFn = runtime->lookupFunction(0x1F3578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C04u; }
        if (ctx->pc != 0x1F1C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3578_0x1f3580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1C04u; }
        if (ctx->pc != 0x1F1C04u) { return; }
    }
    ctx->pc = 0x1F1C04u;
    // 0x1f1c04: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1f1c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1c08: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f1c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f1c0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1f1c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1f1c10: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f1c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f1c14: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1f1c14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f1c18: 0x4be11898  vmulx.xyzw  $vf2, $vf3, $vf1x
    ctx->pc = 0x1f1c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f1c1c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f1c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1c20: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1f1c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1c24: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f1c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1c28: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f1c28u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1f1c2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f1c30:
    // 0x1f1c30: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1f1c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f1c34: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1F1C34u;
    {
        const bool branch_taken_0x1f1c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C34u;
            // 0x1f1c38: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c34) {
            ctx->pc = 0x1F1BC8u;
            runtime->cooperativeGuestYield();
            goto label_1f1bc8;
        }
    }
    ctx->pc = 0x1F1C3Cu;
    // 0x1f1c3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f1c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f1c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f1c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1c44: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1f1c44u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1f1c48: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f1c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f1c4c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1f1c4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f1c50: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f1c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1c54: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1f1c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1c58: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1c5c: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1f1c5cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1f1c60: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x1f1c60u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1f1c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1C64u;
    {
        const bool branch_taken_0x1f1c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C64u;
            // 0x1f1c68: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c64) {
            ctx->pc = 0x1F1C78u;
            goto label_1f1c78;
        }
    }
    ctx->pc = 0x1F1C6Cu;
    // 0x1f1c6c: 0x0  nop
    ctx->pc = 0x1f1c6cu;
    // NOP
label_1f1c70:
    // 0x1f1c70: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x1f1c70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1c74: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x1f1c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_1f1c78:
    // 0x1f1c78: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1f1c78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1c7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f1c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1c80: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f1c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1c84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f1c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1c88: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C8Cu;
            // 0x1f1c90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1BB0u: goto label_1f1bb0;
            case 0x1F1BC8u: goto label_1f1bc8;
            case 0x1F1C30u: goto label_1f1c30;
            case 0x1F1C70u: goto label_1f1c70;
            case 0x1F1C78u: goto label_1f1c78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1C94u;
    // 0x1f1c94: 0x0  nop
    ctx->pc = 0x1f1c94u;
    // NOP
}
