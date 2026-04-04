#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_25ae28
// Address: 0x25ae28 - 0x25ae38
void entry_25ae28_0x25ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_25ae28_0x25ae38");
#endif

    ctx->pc = 0x25ae28u;

    // 0x25ae28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ae2c: 0x3e00008  jr          $ra
    ctx->pc = 0x25AE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE2Cu;
            // 0x25ae30: 0xa4c20072  sh          $v0, 0x72($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AE34u;
    // 0x25ae34: 0x0  nop
    ctx->pc = 0x25ae34u;
    // NOP
}
