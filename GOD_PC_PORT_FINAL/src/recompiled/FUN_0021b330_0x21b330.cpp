#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021b330
// Address: 0x21b330 - 0x21b340
void FUN_0021b330_0x21b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b330_0x21b330");
#endif

    ctx->pc = 0x21b330u;

    // 0x21b330: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21b334: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x21b334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x21b338: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x21b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x21b33c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21b33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
