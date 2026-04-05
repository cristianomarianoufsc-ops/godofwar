#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001edba8
// Address: 0x1edba8 - 0x1edbc8
void FUN_001edba8_0x1edba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001edba8_0x1edba8");
#endif

    ctx->pc = 0x1edba8u;

    // 0x1edba8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1edba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1edbac: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1edbacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1edbb0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1edbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1edbb4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1edbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1edbb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1edbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edbbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1edbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1edbc0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1edbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1edbc4: 0x14a20024  bne         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EDBC4u;
    {
        const bool branch_taken_0x1edbc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1edbc4) {
            ctx->pc = 0x1EDC58u;
            return;
        }
    }
    ctx->pc = 0x1EDBCCu;
}
