#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ae778
// Address: 0x1ae778 - 0x1ae798
void FUN_001ae778_0x1ae778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae778_0x1ae778");
#endif

    ctx->pc = 0x1ae778u;

    // 0x1ae778: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ae778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ae77c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ae77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ae780: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ae780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ae784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae788: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ae788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ae78c: 0x30b4ffff  andi        $s4, $a1, 0xFFFF
    ctx->pc = 0x1ae78cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ae790: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ae790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ae794: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ae794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
