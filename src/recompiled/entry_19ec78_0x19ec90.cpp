#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_19ec78
// Address: 0x19ec78 - 0x19ec90
void entry_19ec78_0x19ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_19ec78_0x19ec90");
#endif

    ctx->pc = 0x19ec78u;

    // 0x19ec78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ec7c: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x19ec7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ec80: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x19ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x19ec84: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC84u;
            // 0x19ec88: 0xa0800034  sb          $zero, 0x34($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EC8Cu;
    // 0x19ec8c: 0x0  nop
    ctx->pc = 0x19ec8cu;
    // NOP
}
