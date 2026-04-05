#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3430
// Address: 0x1b3430 - 0x1b34a0
void sub_001B3430_0x1b3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3430_0x1b3430");
#endif

    ctx->pc = 0x1b3430u;

    // 0x1b3430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3434: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b343c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1B343Cu;
    SET_GPR_U32(ctx, 31, 0x1B3444u);
    ctx->pc = 0x1B3440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B343Cu;
            // 0x1b3440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3444u; }
        if (ctx->pc != 0x1B3444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3444u; }
        if (ctx->pc != 0x1B3444u) { return; }
    }
    ctx->pc = 0x1B3444u;
    // 0x1b3444: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3444u;
    {
        const bool branch_taken_0x1b3444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3444u;
            // 0x1b3448: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3444) {
            ctx->pc = 0x1B345Cu;
            goto label_1b345c;
        }
    }
    ctx->pc = 0x1B344Cu;
    // 0x1b344c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B344Cu;
    {
        const bool branch_taken_0x1b344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B344Cu;
            // 0x1b3450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b344c) {
            ctx->pc = 0x1B348Cu;
            goto label_1b348c;
        }
    }
    ctx->pc = 0x1B3454u;
label_1b3454:
    // 0x1b3454: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B3454u;
    {
        const bool branch_taken_0x1b3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3454u;
            // 0x1b3458: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3454) {
            ctx->pc = 0x1B348Cu;
            goto label_1b348c;
        }
    }
    ctx->pc = 0x1B345Cu;
label_1b345c:
    // 0x1b345c: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1b345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1b3460:
    // 0x1b3460: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b3460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b3464: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1b3464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b3468: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b346c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3470: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1b3470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1b3474: 0x1050fff7  beq         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B3474u;
    {
        const bool branch_taken_0x1b3474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B3478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3474u;
            // 0x1b3478: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3474) {
            ctx->pc = 0x1B3454u;
            runtime->cooperativeGuestYield();
            goto label_1b3454;
        }
    }
    ctx->pc = 0x1B347Cu;
    // 0x1b347c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1b347cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3480: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B3480u;
    {
        const bool branch_taken_0x1b3480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3480) {
            ctx->pc = 0x1B3484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3480u;
            // 0x1b3484: 0x2403006c  addiu       $v1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3460u;
            runtime->cooperativeGuestYield();
            goto label_1b3460;
        }
    }
    ctx->pc = 0x1B3488u;
    // 0x1b3488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b348c:
    // 0x1b348c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b348cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3494: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3494u;
            // 0x1b3498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3454u: goto label_1b3454;
            case 0x1B345Cu: goto label_1b345c;
            case 0x1B3460u: goto label_1b3460;
            case 0x1B348Cu: goto label_1b348c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B349Cu;
    // 0x1b349c: 0x0  nop
    ctx->pc = 0x1b349cu;
    // NOP
}
