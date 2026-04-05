#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243da8
// Address: 0x243da8 - 0x243dc0
void entry_243da8_0x243dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243da8_0x243dc0");
#endif

    ctx->pc = 0x243da8u;

    // 0x243da8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x243da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x243dac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x243dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243db0: 0x246320b0  addiu       $v1, $v1, 0x20B0
    ctx->pc = 0x243db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8368));
    // 0x243db4: 0x3e00008  jr          $ra
    ctx->pc = 0x243DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DB4u;
            // 0x243db8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243DBCu;
    // 0x243dbc: 0x0  nop
    ctx->pc = 0x243dbcu;
    // NOP
}
