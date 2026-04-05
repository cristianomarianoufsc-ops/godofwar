#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29ade0
// Address: 0x29ade0 - 0x29ae40
void entry_29ade0_0x29ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29ade0_0x29ae40");
#endif

    ctx->pc = 0x29ade0u;

    // 0x29ade0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29ade4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29ade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ade8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29adec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29adecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29adf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29adf8: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x29ADF8u;
    SET_GPR_U32(ctx, 31, 0x29AE00u);
    ctx->pc = 0x29ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ADF8u;
            // 0x29adfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE00u; }
        if (ctx->pc != 0x29AE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE00u; }
        if (ctx->pc != 0x29AE00u) { return; }
    }
    ctx->pc = 0x29AE00u;
    // 0x29ae00: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AE00u;
    {
        const bool branch_taken_0x29ae00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29AE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE00u;
            // 0x29ae04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae00) {
            ctx->pc = 0x29AE20u;
            goto label_29ae20;
        }
    }
    ctx->pc = 0x29AE08u;
    // 0x29ae08: 0xc0a1254  jal         func_284950
    ctx->pc = 0x29AE08u;
    SET_GPR_U32(ctx, 31, 0x29AE10u);
    ctx->pc = 0x29AE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE08u;
            // 0x29ae0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE10u; }
        if (ctx->pc != 0x29AE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE10u; }
        if (ctx->pc != 0x29AE10u) { return; }
    }
    ctx->pc = 0x29AE10u;
    // 0x29ae10: 0xc0a6b90  jal         func_29AE40
    ctx->pc = 0x29AE10u;
    SET_GPR_U32(ctx, 31, 0x29AE18u);
    ctx->pc = 0x29AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE10u;
            // 0x29ae14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AE40u;
    if (runtime->hasFunction(0x29AE40u)) {
        auto targetFn = runtime->lookupFunction(0x29AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE18u; }
        if (ctx->pc != 0x29AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AE40_0x29ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE18u; }
        if (ctx->pc != 0x29AE18u) { return; }
    }
    ctx->pc = 0x29AE18u;
    // 0x29ae18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29AE18u;
    {
        const bool branch_taken_0x29ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE18u;
            // 0x29ae1c: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae18) {
            ctx->pc = 0x29AE28u;
            goto label_29ae28;
        }
    }
    ctx->pc = 0x29AE20u;
label_29ae20:
    // 0x29ae20: 0xc0a6b90  jal         func_29AE40
    ctx->pc = 0x29AE20u;
    SET_GPR_U32(ctx, 31, 0x29AE28u);
    ctx->pc = 0x29AE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE20u;
            // 0x29ae24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AE40u;
    if (runtime->hasFunction(0x29AE40u)) {
        auto targetFn = runtime->lookupFunction(0x29AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE28u; }
        if (ctx->pc != 0x29AE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AE40_0x29ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE28u; }
        if (ctx->pc != 0x29AE28u) { return; }
    }
    ctx->pc = 0x29AE28u;
label_29ae28:
    // 0x29ae28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29ae28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ae2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29ae2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ae30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ae30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ae34: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE34u;
            // 0x29ae38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AE20u: goto label_29ae20;
            case 0x29AE28u: goto label_29ae28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AE3Cu;
    // 0x29ae3c: 0x0  nop
    ctx->pc = 0x29ae3cu;
    // NOP
}
