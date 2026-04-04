#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131C18
// Address: 0x131c18 - 0x131f40
void sub_00131C18_0x131c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131C18_0x131c18");
#endif

    ctx->pc = 0x131c18u;

    // 0x131c18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x131c1c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x131c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x131c20: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x131c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x131c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x131c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c2c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x131c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x131c30: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x131c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x131c34: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x131c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x131c38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x131c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x131c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x131c40: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x131c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x131c44: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x131c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x131c48: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x131c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x131c4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131c50: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x131c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x131c54: 0xc08c85c  jal         func_232170
    ctx->pc = 0x131C54u;
    SET_GPR_U32(ctx, 31, 0x131C5Cu);
    ctx->pc = 0x131C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131C54u;
            // 0x131c58: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C5Cu; }
        if (ctx->pc != 0x131C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C5Cu; }
        if (ctx->pc != 0x131C5Cu) { return; }
    }
    ctx->pc = 0x131C5Cu;
    // 0x131c5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c60: 0x56200011  bnel        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x131C60u;
    {
        const bool branch_taken_0x131c60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x131c60) {
            ctx->pc = 0x131C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131C60u;
            // 0x131c64: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131CA8u;
            goto label_131ca8;
        }
    }
    ctx->pc = 0x131C68u;
    // 0x131c68: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x131C68u;
    SET_GPR_U32(ctx, 31, 0x131C70u);
    ctx->pc = 0x131C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131C68u;
            // 0x131c6c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C70u; }
        if (ctx->pc != 0x131C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C70u; }
        if (ctx->pc != 0x131C70u) { return; }
    }
    ctx->pc = 0x131C70u;
    // 0x131c70: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x131c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x131c74: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x131c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x131c78: 0x8c63be00  lw          $v1, -0x4200($v1)
    ctx->pc = 0x131c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950400)));
    // 0x131c7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x131c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x131c84: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x131c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x131c88: 0xc08e604  jal         func_239810
    ctx->pc = 0x131C88u;
    SET_GPR_U32(ctx, 31, 0x131C90u);
    ctx->pc = 0x131C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131C88u;
            // 0x131c8c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239810u;
    if (runtime->hasFunction(0x239810u)) {
        auto targetFn = runtime->lookupFunction(0x239810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C90u; }
        if (ctx->pc != 0x131C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239810_0x239820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C90u; }
        if (ctx->pc != 0x131C90u) { return; }
    }
    ctx->pc = 0x131C90u;
    // 0x131c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c94: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x131c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x131c98: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x131c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x131c9c: 0xc08c996  jal         func_232658
    ctx->pc = 0x131C9Cu;
    SET_GPR_U32(ctx, 31, 0x131CA4u);
    ctx->pc = 0x131CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131C9Cu;
            // 0x131ca0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232658u;
    if (runtime->hasFunction(0x232658u)) {
        auto targetFn = runtime->lookupFunction(0x232658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CA4u; }
        if (ctx->pc != 0x131CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232658_0x232658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CA4u; }
        if (ctx->pc != 0x131CA4u) { return; }
    }
    ctx->pc = 0x131CA4u;
    // 0x131ca4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x131ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_131ca8:
    // 0x131ca8: 0x18400075  blez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x131CA8u;
    {
        const bool branch_taken_0x131ca8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x131CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131CA8u;
            // 0x131cac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ca8) {
            ctx->pc = 0x131E80u;
            goto label_131e80;
        }
    }
    ctx->pc = 0x131CB0u;
    // 0x131cb0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x131cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x131cb4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x131cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x131cb8: 0x8c770008  lw          $s7, 0x8($v1)
    ctx->pc = 0x131cb8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x131cbc: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x131cbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131cc0: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x131cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x131cc4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x131cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x131cc8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x131cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131ccc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x131cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131cd0: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x131cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x131cd4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x131cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x131cd8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x131cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x131cdc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x131cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131ce0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x131ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x131ce4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x131ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x131ce8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x131CE8u;
    SET_GPR_U32(ctx, 31, 0x131CF0u);
    ctx->pc = 0x131CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131CE8u;
            // 0x131cec: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CF0u; }
        if (ctx->pc != 0x131CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CF0u; }
        if (ctx->pc != 0x131CF0u) { return; }
    }
    ctx->pc = 0x131CF0u;
    // 0x131cf0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x131cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131cf4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x131CF4u;
    {
        const bool branch_taken_0x131cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131CF4u;
            // 0x131cf8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131cf4) {
            ctx->pc = 0x131D20u;
            goto label_131d20;
        }
    }
    ctx->pc = 0x131CFCu;
    // 0x131cfc: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x131cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x131d00: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131d04: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x131d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x131d08: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x131d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x131d0c: 0x40f809  jalr        $v0
    ctx->pc = 0x131D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131D14u);
        ctx->pc = 0x131D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131D0Cu;
            // 0x131d10: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131D14u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131CA8u: goto label_131ca8;
            case 0x131D20u: goto label_131d20;
            case 0x131D28u: goto label_131d28;
            case 0x131D38u: goto label_131d38;
            case 0x131D64u: goto label_131d64;
            case 0x131D88u: goto label_131d88;
            case 0x131DC8u: goto label_131dc8;
            case 0x131DCCu: goto label_131dcc;
            case 0x131DDCu: goto label_131ddc;
            case 0x131E18u: goto label_131e18;
            case 0x131E28u: goto label_131e28;
            case 0x131E80u: goto label_131e80;
            case 0x131F00u: goto label_131f00;
            case 0x131F08u: goto label_131f08;
            case 0x131F10u: goto label_131f10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131D14u; }
            if (ctx->pc != 0x131D14u) { return; }
        }
        }
    }
    ctx->pc = 0x131D14u;
    // 0x131d14: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x131d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x131d18: 0xa6e20006  sh          $v0, 0x6($s7)
    ctx->pc = 0x131d18u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x131d1c: 0x0  nop
    ctx->pc = 0x131d1cu;
    // NOP
