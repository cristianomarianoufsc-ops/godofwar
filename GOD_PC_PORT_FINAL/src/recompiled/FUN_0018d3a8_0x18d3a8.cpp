#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018d3a8
// Address: 0x18d3a8 - 0x18d3b0
void FUN_0018d3a8_0x18d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018d3a8_0x18d3a8");
#endif

    ctx->pc = 0x18d3a8u;

    // 0x18d3a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
}
