#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023a538
// Address: 0x23a538 - 0x23a54c
void FUN_0023a538_0x23a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a538_0x23a538");
#endif

    ctx->pc = 0x23a538u;

    // 0x23a538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23a53c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x23a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x23a540: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23a544: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23a544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23a548: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23a548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
