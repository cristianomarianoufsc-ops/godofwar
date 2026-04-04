#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABC50
// Address: 0x1abc50 - 0x1abce0
void sub_001ABC50_0x1abc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABC50_0x1abc50");
#endif

    ctx->pc = 0x1abc50u;

    // 0x1abc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abc54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1abc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1abc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abc5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abc60: 0xc06b7d8  jal         func_1ADF60
    ctx->pc = 0x1ABC60u;
    SET_GPR_U32(ctx, 31, 0x1ABC68u);
    ctx->pc = 0x1ADF60u;
    if (runtime->hasFunction(0x1ADF60u)) {
        auto targetFn = runtime->lookupFunction(0x1ADF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC68u; }
        if (ctx->pc != 0x1ABC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADF60_0x1adf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC68u; }
        if (ctx->pc != 0x1ABC68u) { return; }
    }
    ctx->pc = 0x1ABC68u;
    // 0x1abc68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1abc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1abc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1abc70: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1ABC70u;
    SET_GPR_U32(ctx, 31, 0x1ABC78u);
    ctx->pc = 0x1ABC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC70u;
            // 0x1abc74: 0x8c44caa4  lw          $a0, -0x355C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC78u; }
        if (ctx->pc != 0x1ABC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC78u; }
        if (ctx->pc != 0x1ABC78u) { return; }
    }
    ctx->pc = 0x1ABC78u;
    // 0x1abc78: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1abc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1abc7c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1abc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1abc80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1abc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1abc84: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x1abc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x1abc88: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1abc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1abc8c: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1abc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x1abc90: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1abc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1abc94: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABC94u;
    {
        const bool branch_taken_0x1abc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1ABC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC94u;
            // 0x1abc98: 0x261100b8  addiu       $s1, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc94) {
            ctx->pc = 0x1ABCC0u;
            goto label_1abcc0;
        }
    }
    ctx->pc = 0x1ABC9Cu;
    // 0x1abc9c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1abc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1abca0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1abca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1abca4: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1abca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1abca8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1abca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1abcac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1abcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1abcb0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1ABCB0u;
    SET_GPR_U32(ctx, 31, 0x1ABCB8u);
    ctx->pc = 0x1ABCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCB0u;
            // 0x1abcb4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCB8u; }
        if (ctx->pc != 0x1ABCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCB8u; }
        if (ctx->pc != 0x1ABCB8u) { return; }
    }
    ctx->pc = 0x1ABCB8u;
    // 0x1abcb8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1abcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1abcbc: 0x0  nop
    ctx->pc = 0x1abcbcu;
    // NOP
label_1abcc0:
    // 0x1abcc0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1abcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1abcc4: 0xc06c9bc  jal         func_1B26F0
    ctx->pc = 0x1ABCC4u;
    SET_GPR_U32(ctx, 31, 0x1ABCCCu);
    ctx->pc = 0x1ABCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCC4u;
            // 0x1abcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B26F0u;
    if (runtime->hasFunction(0x1B26F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B26F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCCCu; }
        if (ctx->pc != 0x1ABCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B26F0_0x1b26f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCCCu; }
        if (ctx->pc != 0x1ABCCCu) { return; }
    }
    ctx->pc = 0x1ABCCCu;
    // 0x1abccc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1abcccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abcd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abcd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abcd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCD8u;
            // 0x1abcdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABCC0u: goto label_1abcc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABCE0u;
}
