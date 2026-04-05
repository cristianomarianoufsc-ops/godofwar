#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_187a08
// Address: 0x187a08 - 0x187a28
void entry_187a08_0x187a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_187a08_0x187a28");
#endif

    ctx->pc = 0x187a08u;

    // 0x187a08: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x187a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187A0Cu;
    {
        const bool branch_taken_0x187a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A0Cu;
            // 0x187a10: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a0c) {
            ctx->pc = 0x187A1Cu;
            goto label_187a1c;
        }
    }
    ctx->pc = 0x187A14u;
    // 0x187a14: 0x3e00008  jr          $ra
    ctx->pc = 0x187A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A14u;
            // 0x187a18: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187A1Cu: goto label_187a1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187A1Cu;
label_187a1c:
    // 0x187a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x187A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A1Cu;
            // 0x187a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187A1Cu: goto label_187a1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187A24u;
    // 0x187a24: 0x0  nop
    ctx->pc = 0x187a24u;
    // NOP
}
