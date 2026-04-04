#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEB40
// Address: 0x1aeb40 - 0x1aeba8
void sub_001AEB40_0x1aeb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEB40_0x1aeb40");
#endif

    ctx->pc = 0x1aeb40u;

    // 0x1aeb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aeb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aeb44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aeb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aeb48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aeb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aeb4c: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1aeb50: 0x2630fdc8  addiu       $s0, $s1, -0x238
    ctx->pc = 0x1aeb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966728));
    // 0x1aeb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aeb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aeb58: 0xc05bc5c  jal         func_16F170
    ctx->pc = 0x1AEB58u;
    SET_GPR_U32(ctx, 31, 0x1AEB60u);
    ctx->pc = 0x1AEB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB58u;
            // 0x1aeb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F170u;
    if (runtime->hasFunction(0x16F170u)) {
        auto targetFn = runtime->lookupFunction(0x16F170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB60u; }
        if (ctx->pc != 0x1AEB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16f170_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB60u; }
        if (ctx->pc != 0x1AEB60u) { return; }
    }
    ctx->pc = 0x1AEB60u;
    // 0x1aeb60: 0xae002804  sw          $zero, 0x2804($s0)
    ctx->pc = 0x1aeb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10244), GPR_U32(ctx, 0));
    // 0x1aeb64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aeb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb68: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1aeb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1aeb6c: 0x2623fdc8  addiu       $v1, $s1, -0x238
    ctx->pc = 0x1aeb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966728));
label_1aeb70:
    // 0x1aeb70: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1aeb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aeb74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aeb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aeb78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aeb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aeb7c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1aeb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1aeb80: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1aeb80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1aeb84: 0x28a20500  slti        $v0, $a1, 0x500
    ctx->pc = 0x1aeb84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x1aeb88: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AEB88u;
    {
        const bool branch_taken_0x1aeb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb88) {
            ctx->pc = 0x1AEB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB88u;
            // 0x1aeb8c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB70u;
            runtime->cooperativeGuestYield();
            goto label_1aeb70;
        }
    }
    ctx->pc = 0x1AEB90u;
    // 0x1aeb90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aeb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeb94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aeb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aeb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB9Cu;
            // 0x1aeba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEB70u: goto label_1aeb70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEBA4u;
    // 0x1aeba4: 0x0  nop
    ctx->pc = 0x1aeba4u;
    // NOP
}
