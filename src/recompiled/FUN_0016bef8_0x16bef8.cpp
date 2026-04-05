#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0016bef8
// Address: 0x16bef8 - 0x16bf04
void FUN_0016bef8_0x16bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bef8_0x16bef8");
#endif

    ctx->pc = 0x16bef8u;

    // 0x16bef8: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x16bef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
    // 0x16befc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16befcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16bf00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16bf00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
}
