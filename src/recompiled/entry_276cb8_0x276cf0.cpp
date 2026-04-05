#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_276cb8
// Address: 0x276cb8 - 0x276cf0
void entry_276cb8_0x276cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_276cb8_0x276cf0");
#endif

    ctx->pc = 0x276cb8u;

    // 0x276cb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x276cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x276cbc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x276cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x276cc0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x276cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x276cc4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x276cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x276cc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x276cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276ccc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x276cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x276cd0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x276cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x276cd4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276CD4u;
    {
        const bool branch_taken_0x276cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276cd4) {
            ctx->pc = 0x276CE4u;
            goto label_276ce4;
        }
    }
    ctx->pc = 0x276CDCu;
    // 0x276cdc: 0x809d9f0  j           func_2767C0
    ctx->pc = 0x276CDCu;
    ctx->pc = 0x2767C0u;
    if (runtime->hasFunction(0x2767C0u)) {
        auto targetFn = runtime->lookupFunction(0x2767C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_002767c0_0x2767c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x276CE4u;
label_276ce4:
    // 0x276ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x276CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276CE4u: goto label_276ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276CECu;
    // 0x276cec: 0x0  nop
    ctx->pc = 0x276cecu;
    // NOP
}
