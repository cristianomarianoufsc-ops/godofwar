#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002640f0
// Address: 0x2640f0 - 0x2640fc
void FUN_002640f0_0x2640f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002640f0_0x2640f0");
#endif

    ctx->pc = 0x2640f0u;

    // 0x2640f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2640f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2640f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2640f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2640f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2640f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
}
