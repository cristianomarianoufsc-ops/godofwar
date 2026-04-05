#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_209100
// Address: 0x209100 - 0x209120
void entry_209100_0x209120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_209100_0x209120");
#endif

    ctx->pc = 0x209100u;

    // 0x209100: 0x9082009e  lbu         $v0, 0x9E($a0)
    ctx->pc = 0x209100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 158)));
    // 0x209104: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x209104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x209108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20910c: 0xa082009e  sb          $v0, 0x9E($a0)
    ctx->pc = 0x20910cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 158), (uint8_t)GPR_U32(ctx, 2));
    // 0x209110: 0x8c62ed58  lw          $v0, -0x12A8($v1)
    ctx->pc = 0x209110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
    // 0x209114: 0x3e00008  jr          $ra
    ctx->pc = 0x209114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209114u;
            // 0x209118: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20911Cu;
    // 0x20911c: 0x0  nop
    ctx->pc = 0x20911cu;
    // NOP
}
