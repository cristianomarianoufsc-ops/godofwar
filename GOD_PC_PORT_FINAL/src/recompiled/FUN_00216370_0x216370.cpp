#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00216370
// Address: 0x216370 - 0x216380
void FUN_00216370_0x216370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00216370_0x216370");
#endif

    ctx->pc = 0x216370u;

    // 0x216370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x216370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x216374: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x216374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x216378: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x216378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21637c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
}
