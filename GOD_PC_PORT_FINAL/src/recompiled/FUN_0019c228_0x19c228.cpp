#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019c228
// Address: 0x19c228 - 0x19c230
void FUN_0019c228_0x19c228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c228_0x19c228");
#endif

    ctx->pc = 0x19c228u;

    // 0x19c228: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19c22c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19c22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
