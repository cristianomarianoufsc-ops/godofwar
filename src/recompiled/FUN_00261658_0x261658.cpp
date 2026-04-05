#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00261658
// Address: 0x261658 - 0x261664
void FUN_00261658_0x261658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00261658_0x261658");
#endif

    ctx->pc = 0x261658u;

    // 0x261658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x261658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26165c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x26165cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x261660: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x261660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
