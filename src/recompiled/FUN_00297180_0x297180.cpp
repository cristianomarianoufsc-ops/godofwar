#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00297180
// Address: 0x297180 - 0x29718c
void FUN_00297180_0x297180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00297180_0x297180");
#endif

    ctx->pc = 0x297180u;

    // 0x297180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297184: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x297184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297188: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x297188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
}
