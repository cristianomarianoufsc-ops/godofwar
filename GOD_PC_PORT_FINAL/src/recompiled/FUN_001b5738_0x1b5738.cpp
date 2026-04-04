#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001b5738
// Address: 0x1b5738 - 0x1b5744
void FUN_001b5738_0x1b5738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5738_0x1b5738");
#endif

    ctx->pc = 0x1b5738u;

    // 0x1b5738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b573c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1b573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5740: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b5740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
}
