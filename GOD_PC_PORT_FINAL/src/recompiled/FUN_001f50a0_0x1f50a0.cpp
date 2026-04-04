#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001f50a0
// Address: 0x1f50a0 - 0x1f50b0
void FUN_001f50a0_0x1f50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f50a0_0x1f50a0");
#endif

    ctx->pc = 0x1f50a0u;

    // 0x1f50a0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1f50a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1f50a4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f50a8: 0xe7ba0230  swc1        $f26, 0x230($sp)
    ctx->pc = 0x1f50a8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x1f50ac: 0x244233c0  addiu       $v0, $v0, 0x33C0
    ctx->pc = 0x1f50acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13248));
}
