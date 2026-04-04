#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_244de0
// Address: 0x244de0 - 0x244e08
void entry_244de0_0x244e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_244de0_0x244e08");
#endif

    ctx->pc = 0x244de0u;

    // 0x244de0: 0x3e00008  jr          $ra
    ctx->pc = 0x244DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244DE0u;
            // 0x244de4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244DE8u;
    // 0x244de8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244dec: 0x0  nop
    ctx->pc = 0x244decu;
    // NOP
    // 0x244df0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244df4: 0x0  nop
    ctx->pc = 0x244df4u;
    // NOP
    // 0x244df8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x244df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x244dfc: 0x0  nop
    ctx->pc = 0x244dfcu;
    // NOP
    // 0x244e00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x244e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x244e04: 0x0  nop
    ctx->pc = 0x244e04u;
    // NOP
}
