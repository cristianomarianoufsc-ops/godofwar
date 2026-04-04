#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6A00
// Address: 0x1e6a00 - 0x1e6e58
void sub_001E6A00_0x1e6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6A00_0x1e6a00");
#endif

    ctx->pc = 0x1e6a00u;

    // 0x1e6a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6a04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a10: 0x8e040340  lw          $a0, 0x340($s0)
    ctx->pc = 0x1e6a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x1e6a14: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6A14u;
    {
        const bool branch_taken_0x1e6a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a14) {
            ctx->pc = 0x1E6A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A14u;
            // 0x1e6a18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6A2Cu;
            goto label_1e6a2c;
        }
    }
    ctx->pc = 0x1E6A1Cu;
    // 0x1e6a1c: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1E6A1Cu;
    SET_GPR_U32(ctx, 31, 0x1E6A24u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A24u; }
        if (ctx->pc != 0x1E6A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A24u; }
        if (ctx->pc != 0x1E6A24u) { return; }
    }
    ctx->pc = 0x1E6A24u;
    // 0x1e6a24: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x1e6a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x1e6a28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6a2c:
    // 0x1e6a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A30u;
            // 0x1e6a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6A38u;
    // 0x1e6a38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e6a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e6a3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e6a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e6a40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e6a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e6a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e6a50: 0xc078452  jal         func_1E1148
    ctx->pc = 0x1E6A50u;
    SET_GPR_U32(ctx, 31, 0x1E6A58u);
    ctx->pc = 0x1E6A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A50u;
            // 0x1e6a54: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1148u;
    if (runtime->hasFunction(0x1E1148u)) {
        auto targetFn = runtime->lookupFunction(0x1E1148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A58u; }
        if (ctx->pc != 0x1E6A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1148_0x1e1148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A58u; }
        if (ctx->pc != 0x1E6A58u) { return; }
    }
    ctx->pc = 0x1E6A58u;
    // 0x1e6a58: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e6a58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6a5c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e6a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6a60: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e6a60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6a64: 0x7e020260  sq          $v0, 0x260($s0)
    ctx->pc = 0x1e6a64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 2));
    // 0x1e6a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6a6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6a70: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x1e6a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x1e6a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a78: 0xe60002a0  swc1        $f0, 0x2A0($s0)
    ctx->pc = 0x1e6a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x1e6a7c: 0xe60002b8  swc1        $f0, 0x2B8($s0)
    ctx->pc = 0x1e6a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x1e6a80: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x1e6a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x1e6a84: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1e6a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x1e6a88: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1e6a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x1e6a8c: 0xe60002cc  swc1        $f0, 0x2CC($s0)
    ctx->pc = 0x1e6a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 716), bits); }
    // 0x1e6a90: 0xe60002c8  swc1        $f0, 0x2C8($s0)
    ctx->pc = 0x1e6a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 712), bits); }
    // 0x1e6a94: 0xe60002b0  swc1        $f0, 0x2B0($s0)
    ctx->pc = 0x1e6a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x1e6a98: 0xe60002b4  swc1        $f0, 0x2B4($s0)
    ctx->pc = 0x1e6a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
    // 0x1e6a9c: 0xe60002ac  swc1        $f0, 0x2AC($s0)
    ctx->pc = 0x1e6a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 684), bits); }
    // 0x1e6aa0: 0xe60002bc  swc1        $f0, 0x2BC($s0)
    ctx->pc = 0x1e6aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    // 0x1e6aa4: 0xc079fd0  jal         func_1E7F40
    ctx->pc = 0x1E6AA4u;
    SET_GPR_U32(ctx, 31, 0x1E6AACu);
    ctx->pc = 0x1E6AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AA4u;
            // 0x1e6aa8: 0xe60002a8  swc1        $f0, 0x2A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F40u;
    if (runtime->hasFunction(0x1E7F40u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AACu; }
        if (ctx->pc != 0x1E6AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7F40_0x1e7f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AACu; }
        if (ctx->pc != 0x1E6AACu) { return; }
    }
    ctx->pc = 0x1E6AACu;
    // 0x1e6aac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e6ab0: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x1e6ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x1e6ab4: 0xa202035d  sb          $v0, 0x35D($s0)
    ctx->pc = 0x1e6ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 861), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6abc: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x1E6ABCu;
    SET_GPR_U32(ctx, 31, 0x1E6AC4u);
    ctx->pc = 0x1E6AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6ABCu;
            // 0x1e6ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AC4u; }
        if (ctx->pc != 0x1E6AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AC4u; }
        if (ctx->pc != 0x1E6AC4u) { return; }
    }
    ctx->pc = 0x1E6AC4u;
    // 0x1e6ac4: 0xc080944  jal         func_202510
    ctx->pc = 0x1E6AC4u;
    SET_GPR_U32(ctx, 31, 0x1E6ACCu);
    ctx->pc = 0x1E6AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AC4u;
            // 0x1e6ac8: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202510u;
    if (runtime->hasFunction(0x202510u)) {
        auto targetFn = runtime->lookupFunction(0x202510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6ACCu; }
        if (ctx->pc != 0x1E6ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202510_0x202510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6ACCu; }
        if (ctx->pc != 0x1E6ACCu) { return; }
    }
    ctx->pc = 0x1E6ACCu;
    // 0x1e6acc: 0xc07dca4  jal         func_1F7290
    ctx->pc = 0x1E6ACCu;
    SET_GPR_U32(ctx, 31, 0x1E6AD4u);
    ctx->pc = 0x1E6AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6ACCu;
            // 0x1e6ad0: 0x8e040328  lw          $a0, 0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7290u;
    if (runtime->hasFunction(0x1F7290u)) {
        auto targetFn = runtime->lookupFunction(0x1F7290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AD4u; }
        if (ctx->pc != 0x1E6AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7290_0x1f7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AD4u; }
        if (ctx->pc != 0x1E6AD4u) { return; }
    }
    ctx->pc = 0x1E6AD4u;
    // 0x1e6ad4: 0x8e040330  lw          $a0, 0x330($s0)
    ctx->pc = 0x1e6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x1e6ad8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6AD8u;
    {
        const bool branch_taken_0x1e6ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6ad8) {
            ctx->pc = 0x1E6ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AD8u;
            // 0x1e6adc: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6AF0u;
            goto label_1e6af0;
        }
    }
    ctx->pc = 0x1E6AE0u;
    // 0x1e6ae0: 0xc07fda2  jal         func_1FF688
    ctx->pc = 0x1E6AE0u;
    SET_GPR_U32(ctx, 31, 0x1E6AE8u);
    ctx->pc = 0x1E6AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AE0u;
            // 0x1e6ae4: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF688u;
    if (runtime->hasFunction(0x1FF688u)) {
        auto targetFn = runtime->lookupFunction(0x1FF688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AE8u; }
        if (ctx->pc != 0x1E6AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ff688_0x1ff6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AE8u; }
        if (ctx->pc != 0x1E6AE8u) { return; }
    }
    ctx->pc = 0x1E6AE8u;
    // 0x1e6ae8: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x1e6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x1e6aec: 0x0  nop
    ctx->pc = 0x1e6aecu;
    // NOP
