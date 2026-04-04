#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_279ef0
// Address: 0x279ef0 - 0x279f28
void entry_279ef0_0x279f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_279ef0_0x279f28");
#endif

    ctx->pc = 0x279ef0u;

    // 0x279ef0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x279EF0u;
    {
        const bool branch_taken_0x279ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EF0u;
            // 0x279ef4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ef0) {
            ctx->pc = 0x279F1Cu;
            goto label_279f1c;
        }
    }
    ctx->pc = 0x279EF8u;
    // 0x279ef8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x279ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x279efc: 0x0  nop
    ctx->pc = 0x279efcu;
    // NOP
label_279f00:
    // 0x279f00: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x279f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x279f04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x279f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x279f08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x279f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279f0c: 0x0  nop
    ctx->pc = 0x279f0cu;
    // NOP
    // 0x279f10: 0x0  nop
    ctx->pc = 0x279f10u;
    // NOP
    // 0x279f14: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279F14u;
    {
        const bool branch_taken_0x279f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x279f14) {
            ctx->pc = 0x279F00u;
            runtime->cooperativeGuestYield();
            goto label_279f00;
        }
    }
    ctx->pc = 0x279F1Cu;
label_279f1c:
    // 0x279f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x279F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279F00u: goto label_279f00;
            case 0x279F1Cu: goto label_279f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279F24u;
    // 0x279f24: 0x0  nop
    ctx->pc = 0x279f24u;
    // NOP
}
