#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b8300
// Address: 0x1b8300 - 0x1b8318
void entry_1b8300_0x1b8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b8300_0x1b8318");
#endif

    ctx->pc = 0x1b8300u;

    // 0x1b8300: 0xac8002b8  sw          $zero, 0x2B8($a0)
    ctx->pc = 0x1b8300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 696), GPR_U32(ctx, 0));
    // 0x1b8304: 0xac8002ac  sw          $zero, 0x2AC($a0)
    ctx->pc = 0x1b8304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 684), GPR_U32(ctx, 0));
    // 0x1b8308: 0xac8002b0  sw          $zero, 0x2B0($a0)
    ctx->pc = 0x1b8308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 0));
    // 0x1b830c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B830Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B830Cu;
            // 0x1b8310: 0xac8002b4  sw          $zero, 0x2B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8314u;
    // 0x1b8314: 0x0  nop
    ctx->pc = 0x1b8314u;
    // NOP
}