label_1e6af0:
    // 0x1e6af0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6AF0u;
    {
        const bool branch_taken_0x1e6af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AF0u;
            // 0x1e6af4: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6af0) {
            ctx->pc = 0x1E6B00u;
            goto label_1e6b00;
        }
    }
    ctx->pc = 0x1E6AF8u;
    // 0x1e6af8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1e6af8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1e6afc: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x1e6afcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
label_1e6b00:
    // 0x1e6b00: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x1e6b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x1e6b04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6B04u;
    {
        const bool branch_taken_0x1e6b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b04) {
            ctx->pc = 0x1E6B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B04u;
            // 0x1e6b08: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6B18u;
            goto label_1e6b18;
        }
    }
    ctx->pc = 0x1E6B0Cu;
    // 0x1e6b0c: 0xc08015a  jal         func_200568
    ctx->pc = 0x1E6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B14u);
    ctx->pc = 0x200568u;
    if (runtime->hasFunction(0x200568u)) {
        auto targetFn = runtime->lookupFunction(0x200568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B14u; }
        if (ctx->pc != 0x1E6B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200568_0x200568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B14u; }
        if (ctx->pc != 0x1E6B14u) { return; }
    }
    ctx->pc = 0x1E6B14u;
    // 0x1e6b14: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x1e6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_1e6b18:
    // 0x1e6b18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6B18u;
    {
        const bool branch_taken_0x1e6b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B18u;
            // 0x1e6b1c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b18) {
            ctx->pc = 0x1E6B2Cu;
            goto label_1e6b2c;
        }
    }
    ctx->pc = 0x1E6B20u;
    // 0x1e6b20: 0xc07fd2a  jal         func_1FF4A8
    ctx->pc = 0x1E6B20u;
    SET_GPR_U32(ctx, 31, 0x1E6B28u);
    ctx->pc = 0x1FF4A8u;
    if (runtime->hasFunction(0x1FF4A8u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B28u; }
        if (ctx->pc != 0x1E6B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF4A8_0x1ff4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B28u; }
        if (ctx->pc != 0x1E6B28u) { return; }
    }
    ctx->pc = 0x1E6B28u;
    // 0x1e6b28: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1e6b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1e6b2c:
    // 0x1e6b2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6B2Cu;
    {
        const bool branch_taken_0x1e6b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B2Cu;
            // 0x1e6b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b2c) {
            ctx->pc = 0x1E6B44u;
            goto label_1e6b44;
        }
    }
    ctx->pc = 0x1E6B34u;
    // 0x1e6b34: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1E6B34u;
    SET_GPR_U32(ctx, 31, 0x1E6B3Cu);
    ctx->pc = 0x1E6B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B34u;
            // 0x1e6b38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B3Cu; }
        if (ctx->pc != 0x1E6B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B3Cu; }
        if (ctx->pc != 0x1E6B3Cu) { return; }
    }
    ctx->pc = 0x1E6B3Cu;
    // 0x1e6b3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6B3Cu;
    {
        const bool branch_taken_0x1e6b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b3c) {
            ctx->pc = 0x1E6B58u;
            goto label_1e6b58;
        }
    }
    ctx->pc = 0x1E6B44u;
