#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001855e8
// Address: 0x1855e8 - 0x1855fc
void FUN_001855e8_0x1855e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001855e8_0x1855e8");
#endif

    ctx->pc = 0x1855e8u;

    // 0x1855e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1855e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1855ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1855ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1855f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1855f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1855f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1855f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1855f8: 0xac43c818  sw          $v1, -0x37E8($v0)
    ctx->pc = 0x1855f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952984), GPR_U32(ctx, 3));
}
