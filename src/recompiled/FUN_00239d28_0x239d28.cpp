#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00239d28
// Address: 0x239d28 - 0x239d30
void FUN_00239d28_0x239d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239d28_0x239d28");
#endif

    ctx->pc = 0x239d28u;

    // 0x239d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239d2c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x239d2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
}
