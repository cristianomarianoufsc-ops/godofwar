#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCF00
// Address: 0x1dcf00 - 0x1dd1e8
void sub_001DCF00_0x1dcf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCF00_0x1dcf00");
#endif

    ctx->pc = 0x1dcf00u;

    // 0x1dcf00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1dcf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1dcf04: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1dcf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1dcf08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1dcf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1dcf0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dcf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1dcf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1dcf14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dcf14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dcf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dcf1c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1dcf1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1dcf20: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1dcf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1dcf24: 0x3c058010  lui         $a1, 0x8010
    ctx->pc = 0x1dcf24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32784 << 16));
    // 0x1dcf28: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x1dcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x1dcf2c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dcf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf30: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1dcf30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x1dcf34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1dcf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1dcf38: 0xc077730  jal         func_1DDCC0
    ctx->pc = 0x1DCF38u;
    SET_GPR_U32(ctx, 31, 0x1DCF40u);
    ctx->pc = 0x1DCF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF38u;
            // 0x1dcf3c: 0xac6200f4  sw          $v0, 0xF4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDCC0u;
    if (runtime->hasFunction(0x1DDCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DDCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF40u; }
        if (ctx->pc != 0x1DCF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ddcc0_0x1ddd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF40u; }
        if (ctx->pc != 0x1DCF40u) { return; }
    }
    ctx->pc = 0x1DCF40u;
    // 0x1dcf40: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1dcf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dcf44: 0xc077714  jal         func_1DDC50
    ctx->pc = 0x1DCF44u;
    SET_GPR_U32(ctx, 31, 0x1DCF4Cu);
    ctx->pc = 0x1DCF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF44u;
            // 0x1dcf48: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC50u;
    if (runtime->hasFunction(0x1DDC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DDC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF4Cu; }
        if (ctx->pc != 0x1DCF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ddc50_0x1ddcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF4Cu; }
        if (ctx->pc != 0x1DCF4Cu) { return; }
    }
    ctx->pc = 0x1DCF4Cu;
    // 0x1dcf4c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1dcf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1dcf50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dcf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dcf54: 0x8c44d2ac  lw          $a0, -0x2D54($v0)
    ctx->pc = 0x1dcf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1dcf58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dcf58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf5c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1dcf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dcf60: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x1DCF60u;
    SET_GPR_U32(ctx, 31, 0x1DCF68u);
    ctx->pc = 0x1DCF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF60u;
            // 0x1dcf64: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF68u; }
        if (ctx->pc != 0x1DCF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF68u; }
        if (ctx->pc != 0x1DCF68u) { return; }
    }
    ctx->pc = 0x1DCF68u;
    // 0x1dcf68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dcf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dcf6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf70: 0x8c44d2a0  lw          $a0, -0x2D60($v0)
    ctx->pc = 0x1dcf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955680)));
    // 0x1dcf74: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1DCF74u;
    SET_GPR_U32(ctx, 31, 0x1DCF7Cu);
    ctx->pc = 0x1DCF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF74u;
            // 0x1dcf78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF7Cu; }
        if (ctx->pc != 0x1DCF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF7Cu; }
        if (ctx->pc != 0x1DCF7Cu) { return; }
    }
    ctx->pc = 0x1DCF7Cu;
    // 0x1dcf7c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1dcf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf80: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1dcf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1dcf84: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1dcf84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1dcf88: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1dcf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1dcf8c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1dcf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1dcf90: 0xa220002c  sb          $zero, 0x2C($s1)
    ctx->pc = 0x1dcf90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dcf94: 0xa220002d  sb          $zero, 0x2D($s1)
    ctx->pc = 0x1dcf94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dcf98: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x1dcf98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1dcf9c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCF9Cu;
    {
        const bool branch_taken_0x1dcf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf9c) {
            ctx->pc = 0x1DCFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF9Cu;
            // 0x1dcfa0: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFE0u;
            goto label_1dcfe0;
        }
    }
    ctx->pc = 0x1DCFA4u;
    // 0x1dcfa4: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x1dcfa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x1dcfa8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1DCFA8u;
    {
        const bool branch_taken_0x1dcfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcfa8) {
            ctx->pc = 0x1DCFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFA8u;
            // 0x1dcfac: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFE0u;
            goto label_1dcfe0;
        }
    }
    ctx->pc = 0x1DCFB0u;
    // 0x1dcfb0: 0xc06d10c  jal         func_1B4430
    ctx->pc = 0x1DCFB0u;
    SET_GPR_U32(ctx, 31, 0x1DCFB8u);
    ctx->pc = 0x1DCFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFB0u;
            // 0x1dcfb4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4430u;
    if (runtime->hasFunction(0x1B4430u)) {
        auto targetFn = runtime->lookupFunction(0x1B4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFB8u; }
        if (ctx->pc != 0x1DCFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4430_0x1b4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFB8u; }
        if (ctx->pc != 0x1DCFB8u) { return; }
    }
    ctx->pc = 0x1DCFB8u;
    // 0x1dcfb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCFB8u;
    {
        const bool branch_taken_0x1dcfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFB8u;
            // 0x1dcfbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfb8) {
            ctx->pc = 0x1DCFD8u;
            goto label_1dcfd8;
        }
    }
    ctx->pc = 0x1DCFC0u;
    // 0x1dcfc0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1dcfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dcfc4: 0xc06d140  jal         func_1B4500
    ctx->pc = 0x1DCFC4u;
    SET_GPR_U32(ctx, 31, 0x1DCFCCu);
    ctx->pc = 0x1DCFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFC4u;
            // 0x1dcfc8: 0xa222002c  sb          $v0, 0x2C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4500u;
    if (runtime->hasFunction(0x1B4500u)) {
        auto targetFn = runtime->lookupFunction(0x1B4500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFCCu; }
        if (ctx->pc != 0x1DCFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4500_0x1b4500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFCCu; }
        if (ctx->pc != 0x1DCFCCu) { return; }
    }
    ctx->pc = 0x1DCFCCu;
    // 0x1dcfcc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1DCFCCu;
    {
        const bool branch_taken_0x1dcfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFCCu;
            // 0x1dcfd0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfcc) {
            ctx->pc = 0x1DD1D0u;
            goto label_1dd1d0;
        }
    }
    ctx->pc = 0x1DCFD4u;
    // 0x1dcfd4: 0x0  nop
    ctx->pc = 0x1dcfd4u;
    // NOP
