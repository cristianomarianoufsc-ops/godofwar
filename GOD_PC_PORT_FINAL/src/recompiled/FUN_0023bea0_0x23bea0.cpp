#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023bea0
// Address: 0x23bea0 - 0x23beb8
void FUN_0023bea0_0x23bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023bea0_0x23bea0");
#endif

    ctx->pc = 0x23bea0u;

    // 0x23bea0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23bea4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bea8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x23bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x23beac: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x23beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x23beb0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x23beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x23beb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23beb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
