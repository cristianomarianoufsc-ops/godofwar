#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0012c108
// Address: 0x12c108 - 0x12c11c
void FUN_0012c108_0x12c108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c108_0x12c108");
#endif

    ctx->pc = 0x12c108u;

    // 0x12c108: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12c108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12c10c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c10cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c110: 0x8c42f1f0  lw          $v0, -0xE10($v0)
    ctx->pc = 0x12c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963696)));
    // 0x12c114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12c114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c118: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12C118u;
    {
        const bool branch_taken_0x12c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c118) {
            ctx->pc = 0x12C168u;
            return;
        }
    }
    ctx->pc = 0x12C120u;
}
