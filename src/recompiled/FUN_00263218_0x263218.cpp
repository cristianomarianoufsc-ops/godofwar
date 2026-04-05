#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00263218
// Address: 0x263218 - 0x26322c
void FUN_00263218_0x263218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00263218_0x263218");
#endif

    ctx->pc = 0x263218u;

    // 0x263218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x263218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26321c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x26321cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x263220: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x263220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x263224: 0x2442fa28  addiu       $v0, $v0, -0x5D8
    ctx->pc = 0x263224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965800));
    // 0x263228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
