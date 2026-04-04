#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0029a448
// Address: 0x29a448 - 0x29a450
void FUN_0029a448_0x29a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0029a448_0x29a448");
#endif

    ctx->pc = 0x29a448u;

    // 0x29a448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a44c: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x29a44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
}
