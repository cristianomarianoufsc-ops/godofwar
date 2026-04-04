#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22d458
// Address: 0x22d458 - 0x22d488
void entry_22d458_0x22d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22d458_0x22d488");
#endif

    ctx->pc = 0x22d458u;

    // 0x22d458: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x22d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d45c: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22D45Cu;
    {
        const bool branch_taken_0x22d45c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x22D460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D45Cu;
            // 0x22d460: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d45c) {
            ctx->pc = 0x22D480u;
            goto label_22d480;
        }
    }
    ctx->pc = 0x22D464u;
    // 0x22d464: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22d464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22d468: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x22d468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22d46c: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x22d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
    // 0x22d470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d474: 0x3e00008  jr          $ra
    ctx->pc = 0x22D474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D474u;
            // 0x22d478: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D480u: goto label_22d480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D47Cu;
    // 0x22d47c: 0x0  nop
    ctx->pc = 0x22d47cu;
    // NOP
label_22d480:
    // 0x22d480: 0x3e00008  jr          $ra
    ctx->pc = 0x22D480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D480u;
            // 0x22d484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D480u: goto label_22d480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D488u;
}
