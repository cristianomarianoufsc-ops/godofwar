#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175948
// Address: 0x175948 - 0x175958
void entry_175948_0x175958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175948_0x175958");
#endif

    ctx->pc = 0x175948u;

    // 0x175948: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x175948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17594c: 0x3e00008  jr          $ra
    ctx->pc = 0x17594Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17594Cu;
            // 0x175950: 0x8c424a64  lw          $v0, 0x4A64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19044)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175954u;
    // 0x175954: 0x0  nop
    ctx->pc = 0x175954u;
    // NOP
}
