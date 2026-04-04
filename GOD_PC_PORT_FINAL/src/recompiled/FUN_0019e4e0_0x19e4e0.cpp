#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019e4e0
// Address: 0x19e4e0 - 0x19e4f0
void FUN_0019e4e0_0x19e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e4e0_0x19e4e0");
#endif

    ctx->pc = 0x19e4e0u;

    // 0x19e4e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19e4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19e4e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x19e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x19e4e8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19e4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19e4ec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
}
