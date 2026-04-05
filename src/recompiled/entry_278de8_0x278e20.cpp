#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_278de8
// Address: 0x278de8 - 0x278e20
void entry_278de8_0x278e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_278de8_0x278e20");
#endif

    ctx->pc = 0x278de8u;

    // 0x278de8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x278de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x278dec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x278decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x278df0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x278df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x278df4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x278df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x278df8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278dfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x278dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x278e00: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x278e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x278e04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278E04u;
    {
        const bool branch_taken_0x278e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x278e04) {
            ctx->pc = 0x278E14u;
            goto label_278e14;
        }
    }
    ctx->pc = 0x278E0Cu;
    // 0x278e0c: 0x809d9f0  j           func_2767C0
    ctx->pc = 0x278E0Cu;
    ctx->pc = 0x2767C0u;
    if (runtime->hasFunction(0x2767C0u)) {
        auto targetFn = runtime->lookupFunction(0x2767C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_002767c0_0x2767c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x278E14u;
label_278e14:
    // 0x278e14: 0x3e00008  jr          $ra
    ctx->pc = 0x278E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278E14u: goto label_278e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278E1Cu;
    // 0x278e1c: 0x0  nop
    ctx->pc = 0x278e1cu;
    // NOP
}
