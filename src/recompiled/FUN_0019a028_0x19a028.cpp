#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019a028
// Address: 0x19a028 - 0x19a030
void FUN_0019a028_0x19a028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a028_0x19a028");
#endif

    ctx->pc = 0x19a028u;

    // 0x19a028: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
    // 0x19a02c: 0x7fb60840  sq          $s6, 0x840($sp)
    ctx->pc = 0x19a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 22));
}
