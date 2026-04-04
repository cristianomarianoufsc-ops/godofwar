#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23efc8
// Address: 0x23efc8 - 0x23f000
void entry_23efc8_0x23f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23efc8_0x23f000");
#endif

    ctx->pc = 0x23efc8u;

    // 0x23efc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23efcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23efccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23efd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23efd4: 0x0  nop
    ctx->pc = 0x23efd4u;
    // NOP
label_23efd8:
    // 0x23efd8: 0x0  nop
    ctx->pc = 0x23efd8u;
    // NOP
    // 0x23efdc: 0x0  nop
    ctx->pc = 0x23efdcu;
    // NOP
    // 0x23efe0: 0x0  nop
    ctx->pc = 0x23efe0u;
    // NOP
    // 0x23efe4: 0x0  nop
    ctx->pc = 0x23efe4u;
    // NOP
    // 0x23efe8: 0x0  nop
    ctx->pc = 0x23efe8u;
    // NOP
    // 0x23efec: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23EFECu;
    {
        const bool branch_taken_0x23efec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EFECu;
            // 0x23eff0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efec) {
            ctx->pc = 0x23EFD8u;
            runtime->cooperativeGuestYield();
            goto label_23efd8;
        }
    }
    ctx->pc = 0x23EFF4u;
    // 0x23eff4: 0x3e00008  jr          $ra
    ctx->pc = 0x23EFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EFF4u;
            // 0x23eff8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23EFD8u: goto label_23efd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23EFFCu;
    // 0x23effc: 0x0  nop
    ctx->pc = 0x23effcu;
    // NOP
}
