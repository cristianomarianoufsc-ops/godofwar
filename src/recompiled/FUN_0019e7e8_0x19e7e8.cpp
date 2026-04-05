#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019e7e8
// Address: 0x19e7e8 - 0x19e7f4
void FUN_0019e7e8_0x19e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e7e8_0x19e7e8");
#endif

    ctx->pc = 0x19e7e8u;

    // 0x19e7e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19e7ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19e7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7f0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x19e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
}