label_1e6b44:
    // 0x1e6b44: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1e6b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1e6b48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6B48u;
    {
        const bool branch_taken_0x1e6b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b48) {
            ctx->pc = 0x1E6B58u;
            goto label_1e6b58;
        }
    }
    ctx->pc = 0x1E6B50u;
    // 0x1e6b50: 0xc07227c  jal         func_1C89F0
    ctx->pc = 0x1E6B50u;
    SET_GPR_U32(ctx, 31, 0x1E6B58u);
    ctx->pc = 0x1E6B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B50u;
            // 0x1e6b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C89F0u;
    if (runtime->hasFunction(0x1C89F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C89F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B58u; }
        if (ctx->pc != 0x1E6B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89F0_0x1c89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B58u; }
        if (ctx->pc != 0x1E6B58u) { return; }
    }
    ctx->pc = 0x1E6B58u;
label_1e6b58:
    // 0x1e6b58: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e6b58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6b5c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e6b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6b60: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e6b64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e6b68: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1e6b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e6b6c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1e6b6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1e6b70: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1e6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1e6b74: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6B7Cu);
        ctx->pc = 0x1E6B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B74u;
            // 0x1e6b78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6B7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B7Cu; }
            if (ctx->pc != 0x1E6B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E6B7Cu;
    // 0x1e6b7c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e6b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1e6b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e6b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b88: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1e6b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1e6b8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e6b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e6b90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e6b94: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x1e6b94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6b98: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1e6b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6b9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e6b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e6ba0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e6ba4: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1E6BA4u;
    SET_GPR_U32(ctx, 31, 0x1E6BACu);
    ctx->pc = 0x1E6BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BA4u;
            // 0x1e6ba8: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BACu; }
        if (ctx->pc != 0x1E6BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BACu; }
        if (ctx->pc != 0x1E6BACu) { return; }
    }
    ctx->pc = 0x1E6BACu;
    // 0x1e6bac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e6bb0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e6bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1e6bb4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1e6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x1e6bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e6bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e6bbc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1e6bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6bc0: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x1e6bc0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6bc8: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6BD0u);
        ctx->pc = 0x1E6BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BC8u;
            // 0x1e6bcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6BD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BD0u; }
            if (ctx->pc != 0x1E6BD0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6BD0u;
    // 0x1e6bd0: 0xc60c028c  lwc1        $f12, 0x28C($s0)
    ctx->pc = 0x1e6bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6bd4: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x1E6BD4u;
    SET_GPR_U32(ctx, 31, 0x1E6BDCu);
    ctx->pc = 0x1E6BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BD4u;
            // 0x1e6bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BDCu; }
        if (ctx->pc != 0x1E6BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BDCu; }
        if (ctx->pc != 0x1E6BDCu) { return; }
    }
    ctx->pc = 0x1E6BDCu;
    // 0x1e6bdc: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1e6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e6be0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1e6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1e6be4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e6be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e6be8: 0x8e040320  lw          $a0, 0x320($s0)
    ctx->pc = 0x1e6be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e6bec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e6becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e6bf0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E6BF0u;
    SET_GPR_U32(ctx, 31, 0x1E6BF8u);
    ctx->pc = 0x1E6BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BF0u;
            // 0x1e6bf4: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BF8u; }
        if (ctx->pc != 0x1E6BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BF8u; }
        if (ctx->pc != 0x1E6BF8u) { return; }
    }
    ctx->pc = 0x1E6BF8u;
    // 0x1e6bf8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1e6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e6bfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e6bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e6c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6C00u;
    {
        const bool branch_taken_0x1e6c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C00u;
            // 0x1e6c04: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c00) {
            ctx->pc = 0x1E6C18u;
            goto label_1e6c18;
        }
    }
    ctx->pc = 0x1E6C08u;
    // 0x1e6c08: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e6c0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6C0Cu;
    {
        const bool branch_taken_0x1e6c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C0Cu;
            // 0x1e6c10: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c0c) {
            ctx->pc = 0x1E6C28u;
            goto label_1e6c28;
        }
    }
    ctx->pc = 0x1E6C14u;
    // 0x1e6c14: 0x0  nop
    ctx->pc = 0x1e6c14u;
    // NOP
