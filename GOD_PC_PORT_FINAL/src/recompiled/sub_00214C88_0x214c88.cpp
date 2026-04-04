#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214C88
// Address: 0x214c88 - 0x214d88
void sub_00214C88_0x214c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214C88_0x214c88");
#endif

    ctx->pc = 0x214c88u;

    // 0x214c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214c8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x214c90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x214c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x214c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x214c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214ca0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x214ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ca4: 0xc077952  jal         func_1DE548
    ctx->pc = 0x214CA4u;
    SET_GPR_U32(ctx, 31, 0x214CACu);
    ctx->pc = 0x214CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CA4u;
            // 0x214ca8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE548u;
    if (runtime->hasFunction(0x1DE548u)) {
        auto targetFn = runtime->lookupFunction(0x1DE548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CACu; }
        if (ctx->pc != 0x214CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE548_0x1de548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CACu; }
        if (ctx->pc != 0x214CACu) { return; }
    }
    ctx->pc = 0x214CACu;
    // 0x214cac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x214cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x214cb0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x214cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x214cb4: 0x24429350  addiu       $v0, $v0, -0x6CB0
    ctx->pc = 0x214cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939472));
    // 0x214cb8: 0x8c63cb08  lw          $v1, -0x34F8($v1)
    ctx->pc = 0x214cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953736)));
    // 0x214cbc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x214cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x214cc0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214CC0u;
    {
        const bool branch_taken_0x214cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214CC0u;
            // 0x214cc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cc0) {
            ctx->pc = 0x214CD8u;
            goto label_214cd8;
        }
    }
    ctx->pc = 0x214CC8u;
    // 0x214cc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x214cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x214ccc: 0x8c421200  lw          $v0, 0x1200($v0)
    ctx->pc = 0x214cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4608)));
    // 0x214cd0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x214CD0u;
    {
        const bool branch_taken_0x214cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214cd0) {
            ctx->pc = 0x214CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214CD0u;
            // 0x214cd4: 0xa20401f4  sb          $a0, 0x1F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 500), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214CE0u;
            goto label_214ce0;
        }
    }
    ctx->pc = 0x214CD8u;
label_214cd8:
    // 0x214cd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x214cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214cdc: 0xa20401f4  sb          $a0, 0x1F4($s0)
    ctx->pc = 0x214cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 500), (uint8_t)GPR_U32(ctx, 4));
label_214ce0:
    // 0x214ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ce4: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x214ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x214ce8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x214ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cec: 0xc085256  jal         func_214958
    ctx->pc = 0x214CECu;
    SET_GPR_U32(ctx, 31, 0x214CF4u);
    ctx->pc = 0x214CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CECu;
            // 0x214cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214958u;
    if (runtime->hasFunction(0x214958u)) {
        auto targetFn = runtime->lookupFunction(0x214958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CF4u; }
        if (ctx->pc != 0x214CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214958_0x214958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CF4u; }
        if (ctx->pc != 0x214CF4u) { return; }
    }
    ctx->pc = 0x214CF4u;
    // 0x214cf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x214cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214cfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214d00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x214d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d08: 0x3e00008  jr          $ra
    ctx->pc = 0x214D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214D08u;
            // 0x214d0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214CD8u: goto label_214cd8;
            case 0x214CE0u: goto label_214ce0;
            case 0x214D54u: goto label_214d54;
            case 0x214D78u: goto label_214d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214D10u;
    // 0x214d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214d14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x214d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x214d18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x214d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x214d1c: 0x24429350  addiu       $v0, $v0, -0x6CB0
    ctx->pc = 0x214d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939472));
    // 0x214d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x214d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x214d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214d2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x214d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x214d30: 0x8e0301dc  lw          $v1, 0x1DC($s0)
    ctx->pc = 0x214d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x214d34: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x214D34u;
    {
        const bool branch_taken_0x214d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214D34u;
            // 0x214d38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d34) {
            ctx->pc = 0x214D54u;
            goto label_214d54;
        }
    }
    ctx->pc = 0x214D3Cu;
    // 0x214d3c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x214d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x214d40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x214d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x214d44: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x214d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x214d48: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x214d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x214d4c: 0x40f809  jalr        $v0
    ctx->pc = 0x214D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214D54u);
        ctx->pc = 0x214D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214D4Cu;
            // 0x214d50: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214D54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214CD8u: goto label_214cd8;
            case 0x214CE0u: goto label_214ce0;
            case 0x214D54u: goto label_214d54;
            case 0x214D78u: goto label_214d78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214D54u; }
            if (ctx->pc != 0x214D54u) { return; }
        }
        }
    }
    ctx->pc = 0x214D54u;
label_214d54:
    // 0x214d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d58: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x214D58u;
    SET_GPR_U32(ctx, 31, 0x214D60u);
    ctx->pc = 0x214D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D58u;
            // 0x214d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE850u;
    if (runtime->hasFunction(0x1DE850u)) {
        auto targetFn = runtime->lookupFunction(0x1DE850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D60u; }
        if (ctx->pc != 0x214D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE850_0x1de850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D60u; }
        if (ctx->pc != 0x214D60u) { return; }
    }
    ctx->pc = 0x214D60u;
    // 0x214d60: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x214d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x214d64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x214D64u;
    {
        const bool branch_taken_0x214d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214d64) {
            ctx->pc = 0x214D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214D64u;
            // 0x214d68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214D78u;
            goto label_214d78;
        }
    }
    ctx->pc = 0x214D6Cu;
    // 0x214d6c: 0xc0850fc  jal         func_2143F0
    ctx->pc = 0x214D6Cu;
    SET_GPR_U32(ctx, 31, 0x214D74u);
    ctx->pc = 0x214D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D6Cu;
            // 0x214d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2143F0u;
    if (runtime->hasFunction(0x2143F0u)) {
        auto targetFn = runtime->lookupFunction(0x2143F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D74u; }
        if (ctx->pc != 0x214D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2143f0_0x214418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D74u; }
        if (ctx->pc != 0x214D74u) { return; }
    }
    ctx->pc = 0x214D74u;
    // 0x214d74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x214d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_214d78:
    // 0x214d78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x214d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d80: 0x3e00008  jr          $ra
    ctx->pc = 0x214D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214D80u;
            // 0x214d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214CD8u: goto label_214cd8;
            case 0x214CE0u: goto label_214ce0;
            case 0x214D54u: goto label_214d54;
            case 0x214D78u: goto label_214d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214D88u;
}
