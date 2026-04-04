#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023d6b8
// Address: 0x23d6b8 - 0x23d6c8
void FUN_0023d6b8_0x23d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d6b8_0x23d6b8");
#endif

    ctx->pc = 0x23d6b8u;

    // 0x23d6b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23d6bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23d6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d6c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23d6c4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x23d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
}