label_131d20:
    // 0x131d20: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x131d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x131d24: 0x26f600c0  addiu       $s6, $s7, 0xC0
    ctx->pc = 0x131d24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
label_131d28:
    // 0x131d28: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x131d28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x131d2c: 0x1280003e  beqz        $s4, . + 4 + (0x3E << 2)
    ctx->pc = 0x131D2Cu;
    {
        const bool branch_taken_0x131d2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131D2Cu;
            // 0x131d30: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d2c) {
            ctx->pc = 0x131E28u;
            goto label_131e28;
        }
    }
    ctx->pc = 0x131D34u;
    // 0x131d34: 0x2682ffec  addiu       $v0, $s4, -0x14
    ctx->pc = 0x131d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
label_131d38:
    // 0x131d38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x131d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131d3c: 0x54900b  movn        $s2, $v0, $s4
    ctx->pc = 0x131d3cu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x131d40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x131d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131d44: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x131d44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131d48: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x131D48u;
    {
        const bool branch_taken_0x131d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x131d48) {
            ctx->pc = 0x131D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131D48u;
            // 0x131d4c: 0x96430000  lhu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131D64u;
            goto label_131d64;
        }
    }
    ctx->pc = 0x131D50u;
    // 0x131d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131d58: 0xc0402de  jal         func_100B78
    ctx->pc = 0x131D58u;
    SET_GPR_U32(ctx, 31, 0x131D60u);
    ctx->pc = 0x131D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131D58u;
            // 0x131d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B78u;
    if (runtime->hasFunction(0x100B78u)) {
        auto targetFn = runtime->lookupFunction(0x100B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131D60u; }
        if (ctx->pc != 0x131D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100B78_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131D60u; }
        if (ctx->pc != 0x131D60u) { return; }
    }
    ctx->pc = 0x131D60u;
    // 0x131d60: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x131d60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_131d64:
    // 0x131d64: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x131d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x131d68: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x131D68u;
    {
        const bool branch_taken_0x131d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x131D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131D68u;
            // 0x131d6c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d68) {
            ctx->pc = 0x131DDCu;
            goto label_131ddc;
        }
    }
    ctx->pc = 0x131D70u;
    // 0x131d70: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x131d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x131d74: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x131d74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131d78: 0x1aa00018  blez        $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x131D78u;
    {
        const bool branch_taken_0x131d78 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x131D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131D78u;
            // 0x131d7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d78) {
            ctx->pc = 0x131DDCu;
            goto label_131ddc;
        }
    }
    ctx->pc = 0x131D80u;
    // 0x131d80: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x131d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x131d84: 0x0  nop
    ctx->pc = 0x131d84u;
    // NOP
