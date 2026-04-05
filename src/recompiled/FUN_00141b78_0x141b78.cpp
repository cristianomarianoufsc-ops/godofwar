#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00141b78
// Address: 0x141b78 - 0x141b90
void FUN_00141b78_0x141b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00141b78_0x141b78");
#endif

    ctx->pc = 0x141b78u;

    // 0x141b78: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x141b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x141b7c: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x141b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x141b80: 0x8c42104c  lw          $v0, 0x104C($v0)
    ctx->pc = 0x141b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
    // 0x141b84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x141b84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b88: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x141b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x141b8c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x141b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
}
