#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBF10
// Address: 0x1bbf10 - 0x1bbfe0
void sub_001BBF10_0x1bbf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBF10_0x1bbf10");
#endif

    ctx->pc = 0x1bbf10u;

    // 0x1bbf10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bbf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bbf14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bbf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bbf18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bbf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bbf1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbf1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bbf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bbf24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1bbf24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bbf2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bbf2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbf34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bbf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf38: 0xc06ed82  jal         func_1BB608
    ctx->pc = 0x1BBF38u;
    SET_GPR_U32(ctx, 31, 0x1BBF40u);
    ctx->pc = 0x1BBF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF38u;
            // 0x1bbf3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB608u;
    if (runtime->hasFunction(0x1BB608u)) {
        auto targetFn = runtime->lookupFunction(0x1BB608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF40u; }
        if (ctx->pc != 0x1BBF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB608_0x1bb608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF40u; }
        if (ctx->pc != 0x1BBF40u) { return; }
    }
    ctx->pc = 0x1BBF40u;
    // 0x1bbf40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bbf44: 0x24525280  addiu       $s2, $v0, 0x5280
    ctx->pc = 0x1bbf44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bbf48: 0x8c425280  lw          $v0, 0x5280($v0)
    ctx->pc = 0x1bbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21120)));
    // 0x1bbf4c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bbf50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bbf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bbf54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBF54u;
    {
        const bool branch_taken_0x1bbf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF54u;
            // 0x1bbf58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf54) {
            ctx->pc = 0x1BBF6Cu;
            goto label_1bbf6c;
        }
    }
    ctx->pc = 0x1BBF5Cu;
    // 0x1bbf5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbf60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf64: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBF64u;
    SET_GPR_U32(ctx, 31, 0x1BBF6Cu);
    ctx->pc = 0x1BBF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF64u;
            // 0x1bbf68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF6Cu; }
        if (ctx->pc != 0x1BBF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF6Cu; }
        if (ctx->pc != 0x1BBF6Cu) { return; }
    }
    ctx->pc = 0x1BBF6Cu;
label_1bbf6c:
    // 0x1bbf6c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bbf70: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bbf74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bbf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bbf78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBF78u;
    {
        const bool branch_taken_0x1bbf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF78u;
            // 0x1bbf7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf78) {
            ctx->pc = 0x1BBF90u;
            goto label_1bbf90;
        }
    }
    ctx->pc = 0x1BBF80u;
    // 0x1bbf80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbf84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbf84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf88: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBF88u;
    SET_GPR_U32(ctx, 31, 0x1BBF90u);
    ctx->pc = 0x1BBF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF88u;
            // 0x1bbf8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF90u; }
        if (ctx->pc != 0x1BBF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF90u; }
        if (ctx->pc != 0x1BBF90u) { return; }
    }
    ctx->pc = 0x1BBF90u;
label_1bbf90:
    // 0x1bbf90: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBF90u;
    {
        const bool branch_taken_0x1bbf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF90u;
            // 0x1bbf94: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf90) {
            ctx->pc = 0x1BBFA8u;
            goto label_1bbfa8;
        }
    }
    ctx->pc = 0x1BBF98u;
    // 0x1bbf98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bbf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbf9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfa0: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBFA0u;
    SET_GPR_U32(ctx, 31, 0x1BBFA8u);
    ctx->pc = 0x1BBFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFA0u;
            // 0x1bbfa4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFA8u; }
        if (ctx->pc != 0x1BBFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFA8u; }
        if (ctx->pc != 0x1BBFA8u) { return; }
    }
    ctx->pc = 0x1BBFA8u;
label_1bbfa8:
    // 0x1bbfa8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBFA8u;
    {
        const bool branch_taken_0x1bbfa8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFA8u;
            // 0x1bbfac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfa8) {
            ctx->pc = 0x1BBFC0u;
            goto label_1bbfc0;
        }
    }
    ctx->pc = 0x1BBFB0u;
    // 0x1bbfb0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1bbfb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bbfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbfb8: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBFB8u;
    SET_GPR_U32(ctx, 31, 0x1BBFC0u);
    ctx->pc = 0x1BBFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFB8u;
            // 0x1bbfbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFC0u; }
        if (ctx->pc != 0x1BBFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFC0u; }
        if (ctx->pc != 0x1BBFC0u) { return; }
    }
    ctx->pc = 0x1BBFC0u;
label_1bbfc0:
    // 0x1bbfc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bbfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbfc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bbfc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbfc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbfc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbfcc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bbfccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbfd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFD4u;
            // 0x1bbfd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBF6Cu: goto label_1bbf6c;
            case 0x1BBF90u: goto label_1bbf90;
            case 0x1BBFA8u: goto label_1bbfa8;
            case 0x1BBFC0u: goto label_1bbfc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBFDCu;
    // 0x1bbfdc: 0x0  nop
    ctx->pc = 0x1bbfdcu;
    // NOP
}
