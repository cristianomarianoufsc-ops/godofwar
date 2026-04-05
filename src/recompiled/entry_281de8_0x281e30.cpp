#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_281de8
// Address: 0x281de8 - 0x281e30
void entry_281de8_0x281e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_281de8_0x281e30");
#endif

    ctx->pc = 0x281de8u;

    // 0x281de8: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x281de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x281dec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x281decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x281df0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x281df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x281df4: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x281df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x281df8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x281df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281dfc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x281dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281e00: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x281e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x281e04: 0x0  nop
    ctx->pc = 0x281e04u;
    // NOP
label_281e08:
    // 0x281e08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x281e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281e0c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281E0Cu;
    {
        const bool branch_taken_0x281e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x281E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E0Cu;
            // 0x281e10: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e0c) {
            ctx->pc = 0x281E1Cu;
            goto label_281e1c;
        }
    }
    ctx->pc = 0x281E14u;
    // 0x281e14: 0x3e00008  jr          $ra
    ctx->pc = 0x281E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E14u;
            // 0x281e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281E08u: goto label_281e08;
            case 0x281E1Cu: goto label_281e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281E1Cu;
label_281e1c:
    // 0x281e1c: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x281e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x281e20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x281E20u;
    {
        const bool branch_taken_0x281e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E20u;
            // 0x281e24: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e20) {
            ctx->pc = 0x281E08u;
            runtime->cooperativeGuestYield();
            goto label_281e08;
        }
    }
    ctx->pc = 0x281E28u;
    // 0x281e28: 0x3e00008  jr          $ra
    ctx->pc = 0x281E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E28u;
            // 0x281e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281E08u: goto label_281e08;
            case 0x281E1Cu: goto label_281e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281E30u;
}
