#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_244178
// Address: 0x244178 - 0x244190
void entry_244178_0x244190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_244178_0x244190");
#endif

    ctx->pc = 0x244178u;

    // 0x244178: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x244178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x24417c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x24417cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x244180: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x244180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x244184: 0x3e00008  jr          $ra
    ctx->pc = 0x244184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244184u;
            // 0x244188: 0xac820070  sw          $v0, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24418Cu;
    // 0x24418c: 0x0  nop
    ctx->pc = 0x24418cu;
    // NOP
}
