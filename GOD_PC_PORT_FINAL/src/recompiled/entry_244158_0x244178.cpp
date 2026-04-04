#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_244158
// Address: 0x244158 - 0x244178
void entry_244158_0x244178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_244158_0x244178");
#endif

    ctx->pc = 0x244158u;

    // 0x244158: 0x3e00008  jr          $ra
    ctx->pc = 0x244158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244158u;
            // 0x24415c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244160u;
    // 0x244160: 0x8c422820  lw          $v0, 0x2820($v0)
    ctx->pc = 0x244160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10272)));
    // 0x244164: 0x0  nop
    ctx->pc = 0x244164u;
    // NOP
    // 0x244168: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x244168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24416c: 0x0  nop
    ctx->pc = 0x24416cu;
    // NOP
    // 0x244170: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x244170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x244174: 0x0  nop
    ctx->pc = 0x244174u;
    // NOP
}
