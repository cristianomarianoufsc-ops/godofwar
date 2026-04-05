#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023DEF0
// Address: 0x23def0 - 0x23e688
void sub_0023DEF0_0x23def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DEF0_0x23def0");
#endif

    ctx->pc = 0x23def0u;

    // 0x23def0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23def4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23def4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23def8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23def8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23defc: 0x24900014  addiu       $s0, $a0, 0x14
    ctx->pc = 0x23defcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x23df00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23df00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23df04: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x23df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x23df08: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x23df08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23df0c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x23df0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x23df10: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DF10u;
    {
        const bool branch_taken_0x23df10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF10u;
            // 0x23df14: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df10) {
            ctx->pc = 0x23DF38u;
            goto label_23df38;
        }
    }
    ctx->pc = 0x23DF18u;
    // 0x23df18: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x23df18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x23df1c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DF1Cu;
    {
        const bool branch_taken_0x23df1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df1c) {
            ctx->pc = 0x23DF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF1Cu;
            // 0x23df20: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DF3Cu;
            goto label_23df3c;
        }
    }
    ctx->pc = 0x23DF24u;
    // 0x23df24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x23df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23df28: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x23df28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x23df2c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23df30: 0x40f809  jalr        $v0
    ctx->pc = 0x23DF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DF38u);
        ctx->pc = 0x23DF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF30u;
            // 0x23df34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DF38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DF38u; }
            if (ctx->pc != 0x23DF38u) { return; }
        }
        }
    }
    ctx->pc = 0x23DF38u;
label_23df38:
    // 0x23df38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23df3c:
    // 0x23df3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23df40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23df44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23df44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23df48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23df48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23df4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23df50: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x23df50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x23df54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23df54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23df58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23df58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23df5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23df5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23df60: 0x3e00008  jr          $ra
    ctx->pc = 0x23DF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF60u;
            // 0x23df64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DF68u;
    // 0x23df68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23df68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23df6c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23df70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23df74: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23df74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23df78: 0x2442d2a8  addiu       $v0, $v0, -0x2D58
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955688));
    // 0x23df7c: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x23DF7Cu;
    SET_GPR_U32(ctx, 31, 0x23DF84u);
    ctx->pc = 0x23DF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF7Cu;
            // 0x23df80: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B170u;
    if (runtime->hasFunction(0x23B170u)) {
        auto targetFn = runtime->lookupFunction(0x23B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF84u; }
        if (ctx->pc != 0x23DF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B170_0x23b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF84u; }
        if (ctx->pc != 0x23DF84u) { return; }
    }
    ctx->pc = 0x23DF84u;
    // 0x23df84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23df84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23df88: 0x3e00008  jr          $ra
    ctx->pc = 0x23DF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF88u;
            // 0x23df8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DF90u;
    // 0x23df90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23df94: 0x0  nop
    ctx->pc = 0x23df94u;
    // NOP
    // 0x23df98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23df98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23df9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23df9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23dfa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23dfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23dfa4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x23DFA4u;
    SET_GPR_U32(ctx, 31, 0x23DFACu);
    ctx->pc = 0x23DFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFA4u;
            // 0x23dfa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFACu; }
        if (ctx->pc != 0x23DFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFACu; }
        if (ctx->pc != 0x23DFACu) { return; }
    }
    ctx->pc = 0x23DFACu;
    // 0x23dfac: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23dfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23dfb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfb4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x23DFB4u;
    SET_GPR_U32(ctx, 31, 0x23DFBCu);
    ctx->pc = 0x23DFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFB4u;
            // 0x23dfb8: 0x24050150  addiu       $a1, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFBCu; }
        if (ctx->pc != 0x23DFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFBCu; }
        if (ctx->pc != 0x23DFBCu) { return; }
    }
    ctx->pc = 0x23DFBCu;
    // 0x23dfbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23dfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfc0: 0xc05036a  jal         func_140DA8
    ctx->pc = 0x23DFC0u;
    SET_GPR_U32(ctx, 31, 0x23DFC8u);
    ctx->pc = 0x23DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFC0u;
            // 0x23dfc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140DA8u;
    if (runtime->hasFunction(0x140DA8u)) {
        auto targetFn = runtime->lookupFunction(0x140DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFC8u; }
        if (ctx->pc != 0x23DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_140da8_0x140fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFC8u; }
        if (ctx->pc != 0x23DFC8u) { return; }
    }
    ctx->pc = 0x23DFC8u;
    // 0x23dfc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23dfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23dfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23dfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x23DFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFD0u;
            // 0x23dfd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DFD8u;
    // 0x23dfd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23dfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23dfdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfe0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DFE0u;
    {
        const bool branch_taken_0x23dfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFE0u;
            // 0x23dfe4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfe0) {
            ctx->pc = 0x23DFF0u;
            goto label_23dff0;
        }
    }
    ctx->pc = 0x23DFE8u;
    // 0x23dfe8: 0xc0503ea  jal         func_140FA8
    ctx->pc = 0x23DFE8u;
    SET_GPR_U32(ctx, 31, 0x23DFF0u);
    ctx->pc = 0x23DFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFE8u;
            // 0x23dfec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140FA8u;
    if (runtime->hasFunction(0x140FA8u)) {
        auto targetFn = runtime->lookupFunction(0x140FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFF0u; }
        if (ctx->pc != 0x23DFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140FA8_0x140fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFF0u; }
        if (ctx->pc != 0x23DFF0u) { return; }
    }
    ctx->pc = 0x23DFF0u;
