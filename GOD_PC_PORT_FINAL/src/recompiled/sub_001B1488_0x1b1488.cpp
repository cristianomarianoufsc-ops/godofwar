#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1488
// Address: 0x1b1488 - 0x1b14b8
void sub_001B1488_0x1b1488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1488_0x1b1488");
#endif

    ctx->pc = 0x1b1488u;

    // 0x1b1488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b148c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B148Cu;
    {
        const bool branch_taken_0x1b148c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B148Cu;
            // 0x1b1490: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b148c) {
            ctx->pc = 0x1B14A0u;
            goto label_1b14a0;
        }
    }
    ctx->pc = 0x1B1494u;
    // 0x1b1494: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1b1494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1b1498: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1498u;
    {
        const bool branch_taken_0x1b1498 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1498u;
            // 0x1b149c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1498) {
            ctx->pc = 0x1B14B0u;
            goto label_1b14b0;
        }
    }
    ctx->pc = 0x1B14A0u;
label_1b14a0:
    // 0x1b14a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b14a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14a4: 0xc06c3f6  jal         func_1B0FD8
    ctx->pc = 0x1B14A4u;
    SET_GPR_U32(ctx, 31, 0x1B14ACu);
    ctx->pc = 0x1B14A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14A4u;
            // 0x1b14a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FD8u;
    if (runtime->hasFunction(0x1B0FD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14ACu; }
        if (ctx->pc != 0x1B14ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001b0fd8_0x1b0fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14ACu; }
        if (ctx->pc != 0x1B14ACu) { return; }
    }
    ctx->pc = 0x1B14ACu;
    // 0x1b14ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b14acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b14b0:
    // 0x1b14b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14B0u;
            // 0x1b14b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B14A0u: goto label_1b14a0;
            case 0x1B14B0u: goto label_1b14b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B14B8u;
}
