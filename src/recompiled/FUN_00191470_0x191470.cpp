#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00191470
// Address: 0x191470 - 0x19147c
void FUN_00191470_0x191470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191470_0x191470");
#endif

    ctx->pc = 0x191470u;

    // 0x191470: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x191474: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x191474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x191478: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x191478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