label_1dcfd8:
    // 0x1dcfd8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dcfdc: 0x0  nop
    ctx->pc = 0x1dcfdcu;
    // NOP
label_1dcfe0:
    // 0x1dcfe0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1dcfe4: 0x2642ec58  addiu       $v0, $s2, -0x13A8
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962264));
    // 0x1dcfe8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dcfec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dcff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dcff4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1dcff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1dcff8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCFF8u;
    {
        const bool branch_taken_0x1dcff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFF8u;
            // 0x1dcffc: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcff8) {
            ctx->pc = 0x1DD00Cu;
            goto label_1dd00c;
        }
    }
    ctx->pc = 0x1DD000u;
    // 0x1dd000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd004: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD004u;
    {
        const bool branch_taken_0x1dd004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD004u;
            // 0x1dd008: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd004) {
            ctx->pc = 0x1DD010u;
            goto label_1dd010;
        }
    }
    ctx->pc = 0x1DD00Cu;
label_1dd00c:
    // 0x1dd00c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd010:
    // 0x1dd010: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DD010u;
    {
        const bool branch_taken_0x1dd010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd010) {
            ctx->pc = 0x1DD014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD010u;
            // 0x1dd014: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD070u;
            goto label_1dd070;
        }
    }
    ctx->pc = 0x1DD018u;
    // 0x1dd018: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dd018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dd01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd020: 0xc04015e  jal         func_100578
    ctx->pc = 0x1DD020u;
    SET_GPR_U32(ctx, 31, 0x1DD028u);
    ctx->pc = 0x1DD024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD020u;
            // 0x1dd024: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD028u; }
        if (ctx->pc != 0x1DD028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD028u; }
        if (ctx->pc != 0x1DD028u) { return; }
    }
    ctx->pc = 0x1DD028u;
    // 0x1dd028: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1dd028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dd02c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dd02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dd030: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD030u;
    {
        const bool branch_taken_0x1dd030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD030u;
            // 0x1dd034: 0xe614003c  swc1        $f20, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd030) {
            ctx->pc = 0x1DD068u;
            goto label_1dd068;
        }
    }
    ctx->pc = 0x1DD038u;
    // 0x1dd038: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1dd038u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd03c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd040: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dd044: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd048: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd04c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd050: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd054: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd058: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1dd058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dd05c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1dd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1dd060: 0x40f809  jalr        $v0
    ctx->pc = 0x1DD060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD068u);
        ctx->pc = 0x1DD064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD060u;
            // 0x1dd064: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD068u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCFD8u: goto label_1dcfd8;
            case 0x1DCFE0u: goto label_1dcfe0;
            case 0x1DD00Cu: goto label_1dd00c;
            case 0x1DD010u: goto label_1dd010;
            case 0x1DD068u: goto label_1dd068;
            case 0x1DD070u: goto label_1dd070;
            case 0x1DD090u: goto label_1dd090;
            case 0x1DD0D0u: goto label_1dd0d0;
            case 0x1DD110u: goto label_1dd110;
            case 0x1DD180u: goto label_1dd180;
            case 0x1DD184u: goto label_1dd184;
            case 0x1DD1A8u: goto label_1dd1a8;
            case 0x1DD1B0u: goto label_1dd1b0;
            case 0x1DD1D0u: goto label_1dd1d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD068u; }
            if (ctx->pc != 0x1DD068u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD068u;
label_1dd068:
    // 0x1dd068: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd06c: 0x0  nop
    ctx->pc = 0x1dd06cu;
    // NOP
label_1dd070:
    // 0x1dd070: 0x2642ec58  addiu       $v0, $s2, -0x13A8
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962264));
    // 0x1dd074: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1dd074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1dd078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd07c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd080: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1dd080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1dd084: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DD084u;
    {
        const bool branch_taken_0x1dd084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd084) {
            ctx->pc = 0x1DD088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD084u;
            // 0x1dd088: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD0D0u;
            goto label_1dd0d0;
        }
    }
    ctx->pc = 0x1DD08Cu;
    // 0x1dd08c: 0x0  nop
    ctx->pc = 0x1dd08cu;
    // NOP
