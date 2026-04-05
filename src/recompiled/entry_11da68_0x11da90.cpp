#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11da68
// Address: 0x11da68 - 0x11da90
void entry_11da68_0x11da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11da68_0x11da90");
#endif

    ctx->pc = 0x11da68u;

    // 0x11da68: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DA68u;
    {
        const bool branch_taken_0x11da68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da68) {
            ctx->pc = 0x11DA88u;
            goto label_11da88;
        }
    }
    ctx->pc = 0x11DA70u;
    // 0x11da70: 0x8c831050  lw          $v1, 0x1050($a0)
    ctx->pc = 0x11da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4176)));
    // 0x11da74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11da74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11da78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11da7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11da80: 0xac45083c  sw          $a1, 0x83C($v0)
    ctx->pc = 0x11da80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2108), GPR_U32(ctx, 5));
    // 0x11da84: 0xac831050  sw          $v1, 0x1050($a0)
    ctx->pc = 0x11da84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4176), GPR_U32(ctx, 3));
label_11da88:
    // 0x11da88: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DA88u: goto label_11da88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DA90u;
}
