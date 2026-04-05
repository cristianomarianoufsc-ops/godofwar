#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_239140
// Address: 0x239140 - 0x239168
void entry_239140_0x239168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_239140_0x239168");
#endif

    ctx->pc = 0x239140u;

    // 0x239140: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x239140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x239144: 0x8c42c4b4  lw          $v0, -0x3B4C($v0)
    ctx->pc = 0x239144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952116)));
    // 0x239148: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239148u;
    {
        const bool branch_taken_0x239148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x239148) {
            ctx->pc = 0x239160u;
            goto label_239160;
        }
    }
    ctx->pc = 0x239150u;
    // 0x239150: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x239150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239154: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x239154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x239158: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23915c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23915cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_239160:
    // 0x239160: 0x3e00008  jr          $ra
    ctx->pc = 0x239160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239160u: goto label_239160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239168u;
}
