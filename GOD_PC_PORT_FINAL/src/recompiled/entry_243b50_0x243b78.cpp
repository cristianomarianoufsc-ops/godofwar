#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243b50
// Address: 0x243b50 - 0x243b78
void entry_243b50_0x243b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243b50_0x243b78");
#endif

    ctx->pc = 0x243b50u;

    // 0x243b50: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x243b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x243b54: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x243b54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x243b58: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x243b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x243b5c: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x243b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x243b60: 0x3e00008  jr          $ra
    ctx->pc = 0x243B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B60u;
            // 0x243b64: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243B68u;
    // 0x243b68: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x243b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x243b6c: 0x0  nop
    ctx->pc = 0x243b6cu;
    // NOP
    // 0x243b70: 0x8c426c40  lw          $v0, 0x6C40($v0)
    ctx->pc = 0x243b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27712)));
    // 0x243b74: 0x0  nop
    ctx->pc = 0x243b74u;
    // NOP
}
