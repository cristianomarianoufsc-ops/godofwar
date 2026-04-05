#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22fdc8
// Address: 0x22fdc8 - 0x22fde0
void entry_22fdc8_0x22fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22fdc8_0x22fde0");
#endif

    ctx->pc = 0x22fdc8u;

    // 0x22fdc8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22fdcc: 0x8c6212c0  lw          $v0, 0x12C0($v1)
    ctx->pc = 0x22fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4800)));
    // 0x22fdd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22FDD0u;
    {
        const bool branch_taken_0x22fdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fdd0) {
            ctx->pc = 0x22FDD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FDD0u;
            // 0x22fdd4: 0xac6012c0  sw          $zero, 0x12C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FDD8u;
            goto label_22fdd8;
        }
    }
    ctx->pc = 0x22FDD8u;
label_22fdd8:
    // 0x22fdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x22FDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22FDD8u: goto label_22fdd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22FDE0u;
}