label_1e6c18:
    // 0x1e6c18: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1e6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e6c1c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x1e6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x1e6c20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e6c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e6c24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e6c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e6c28:
    // 0x1e6c28: 0x8e040320  lw          $a0, 0x320($s0)
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e6c2c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E6C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C34u);
    ctx->pc = 0x1E6C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C2Cu;
            // 0x1e6c30: 0xae0302d8  sw          $v1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C34u; }
        if (ctx->pc != 0x1E6C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C34u; }
        if (ctx->pc != 0x1E6C34u) { return; }
    }
    ctx->pc = 0x1E6C34u;
    // 0x1e6c34: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e6c38: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e6c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e6c3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6C3Cu;
    {
        const bool branch_taken_0x1e6c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c3c) {
            ctx->pc = 0x1E6C54u;
            goto label_1e6c54;
        }
    }
    ctx->pc = 0x1E6C44u;
    // 0x1e6c44: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e6c48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e6c4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e6c50: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e6c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1e6c54:
    // 0x1e6c54: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E6C54u;
    SET_GPR_U32(ctx, 31, 0x1E6C5Cu);
    ctx->pc = 0x1E6C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C54u;
            // 0x1e6c58: 0x8e040320  lw          $a0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C5Cu; }
        if (ctx->pc != 0x1E6C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C5Cu; }
        if (ctx->pc != 0x1E6C5Cu) { return; }
    }
    ctx->pc = 0x1E6C5Cu;
    // 0x1e6c5c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1e6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e6c60: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e6c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e6c64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6C64u;
    {
        const bool branch_taken_0x1e6c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C64u;
            // 0x1e6c68: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c64) {
            ctx->pc = 0x1E6C78u;
            goto label_1e6c78;
        }
    }
    ctx->pc = 0x1E6C6Cu;
    // 0x1e6c6c: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e6c70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e6c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e6c74: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1e6c78:
    // 0x1e6c78: 0x8e0601a8  lw          $a2, 0x1A8($s0)
    ctx->pc = 0x1e6c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x1e6c7c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1E6C7Cu;
    {
        const bool branch_taken_0x1e6c7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C7Cu;
            // 0x1e6c80: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c7c) {
            ctx->pc = 0x1E6CB4u;
            goto label_1e6cb4;
        }
    }
    ctx->pc = 0x1E6C84u;
    // 0x1e6c84: 0x443000f  bgezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E6C84u;
    {
        const bool branch_taken_0x1e6c84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e6c84) {
            ctx->pc = 0x1E6C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C84u;
            // 0x1e6c88: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6CC4u;
            goto label_1e6cc4;
        }
    }
    ctx->pc = 0x1E6C8Cu;
    // 0x1e6c8c: 0xdcc200c0  ld          $v0, 0xC0($a2)
    ctx->pc = 0x1e6c8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1e6c90: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e6c94: 0x24c400c0  addiu       $a0, $a2, 0xC0
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x1e6c98: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x1e6c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1e6c9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e6c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e6ca0: 0xfcc200c0  sd          $v0, 0xC0($a2)
    ctx->pc = 0x1e6ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 192), GPR_U64(ctx, 2));
    // 0x1e6ca4: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1e6ca4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e6ca8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e6ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e6cac: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1e6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1e6cb0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1e6cb4:
    // 0x1e6cb4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6CB4u;
    {
        const bool branch_taken_0x1e6cb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E6CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CB4u;
            // 0x1e6cb8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6cb4) {
            ctx->pc = 0x1E6CC4u;
            goto label_1e6cc4;
        }
    }
    ctx->pc = 0x1E6CBCu;
    // 0x1e6cbc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e6cc0: 0xac40d2a8  sw          $zero, -0x2D58($v0)
    ctx->pc = 0x1e6cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955688), GPR_U32(ctx, 0));
