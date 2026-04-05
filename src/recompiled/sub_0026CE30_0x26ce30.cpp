#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026CE30
// Address: 0x26ce30 - 0x26ce98
void sub_0026CE30_0x26ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CE30_0x26ce30");
#endif

    ctx->pc = 0x26ce30u;

    // 0x26ce30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ce34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26ce38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26ce3c: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x26ce3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x26ce40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ce44: 0x8e02a328  lw          $v0, -0x5CD8($s0)
    ctx->pc = 0x26ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943528)));
    // 0x26ce48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ce4c: 0x40f809  jalr        $v0
    ctx->pc = 0x26CE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CE54u);
        ctx->pc = 0x26CE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE4Cu;
            // 0x26ce50: 0x3c110031  lui         $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26CE54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CE70u: goto label_26ce70;
            case 0x26CE84u: goto label_26ce84;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26CE54u; }
            if (ctx->pc != 0x26CE54u) { return; }
        }
        }
    }
    ctx->pc = 0x26CE54u;
    // 0x26ce54: 0x8e04a328  lw          $a0, -0x5CD8($s0)
    ctx->pc = 0x26ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943528)));
    // 0x26ce58: 0xc09b950  jal         func_26E540
    ctx->pc = 0x26CE58u;
    SET_GPR_U32(ctx, 31, 0x26CE60u);
    ctx->pc = 0x26CE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE58u;
            // 0x26ce5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E540u;
    if (runtime->hasFunction(0x26E540u)) {
        auto targetFn = runtime->lookupFunction(0x26E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE60u; }
        if (ctx->pc != 0x26CE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E540_0x26e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE60u; }
        if (ctx->pc != 0x26CE60u) { return; }
    }
    ctx->pc = 0x26CE60u;
    // 0x26ce60: 0x8e22a450  lw          $v0, -0x5BB0($s1)
    ctx->pc = 0x26ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943824)));
    // 0x26ce64: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26CE64u;
    {
        const bool branch_taken_0x26ce64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE64u;
            // 0x26ce68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce64) {
            ctx->pc = 0x26CE84u;
            goto label_26ce84;
        }
    }
    ctx->pc = 0x26CE6Cu;
    // 0x26ce6c: 0x0  nop
    ctx->pc = 0x26ce6cu;
    // NOP
label_26ce70:
    // 0x26ce70: 0xc09b4cc  jal         func_26D330
    ctx->pc = 0x26CE70u;
    SET_GPR_U32(ctx, 31, 0x26CE78u);
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE78u; }
        if (ctx->pc != 0x26CE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE78u; }
        if (ctx->pc != 0x26CE78u) { return; }
    }
    ctx->pc = 0x26CE78u;
    // 0x26ce78: 0x8e22a450  lw          $v0, -0x5BB0($s1)
    ctx->pc = 0x26ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943824)));
    // 0x26ce7c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x26CE7Cu;
    {
        const bool branch_taken_0x26ce7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE7Cu;
            // 0x26ce80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce7c) {
            ctx->pc = 0x26CE70u;
            runtime->cooperativeGuestYield();
            goto label_26ce70;
        }
    }
    ctx->pc = 0x26CE84u;
label_26ce84:
    // 0x26ce84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ce84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ce88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ce8c: 0x3e00008  jr          $ra
    ctx->pc = 0x26CE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE8Cu;
            // 0x26ce90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CE70u: goto label_26ce70;
            case 0x26CE84u: goto label_26ce84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CE94u;
    // 0x26ce94: 0x0  nop
    ctx->pc = 0x26ce94u;
    // NOP
}
