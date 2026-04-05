#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_146d98
// Address: 0x146d98 - 0x146de8
void entry_146d98_0x146de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_146d98_0x146de8");
#endif

    ctx->pc = 0x146d98u;

    // 0x146d98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x146d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146da0: 0xace0009c  sw          $zero, 0x9C($a3)
    ctx->pc = 0x146da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 0));
    // 0x146da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146da8:
    // 0x146da8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x146da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x146dac: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x146dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x146db0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x146db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x146db4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146db8: 0x28a40005  slti        $a0, $a1, 0x5
    ctx->pc = 0x146db8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x146dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146dc0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x146dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x146dc4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x146DC4u;
    {
        const bool branch_taken_0x146dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x146DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146DC4u;
            // 0x146dc8: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dc4) {
            ctx->pc = 0x146DA8u;
            runtime->cooperativeGuestYield();
            goto label_146da8;
        }
    }
    ctx->pc = 0x146DCCu;
    // 0x146dcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x146dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x146dd0: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x146dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x146dd4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x146DD4u;
    {
        const bool branch_taken_0x146dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146DD4u;
            // 0x146dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dd4) {
            ctx->pc = 0x146DA8u;
            runtime->cooperativeGuestYield();
            goto label_146da8;
        }
    }
    ctx->pc = 0x146DDCu;
    // 0x146ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x146DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146DA8u: goto label_146da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146DE4u;
    // 0x146de4: 0x0  nop
    ctx->pc = 0x146de4u;
    // NOP
}
