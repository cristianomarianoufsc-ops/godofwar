#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1bbcf8
// Address: 0x1bbcf8 - 0x1bbd08
void entry_1bbcf8_0x1bbd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1bbcf8_0x1bbd08");
#endif

    ctx->pc = 0x1bbcf8u;

    // 0x1bbcf8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bbcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCFCu;
            // 0x1bbd00: 0x8c42cc54  lw          $v0, -0x33AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954068)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBD04u;
    // 0x1bbd04: 0x0  nop
    ctx->pc = 0x1bbd04u;
    // NOP
}
