#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1461e0
// Address: 0x1461e0 - 0x146208
void entry_1461e0_0x146208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1461e0_0x146208");
#endif

    ctx->pc = 0x1461e0u;

    // 0x1461e0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1461e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1461e4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1461e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1461e8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1461e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1461ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1461ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1461f0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1461f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1461f4: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x1461f8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1461f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1461fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1461FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1461FCu;
            // 0x146200: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146204u;
    // 0x146204: 0x0  nop
    ctx->pc = 0x146204u;
    // NOP
}
