#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2940a0
// Address: 0x2940a0 - 0x2940b0
void entry_2940a0_0x2940b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2940a0_0x2940b0");
#endif

    ctx->pc = 0x2940a0u;

    // 0x2940a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2940a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2940a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2940A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2940A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2940A4u;
            // 0x2940a8: 0xac404aa8  sw          $zero, 0x4AA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 19112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2940ACu;
    // 0x2940ac: 0x0  nop
    ctx->pc = 0x2940acu;
    // NOP
}
