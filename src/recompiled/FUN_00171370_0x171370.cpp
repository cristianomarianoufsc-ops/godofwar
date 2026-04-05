#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00171370
// Address: 0x171370 - 0x17137c
void FUN_00171370_0x171370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171370_0x171370");
#endif

    ctx->pc = 0x171370u;

    // 0x171370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x171370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x171374: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x171374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x171378: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x171378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
}
