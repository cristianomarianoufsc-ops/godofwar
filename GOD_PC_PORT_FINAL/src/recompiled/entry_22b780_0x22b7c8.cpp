#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22b780
// Address: 0x22b780 - 0x22b7c8
void entry_22b780_0x22b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22b780_0x22b7c8");
#endif

    ctx->pc = 0x22b780u;

    // 0x22b780: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b784: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22b784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b788: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x22b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x22b78c: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x22b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x22b790: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x22b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22b794: 0x0  nop
    ctx->pc = 0x22b794u;
    // NOP
label_22b798:
    // 0x22b798: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b79c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x22b79cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b7a0: 0x2862004a  slti        $v0, $v1, 0x4A
    ctx->pc = 0x22b7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x22b7a4: 0x0  nop
    ctx->pc = 0x22b7a4u;
    // NOP
    // 0x22b7a8: 0x0  nop
    ctx->pc = 0x22b7a8u;
    // NOP
    // 0x22b7ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22B7ACu;
    {
        const bool branch_taken_0x22b7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B7ACu;
            // 0x22b7b0: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7ac) {
            ctx->pc = 0x22B798u;
            runtime->cooperativeGuestYield();
            goto label_22b798;
        }
    }
    ctx->pc = 0x22B7B4u;
    // 0x22b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x22B7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B7B4u;
            // 0x22b7b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B798u: goto label_22b798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B7BCu;
    // 0x22b7bc: 0x0  nop
    ctx->pc = 0x22b7bcu;
    // NOP
    // 0x22b7c0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x22b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x22b7c4: 0x0  nop
    ctx->pc = 0x22b7c4u;
    // NOP
}
