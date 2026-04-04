#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0020c308
// Address: 0x20c308 - 0x20c338
void FUN_0020c308_0x20c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020c308_0x20c308");
#endif

    ctx->pc = 0x20c308u;

    // 0x20c308: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20c308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20c30c: 0x8c42bde0  lw          $v0, -0x4220($v0)
    ctx->pc = 0x20c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x20c310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C310u;
    {
        const bool branch_taken_0x20c310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c310) {
            ctx->pc = 0x20C330u;
            goto label_20c330;
        }
    }
    ctx->pc = 0x20C318u;
    // 0x20c318: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x20c318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x20c31c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x20c320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C320u;
    {
        const bool branch_taken_0x20c320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C320u;
            // 0x20c324: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c320) {
            ctx->pc = 0x20C330u;
            goto label_20c330;
        }
    }
    ctx->pc = 0x20C328u;
    // 0x20c328: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x20c328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x20c32c: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x20c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_20c330:
    // 0x20c330: 0x3e00008  jr          $ra
    ctx->pc = 0x20C330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C330u: goto label_20c330;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C338u;
}
