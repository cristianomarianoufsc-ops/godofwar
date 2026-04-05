#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175CD0
// Address: 0x175cd0 - 0x175d88
void sub_00175CD0_0x175cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175CD0_0x175cd0");
#endif

    ctx->pc = 0x175cd0u;

    // 0x175cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175cd8: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x175cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x175cdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x175cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x175ce0: 0x8e22c4b8  lw          $v0, -0x3B48($s1)
    ctx->pc = 0x175ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952120)));
    // 0x175ce4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x175CE4u;
    {
        const bool branch_taken_0x175ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175CE4u;
            // 0x175ce8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ce4) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175CECu;
    // 0x175cec: 0xc04f824  jal         func_13E090
    ctx->pc = 0x175CECu;
    SET_GPR_U32(ctx, 31, 0x175CF4u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CF4u; }
        if (ctx->pc != 0x175CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CF4u; }
        if (ctx->pc != 0x175CF4u) { return; }
    }
    ctx->pc = 0x175CF4u;
    // 0x175cf4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x175cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x175cf8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x175cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x175cfc: 0x8c64f198  lw          $a0, -0xE68($v1)
    ctx->pc = 0x175cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963608)));
    // 0x175d00: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x175d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x175d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d08: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x175D08u;
    SET_GPR_U32(ctx, 31, 0x175D10u);
    ctx->pc = 0x175D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D08u;
            // 0x175d0c: 0x34a5f6bc  ori         $a1, $a1, 0xF6BC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63164);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D10u; }
        if (ctx->pc != 0x175D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D10u; }
        if (ctx->pc != 0x175D10u) { return; }
    }
    ctx->pc = 0x175D10u;
    // 0x175d10: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x175d14: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x175d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x175d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d1c: 0x24c62898  addiu       $a2, $a2, 0x2898
    ctx->pc = 0x175d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10392));
    // 0x175d20: 0x34a5f6bc  ori         $a1, $a1, 0xF6BC
    ctx->pc = 0x175d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63164);
    // 0x175d24: 0xc04f5c4  jal         func_13D710
    ctx->pc = 0x175D24u;
    SET_GPR_U32(ctx, 31, 0x175D2Cu);
    ctx->pc = 0x175D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D24u;
            // 0x175d28: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D710u;
    if (runtime->hasFunction(0x13D710u)) {
        auto targetFn = runtime->lookupFunction(0x13D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D2Cu; }
        if (ctx->pc != 0x175D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d710_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D2Cu; }
        if (ctx->pc != 0x175D2Cu) { return; }
    }
    ctx->pc = 0x175D2Cu;
    // 0x175d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d30: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x175d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x175d34: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x175d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x175d38: 0x24061f40  addiu       $a2, $zero, 0x1F40
    ctx->pc = 0x175d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x175d3c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x175D3Cu;
    SET_GPR_U32(ctx, 31, 0x175D44u);
    ctx->pc = 0x175D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D3Cu;
            // 0x175d40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D44u; }
        if (ctx->pc != 0x175D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D44u; }
        if (ctx->pc != 0x175D44u) { return; }
    }
    ctx->pc = 0x175D44u;
    // 0x175d44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x175d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x175d48: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x175d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x175d4c: 0xae22c4b8  sw          $v0, -0x3B48($s1)
    ctx->pc = 0x175d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952120), GPR_U32(ctx, 2));
    // 0x175d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x175d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x175d58: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x175d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x175d5c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x175d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x175d60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x175d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175d64: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x175D64u;
    SET_GPR_U32(ctx, 31, 0x175D6Cu);
    ctx->pc = 0x175D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D64u;
            // 0x175d68: 0xaca2c4bc  sw          $v0, -0x3B44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294952124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D6Cu; }
        if (ctx->pc != 0x175D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D6Cu; }
        if (ctx->pc != 0x175D6Cu) { return; }
    }
    ctx->pc = 0x175D6Cu;
    // 0x175d6c: 0x0  nop
    ctx->pc = 0x175d6cu;
    // NOP
label_175d70:
    // 0x175d70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x175d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x175D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D7Cu;
            // 0x175d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175D70u: goto label_175d70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175D84u;
    // 0x175d84: 0x0  nop
    ctx->pc = 0x175d84u;
    // NOP
}
