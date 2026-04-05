#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019be80
// Address: 0x19be80 - 0x19be8c
void FUN_0019be80_0x19be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019be80_0x19be80");
#endif

    ctx->pc = 0x19be80u;

    // 0x19be80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19be84: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19be88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19be88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
