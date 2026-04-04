#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175a60
// Address: 0x175a60 - 0x175a70
void entry_175a60_0x175a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175a60_0x175a70");
#endif

    ctx->pc = 0x175a60u;

    // 0x175a60: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x175a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x175a64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x175a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a68: 0x3e00008  jr          $ra
    ctx->pc = 0x175A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175A68u;
            // 0x175a6c: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175A70u;
}