label_1e6cc4:
    // 0x1e6cc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e6cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6ccc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e6cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e6cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CD0u;
            // 0x1e6cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6CD8u;
    // 0x1e6cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6cdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e6cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e6ce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6cec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6cf0: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x1e6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1e6cf4: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E6CF4u;
    {
        const bool branch_taken_0x1e6cf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6cf4) {
            ctx->pc = 0x1E6CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CF4u;
            // 0x1e6cf8: 0x8e020244  lw          $v0, 0x244($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6D20u;
            goto label_1e6d20;
        }
    }
    ctx->pc = 0x1E6CFCu;
    // 0x1e6cfc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e6cfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6d00: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1e6d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1e6d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e6d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d0c: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1e6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1e6d10: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E6D10u;
    SET_GPR_U32(ctx, 31, 0x1E6D18u);
    ctx->pc = 0x1E6D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D10u;
            // 0x1e6d14: 0xfa010210  sqc2        $vf1, 0x210($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 528), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D18u; }
        if (ctx->pc != 0x1E6D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D18u; }
        if (ctx->pc != 0x1E6D18u) { return; }
    }
    ctx->pc = 0x1E6D18u;
    // 0x1e6d18: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x1e6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x1e6d1c: 0x0  nop
    ctx->pc = 0x1e6d1cu;
    // NOP
label_1e6d20:
    // 0x1e6d20: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6D20u;
    {
        const bool branch_taken_0x1e6d20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6d20) {
            ctx->pc = 0x1E6D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D20u;
            // 0x1e6d24: 0x8e020248  lw          $v0, 0x248($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6D40u;
            goto label_1e6d40;
        }
    }
    ctx->pc = 0x1E6D28u;
    // 0x1e6d28: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e6d28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6d2c: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x1e6d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x1e6d30: 0xfa010220  sqc2        $vf1, 0x220($s0)
    ctx->pc = 0x1e6d30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6d34: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1e6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1e6d38: 0x8e020248  lw          $v0, 0x248($s0)
    ctx->pc = 0x1e6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x1e6d3c: 0x0  nop
    ctx->pc = 0x1e6d3cu;
    // NOP
label_1e6d40:
    // 0x1e6d40: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6D40u;
    {
        const bool branch_taken_0x1e6d40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6d40) {
            ctx->pc = 0x1E6D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D40u;
            // 0x1e6d44: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6D60u;
            goto label_1e6d60;
        }
    }
    ctx->pc = 0x1E6D48u;
    // 0x1e6d48: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1e6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1e6d4c: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x1e6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x1e6d50: 0xc4406f70  lwc1        $f0, 0x6F70($v0)
    ctx->pc = 0x1e6d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6d54: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1e6d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x1e6d58: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1e6d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1e6d5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e6d60:
    // 0x1e6d60: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e6d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e6d64: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1e6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1e6d68: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6D70u);
        ctx->pc = 0x1E6D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D68u;
            // 0x1e6d6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6D70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D70u; }
            if (ctx->pc != 0x1E6D70u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6D70u;
    // 0x1e6d70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d74: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6D74u;
    {
        const bool branch_taken_0x1e6d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D74u;
            // 0x1e6d78: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d74) {
            ctx->pc = 0x1E6DB0u;
            goto label_1e6db0;
        }
    }
    ctx->pc = 0x1E6D7Cu;
    // 0x1e6d7c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e6d80: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1e6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1e6d84: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e6d88: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1e6d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1e6d8c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1e6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1e6d90: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6D98u);
        ctx->pc = 0x1E6D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D90u;
            // 0x1e6d94: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6D98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D98u; }
            if (ctx->pc != 0x1E6D98u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6D98u;
    // 0x1e6d98: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1e6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1e6d9c: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6D9Cu;
    {
        const bool branch_taken_0x1e6d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1E6DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D9Cu;
            // 0x1e6da0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d9c) {
            ctx->pc = 0x1E6DB8u;
            goto label_1e6db8;
        }
    }
    ctx->pc = 0x1E6DA4u;
    // 0x1e6da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6da8: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x1E6DA8u;
    SET_GPR_U32(ctx, 31, 0x1E6DB0u);
    ctx->pc = 0x1E6DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DA8u;
            // 0x1e6dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DB0u; }
        if (ctx->pc != 0x1E6DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DB0u; }
        if (ctx->pc != 0x1E6DB0u) { return; }
    }
    ctx->pc = 0x1E6DB0u;
