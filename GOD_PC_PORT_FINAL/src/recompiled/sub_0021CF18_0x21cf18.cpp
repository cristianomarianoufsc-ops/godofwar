#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CF18
// Address: 0x21cf18 - 0x21cf68
void sub_0021CF18_0x21cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CF18_0x21cf18");
#endif

    ctx->pc = 0x21cf18u;

    // 0x21cf18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cf1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21cf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cf20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21cf24: 0x0  nop
    ctx->pc = 0x21cf24u;
    // NOP
label_21cf28:
    // 0x21cf28: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21cf2c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x21cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21cf30: 0x24426e88  addiu       $v0, $v0, 0x6E88
    ctx->pc = 0x21cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28296));
    // 0x21cf34: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cf38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21cf3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21cf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21cf40: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x21cf40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21cf44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21CF44u;
    {
        const bool branch_taken_0x21cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF44u;
            // 0x21cf48: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf44) {
            ctx->pc = 0x21CF28u;
            runtime->cooperativeGuestYield();
            goto label_21cf28;
        }
    }
    ctx->pc = 0x21CF4Cu;
    // 0x21cf4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21cf50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21cf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cf54: 0xc06e6bc  jal         func_1B9AF0
    ctx->pc = 0x21CF54u;
    SET_GPR_U32(ctx, 31, 0x21CF5Cu);
    ctx->pc = 0x21CF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF54u;
            // 0x21cf58: 0x8c44cb94  lw          $a0, -0x346C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9AF0u;
    if (runtime->hasFunction(0x1B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF5Cu; }
        if (ctx->pc != 0x21CF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9AF0_0x1b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF5Cu; }
        if (ctx->pc != 0x21CF5Cu) { return; }
    }
    ctx->pc = 0x21CF5Cu;
    // 0x21cf5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cf60: 0x3e00008  jr          $ra
    ctx->pc = 0x21CF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF60u;
            // 0x21cf64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CF28u: goto label_21cf28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CF68u;
}
