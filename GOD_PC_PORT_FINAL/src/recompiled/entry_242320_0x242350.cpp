#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_242320
// Address: 0x242320 - 0x242350
void entry_242320_0x242350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_242320_0x242350");
#endif

    ctx->pc = 0x242320u;

    // 0x242320: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x242320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x242324: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x242324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242328: 0x24632338  addiu       $v1, $v1, 0x2338
    ctx->pc = 0x242328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9016));
    // 0x24232c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x24232cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x242330: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x242330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x242334: 0x3e00008  jr          $ra
    ctx->pc = 0x242334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242334u;
            // 0x242338: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24233Cu;
    // 0x24233c: 0x0  nop
    ctx->pc = 0x24233cu;
    // NOP
    // 0x242340: 0x3e00008  jr          $ra
    ctx->pc = 0x242340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242340u;
            // 0x242344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242348u;
    // 0x242348: 0x3e00008  jr          $ra
    ctx->pc = 0x242348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242348u;
            // 0x24234c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242350u;
}
