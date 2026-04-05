#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010d3b8
// Address: 0x10d3b8 - 0x10d3c0
void FUN_0010d3b8_0x10d3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010d3b8_0x10d3b8");
#endif

    ctx->pc = 0x10d3b8u;

    // 0x10d3b8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x10d3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x10d3bc: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x10d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
}
