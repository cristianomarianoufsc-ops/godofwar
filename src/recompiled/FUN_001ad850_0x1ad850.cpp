#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ad850
// Address: 0x1ad850 - 0x1ad860
void FUN_001ad850_0x1ad850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad850_0x1ad850");
#endif

    ctx->pc = 0x1ad850u;

    // 0x1ad850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ad854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ad858: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ad858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad85c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AD85Cu;
    {
        const bool branch_taken_0x1ad85c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad85c) {
            ctx->pc = 0x1AD8C0u;
            return;
        }
    }
    ctx->pc = 0x1AD864u;
}