label_23dff0:
    // 0x23dff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23dff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dff4: 0x3e00008  jr          $ra
    ctx->pc = 0x23DFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFF4u;
            // 0x23dff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DFFCu;
    // 0x23dffc: 0x0  nop
    ctx->pc = 0x23dffcu;
    // NOP
    // 0x23e000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e004: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23e004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23e008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e00c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23e00cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e010: 0x2442d1d8  addiu       $v0, $v0, -0x2E28
    ctx->pc = 0x23e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955480));
    // 0x23e014: 0xc08ecaa  jal         func_23B2A8
    ctx->pc = 0x23E014u;
    SET_GPR_U32(ctx, 31, 0x23E01Cu);
    ctx->pc = 0x23E018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E014u;
            // 0x23e018: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B2A8u;
    if (runtime->hasFunction(0x23B2A8u)) {
        auto targetFn = runtime->lookupFunction(0x23B2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E01Cu; }
        if (ctx->pc != 0x23E01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b2a8_0x23b2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E01Cu; }
        if (ctx->pc != 0x23E01Cu) { return; }
    }
    ctx->pc = 0x23E01Cu;
    // 0x23e01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e020: 0x3e00008  jr          $ra
    ctx->pc = 0x23E020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E020u;
            // 0x23e024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E028u;
    // 0x23e028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23e028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23e02c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23e02cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e030: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23e030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23e034: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x23e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23e038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23e03c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23e040: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x23e040u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23e044: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x23e048: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x23e048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23e04c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x23e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23e050: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x23e050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23e054: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23e058: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x23e058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x23e05c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x23e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x23e060: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x23e060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x23e064: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23e064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x23e068: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x23e068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x23e06c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23e070: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23E070u;
    SET_GPR_U32(ctx, 31, 0x23E078u);
    ctx->pc = 0x23E074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E070u;
            // 0x23e074: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E078u; }
        if (ctx->pc != 0x23E078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E078u; }
        if (ctx->pc != 0x23E078u) { return; }
    }
    ctx->pc = 0x23E078u;
    // 0x23e078: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23e078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e07c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e080: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x23e080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x23e084: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x23e088: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x23e088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x23e08c: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x23e08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x23e090: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x23e090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x23e094: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x23e094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e098: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x23e098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x23e09c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23e09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23e0a0: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x23e0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e0a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23e0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e0a8: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23e0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e0b0: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x23e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x23e0b4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x23e0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e0b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23e0bc: 0xc08e222  jal         func_238888
    ctx->pc = 0x23E0BCu;
    SET_GPR_U32(ctx, 31, 0x23E0C4u);
    ctx->pc = 0x23E0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0BCu;
            // 0x23e0c0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0C4u; }
        if (ctx->pc != 0x23E0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0C4u; }
        if (ctx->pc != 0x23E0C4u) { return; }
    }
    ctx->pc = 0x23E0C4u;
    // 0x23e0c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23e0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e0cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23e0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e0d0: 0xc08e222  jal         func_238888
    ctx->pc = 0x23E0D0u;
    SET_GPR_U32(ctx, 31, 0x23E0D8u);
    ctx->pc = 0x23E0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0D0u;
            // 0x23e0d4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0D8u; }
        if (ctx->pc != 0x23E0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0D8u; }
        if (ctx->pc != 0x23E0D8u) { return; }
    }
    ctx->pc = 0x23E0D8u;
    // 0x23e0d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23e0dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23e0e0: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x23e0e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e0e4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x23e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x23e0e8: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23e0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e0ec: 0x24842998  addiu       $a0, $a0, 0x2998
    ctx->pc = 0x23e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10648));
    // 0x23e0f0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x23e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e0f4: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x23e0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x23e0f8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x23e0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e0fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23e0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23e100: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x23e100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x23e104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e108: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x23e108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x23e10c: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x23e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x23e110: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x23e110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x23e114: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x23e114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x23e118: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x23e118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x23e11c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x23e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x23e120: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x23e120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x23e124: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x23e124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23e128: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23e128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x23e12c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23e12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e134: 0x3e00008  jr          $ra
    ctx->pc = 0x23E134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E134u;
            // 0x23e138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E13Cu;
    // 0x23e13c: 0x0  nop
    ctx->pc = 0x23e13cu;
    // NOP
    // 0x23e140: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e144: 0x0  nop
    ctx->pc = 0x23e144u;
    // NOP
    // 0x23e148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23e14c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23e150: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23e150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23e154: 0x2442d0f8  addiu       $v0, $v0, -0x2F08
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955256));
    // 0x23e158: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23e158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23e15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23e164: 0x2611003c  addiu       $s1, $s0, 0x3C
    ctx->pc = 0x23e164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x23e168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23e16c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23e16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e170: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x23e170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x23e174: 0xc04f6ca  jal         func_13DB28
    ctx->pc = 0x23E174u;
    SET_GPR_U32(ctx, 31, 0x23E17Cu);
    ctx->pc = 0x23E178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E174u;
            // 0x23e178: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB28u;
    if (runtime->hasFunction(0x13DB28u)) {
        auto targetFn = runtime->lookupFunction(0x13DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E17Cu; }
        if (ctx->pc != 0x23E17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB28_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E17Cu; }
        if (ctx->pc != 0x23E17Cu) { return; }
    }
    ctx->pc = 0x23E17Cu;
    // 0x23e17c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x23e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x23e180: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23e180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23e184: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x23e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x23e188: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x23e188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x23e18c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x23e18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x23e190: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x23E190u;
    {
        const bool branch_taken_0x23e190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x23E194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E190u;
            // 0x23e194: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e190) {
            ctx->pc = 0x23E1C4u;
            goto label_23e1c4;
        }
    }
    ctx->pc = 0x23E198u;
    // 0x23e198: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23e198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23e19c: 0x0  nop
    ctx->pc = 0x23e19cu;
    // NOP
