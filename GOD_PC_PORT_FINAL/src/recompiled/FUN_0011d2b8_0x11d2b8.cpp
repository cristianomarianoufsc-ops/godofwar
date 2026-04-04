#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011d2b8
// Address: 0x11d2b8 - 0x11d2c4
void FUN_0011d2b8_0x11d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011d2b8_0x11d2b8");
#endif

    ctx->pc = 0x11d2b8u;

    // 0x11d2b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d2bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11d2c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11d2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