label_1dd090:
    // 0x1dd090: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x1dd090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1dd094: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x1dd094u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1dd098: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1dd098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1dd09c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1dd09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1dd0a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dd0a4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd0a8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1dd0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1dd0ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1DD0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD0B4u);
        ctx->pc = 0x1DD0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0ACu;
            // 0x1dd0b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD0B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCFD8u: goto label_1dcfd8;
            case 0x1DCFE0u: goto label_1dcfe0;
            case 0x1DD00Cu: goto label_1dd00c;
            case 0x1DD010u: goto label_1dd010;
            case 0x1DD068u: goto label_1dd068;
            case 0x1DD070u: goto label_1dd070;
            case 0x1DD090u: goto label_1dd090;
            case 0x1DD0D0u: goto label_1dd0d0;
            case 0x1DD110u: goto label_1dd110;
            case 0x1DD180u: goto label_1dd180;
            case 0x1DD184u: goto label_1dd184;
            case 0x1DD1A8u: goto label_1dd1a8;
            case 0x1DD1B0u: goto label_1dd1b0;
            case 0x1DD1D0u: goto label_1dd1d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0B4u; }
            if (ctx->pc != 0x1DD0B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD0B4u;
    // 0x1dd0b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD0B4u;
    {
        const bool branch_taken_0x1dd0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd0b4) {
            ctx->pc = 0x1DD0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0B4u;
            // 0x1dd0b8: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD0D0u;
            goto label_1dd0d0;
        }
    }
    ctx->pc = 0x1DD0BCu;
    // 0x1dd0bc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1dd0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd0c0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DD0C0u;
    {
        const bool branch_taken_0x1dd0c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0C0u;
            // 0x1dd0c4: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0c0) {
            ctx->pc = 0x1DD090u;
            runtime->cooperativeGuestYield();
            goto label_1dd090;
        }
    }
    ctx->pc = 0x1DD0C8u;
    // 0x1dd0c8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1dd0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dd0cc: 0x0  nop
    ctx->pc = 0x1dd0ccu;
    // NOP
