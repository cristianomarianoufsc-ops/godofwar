#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023a718
// Address: 0x23a718 - 0x23a728
void FUN_0023a718_0x23a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a718_0x23a718");
#endif

    ctx->pc = 0x23a718u;

    // 0x23a718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a71c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23a71cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a720: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23a724: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x23a724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
}
