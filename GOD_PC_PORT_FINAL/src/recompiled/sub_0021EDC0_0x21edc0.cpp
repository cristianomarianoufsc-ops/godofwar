#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EDC0
// Address: 0x21edc0 - 0x21ee30
void sub_0021EDC0_0x21edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EDC0_0x21edc0");
#endif

    ctx->pc = 0x21edc0u;

    // 0x21edc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21edc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21edc8: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21EDC8u;
    SET_GPR_U32(ctx, 31, 0x21EDD0u);
    ctx->pc = 0x21EDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDC8u;
            // 0x21edcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDD0u; }
        if (ctx->pc != 0x21EDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDD0u; }
        if (ctx->pc != 0x21EDD0u) { return; }
    }
    ctx->pc = 0x21EDD0u;
    // 0x21edd0: 0xc0879d8  jal         func_21E760
    ctx->pc = 0x21EDD0u;
    SET_GPR_U32(ctx, 31, 0x21EDD8u);
    ctx->pc = 0x21EDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDD0u;
            // 0x21edd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E760u;
    if (runtime->hasFunction(0x21E760u)) {
        auto targetFn = runtime->lookupFunction(0x21E760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDD8u; }
        if (ctx->pc != 0x21EDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0021e760_0x21e760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDD8u; }
        if (ctx->pc != 0x21EDD8u) { return; }
    }
    ctx->pc = 0x21EDD8u;
    // 0x21edd8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21EDD8u;
    {
        const bool branch_taken_0x21edd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDD8u;
            // 0x21eddc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edd8) {
            ctx->pc = 0x21EE24u;
            goto label_21ee24;
        }
    }
    ctx->pc = 0x21EDE0u;
    // 0x21ede0: 0xc08bd78  jal         func_22F5E0
    ctx->pc = 0x21EDE0u;
    SET_GPR_U32(ctx, 31, 0x21EDE8u);
    ctx->pc = 0x22F5E0u;
    if (runtime->hasFunction(0x22F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x22F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDE8u; }
        if (ctx->pc != 0x21EDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F5E0_0x22f5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDE8u; }
        if (ctx->pc != 0x21EDE8u) { return; }
    }
    ctx->pc = 0x21EDE8u;
    // 0x21ede8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21ede8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21edec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21EDECu;
    {
        const bool branch_taken_0x21edec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDECu;
            // 0x21edf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edec) {
            ctx->pc = 0x21EE20u;
            goto label_21ee20;
        }
    }
    ctx->pc = 0x21EDF4u;
    // 0x21edf4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EDF4u;
    {
        const bool branch_taken_0x21edf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDF4u;
            // 0x21edf8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edf4) {
            ctx->pc = 0x21EE0Cu;
            goto label_21ee0c;
        }
    }
    ctx->pc = 0x21EDFCu;
    // 0x21edfc: 0xc087ba4  jal         func_21EE90
    ctx->pc = 0x21EDFCu;
    SET_GPR_U32(ctx, 31, 0x21EE04u);
    ctx->pc = 0x21EE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDFCu;
            // 0x21ee00: 0xac43e57c  sw          $v1, -0x1A84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960508), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21EE90u;
    if (runtime->hasFunction(0x21EE90u)) {
        auto targetFn = runtime->lookupFunction(0x21EE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE04u; }
        if (ctx->pc != 0x21EE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21ee90_0x21eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE04u; }
        if (ctx->pc != 0x21EE04u) { return; }
    }
    ctx->pc = 0x21EE04u;
    // 0x21ee04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21EE04u;
    {
        const bool branch_taken_0x21ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE04u;
            // 0x21ee08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee04) {
            ctx->pc = 0x21EE24u;
            goto label_21ee24;
        }
    }
    ctx->pc = 0x21EE0Cu;
label_21ee0c:
    // 0x21ee0c: 0xc0879d4  jal         func_21E750
    ctx->pc = 0x21EE0Cu;
    SET_GPR_U32(ctx, 31, 0x21EE14u);
    ctx->pc = 0x21E750u;
    if (runtime->hasFunction(0x21E750u)) {
        auto targetFn = runtime->lookupFunction(0x21E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE14u; }
        if (ctx->pc != 0x21EE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21e750_0x21e760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE14u; }
        if (ctx->pc != 0x21EE14u) { return; }
    }
    ctx->pc = 0x21EE14u;
    // 0x21ee14: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x21ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21ee18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ee1c: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
label_21ee20:
    // 0x21ee20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ee20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21ee24:
    // 0x21ee24: 0x3e00008  jr          $ra
    ctx->pc = 0x21EE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE24u;
            // 0x21ee28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EE0Cu: goto label_21ee0c;
            case 0x21EE20u: goto label_21ee20;
            case 0x21EE24u: goto label_21ee24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EE2Cu;
    // 0x21ee2c: 0x0  nop
    ctx->pc = 0x21ee2cu;
    // NOP
}
