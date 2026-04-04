#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00174d30
// Address: 0x174d30 - 0x174d3c
void FUN_00174d30_0x174d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174d30_0x174d30");
#endif

    ctx->pc = 0x174d30u;

    // 0x174d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x174d34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x174d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x174d38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
}