label_1e6db0:
    // 0x1e6db0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e6db4: 0x0  nop
    ctx->pc = 0x1e6db4u;
    // NOP
label_1e6db8:
    // 0x1e6db8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e6db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e6dbc: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1e6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1e6dc0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e6dc4: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1e6dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1e6dc8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1e6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1e6dcc: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6DD4u);
        ctx->pc = 0x1E6DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DCCu;
            // 0x1e6dd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6DD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DD4u; }
            if (ctx->pc != 0x1E6DD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6DD4u;
    // 0x1e6dd4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1e6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1e6dd8: 0x5622000b  bnel        $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E6DD8u;
    {
        const bool branch_taken_0x1e6dd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6dd8) {
            ctx->pc = 0x1E6DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DD8u;
            // 0x1e6ddc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6E08u;
            goto label_1e6e08;
        }
    }
    ctx->pc = 0x1E6DE0u;
    // 0x1e6de0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e6de4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e6de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1e6de8: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1e6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1e6dec: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6DF4u);
        ctx->pc = 0x1E6DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DECu;
            // 0x1e6df0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6DF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DF4u; }
            if (ctx->pc != 0x1E6DF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6DF4u;
    // 0x1e6df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6DF4u;
    {
        const bool branch_taken_0x1e6df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DF4u;
            // 0x1e6df8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6df4) {
            ctx->pc = 0x1E6E08u;
            goto label_1e6e08;
        }
    }
    ctx->pc = 0x1E6DFCu;
    // 0x1e6dfc: 0xc0802f2  jal         func_200BC8
    ctx->pc = 0x1E6DFCu;
    SET_GPR_U32(ctx, 31, 0x1E6E04u);
    ctx->pc = 0x1E6E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DFCu;
            // 0x1e6e00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200BC8u;
    if (runtime->hasFunction(0x200BC8u)) {
        auto targetFn = runtime->lookupFunction(0x200BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E04u; }
        if (ctx->pc != 0x1E6E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200BC8_0x200bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E04u; }
        if (ctx->pc != 0x1E6E04u) { return; }
    }
    ctx->pc = 0x1E6E04u;
    // 0x1e6e04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6e08:
    // 0x1e6e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E10u;
            // 0x1e6e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6E18u;
    // 0x1e6e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6e1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6e24: 0xc078470  jal         func_1E11C0
    ctx->pc = 0x1E6E24u;
    SET_GPR_U32(ctx, 31, 0x1E6E2Cu);
    ctx->pc = 0x1E6E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E24u;
            // 0x1e6e28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E11C0u;
    if (runtime->hasFunction(0x1E11C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E11C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E2Cu; }
        if (ctx->pc != 0x1E6E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E11C0_0x1e11c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E2Cu; }
        if (ctx->pc != 0x1E6E2Cu) { return; }
    }
    ctx->pc = 0x1E6E2Cu;
    // 0x1e6e2c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e6e30: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1e6e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1e6e34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6E34u;
    {
        const bool branch_taken_0x1e6e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E34u;
            // 0x1e6e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e34) {
            ctx->pc = 0x1E6E48u;
            goto label_1e6e48;
        }
    }
    ctx->pc = 0x1E6E3Cu;
    // 0x1e6e3c: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x1E6E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6E44u);
    ctx->pc = 0x1E6E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E3Cu;
            // 0x1e6e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E44u; }
        if (ctx->pc != 0x1E6E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E44u; }
        if (ctx->pc != 0x1E6E44u) { return; }
    }
    ctx->pc = 0x1E6E44u;
    // 0x1e6e44: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1e6e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
label_1e6e48:
    // 0x1e6e48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E50u;
            // 0x1e6e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E48u: goto label_1e6e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6E58u;
}
