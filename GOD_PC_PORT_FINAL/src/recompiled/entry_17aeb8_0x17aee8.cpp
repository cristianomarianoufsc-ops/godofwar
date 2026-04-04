#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17aeb8
// Address: 0x17aeb8 - 0x17aee8
void entry_17aeb8_0x17aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17aeb8_0x17aee8");
#endif

    ctx->pc = 0x17aeb8u;

    // 0x17aeb8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17aebc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AEBCu;
    {
        const bool branch_taken_0x17aebc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17AEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEBCu;
            // 0x17aec0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aebc) {
            ctx->pc = 0x17AED0u;
            goto label_17aed0;
        }
    }
    ctx->pc = 0x17AEC4u;
    // 0x17aec4: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEC4u;
            // 0x17aec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AED0u: goto label_17aed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AECCu;
    // 0x17aecc: 0x0  nop
    ctx->pc = 0x17aeccu;
    // NOP
label_17aed0:
    // 0x17aed0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17aed4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x17aed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17aed8: 0x8c63be50  lw          $v1, -0x41B0($v1)
    ctx->pc = 0x17aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950480)));
    // 0x17aedc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17aee0: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEE0u;
            // 0x17aee4: 0x2442014c  addiu       $v0, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AED0u: goto label_17aed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AEE8u;
}
