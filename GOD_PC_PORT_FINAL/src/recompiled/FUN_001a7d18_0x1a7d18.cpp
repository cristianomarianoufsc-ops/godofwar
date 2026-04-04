#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a7d18
// Address: 0x1a7d18 - 0x1a7d40
void FUN_001a7d18_0x1a7d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7d18_0x1a7d18");
#endif

    ctx->pc = 0x1a7d18u;

    // 0x1a7d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a7d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a7d1c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a7d20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a7d24: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1a7d28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a7d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a7d2c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1a7d30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a7d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a7d34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7d38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a7d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a7d3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a7d3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