label_131d88:
    // 0x131d88: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x131d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x131d8c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x131d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131d94: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x131d94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131d98: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x131d9c: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x131D9Cu;
    {
        const bool branch_taken_0x131d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d9c) {
            ctx->pc = 0x131DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131D9Cu;
            // 0x131da0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131DCCu;
            goto label_131dcc;
        }
    }
    ctx->pc = 0x131DA4u;
    // 0x131da4: 0xc0402ae  jal         func_100AB8
    ctx->pc = 0x131DA4u;
    SET_GPR_U32(ctx, 31, 0x131DACu);
    ctx->pc = 0x131DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131DA4u;
            // 0x131da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AB8u;
    if (runtime->hasFunction(0x100AB8u)) {
        auto targetFn = runtime->lookupFunction(0x100AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DACu; }
        if (ctx->pc != 0x131DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100AB8_0x100ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DACu; }
        if (ctx->pc != 0x131DACu) { return; }
    }
    ctx->pc = 0x131DACu;
    // 0x131dac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x131dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x131db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x131db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x131db4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131DB4u;
    {
        const bool branch_taken_0x131db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131DB4u;
            // 0x131db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131db4) {
            ctx->pc = 0x131DC8u;
            goto label_131dc8;
        }
    }
    ctx->pc = 0x131DBCu;
    // 0x131dbc: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x131dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131dc0: 0xc04012e  jal         func_1004B8
    ctx->pc = 0x131DC0u;
    SET_GPR_U32(ctx, 31, 0x131DC8u);
    ctx->pc = 0x131DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131DC0u;
            // 0x131dc4: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004B8u;
    if (runtime->hasFunction(0x1004B8u)) {
        auto targetFn = runtime->lookupFunction(0x1004B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DC8u; }
        if (ctx->pc != 0x131DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004B8_0x1004b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DC8u; }
        if (ctx->pc != 0x131DC8u) { return; }
    }
    ctx->pc = 0x131DC8u;
