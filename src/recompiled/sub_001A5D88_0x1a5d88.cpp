#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5D88
// Address: 0x1a5d88 - 0x1a5de0
void sub_001A5D88_0x1a5d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5D88_0x1a5d88");
#endif

    ctx->pc = 0x1a5d88u;

    // 0x1a5d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5d8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a5d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d98: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1a5d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5d9c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5D9Cu;
    {
        const bool branch_taken_0x1a5d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d9c) {
            ctx->pc = 0x1A5DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D9Cu;
            // 0x1a5da0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5DD4u;
            goto label_1a5dd4;
        }
    }
    ctx->pc = 0x1A5DA4u;
    // 0x1a5da4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a5da8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5DA8u;
    {
        const bool branch_taken_0x1a5da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5da8) {
            ctx->pc = 0x1A5DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DA8u;
            // 0x1a5dac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5DD4u;
            goto label_1a5dd4;
        }
    }
    ctx->pc = 0x1A5DB0u;
    // 0x1a5db0: 0xc06b2f8  jal         func_1ACBE0
    ctx->pc = 0x1A5DB0u;
    SET_GPR_U32(ctx, 31, 0x1A5DB8u);
    ctx->pc = 0x1A5DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DB0u;
            // 0x1a5db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACBE0u;
    if (runtime->hasFunction(0x1ACBE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ACBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DB8u; }
        if (ctx->pc != 0x1A5DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACBE0_0x1acbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DB8u; }
        if (ctx->pc != 0x1A5DB8u) { return; }
    }
    ctx->pc = 0x1A5DB8u;
    // 0x1a5db8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1a5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1a5dbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5DBCu;
    {
        const bool branch_taken_0x1a5dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DBCu;
            // 0x1a5dc0: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5dbc) {
            ctx->pc = 0x1A5DD0u;
            goto label_1a5dd0;
        }
    }
    ctx->pc = 0x1A5DC4u;
    // 0x1a5dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5dc8: 0xc069646  jal         func_1A5918
    ctx->pc = 0x1A5DC8u;
    SET_GPR_U32(ctx, 31, 0x1A5DD0u);
    ctx->pc = 0x1A5DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DC8u;
            // 0x1a5dcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5918u;
    if (runtime->hasFunction(0x1A5918u)) {
        auto targetFn = runtime->lookupFunction(0x1A5918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DD0u; }
        if (ctx->pc != 0x1A5DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5918_0x1a5938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DD0u; }
        if (ctx->pc != 0x1A5DD0u) { return; }
    }
    ctx->pc = 0x1A5DD0u;
label_1a5dd0:
    // 0x1a5dd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a5dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5dd4:
    // 0x1a5dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DD8u;
            // 0x1a5ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5DD0u: goto label_1a5dd0;
            case 0x1A5DD4u: goto label_1a5dd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5DE0u;
}
