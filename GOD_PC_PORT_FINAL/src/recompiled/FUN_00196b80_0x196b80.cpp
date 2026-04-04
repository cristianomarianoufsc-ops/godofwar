#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00196b80
// Address: 0x196b80 - 0x196b9c
void FUN_00196b80_0x196b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196b80_0x196b80");
#endif

    ctx->pc = 0x196b80u;

    // 0x196b80: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x196b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x196b84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196b88: 0x8ca2c99c  lw          $v0, -0x3664($a1)
    ctx->pc = 0x196b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953372)));
    // 0x196b8c: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x196b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x196b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196b94: 0x24636b48  addiu       $v1, $v1, 0x6B48
    ctx->pc = 0x196b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27464));
    // 0x196b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
