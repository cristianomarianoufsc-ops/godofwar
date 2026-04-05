#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0016d658
// Address: 0x16d658 - 0x16d668
void FUN_0016d658_0x16d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d658_0x16d658");
#endif

    ctx->pc = 0x16d658u;

    // 0x16d658: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16d65c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16d660: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16d664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16d664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
