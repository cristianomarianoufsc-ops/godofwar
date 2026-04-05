#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00134448
// Address: 0x134448 - 0x134464
void FUN_00134448_0x134448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134448_0x134448");
#endif

    ctx->pc = 0x134448u;

    // 0x134448: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x134448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13444c: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x13444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x134450: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x134450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x134454: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x134454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x134458: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x134458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13445c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13445cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134460: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x134460u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
}
