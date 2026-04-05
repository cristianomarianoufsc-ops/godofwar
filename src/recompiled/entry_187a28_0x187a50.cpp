#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_187a28
// Address: 0x187a28 - 0x187a50
void entry_187a28_0x187a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_187a28_0x187a50");
#endif

    ctx->pc = 0x187a28u;

    // 0x187a28: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x187a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x187a2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187A2Cu;
    {
        const bool branch_taken_0x187a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187a2c) {
            ctx->pc = 0x187A48u;
            goto label_187a48;
        }
    }
    ctx->pc = 0x187A34u;
    // 0x187a34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187a38: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x187a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x187a3c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x187a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x187a40: 0x3e00008  jr          $ra
    ctx->pc = 0x187A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A40u;
            // 0x187a44: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187A48u: goto label_187a48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187A48u;
label_187a48:
    // 0x187a48: 0x3e00008  jr          $ra
    ctx->pc = 0x187A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A48u;
            // 0x187a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187A48u: goto label_187a48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187A50u;
}
