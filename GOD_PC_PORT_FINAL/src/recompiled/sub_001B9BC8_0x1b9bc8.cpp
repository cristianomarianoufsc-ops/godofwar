#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9BC8
// Address: 0x1b9bc8 - 0x1b9cc0
void sub_001B9BC8_0x1b9bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9BC8_0x1b9bc8");
#endif

    ctx->pc = 0x1b9bc8u;

    // 0x1b9bc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9bcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b9bd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b9bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b9bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b9bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9bdc: 0x241002bc  addiu       $s0, $zero, 0x2BC
    ctx->pc = 0x1b9bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x1b9be0: 0xae2014cc  sw          $zero, 0x14CC($s1)
    ctx->pc = 0x1b9be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5324), GPR_U32(ctx, 0));
    // 0x1b9be4: 0xae2014c0  sw          $zero, 0x14C0($s1)
    ctx->pc = 0x1b9be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5312), GPR_U32(ctx, 0));
    // 0x1b9be8: 0xae2014bc  sw          $zero, 0x14BC($s1)
    ctx->pc = 0x1b9be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5308), GPR_U32(ctx, 0));
    // 0x1b9bec: 0xae2014d0  sw          $zero, 0x14D0($s1)
    ctx->pc = 0x1b9becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5328), GPR_U32(ctx, 0));
    // 0x1b9bf0: 0xae2014d4  sw          $zero, 0x14D4($s1)
    ctx->pc = 0x1b9bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5332), GPR_U32(ctx, 0));
    // 0x1b9bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9bf8:
    // 0x1b9bf8: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B9BF8u;
    SET_GPR_U32(ctx, 31, 0x1B9C00u);
    ctx->pc = 0x1B9BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BF8u;
            // 0x1b9bfc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C00u; }
        if (ctx->pc != 0x1B9C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C00u; }
        if (ctx->pc != 0x1B9C00u) { return; }
    }
    ctx->pc = 0x1B9C00u;
    // 0x1b9c00: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b9c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9c04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9C04u;
    {
        const bool branch_taken_0x1b9c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C04u;
            // 0x1b9c08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c04) {
            ctx->pc = 0x1B9C18u;
            goto label_1b9c18;
        }
    }
    ctx->pc = 0x1B9C0Cu;
    // 0x1b9c0c: 0x8e2214d0  lw          $v0, 0x14D0($s1)
    ctx->pc = 0x1b9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5328)));
    // 0x1b9c10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9c14: 0xae2214d0  sw          $v0, 0x14D0($s1)
    ctx->pc = 0x1b9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5328), GPR_U32(ctx, 2));
label_1b9c18:
    // 0x1b9c18: 0x2a02030c  slti        $v0, $s0, 0x30C
    ctx->pc = 0x1b9c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)780) ? 1 : 0);
    // 0x1b9c1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B9C1Cu;
    {
        const bool branch_taken_0x1b9c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C1Cu;
            // 0x1b9c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c1c) {
            ctx->pc = 0x1B9BF8u;
            runtime->cooperativeGuestYield();
            goto label_1b9bf8;
        }
    }
    ctx->pc = 0x1B9C24u;
    // 0x1b9c24: 0x2410030c  addiu       $s0, $zero, 0x30C
    ctx->pc = 0x1b9c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x1b9c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c2c: 0x0  nop
    ctx->pc = 0x1b9c2cu;
    // NOP
label_1b9c30:
    // 0x1b9c30: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B9C30u;
    SET_GPR_U32(ctx, 31, 0x1B9C38u);
    ctx->pc = 0x1B9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C30u;
            // 0x1b9c34: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C38u; }
        if (ctx->pc != 0x1B9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C38u; }
        if (ctx->pc != 0x1B9C38u) { return; }
    }
    ctx->pc = 0x1B9C38u;
    // 0x1b9c38: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b9c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9c3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9C3Cu;
    {
        const bool branch_taken_0x1b9c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C3Cu;
            // 0x1b9c40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c3c) {
            ctx->pc = 0x1B9C50u;
            goto label_1b9c50;
        }
    }
    ctx->pc = 0x1B9C44u;
    // 0x1b9c44: 0x8e2214d4  lw          $v0, 0x14D4($s1)
    ctx->pc = 0x1b9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5332)));
    // 0x1b9c48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9c4c: 0xae2214d4  sw          $v0, 0x14D4($s1)
    ctx->pc = 0x1b9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5332), GPR_U32(ctx, 2));
