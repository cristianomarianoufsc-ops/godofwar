#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15dd80
// Address: 0x15dd80 - 0x15ddb0
void entry_15dd80_0x15ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15dd80_0x15ddb0");
#endif

    ctx->pc = 0x15dd80u;

    // 0x15dd80: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x15dd84: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x15dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x15dd88: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x15dd88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15dd8c: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x15dd8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15dd90: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x15dd94: 0x24a5013c  addiu       $a1, $a1, 0x13C
    ctx->pc = 0x15dd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 316));
    // 0x15dd98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15dd9c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15dda0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x15dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15dda4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15dda8: 0x3e00008  jr          $ra
    ctx->pc = 0x15DDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDA8u;
            // 0x15ddac: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DDB0u;
}
