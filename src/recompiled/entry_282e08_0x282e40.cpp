#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282e08
// Address: 0x282e08 - 0x282e40
void entry_282e08_0x282e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282e08_0x282e40");
#endif

    ctx->pc = 0x282e08u;

    // 0x282e08: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x282e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282e0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x282e0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e10: 0x24442748  addiu       $a0, $v0, 0x2748
    ctx->pc = 0x282e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x282e14: 0x0  nop
    ctx->pc = 0x282e14u;
    // NOP
label_282e18:
    // 0x282e18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x282e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282e1c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x282E1Cu;
    {
        const bool branch_taken_0x282e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282e1c) {
            ctx->pc = 0x282E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282E1Cu;
            // 0x282e20: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282E2Cu;
            goto label_282e2c;
        }
    }
    ctx->pc = 0x282E24u;
    // 0x282e24: 0x3e00008  jr          $ra
    ctx->pc = 0x282E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E24u;
            // 0x282e28: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282E18u: goto label_282e18;
            case 0x282E2Cu: goto label_282e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282E2Cu;
label_282e2c:
    // 0x282e2c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x282e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x282e30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282E30u;
    {
        const bool branch_taken_0x282e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E30u;
            // 0x282e34: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e30) {
            ctx->pc = 0x282E18u;
            runtime->cooperativeGuestYield();
            goto label_282e18;
        }
    }
    ctx->pc = 0x282E38u;
    // 0x282e38: 0x3e00008  jr          $ra
    ctx->pc = 0x282E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E38u;
            // 0x282e3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282E18u: goto label_282e18;
            case 0x282E2Cu: goto label_282e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282E40u;
}