label_1b9c50:
    // 0x1b9c50: 0x2a02031b  slti        $v0, $s0, 0x31B
    ctx->pc = 0x1b9c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)795) ? 1 : 0);
    // 0x1b9c54: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B9C54u;
    {
        const bool branch_taken_0x1b9c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C54u;
            // 0x1b9c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c54) {
            ctx->pc = 0x1B9C30u;
            runtime->cooperativeGuestYield();
            goto label_1b9c30;
        }
    }
    ctx->pc = 0x1B9C5Cu;
    // 0x1b9c5c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1b9c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9c60: 0x262514d8  addiu       $a1, $s1, 0x14D8
    ctx->pc = 0x1b9c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5336));
    // 0x1b9c64: 0xae3014d8  sw          $s0, 0x14D8($s1)
    ctx->pc = 0x1b9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5336), GPR_U32(ctx, 16));
    // 0x1b9c68: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B9C68u;
    SET_GPR_U32(ctx, 31, 0x1B9C70u);
    ctx->pc = 0x1B9C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C68u;
            // 0x1b9c6c: 0x2404031d  addiu       $a0, $zero, 0x31D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 797));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C70u; }
        if (ctx->pc != 0x1B9C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C70u; }
        if (ctx->pc != 0x1B9C70u) { return; }
    }
    ctx->pc = 0x1B9C70u;
    // 0x1b9c70: 0xae3014e4  sw          $s0, 0x14E4($s1)
    ctx->pc = 0x1b9c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5348), GPR_U32(ctx, 16));
    // 0x1b9c74: 0x262514e4  addiu       $a1, $s1, 0x14E4
    ctx->pc = 0x1b9c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5348));
    // 0x1b9c78: 0x2404031e  addiu       $a0, $zero, 0x31E
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 798));
    // 0x1b9c7c: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B9C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C84u);
    ctx->pc = 0x1B9C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C7Cu;
            // 0x1b9c80: 0xae2214dc  sw          $v0, 0x14DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C84u; }
        if (ctx->pc != 0x1B9C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C84u; }
        if (ctx->pc != 0x1B9C84u) { return; }
    }
    ctx->pc = 0x1B9C84u;
    // 0x1b9c84: 0xae3014ec  sw          $s0, 0x14EC($s1)
    ctx->pc = 0x1b9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5356), GPR_U32(ctx, 16));
    // 0x1b9c88: 0x262514ec  addiu       $a1, $s1, 0x14EC
    ctx->pc = 0x1b9c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5356));
    // 0x1b9c8c: 0x2404031f  addiu       $a0, $zero, 0x31F
    ctx->pc = 0x1b9c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
    // 0x1b9c90: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B9C90u;
    SET_GPR_U32(ctx, 31, 0x1B9C98u);
    ctx->pc = 0x1B9C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C90u;
            // 0x1b9c94: 0xae2214e0  sw          $v0, 0x14E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C98u; }
        if (ctx->pc != 0x1B9C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C98u; }
        if (ctx->pc != 0x1B9C98u) { return; }
    }
    ctx->pc = 0x1B9C98u;
    // 0x1b9c98: 0xae2214e8  sw          $v0, 0x14E8($s1)
    ctx->pc = 0x1b9c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5352), GPR_U32(ctx, 2));
    // 0x1b9c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ca0: 0xc06e75e  jal         func_1B9D78
    ctx->pc = 0x1B9CA0u;
    SET_GPR_U32(ctx, 31, 0x1B9CA8u);
    ctx->pc = 0x1B9CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CA0u;
            // 0x1b9ca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D78u;
    if (runtime->hasFunction(0x1B9D78u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CA8u; }
        if (ctx->pc != 0x1B9CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9D78_0x1b9d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CA8u; }
        if (ctx->pc != 0x1B9CA8u) { return; }
    }
    ctx->pc = 0x1B9CA8u;
    // 0x1b9ca8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b9ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9cac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b9cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CB4u;
            // 0x1b9cb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9BF8u: goto label_1b9bf8;
            case 0x1B9C18u: goto label_1b9c18;
            case 0x1B9C30u: goto label_1b9c30;
            case 0x1B9C50u: goto label_1b9c50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9CBCu;
    // 0x1b9cbc: 0x0  nop
    ctx->pc = 0x1b9cbcu;
    // NOP
}
