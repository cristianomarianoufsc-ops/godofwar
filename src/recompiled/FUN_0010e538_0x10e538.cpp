#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010e538
// Address: 0x10e538 - 0x10e548
void FUN_0010e538_0x10e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e538_0x10e538");
#endif

    ctx->pc = 0x10e538u;

    // 0x10e538: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x10e538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x10e53c: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x10e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x10e540: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x10e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x10e544: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10e544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