label_131dc8:
    // 0x131dc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x131dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_131dcc:
    // 0x131dcc: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x131dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x131dd0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x131DD0u;
    {
        const bool branch_taken_0x131dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131dd0) {
            ctx->pc = 0x131DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131DD0u;
            // 0x131dd4: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131D88u;
            runtime->cooperativeGuestYield();
            goto label_131d88;
        }
    }
    ctx->pc = 0x131DD8u;
    // 0x131dd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x131dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_131ddc:
    // 0x131ddc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x131DDCu;
    {
        const bool branch_taken_0x131ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131DDCu;
            // 0x131de0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ddc) {
            ctx->pc = 0x131E18u;
            goto label_131e18;
        }
    }
    ctx->pc = 0x131DE4u;
    // 0x131de4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x131de4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131de8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x131de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x131dec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131df0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131df4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131df8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131dfc: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x131dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x131e00: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x131e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x131e04: 0x40f809  jalr        $v0
    ctx->pc = 0x131E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131E0Cu);
        ctx->pc = 0x131E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131E04u;
            // 0x131e08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131E0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131CA8u: goto label_131ca8;
            case 0x131D20u: goto label_131d20;
            case 0x131D28u: goto label_131d28;
            case 0x131D38u: goto label_131d38;
            case 0x131D64u: goto label_131d64;
            case 0x131D88u: goto label_131d88;
            case 0x131DC8u: goto label_131dc8;
            case 0x131DCCu: goto label_131dcc;
            case 0x131DDCu: goto label_131ddc;
            case 0x131E18u: goto label_131e18;
            case 0x131E28u: goto label_131e28;
            case 0x131E80u: goto label_131e80;
            case 0x131F00u: goto label_131f00;
            case 0x131F08u: goto label_131f08;
            case 0x131F10u: goto label_131f10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131E0Cu; }
            if (ctx->pc != 0x131E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x131E0Cu;
    // 0x131e0c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x131e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x131e10: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x131e10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x131e14: 0x0  nop
    ctx->pc = 0x131e14u;
    // NOP
label_131e18:
    // 0x131e18: 0x8e940000  lw          $s4, 0x0($s4)
    ctx->pc = 0x131e18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x131e1c: 0x1680ffc6  bnez        $s4, . + 4 + (-0x3A << 2)
    ctx->pc = 0x131E1Cu;
    {
        const bool branch_taken_0x131e1c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x131E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131E1Cu;
            // 0x131e20: 0x2682ffec  addiu       $v0, $s4, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e1c) {
            ctx->pc = 0x131D38u;
            runtime->cooperativeGuestYield();
            goto label_131d38;
        }
    }
    ctx->pc = 0x131E24u;
    // 0x131e24: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x131e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_131e28:
    // 0x131e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131e2c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x131e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x131e30: 0x2c42000d  sltiu       $v0, $v0, 0xD
    ctx->pc = 0x131e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x131e34: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x131E34u;
    {
        const bool branch_taken_0x131e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131E34u;
            // 0x131e38: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e34) {
            ctx->pc = 0x131D28u;
            runtime->cooperativeGuestYield();
            goto label_131d28;
        }
    }
    ctx->pc = 0x131E3Cu;
    // 0x131e3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x131e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e40: 0xc04c270  jal         func_1309C0
    ctx->pc = 0x131E40u;
    SET_GPR_U32(ctx, 31, 0x131E48u);
    ctx->pc = 0x131E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131E40u;
            // 0x131e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309C0u;
    if (runtime->hasFunction(0x1309C0u)) {
        auto targetFn = runtime->lookupFunction(0x1309C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131E48u; }
        if (ctx->pc != 0x131E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001309C0_0x1309c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131E48u; }
        if (ctx->pc != 0x131E48u) { return; }
    }
    ctx->pc = 0x131E48u;
    // 0x131e48: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x131e48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x131e4c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x131e50: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x131e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x131e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131e58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131e5c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x131e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131e64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131e68: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x131e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x131e6c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x131e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x131e70: 0x40f809  jalr        $v0
    ctx->pc = 0x131E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131E78u);
        ctx->pc = 0x131E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131E70u;
            // 0x131e74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131E78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131CA8u: goto label_131ca8;
            case 0x131D20u: goto label_131d20;
            case 0x131D28u: goto label_131d28;
            case 0x131D38u: goto label_131d38;
            case 0x131D64u: goto label_131d64;
            case 0x131D88u: goto label_131d88;
            case 0x131DC8u: goto label_131dc8;
            case 0x131DCCu: goto label_131dcc;
            case 0x131DDCu: goto label_131ddc;
            case 0x131E18u: goto label_131e18;
            case 0x131E28u: goto label_131e28;
            case 0x131E80u: goto label_131e80;
            case 0x131F00u: goto label_131f00;
            case 0x131F08u: goto label_131f08;
            case 0x131F10u: goto label_131f10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131E78u; }
            if (ctx->pc != 0x131E78u) { return; }
        }
        }
    }
    ctx->pc = 0x131E78u;
    // 0x131e78: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x131E78u;
    {
        const bool branch_taken_0x131e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131E78u;
            // 0x131e7c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e78) {
            ctx->pc = 0x131F10u;
            goto label_131f10;
        }
    }
    ctx->pc = 0x131E80u;
