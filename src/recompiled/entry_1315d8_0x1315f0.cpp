#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1315d8
// Address: 0x1315d8 - 0x1315f0
void entry_1315d8_0x1315f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1315d8_0x1315f0");
#endif

    ctx->pc = 0x1315d8u;

    // 0x1315d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1315D8u;
    {
        const bool branch_taken_0x1315d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315d8) {
            ctx->pc = 0x1315E8u;
            goto label_1315e8;
        }
    }
    ctx->pc = 0x1315E0u;
    // 0x1315e0: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x1315e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x1315e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1315e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1315e8:
    // 0x1315e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1315E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1315ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1315E8u;
            // 0x1315ec: 0x8c820108  lw          $v0, 0x108($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1315E8u: goto label_1315e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1315F0u;
}
