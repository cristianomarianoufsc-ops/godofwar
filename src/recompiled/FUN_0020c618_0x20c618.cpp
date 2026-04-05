#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0020c618
// Address: 0x20c618 - 0x20c624
void FUN_0020c618_0x20c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020c618_0x20c618");
#endif

    ctx->pc = 0x20c618u;

    // 0x20c618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c61c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20c620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
