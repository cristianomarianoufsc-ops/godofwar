#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FAD0
// Address: 0x17fad0 - 0x17fb50
void sub_0017FAD0_0x17fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FAD0_0x17fad0");
#endif

    ctx->pc = 0x17fad0u;

    // 0x17fad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fad4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17fad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17fadc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fae0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17fae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17fae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fae8: 0xc06024a  jal         func_180928
    ctx->pc = 0x17FAE8u;
    SET_GPR_U32(ctx, 31, 0x17FAF0u);
    ctx->pc = 0x17FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAE8u;
            // 0x17faec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180928u;
    if (runtime->hasFunction(0x180928u)) {
        auto targetFn = runtime->lookupFunction(0x180928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAF0u; }
        if (ctx->pc != 0x17FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180928_0x180928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAF0u; }
        if (ctx->pc != 0x17FAF0u) { return; }
    }
    ctx->pc = 0x17FAF0u;
    // 0x17faf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17faf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faf4: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x17FAF4u;
    {
        const bool branch_taken_0x17faf4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x17FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAF4u;
            // 0x17faf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17faf4) {
            ctx->pc = 0x17FB2Cu;
            goto label_17fb2c;
        }
    }
    ctx->pc = 0x17FAFCu;
    // 0x17fafc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17fb00: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x17fb00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x17fb04: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x17fb08: 0x40f809  jalr        $v0
    ctx->pc = 0x17FB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FB10u);
        ctx->pc = 0x17FB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB08u;
            // 0x17fb0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FB10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FB2Cu: goto label_17fb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FB10u; }
            if (ctx->pc != 0x17FB10u) { return; }
        }
        }
    }
    ctx->pc = 0x17FB10u;
    // 0x17fb10: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FB10u;
    {
        const bool branch_taken_0x17fb10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB10u;
            // 0x17fb14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb10) {
            ctx->pc = 0x17FB2Cu;
            goto label_17fb2c;
        }
    }
    ctx->pc = 0x17FB18u;
    // 0x17fb18: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x17fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17fb1c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x17fb1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fb20: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17fb24: 0x40f809  jalr        $v0
    ctx->pc = 0x17FB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FB2Cu);
        ctx->pc = 0x17FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB24u;
            // 0x17fb28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FB2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FB2Cu: goto label_17fb2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FB2Cu; }
            if (ctx->pc != 0x17FB2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17FB2Cu;
label_17fb2c:
    // 0x17fb2c: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x17fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x17fb30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17fb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fb34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17fb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fb38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17fb38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x17fb3c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17fb3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fb40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb44: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB44u;
            // 0x17fb48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FB2Cu: goto label_17fb2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FB4Cu;
    // 0x17fb4c: 0x0  nop
    ctx->pc = 0x17fb4cu;
    // NOP
}
