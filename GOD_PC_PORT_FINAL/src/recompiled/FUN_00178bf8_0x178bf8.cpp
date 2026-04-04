#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00178bf8
// Address: 0x178bf8 - 0x178c0c
void FUN_00178bf8_0x178bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178bf8_0x178bf8");
#endif

    ctx->pc = 0x178bf8u;

    // 0x178bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178bfc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x178bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x178c00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178c04: 0x24633838  addiu       $v1, $v1, 0x3838
    ctx->pc = 0x178c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14392));
    // 0x178c08: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
}
