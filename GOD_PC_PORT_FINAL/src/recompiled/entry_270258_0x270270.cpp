#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_270258
// Address: 0x270258 - 0x270270
void entry_270258_0x270270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_270258_0x270270");
#endif

    ctx->pc = 0x270258u;

    // 0x270258: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x270258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x27025c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x27025cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x270260: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x270260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x270264: 0x3e00008  jr          $ra
    ctx->pc = 0x270264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270264u;
            // 0x270268: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27026Cu;
    // 0x27026c: 0x0  nop
    ctx->pc = 0x27026cu;
    // NOP
}