label_1dd0d0:
    // 0x1dd0d0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1dd0d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1dd0d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dd0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dd0d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD0D8u;
    {
        const bool branch_taken_0x1dd0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0D8u;
            // 0x1dd0dc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0d8) {
            ctx->pc = 0x1DD110u;
            goto label_1dd110;
        }
    }
    ctx->pc = 0x1DD0E0u;
    // 0x1dd0e0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1dd0e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd0e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd0e8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dd0ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd0f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd0f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd0f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd0fc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1dd0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dd100: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1dd100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1dd104: 0x40f809  jalr        $v0
    ctx->pc = 0x1DD104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD10Cu);
        ctx->pc = 0x1DD108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD104u;
            // 0x1dd108: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD10Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCFD8u: goto label_1dcfd8;
            case 0x1DCFE0u: goto label_1dcfe0;
            case 0x1DD00Cu: goto label_1dd00c;
            case 0x1DD010u: goto label_1dd010;
            case 0x1DD068u: goto label_1dd068;
            case 0x1DD070u: goto label_1dd070;
            case 0x1DD090u: goto label_1dd090;
            case 0x1DD0D0u: goto label_1dd0d0;
            case 0x1DD110u: goto label_1dd110;
            case 0x1DD180u: goto label_1dd180;
            case 0x1DD184u: goto label_1dd184;
            case 0x1DD1A8u: goto label_1dd1a8;
            case 0x1DD1B0u: goto label_1dd1b0;
            case 0x1DD1D0u: goto label_1dd1d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD10Cu; }
            if (ctx->pc != 0x1DD10Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DD10Cu;
    // 0x1dd10c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1dd110:
    // 0x1dd110: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x1dd110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd114: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1dd114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1dd118: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1dd118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1dd11c: 0x246325a8  addiu       $v1, $v1, 0x25A8
    ctx->pc = 0x1dd11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9640));
    // 0x1dd120: 0x24020303  addiu       $v0, $zero, 0x303
    ctx->pc = 0x1dd120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x1dd124: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dd124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dd128: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd12c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dd12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dd130: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1dd130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1dd134: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1dd134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1dd138: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1dd138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1dd13c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1dd13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1dd140: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1dd140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1dd144: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1dd144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1dd148: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x1dd148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x1dd14c: 0xc047b36  jal         func_11ECD8
    ctx->pc = 0x1DD14Cu;
    SET_GPR_U32(ctx, 31, 0x1DD154u);
    ctx->pc = 0x1DD150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD14Cu;
            // 0x1dd150: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ECD8u;
    if (runtime->hasFunction(0x11ECD8u)) {
        auto targetFn = runtime->lookupFunction(0x11ECD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD154u; }
        if (ctx->pc != 0x1DD154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ecd8_0x11ed88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD154u; }
        if (ctx->pc != 0x1DD154u) { return; }
    }
    ctx->pc = 0x1DD154u;
    // 0x1dd154: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1dd154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dd158: 0x2642ec58  addiu       $v0, $s2, -0x13A8
    ctx->pc = 0x1dd158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962264));
    // 0x1dd15c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1dd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1dd160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd168: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1dd168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1dd16c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD16Cu;
    {
        const bool branch_taken_0x1dd16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD16Cu;
            // 0x1dd170: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd16c) {
            ctx->pc = 0x1DD180u;
            goto label_1dd180;
        }
    }
    ctx->pc = 0x1DD174u;
    // 0x1dd174: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd178: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD178u;
    {
        const bool branch_taken_0x1dd178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD178u;
            // 0x1dd17c: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd178) {
            ctx->pc = 0x1DD184u;
            goto label_1dd184;
        }
    }
    ctx->pc = 0x1DD180u;