label_131e80:
    // 0x131e80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x131e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131e84: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x131e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x131e88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x131e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x131e8c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x131E8Cu;
    {
        const bool branch_taken_0x131e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131E8Cu;
            // 0x131e90: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e8c) {
            ctx->pc = 0x131F00u;
            goto label_131f00;
        }
    }
    ctx->pc = 0x131E94u;
    // 0x131e94: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x131e94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131e98: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x131e9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131ea0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x131ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x131ea4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x131ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ea8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131eac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131eb0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x131eb4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x131eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x131eb8: 0x40f809  jalr        $v0
    ctx->pc = 0x131EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131EC0u);
        ctx->pc = 0x131EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131EB8u;
            // 0x131ebc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131EC0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131CA8u: goto label_131ca8;
            case 0x131D20u: goto label_131d20;
            case 0x131D28u: goto label_131d28;
            case 0x131D38u: goto label_131d38;
            case 0x131D64u: goto label_131d64;
            case 0x131D88u: goto label_131d88;
            case 0x131DC8u: goto label_131dc8;
            case 0x131DCCu: goto label_131dcc;
            case 0x131DDCu: goto label_131ddc;
            case 0x131E18u: goto label_131e18;
            case 0x131E28u: goto label_131e28;
            case 0x131E80u: goto label_131e80;
            case 0x131F00u: goto label_131f00;
            case 0x131F08u: goto label_131f08;
            case 0x131F10u: goto label_131f10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131EC0u; }
            if (ctx->pc != 0x131EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x131EC0u;
    // 0x131ec0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x131ec0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131ec4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131ec8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x131ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x131ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ed0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131ed4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x131ed4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ed8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131edc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x131edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x131ee0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x131ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x131ee4: 0x40f809  jalr        $v0
    ctx->pc = 0x131EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131EECu);
        ctx->pc = 0x131EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131EE4u;
            // 0x131ee8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131EECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131CA8u: goto label_131ca8;
            case 0x131D20u: goto label_131d20;
            case 0x131D28u: goto label_131d28;
            case 0x131D38u: goto label_131d38;
            case 0x131D64u: goto label_131d64;
            case 0x131D88u: goto label_131d88;
            case 0x131DC8u: goto label_131dc8;
            case 0x131DCCu: goto label_131dcc;
            case 0x131DDCu: goto label_131ddc;
            case 0x131E18u: goto label_131e18;
            case 0x131E28u: goto label_131e28;
            case 0x131E80u: goto label_131e80;
            case 0x131F00u: goto label_131f00;
            case 0x131F08u: goto label_131f08;
            case 0x131F10u: goto label_131f10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131EECu; }
            if (ctx->pc != 0x131EECu) { return; }
        }
        }
    }
    ctx->pc = 0x131EECu;
    // 0x131eec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x131eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131ef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131ef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131EF4u;
    {
        const bool branch_taken_0x131ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131EF4u;
            // 0x131ef8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ef4) {
            ctx->pc = 0x131F08u;
            goto label_131f08;
        }
    }
    ctx->pc = 0x131EFCu;
    // 0x131efc: 0x0  nop
    ctx->pc = 0x131efcu;
    // NOP
label_131f00:
    // 0x131f00: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x131f00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f04: 0x0  nop
    ctx->pc = 0x131f04u;
    // NOP
label_131f08:
    // 0x131f08: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x131f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f0c: 0x0  nop
    ctx->pc = 0x131f0cu;
    // NOP
label_131f10:
    // 0x131f10: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x131f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x131f14: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x131f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x131f18: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x131f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x131f1c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x131f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x131f20: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x131f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131f24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x131f24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131f28: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x131f28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131f2c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x131f2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131f30: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x131f30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131f38: 0x3e00008  jr          $ra
    ctx->pc = 0x131F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131F38u;
            // 0x131f3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131CA8u: goto label_131ca8;
            case 0x131D20u: goto label_131d20;
            case 0x131D28u: goto label_131d28;
            case 0x131D38u: goto label_131d38;
            case 0x131D64u: goto label_131d64;
            case 0x131D88u: goto label_131d88;
            case 0x131DC8u: goto label_131dc8;
            case 0x131DCCu: goto label_131dcc;
            case 0x131DDCu: goto label_131ddc;
            case 0x131E18u: goto label_131e18;
            case 0x131E28u: goto label_131e28;
            case 0x131E80u: goto label_131e80;
            case 0x131F00u: goto label_131f00;
            case 0x131F08u: goto label_131f08;
            case 0x131F10u: goto label_131f10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131F40u;
}
