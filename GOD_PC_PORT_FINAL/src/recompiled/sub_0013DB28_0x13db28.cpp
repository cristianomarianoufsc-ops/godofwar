#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DB28
// Address: 0x13db28 - 0x13db98
void sub_0013DB28_0x13db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DB28_0x13db28");
#endif

    ctx->pc = 0x13db28u;

    // 0x13db28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13db2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13db2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13db30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13db34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13db34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13db38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13db3c: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x13db3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13db40: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DB40u;
    {
        const bool branch_taken_0x13db40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB40u;
            // 0x13db44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db40) {
            ctx->pc = 0x13DB58u;
            goto label_13db58;
        }
    }
    ctx->pc = 0x13DB48u;
label_13db48:
    // 0x13db48: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x13DB48u;
    SET_GPR_U32(ctx, 31, 0x13DB50u);
    ctx->pc = 0x13DB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB48u;
            // 0x13db4c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB50u; }
        if (ctx->pc != 0x13DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB50u; }
        if (ctx->pc != 0x13DB50u) { return; }
    }
    ctx->pc = 0x13DB50u;
    // 0x13db50: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x13DB50u;
    {
        const bool branch_taken_0x13db50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB50u;
            // 0x13db54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db50) {
            ctx->pc = 0x13DB48u;
            runtime->cooperativeGuestYield();
            goto label_13db48;
        }
    }
    ctx->pc = 0x13DB58u;
label_13db58:
    // 0x13db58: 0x3c02efec  lui         $v0, 0xEFEC
    ctx->pc = 0x13db58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61420 << 16));
    // 0x13db5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13db5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db60: 0x3442878a  ori         $v0, $v0, 0x878A
    ctx->pc = 0x13db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34698);
    // 0x13db64: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x13DB64u;
    SET_GPR_U32(ctx, 31, 0x13DB6Cu);
    ctx->pc = 0x13DB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB64u;
            // 0x13db68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB6Cu; }
        if (ctx->pc != 0x13DB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB6Cu; }
        if (ctx->pc != 0x13DB6Cu) { return; }
    }
    ctx->pc = 0x13DB6Cu;
    // 0x13db6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13db6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13db70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13db70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13db74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13db74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db78: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB78u;
            // 0x13db7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DB48u: goto label_13db48;
            case 0x13DB58u: goto label_13db58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DB80u;
    // 0x13db80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13db84: 0x0  nop
    ctx->pc = 0x13db84u;
    // NOP
    // 0x13db88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13db88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db8c: 0x0  nop
    ctx->pc = 0x13db8cu;
    // NOP
    // 0x13db90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13db94: 0x0  nop
    ctx->pc = 0x13db94u;
    // NOP
}