label_23e1a0:
    // 0x23e1a0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23e1a4: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23e1a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e1ac: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23E1ACu;
    SET_GPR_U32(ctx, 31, 0x23E1B4u);
    ctx->pc = 0x23E1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1ACu;
            // 0x23e1b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E1B4u; }
        if (ctx->pc != 0x23E1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E1B4u; }
        if (ctx->pc != 0x23E1B4u) { return; }
    }
    ctx->pc = 0x23E1B4u;
    // 0x23e1b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23e1b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e1bc: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23E1BCu;
    {
        const bool branch_taken_0x23e1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1BCu;
            // 0x23e1c0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1bc) {
            ctx->pc = 0x23E1A0u;
            runtime->cooperativeGuestYield();
            goto label_23e1a0;
        }
    }
    ctx->pc = 0x23E1C4u;
label_23e1c4:
    // 0x23e1c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23e1c8: 0xae310004  sw          $s1, 0x4($s1)
    ctx->pc = 0x23e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
    // 0x23e1cc: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23e1d0: 0xae310000  sw          $s1, 0x0($s1)
    ctx->pc = 0x23e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
    // 0x23e1d4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x23e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x23e1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1dc: 0xc08e218  jal         func_238860
    ctx->pc = 0x23E1DCu;
    SET_GPR_U32(ctx, 31, 0x23E1E4u);
    ctx->pc = 0x23E1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1DCu;
            // 0x23e1e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E1E4u; }
        if (ctx->pc != 0x23E1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E1E4u; }
        if (ctx->pc != 0x23E1E4u) { return; }
    }
    ctx->pc = 0x23E1E4u;
    // 0x23e1e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23e1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e1e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23e1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e1ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23e1ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e1f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x23E1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1F4u;
            // 0x23e1f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E1FCu;
    // 0x23e1fc: 0x0  nop
    ctx->pc = 0x23e1fcu;
    // NOP
    // 0x23e200: 0x3e00008  jr          $ra
    ctx->pc = 0x23E200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E208u;
    // 0x23e208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23e20c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23e20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23e210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e214: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23e214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e21c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23e21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e220: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x23E220u;
    SET_GPR_U32(ctx, 31, 0x23E228u);
    ctx->pc = 0x23E224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E220u;
            // 0x23e224: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E228u; }
        if (ctx->pc != 0x23E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E228u; }
        if (ctx->pc != 0x23E228u) { return; }
    }
    ctx->pc = 0x23E228u;
    // 0x23e228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e22c: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x23e22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x23e230: 0xc05313a  jal         func_14C4E8
    ctx->pc = 0x23E230u;
    SET_GPR_U32(ctx, 31, 0x23E238u);
    ctx->pc = 0x23E234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E230u;
            // 0x23e234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C4E8u;
    if (runtime->hasFunction(0x14C4E8u)) {
        auto targetFn = runtime->lookupFunction(0x14C4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E238u; }
        if (ctx->pc != 0x23E238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C4E8_0x14c4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E238u; }
        if (ctx->pc != 0x23E238u) { return; }
    }
    ctx->pc = 0x23E238u;
    // 0x23e238: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23e238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e23c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e244: 0x3e00008  jr          $ra
    ctx->pc = 0x23E244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E244u;
            // 0x23e248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E24Cu;
    // 0x23e24c: 0x0  nop
    ctx->pc = 0x23e24cu;
    // NOP
    // 0x23e250: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23e254: 0x0  nop
    ctx->pc = 0x23e254u;
    // NOP
    // 0x23e258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e25c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23e260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23e264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e268: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x23E268u;
    SET_GPR_U32(ctx, 31, 0x23E270u);
    ctx->pc = 0x23E26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E268u;
            // 0x23e26c: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E270u; }
        if (ctx->pc != 0x23E270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E270u; }
        if (ctx->pc != 0x23E270u) { return; }
    }
    ctx->pc = 0x23E270u;
    // 0x23e270: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x23e270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x23e274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e27c: 0xc05313a  jal         func_14C4E8
    ctx->pc = 0x23E27Cu;
    SET_GPR_U32(ctx, 31, 0x23E284u);
    ctx->pc = 0x23E280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E27Cu;
            // 0x23e280: 0x24c61468  addiu       $a2, $a2, 0x1468 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C4E8u;
    if (runtime->hasFunction(0x14C4E8u)) {
        auto targetFn = runtime->lookupFunction(0x14C4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E284u; }
        if (ctx->pc != 0x23E284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C4E8_0x14c4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E284u; }
        if (ctx->pc != 0x23E284u) { return; }
    }
    ctx->pc = 0x23E284u;
    // 0x23e284: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23e284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e28c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E28Cu;
            // 0x23e290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E294u;
    // 0x23e294: 0x0  nop
    ctx->pc = 0x23e294u;
    // NOP
    // 0x23e298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23e29c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23e2a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e2a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23e2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23e2a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2b4: 0xc05323e  jal         func_14C8F8
    ctx->pc = 0x23E2B4u;
    SET_GPR_U32(ctx, 31, 0x23E2BCu);
    ctx->pc = 0x23E2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2B4u;
            // 0x23e2b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C8F8u;
    if (runtime->hasFunction(0x14C8F8u)) {
        auto targetFn = runtime->lookupFunction(0x14C8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2BCu; }
        if (ctx->pc != 0x23E2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C8F8_0x14c8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2BCu; }
        if (ctx->pc != 0x23E2BCu) { return; }
    }
    ctx->pc = 0x23E2BCu;
    // 0x23e2bc: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x23e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x23e2c0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23E2C0u;
    SET_GPR_U32(ctx, 31, 0x23E2C8u);
    ctx->pc = 0x23E2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2C0u;
            // 0x23e2c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2C8u; }
        if (ctx->pc != 0x23E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2C8u; }
        if (ctx->pc != 0x23E2C8u) { return; }
    }
    ctx->pc = 0x23E2C8u;
    // 0x23e2c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23e2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23E2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2D4u;
            // 0x23e2d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E2DCu;
    // 0x23e2dc: 0x0  nop
    ctx->pc = 0x23e2dcu;
    // NOP
    // 0x23e2e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e2e4: 0x0  nop
    ctx->pc = 0x23e2e4u;
    // NOP
    // 0x23e2e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23e2ec: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x23e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x23e2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e2f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23e2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e2fc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23E2FCu;
    SET_GPR_U32(ctx, 31, 0x23E304u);
    ctx->pc = 0x23E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2FCu;
            // 0x23e300: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E304u; }
        if (ctx->pc != 0x23E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E304u; }
        if (ctx->pc != 0x23E304u) { return; }
    }
    ctx->pc = 0x23E304u;
    // 0x23e304: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23e304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e30c: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x23e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x23e310: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x23e310u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x23e314: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x23e314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x23e318: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x23e318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x23e31c: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x23e31cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x23e320: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x23e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e324: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x23e324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x23e328: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23e32c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x23e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x23e330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e334: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23e334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23e338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23e338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e33c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x23e33cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e340: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x23e340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e344: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23e344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23e348: 0xc08e222  jal         func_238888
    ctx->pc = 0x23E348u;
    SET_GPR_U32(ctx, 31, 0x23E350u);
    ctx->pc = 0x23E34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E348u;
            // 0x23e34c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E350u; }
        if (ctx->pc != 0x23E350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E350u; }
        if (ctx->pc != 0x23E350u) { return; }
    }
    ctx->pc = 0x23E350u;
    // 0x23e350: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23e354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23e354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e35c: 0xc08e222  jal         func_238888
    ctx->pc = 0x23E35Cu;
    SET_GPR_U32(ctx, 31, 0x23E364u);
    ctx->pc = 0x23E360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E35Cu;
            // 0x23e360: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E364u; }
        if (ctx->pc != 0x23E364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E364u; }
        if (ctx->pc != 0x23E364u) { return; }
    }
    ctx->pc = 0x23E364u;
    // 0x23e364: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x23e364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23e368: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23e368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23e36c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23e370: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23e370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23e374: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x23e374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x23e378: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x23e378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x23e37c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23e37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23e380: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x23e380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x23e384: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x23e384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x23e388: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x23e388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x23e38c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x23e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x23e390: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x23e390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x23e394: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x23e394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23e398: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x23E398u;
    SET_GPR_U32(ctx, 31, 0x23E3A0u);
    ctx->pc = 0x23E39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E398u;
            // 0x23e39c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3A0u; }
        if (ctx->pc != 0x23E3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3A0u; }
        if (ctx->pc != 0x23E3A0u) { return; }
    }
    ctx->pc = 0x23E3A0u;
    // 0x23e3a0: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x23e3a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e3a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23e3a8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x23e3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23e3ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e3b0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x23e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23e3b4: 0x2442d0f8  addiu       $v0, $v0, -0x2F08
    ctx->pc = 0x23e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955256));
    // 0x23e3b8: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x23e3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e3bc: 0xa6060002  sh          $a2, 0x2($s0)
    ctx->pc = 0x23e3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x23e3c0: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x23e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x23e3c4: 0xae05004c  sw          $a1, 0x4C($s0)
    ctx->pc = 0x23e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 5));
    // 0x23e3c8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x23e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x23e3cc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x23e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x23e3d0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x23E3D0u;
    SET_GPR_U32(ctx, 31, 0x23E3D8u);
    ctx->pc = 0x23E3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3D0u;
            // 0x23e3d4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3D8u; }
        if (ctx->pc != 0x23E3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3D8u; }
        if (ctx->pc != 0x23E3D8u) { return; }
    }
    ctx->pc = 0x23E3D8u;
    // 0x23e3d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3dc: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x23e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x23e3e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3e4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x23e3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e3e8: 0xc04f644  jal         func_13D910
    ctx->pc = 0x23E3E8u;
    SET_GPR_U32(ctx, 31, 0x23E3F0u);
    ctx->pc = 0x23E3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E3E8u;
            // 0x23e3ec: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3F0u; }
        if (ctx->pc != 0x23E3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3F0u; }
        if (ctx->pc != 0x23E3F0u) { return; }
    }
    ctx->pc = 0x23E3F0u;
    // 0x23e3f0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x23e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x23e3f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e3fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23e3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e404: 0x3e00008  jr          $ra
    ctx->pc = 0x23E404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E404u;
            // 0x23e408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E40Cu;
    // 0x23e40c: 0x0  nop
    ctx->pc = 0x23e40cu;
    // NOP
    // 0x23e410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e414: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23e414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e418: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E418u;
    {
        const bool branch_taken_0x23e418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E418u;
            // 0x23e41c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e418) {
            ctx->pc = 0x23E438u;
            goto label_23e438;
        }
    }
    ctx->pc = 0x23E420u;
    // 0x23e420: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23e424: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23e424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e428: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23e428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23e42c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23e430: 0x40f809  jalr        $v0
    ctx->pc = 0x23E430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E438u);
        ctx->pc = 0x23E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E430u;
            // 0x23e434: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E438u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E438u; }
            if (ctx->pc != 0x23E438u) { return; }
        }
        }
    }
    ctx->pc = 0x23E438u;
