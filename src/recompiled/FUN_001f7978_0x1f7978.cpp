#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001f7978
// Address: 0x1f7978 - 0x1f7984
void FUN_001f7978_0x1f7978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7978_0x1f7978");
#endif

    ctx->pc = 0x1f7978u;

    // 0x1f7978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f797c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f7980: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f7980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
}
