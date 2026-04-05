#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15f240
// Address: 0x15f240 - 0x15f268
void entry_15f240_0x15f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15f240_0x15f268");
#endif

    ctx->pc = 0x15f240u;

    // 0x15f240: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x15f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15f244: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15f248: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x15f248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x15f24c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x15f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15f250: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x15f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15f254: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x15f254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x15f258: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x15f258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x15f25c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F25Cu;
            // 0x15f260: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F264u;
    // 0x15f264: 0x0  nop
    ctx->pc = 0x15f264u;
    // NOP
}
