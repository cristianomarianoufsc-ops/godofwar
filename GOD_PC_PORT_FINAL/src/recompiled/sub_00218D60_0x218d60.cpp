#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218D60
// Address: 0x218d60 - 0x218e40
void sub_00218D60_0x218d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218D60_0x218d60");
#endif

    ctx->pc = 0x218d60u;

    // 0x218d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218d64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x218d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x218d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218d74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x218d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d78: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x218d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x218d7c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x218D7Cu;
    {
        const bool branch_taken_0x218d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218D7Cu;
            // 0x218d80: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d7c) {
            ctx->pc = 0x218DB0u;
            goto label_218db0;
        }
    }
    ctx->pc = 0x218D84u;
    // 0x218d84: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x218d84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218d88: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x218d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x218d8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218d94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x218d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218d98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218d9c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x218d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x218da0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x218da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x218da4: 0x40f809  jalr        $v0
    ctx->pc = 0x218DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218DACu);
        ctx->pc = 0x218DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218DA4u;
            // 0x218da8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218DACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218DB0u: goto label_218db0;
            case 0x218DC8u: goto label_218dc8;
            case 0x218DF8u: goto label_218df8;
            case 0x218E0Cu: goto label_218e0c;
            case 0x218E2Cu: goto label_218e2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218DACu; }
            if (ctx->pc != 0x218DACu) { return; }
        }
        }
    }
    ctx->pc = 0x218DACu;
    // 0x218dac: 0x0  nop
    ctx->pc = 0x218dacu;
    // NOP
label_218db0:
    // 0x218db0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x218db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x218db4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x218DB4u;
    {
        const bool branch_taken_0x218db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x218db4) {
            ctx->pc = 0x218DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218DB4u;
            // 0x218db8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218DC8u;
            goto label_218dc8;
        }
    }
    ctx->pc = 0x218DBCu;
    // 0x218dbc: 0xc08f75e  jal         func_23DD78
    ctx->pc = 0x218DBCu;
    SET_GPR_U32(ctx, 31, 0x218DC4u);
    ctx->pc = 0x218DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218DBCu;
            // 0x218dc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DD78u;
    if (runtime->hasFunction(0x23DD78u)) {
        auto targetFn = runtime->lookupFunction(0x23DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DC4u; }
        if (ctx->pc != 0x218DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23dd78_0x23ddc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218DC4u; }
        if (ctx->pc != 0x218DC4u) { return; }
    }
    ctx->pc = 0x218DC4u;
    // 0x218dc4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x218dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_218dc8:
    // 0x218dc8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x218DC8u;
    {
        const bool branch_taken_0x218dc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x218DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218DC8u;
            // 0x218dcc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218dc8) {
            ctx->pc = 0x218DF8u;
            goto label_218df8;
        }
    }
    ctx->pc = 0x218DD0u;
    // 0x218dd0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x218dd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218dd4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x218dd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218ddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218de0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x218de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218de4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218de8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x218de8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x218dec: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x218decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x218df0: 0x40f809  jalr        $v0
    ctx->pc = 0x218DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218DF8u);
        ctx->pc = 0x218DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218DF0u;
            // 0x218df4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218DF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218DB0u: goto label_218db0;
            case 0x218DC8u: goto label_218dc8;
            case 0x218DF8u: goto label_218df8;
            case 0x218E0Cu: goto label_218e0c;
            case 0x218E2Cu: goto label_218e2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218DF8u; }
            if (ctx->pc != 0x218DF8u) { return; }
        }
        }
    }
    ctx->pc = 0x218DF8u;
label_218df8:
    // 0x218df8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x218df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x218dfc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x218DFCu;
    {
        const bool branch_taken_0x218dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x218dfc) {
            ctx->pc = 0x218E0Cu;
            goto label_218e0c;
        }
    }
    ctx->pc = 0x218E04u;
    // 0x218e04: 0xc08f75e  jal         func_23DD78
    ctx->pc = 0x218E04u;
    SET_GPR_U32(ctx, 31, 0x218E0Cu);
    ctx->pc = 0x218E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E04u;
            // 0x218e08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DD78u;
    if (runtime->hasFunction(0x23DD78u)) {
        auto targetFn = runtime->lookupFunction(0x23DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E0Cu; }
        if (ctx->pc != 0x218E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23dd78_0x23ddc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E0Cu; }
        if (ctx->pc != 0x218E0Cu) { return; }
    }
    ctx->pc = 0x218E0Cu;
label_218e0c:
    // 0x218e0c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x218E0Cu;
    SET_GPR_U32(ctx, 31, 0x218E14u);
    ctx->pc = 0x218E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E0Cu;
            // 0x218e10: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E14u; }
        if (ctx->pc != 0x218E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E14u; }
        if (ctx->pc != 0x218E14u) { return; }
    }
    ctx->pc = 0x218E14u;
    // 0x218e14: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x218e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x218e18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x218E18u;
    {
        const bool branch_taken_0x218e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218e18) {
            ctx->pc = 0x218E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218E18u;
            // 0x218e1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218E2Cu;
            goto label_218e2c;
        }
    }
    ctx->pc = 0x218E20u;
    // 0x218e20: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x218E20u;
    SET_GPR_U32(ctx, 31, 0x218E28u);
    ctx->pc = 0x218E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218E20u;
            // 0x218e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E28u; }
        if (ctx->pc != 0x218E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E28u; }
        if (ctx->pc != 0x218E28u) { return; }
    }
    ctx->pc = 0x218E28u;
    // 0x218e28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x218e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_218e2c:
    // 0x218e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218e34: 0x3e00008  jr          $ra
    ctx->pc = 0x218E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218E34u;
            // 0x218e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218DB0u: goto label_218db0;
            case 0x218DC8u: goto label_218dc8;
            case 0x218DF8u: goto label_218df8;
            case 0x218E0Cu: goto label_218e0c;
            case 0x218E2Cu: goto label_218e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218E3Cu;
    // 0x218e3c: 0x0  nop
    ctx->pc = 0x218e3cu;
    // NOP
}
