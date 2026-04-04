#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00258bd8
// Address: 0x258bd8 - 0x258be4
void FUN_00258bd8_0x258bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00258bd8_0x258bd8");
#endif

    ctx->pc = 0x258bd8u;

    // 0x258bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258bdc: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x258bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x258be0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
}
