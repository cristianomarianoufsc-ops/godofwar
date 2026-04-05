#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22aac8
// Address: 0x22aac8 - 0x22aae0
void entry_22aac8_0x22aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22aac8_0x22aae0");
#endif

    ctx->pc = 0x22aac8u;

    // 0x22aac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aacc: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x22aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x22aad0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x22aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x22aad4: 0x3e00008  jr          $ra
    ctx->pc = 0x22AAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AAD4u;
            // 0x22aad8: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AADCu;
    // 0x22aadc: 0x0  nop
    ctx->pc = 0x22aadcu;
    // NOP
}
