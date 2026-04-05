#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00134708
// Address: 0x134708 - 0x134718
void FUN_00134708_0x134708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134708_0x134708");
#endif

    ctx->pc = 0x134708u;

    // 0x134708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x134708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13470c: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x13470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x134710: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x134710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x134714: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x134714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
