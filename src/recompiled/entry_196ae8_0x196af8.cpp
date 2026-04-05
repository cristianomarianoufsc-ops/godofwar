#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_196ae8
// Address: 0x196ae8 - 0x196af8
void entry_196ae8_0x196af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_196ae8_0x196af8");
#endif

    ctx->pc = 0x196ae8u;

    // 0x196ae8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x196aec: 0x8c42c994  lw          $v0, -0x366C($v0)
    ctx->pc = 0x196aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x196af0: 0x3e00008  jr          $ra
    ctx->pc = 0x196AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196AF0u;
            // 0x196af4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196AF8u;
}
