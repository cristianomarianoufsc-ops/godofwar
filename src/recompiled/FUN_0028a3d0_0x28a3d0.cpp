#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0028a3d0
// Address: 0x28a3d0 - 0x28a3e0
void FUN_0028a3d0_0x28a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0028a3d0_0x28a3d0");
#endif

    ctx->pc = 0x28a3d0u;

    // 0x28a3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a3d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28a3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a3dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x28a3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
