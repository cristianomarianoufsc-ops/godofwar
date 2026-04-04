#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBBF8
// Address: 0x1bbbf8 - 0x1bbc90
void sub_001BBBF8_0x1bbbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBBF8_0x1bbbf8");
#endif

    ctx->pc = 0x1bbbf8u;

    // 0x1bbbf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbbfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bbbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bbc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bbc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbc08: 0xc06ed82  jal         func_1BB608
    ctx->pc = 0x1BBC08u;
    SET_GPR_U32(ctx, 31, 0x1BBC10u);
    ctx->pc = 0x1BBC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC08u;
            // 0x1bbc0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB608u;
    if (runtime->hasFunction(0x1BB608u)) {
        auto targetFn = runtime->lookupFunction(0x1BB608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC10u; }
        if (ctx->pc != 0x1BBC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB608_0x1bb608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC10u; }
        if (ctx->pc != 0x1BBC10u) { return; }
    }
    ctx->pc = 0x1BBC10u;
    // 0x1bbc10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bbc14: 0x24505280  addiu       $s0, $v0, 0x5280
    ctx->pc = 0x1bbc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bbc18: 0x8c425280  lw          $v0, 0x5280($v0)
    ctx->pc = 0x1bbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21120)));
    // 0x1bbc1c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bbc20: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bbc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bbc24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBC24u;
    {
        const bool branch_taken_0x1bbc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC24u;
            // 0x1bbc28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc24) {
            ctx->pc = 0x1BBC3Cu;
            goto label_1bbc3c;
        }
    }
    ctx->pc = 0x1BBC2Cu;
    // 0x1bbc2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc34: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBC34u;
    SET_GPR_U32(ctx, 31, 0x1BBC3Cu);
    ctx->pc = 0x1BBC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC34u;
            // 0x1bbc38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC3Cu; }
        if (ctx->pc != 0x1BBC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC3Cu; }
        if (ctx->pc != 0x1BBC3Cu) { return; }
    }
    ctx->pc = 0x1BBC3Cu;
label_1bbc3c:
    // 0x1bbc3c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bbc40: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bbc44: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bbc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bbc48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBC48u;
    {
        const bool branch_taken_0x1bbc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC48u;
            // 0x1bbc4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc48) {
            ctx->pc = 0x1BBC60u;
            goto label_1bbc60;
        }
    }
    ctx->pc = 0x1BBC50u;
    // 0x1bbc50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbc54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc58: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBC58u;
    SET_GPR_U32(ctx, 31, 0x1BBC60u);
    ctx->pc = 0x1BBC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC58u;
            // 0x1bbc5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC60u; }
        if (ctx->pc != 0x1BBC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC60u; }
        if (ctx->pc != 0x1BBC60u) { return; }
    }
    ctx->pc = 0x1BBC60u;
label_1bbc60:
    // 0x1bbc60: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1bbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bbc64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc6c: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BBC74u);
    ctx->pc = 0x1BBC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC6Cu;
            // 0x1bbc70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC74u; }
        if (ctx->pc != 0x1BBC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC74u; }
        if (ctx->pc != 0x1BBC74u) { return; }
    }
    ctx->pc = 0x1BBC74u;
    // 0x1bbc74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bbc78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bbc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbc7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc80: 0xac40cc50  sw          $zero, -0x33B0($v0)
    ctx->pc = 0x1bbc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954064), GPR_U32(ctx, 0));
    // 0x1bbc84: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC84u;
            // 0x1bbc88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBC3Cu: goto label_1bbc3c;
            case 0x1BBC60u: goto label_1bbc60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBC8Cu;
    // 0x1bbc8c: 0x0  nop
    ctx->pc = 0x1bbc8cu;
    // NOP
}
