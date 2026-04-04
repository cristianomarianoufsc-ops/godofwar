#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002a57d8
// Address: 0x2a57d8 - 0x2a57e0
void FUN_002a57d8_0x2a57d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002a57d8_0x2a57d8");
#endif

    ctx->pc = 0x2a57d8u;

    // 0x2a57d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a57d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a57dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a57dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