label_1dd180:
    // 0x1dd180: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd184:
    // 0x1dd184: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD184u;
    {
        const bool branch_taken_0x1dd184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd184) {
            ctx->pc = 0x1DD188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD184u;
            // 0x1dd188: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD1A8u;
            goto label_1dd1a8;
        }
    }
    ctx->pc = 0x1DD18Cu;
    // 0x1dd18c: 0xc054136  jal         func_1504D8
    ctx->pc = 0x1DD18Cu;
    SET_GPR_U32(ctx, 31, 0x1DD194u);
    ctx->pc = 0x1DD190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD18Cu;
            // 0x1dd190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1504D8u;
    if (runtime->hasFunction(0x1504D8u)) {
        auto targetFn = runtime->lookupFunction(0x1504D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD194u; }
        if (ctx->pc != 0x1DD194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1504d8_0x1505a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD194u; }
        if (ctx->pc != 0x1DD194u) { return; }
    }
    ctx->pc = 0x1DD194u;
    // 0x1dd194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dd194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd198: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dd198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd19c: 0xc054104  jal         func_150410
    ctx->pc = 0x1DD19Cu;
    SET_GPR_U32(ctx, 31, 0x1DD1A4u);
    ctx->pc = 0x1DD1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD19Cu;
            // 0x1dd1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1A4u; }
        if (ctx->pc != 0x1DD1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1A4u; }
        if (ctx->pc != 0x1DD1A4u) { return; }
    }
    ctx->pc = 0x1DD1A4u;
    // 0x1dd1a4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1dd1a8:
    // 0x1dd1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1ac: 0x0  nop
    ctx->pc = 0x1dd1acu;
    // NOP
label_1dd1b0:
    // 0x1dd1b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dd1b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1dd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1dd1b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dd1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dd1bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1dd1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1dd1c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1dd1c4: 0x10a0fffa  beqz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DD1C4u;
    {
        const bool branch_taken_0x1dd1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1C4u;
            // 0x1dd1c8: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1c4) {
            ctx->pc = 0x1DD1B0u;
            runtime->cooperativeGuestYield();
            goto label_1dd1b0;
        }
    }
    ctx->pc = 0x1DD1CCu;
    // 0x1dd1cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1dd1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dd1d0:
    // 0x1dd1d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1dd1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd1d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1dd1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd1d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dd1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd1dc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1dd1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dd1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1E0u;
            // 0x1dd1e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCFD8u: goto label_1dcfd8;
            case 0x1DCFE0u: goto label_1dcfe0;
            case 0x1DD00Cu: goto label_1dd00c;
            case 0x1DD010u: goto label_1dd010;
            case 0x1DD068u: goto label_1dd068;
            case 0x1DD070u: goto label_1dd070;
            case 0x1DD090u: goto label_1dd090;
            case 0x1DD0D0u: goto label_1dd0d0;
            case 0x1DD110u: goto label_1dd110;
            case 0x1DD180u: goto label_1dd180;
            case 0x1DD184u: goto label_1dd184;
            case 0x1DD1A8u: goto label_1dd1a8;
            case 0x1DD1B0u: goto label_1dd1b0;
            case 0x1DD1D0u: goto label_1dd1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD1E8u;
}
