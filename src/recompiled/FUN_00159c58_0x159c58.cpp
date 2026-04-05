#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00159c58
// Address: 0x159c58 - 0x159c68
void FUN_00159c58_0x159c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159c58_0x159c58");
#endif

    ctx->pc = 0x159c58u;

    // 0x159c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159c5c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x159c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x159c60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x159c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x159c64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x159c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
}