label_23e438:
    // 0x23e438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e43c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E43Cu;
            // 0x23e440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E444u;
    // 0x23e444: 0x0  nop
    ctx->pc = 0x23e444u;
    // NOP
    // 0x23e448: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23e448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23e44c: 0x0  nop
    ctx->pc = 0x23e44cu;
    // NOP
    // 0x23e450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23e450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23e454: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23e454u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e458: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23e458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23e45c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x23e45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23e460: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23e464: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23e464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23e468: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x23e468u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23e46c: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x23e46cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x23e470: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x23e470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23e474: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x23e474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23e478: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x23e478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23e47c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23e47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23e480: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x23e480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x23e484: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x23e484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x23e488: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x23e488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x23e48c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x23e490: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x23e490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x23e494: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23e494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23e498: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23E498u;
    SET_GPR_U32(ctx, 31, 0x23E4A0u);
    ctx->pc = 0x23E49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E498u;
            // 0x23e49c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4A0u; }
        if (ctx->pc != 0x23E4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4A0u; }
        if (ctx->pc != 0x23E4A0u) { return; }
    }
    ctx->pc = 0x23E4A0u;
    // 0x23e4a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e4a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4a8: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x23e4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x23e4ac: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x23e4acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x23e4b0: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x23e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x23e4b4: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x23e4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x23e4b8: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x23e4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x23e4bc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x23e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23e4c0: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x23e4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x23e4c4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23e4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23e4c8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x23e4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e4cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23e4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4d0: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23e4d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4d8: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x23e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x23e4dc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x23e4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e4e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23e4e4: 0xc08e222  jal         func_238888
    ctx->pc = 0x23E4E4u;
    SET_GPR_U32(ctx, 31, 0x23E4ECu);
    ctx->pc = 0x23E4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4E4u;
            // 0x23e4e8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4ECu; }
        if (ctx->pc != 0x23E4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4ECu; }
        if (ctx->pc != 0x23E4ECu) { return; }
    }
    ctx->pc = 0x23E4ECu;
    // 0x23e4ec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23e4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23e4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4f8: 0xc08e222  jal         func_238888
    ctx->pc = 0x23E4F8u;
    SET_GPR_U32(ctx, 31, 0x23E500u);
    ctx->pc = 0x23E4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4F8u;
            // 0x23e4fc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E500u; }
        if (ctx->pc != 0x23E500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E500u; }
        if (ctx->pc != 0x23E500u) { return; }
    }
    ctx->pc = 0x23E500u;
    // 0x23e500: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23e500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23e504: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23e504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23e508: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x23e508u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e50c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x23e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x23e510: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23e510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e514: 0x2484d018  addiu       $a0, $a0, -0x2FE8
    ctx->pc = 0x23e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955032));
    // 0x23e518: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x23e518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e51c: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x23e51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x23e520: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x23e520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e524: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23e524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23e528: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x23e528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x23e52c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e530: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x23e530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x23e534: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x23e534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x23e538: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x23e538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x23e53c: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x23e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x23e540: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x23e540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x23e544: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x23e544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x23e548: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x23e548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x23e54c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x23e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23e550: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23e550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x23e554: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23e554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e55c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E55Cu;
            // 0x23e560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E564u;
    // 0x23e564: 0x0  nop
    ctx->pc = 0x23e564u;
    // NOP
    // 0x23e568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e56c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23e570: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23e570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23e574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e57c: 0xc04f856  jal         func_13E158
    ctx->pc = 0x23E57Cu;
    SET_GPR_U32(ctx, 31, 0x23E584u);
    ctx->pc = 0x23E580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E57Cu;
            // 0x23e580: 0x8c441900  lw          $a0, 0x1900($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E584u; }
        if (ctx->pc != 0x23E584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E584u; }
        if (ctx->pc != 0x23E584u) { return; }
    }
    ctx->pc = 0x23E584u;
    // 0x23e584: 0xc053d40  jal         func_14F500
    ctx->pc = 0x23E584u;
    SET_GPR_U32(ctx, 31, 0x23E58Cu);
    ctx->pc = 0x23E588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E584u;
            // 0x23e588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F500u;
    if (runtime->hasFunction(0x14F500u)) {
        auto targetFn = runtime->lookupFunction(0x14F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E58Cu; }
        if (ctx->pc != 0x23E58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F500_0x14f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E58Cu; }
        if (ctx->pc != 0x23E58Cu) { return; }
    }
    ctx->pc = 0x23E58Cu;
    // 0x23e58c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23e590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e594: 0x9445c07c  lhu         $a1, -0x3F84($v0)
    ctx->pc = 0x23e594u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951036)));
    // 0x23e598: 0xc053bfa  jal         func_14EFE8
    ctx->pc = 0x23E598u;
    SET_GPR_U32(ctx, 31, 0x23E5A0u);
    ctx->pc = 0x23E59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E598u;
            // 0x23e59c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EFE8u;
    if (runtime->hasFunction(0x14EFE8u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5A0u; }
        if (ctx->pc != 0x23E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EFE8_0x14efe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5A0u; }
        if (ctx->pc != 0x23E5A0u) { return; }
    }
    ctx->pc = 0x23E5A0u;
    // 0x23e5a0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x23E5A0u;
    SET_GPR_U32(ctx, 31, 0x23E5A8u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5A8u; }
        if (ctx->pc != 0x23E5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E5A8u; }
        if (ctx->pc != 0x23E5A8u) { return; }
    }
    ctx->pc = 0x23E5A8u;
    // 0x23e5a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23e5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23E5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5B0u;
            // 0x23e5b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E5B8u;
    // 0x23e5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e5bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e5c0: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x23e5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x23e5c4: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x23e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x23e5c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x23e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23e5cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x23e5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23e5d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23e5d4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x23e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x23e5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e5dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e5e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23e5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23e5e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e5e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23e5ec: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x23e5ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23e5f0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x23e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x23e5f4: 0x40f809  jalr        $v0
    ctx->pc = 0x23E5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E5FCu);
        ctx->pc = 0x23E5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E5F4u;
            // 0x23e5f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E5FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E5FCu; }
            if (ctx->pc != 0x23E5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x23E5FCu;
    // 0x23e5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e600: 0x3e00008  jr          $ra
    ctx->pc = 0x23E600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E600u;
            // 0x23e604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E608u;
    // 0x23e608: 0x3e00008  jr          $ra
    ctx->pc = 0x23E608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E610u;
    // 0x23e610: 0x3e00008  jr          $ra
    ctx->pc = 0x23E610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E618u;
    // 0x23e618: 0x3e00008  jr          $ra
    ctx->pc = 0x23E618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E618u;
            // 0x23e61c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E620u;
    // 0x23e620: 0x3e00008  jr          $ra
    ctx->pc = 0x23E620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E620u;
            // 0x23e624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E628u;
    // 0x23e628: 0x3e00008  jr          $ra
    ctx->pc = 0x23E628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E628u;
            // 0x23e62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E630u;
    // 0x23e630: 0x3e00008  jr          $ra
    ctx->pc = 0x23E630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E630u;
            // 0x23e634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E638u;
    // 0x23e638: 0x3e00008  jr          $ra
    ctx->pc = 0x23E638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E640u;
    // 0x23e640: 0x3e00008  jr          $ra
    ctx->pc = 0x23E640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E640u;
            // 0x23e644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E648u;
    // 0x23e648: 0x3e00008  jr          $ra
    ctx->pc = 0x23E648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E650u;
    // 0x23e650: 0x3e00008  jr          $ra
    ctx->pc = 0x23E650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E658u;
    // 0x23e658: 0x3e00008  jr          $ra
    ctx->pc = 0x23E658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E660u;
    // 0x23e660: 0x3e00008  jr          $ra
    ctx->pc = 0x23E660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E668u;
    // 0x23e668: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x23e668u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23e66c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23e670: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x23e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x23e674: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e67c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E67Cu;
            // 0x23e680: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DF38u: goto label_23df38;
            case 0x23DF3Cu: goto label_23df3c;
            case 0x23DFF0u: goto label_23dff0;
            case 0x23E1A0u: goto label_23e1a0;
            case 0x23E1C4u: goto label_23e1c4;
            case 0x23E438u: goto label_23e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E684u;
    // 0x23e684: 0x0  nop
    ctx->pc = 0x23e684u;
    // NOP
}
