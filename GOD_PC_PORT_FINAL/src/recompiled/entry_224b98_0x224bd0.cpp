#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_224b98
// Address: 0x224b98 - 0x224bd0
void entry_224b98_0x224bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_224b98_0x224bd0");
#endif

    ctx->pc = 0x224b98u;

    // 0x224b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b9c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x224b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x224ba0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x224ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224ba4: 0x0  nop
    ctx->pc = 0x224ba4u;
    // NOP
label_224ba8:
    // 0x224ba8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x224ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x224bac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x224bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x224bb0: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x224bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x224bb4: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x224bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x224bb8: 0x0  nop
    ctx->pc = 0x224bb8u;
    // NOP
    // 0x224bbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x224BBCu;
    {
        const bool branch_taken_0x224bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224BBCu;
            // 0x224bc0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bbc) {
            ctx->pc = 0x224BA8u;
            runtime->cooperativeGuestYield();
            goto label_224ba8;
        }
    }
    ctx->pc = 0x224BC4u;
    // 0x224bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x224BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224BA8u: goto label_224ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224BCCu;
    // 0x224bcc: 0x0  nop
    ctx->pc = 0x224bccu;
    // NOP
}
