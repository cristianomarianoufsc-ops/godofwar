#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026af28
// Address: 0x26af28 - 0x26af38
void FUN_0026af28_0x26af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026af28_0x26af28");
#endif

    ctx->pc = 0x26af28u;

    // 0x26af28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26af28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26af2c: 0x240203eb  addiu       $v0, $zero, 0x3EB
    ctx->pc = 0x26af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    // 0x26af30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26af34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26af34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
