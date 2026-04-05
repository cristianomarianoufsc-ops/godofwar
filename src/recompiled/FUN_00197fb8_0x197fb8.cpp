#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00197fb8
// Address: 0x197fb8 - 0x197fc8
void FUN_00197fb8_0x197fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00197fb8_0x197fb8");
#endif

    ctx->pc = 0x197fb8u;

    // 0x197fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197fbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x197fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x197fc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x197fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x197fc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
