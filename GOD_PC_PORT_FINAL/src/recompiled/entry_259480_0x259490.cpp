#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_259480
// Address: 0x259480 - 0x259490
void entry_259480_0x259490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_259480_0x259490");
#endif

    ctx->pc = 0x259480u;

    // 0x259480: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x259480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259484: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x259484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x259488: 0x3e00008  jr          $ra
    ctx->pc = 0x259488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25948Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259488u;
            // 0x25948c: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259490u;
}
