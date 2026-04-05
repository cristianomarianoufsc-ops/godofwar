#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00269848
// Address: 0x269848 - 0x269864
void FUN_00269848_0x269848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00269848_0x269848");
#endif

    ctx->pc = 0x269848u;

    // 0x269848: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x269848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26984c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x26984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x269850: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x269850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x269854: 0x24423a50  addiu       $v0, $v0, 0x3A50
    ctx->pc = 0x269854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14928));
    // 0x269858: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x269858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x26985c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26985cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269860: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x269860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
}
