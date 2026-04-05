#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00263a88
// Address: 0x263a88 - 0x263aac
void FUN_00263a88_0x263a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00263a88_0x263a88");
#endif

    ctx->pc = 0x263a88u;

    // 0x263a88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x263a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x263a8c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x263a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x263a90: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x263a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x263a94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x263a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x263a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x263a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x263aa0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x263aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263aa4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x263aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x263aa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x263aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
