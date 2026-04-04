#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00264fd8
// Address: 0x264fd8 - 0x264fec
void FUN_00264fd8_0x264fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00264fd8_0x264fd8");
#endif

    ctx->pc = 0x264fd8u;

    // 0x264fd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x264fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x264fdc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x264fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x264fe0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x264fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x264fe4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x264fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x264fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
