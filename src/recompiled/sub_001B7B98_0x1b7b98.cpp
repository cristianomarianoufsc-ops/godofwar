#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7B98
// Address: 0x1b7b98 - 0x1b7bf0
void sub_001B7B98_0x1b7b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7B98_0x1b7b98");
#endif

    ctx->pc = 0x1b7b98u;

    // 0x1b7b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7b9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b7ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bb0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b7bb4: 0x0  nop
    ctx->pc = 0x1b7bb4u;
    // NOP
label_1b7bb8:
    // 0x1b7bb8: 0x8e0614a8  lw          $a2, 0x14A8($s0)
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5288)));
    // 0x1b7bbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b7bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bc4: 0x8c4514ac  lw          $a1, 0x14AC($v0)
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5292)));
    // 0x1b7bc8: 0xc06de98  jal         func_1B7A60
    ctx->pc = 0x1B7BC8u;
    SET_GPR_U32(ctx, 31, 0x1B7BD0u);
    ctx->pc = 0x1B7BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BC8u;
            // 0x1b7bcc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A60u;
    if (runtime->hasFunction(0x1B7A60u)) {
        auto targetFn = runtime->lookupFunction(0x1B7A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BD0u; }
        if (ctx->pc != 0x1B7BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b7a60_0x1b7aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BD0u; }
        if (ctx->pc != 0x1B7BD0u) { return; }
    }
    ctx->pc = 0x1B7BD0u;
    // 0x1b7bd0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1b7bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b7bd4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B7BD4u;
    {
        const bool branch_taken_0x1b7bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7bd4) {
            ctx->pc = 0x1B7BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BD4u;
            // 0x1b7bd8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7BB8u;
            runtime->cooperativeGuestYield();
            goto label_1b7bb8;
        }
    }
    ctx->pc = 0x1B7BDCu;
    // 0x1b7bdc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b7bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BE8u;
            // 0x1b7bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7BB8u: goto label_1b7bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7BF0u;
}
