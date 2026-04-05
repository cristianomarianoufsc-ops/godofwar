#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CAAE0
// Address: 0x1caae0 - 0x1cad70
void sub_001CAAE0_0x1caae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAAE0_0x1caae0");
#endif

    ctx->pc = 0x1caae0u;

    // 0x1caae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1caae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1caae4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1caae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1caae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1caae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1caaec: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1caaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1caaf0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1caaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1caaf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1caaf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caaf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1caaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1caafc: 0x24429898  addiu       $v0, $v0, -0x6768
    ctx->pc = 0x1caafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940824));
    // 0x1cab00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cab04: 0x246398b8  addiu       $v1, $v1, -0x6748
    ctx->pc = 0x1cab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940856));
    // 0x1cab08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cab0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cab0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab10: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1cab10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1cab14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cab14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cab18: 0xc079a80  jal         func_1E6A00
    ctx->pc = 0x1CAB18u;
    SET_GPR_U32(ctx, 31, 0x1CAB20u);
    ctx->pc = 0x1CAB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB18u;
            // 0x1cab1c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6A00u;
    if (runtime->hasFunction(0x1E6A00u)) {
        auto targetFn = runtime->lookupFunction(0x1E6A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB20u; }
        if (ctx->pc != 0x1CAB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6A00_0x1e6a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB20u; }
        if (ctx->pc != 0x1CAB20u) { return; }
    }
    ctx->pc = 0x1CAB20u;
    // 0x1cab20: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1cab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1cab24: 0x8c452878  lw          $a1, 0x2878($v0)
    ctx->pc = 0x1cab24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10360)));
    // 0x1cab28: 0x24432878  addiu       $v1, $v0, 0x2878
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10360));
    // 0x1cab2c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAB2Cu;
    {
        const bool branch_taken_0x1cab2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CAB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB2Cu;
            // 0x1cab30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab2c) {
            ctx->pc = 0x1CAB50u;
            goto label_1cab50;
        }
    }
    ctx->pc = 0x1CAB34u;
    // 0x1cab34: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1cab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cab38:
    // 0x1cab38: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAB38u;
    {
        const bool branch_taken_0x1cab38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1CAB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB38u;
            // 0x1cab3c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab38) {
            ctx->pc = 0x1CAB50u;
            goto label_1cab50;
        }
    }
    ctx->pc = 0x1CAB40u;
    // 0x1cab40: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1cab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cab44: 0x54a3fffc  bnel        $a1, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1CAB44u;
    {
        const bool branch_taken_0x1cab44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cab44) {
            ctx->pc = 0x1CAB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB44u;
            // 0x1cab48: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CAB38u;
            runtime->cooperativeGuestYield();
            goto label_1cab38;
        }
    }
    ctx->pc = 0x1CAB4Cu;
    // 0x1cab4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cab4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cab50:
    // 0x1cab50: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1cab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cab54: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1cab54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1cab58: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1cab58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cab5c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1cab5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab60: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x1cab60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x1cab64: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1cab64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1cab68: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1cab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cab6c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1cab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cab70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1cab70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1cab74: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cab74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1cab78: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1CAB78u;
    SET_GPR_U32(ctx, 31, 0x1CAB80u);
    ctx->pc = 0x1CAB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB78u;
            // 0x1cab7c: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB80u; }
        if (ctx->pc != 0x1CAB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAB80u; }
        if (ctx->pc != 0x1CAB80u) { return; }
    }
    ctx->pc = 0x1CAB80u;
    // 0x1cab80: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1cab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1cab84: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1cab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1cab88: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1cab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1cab8c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CAB8Cu;
    {
        const bool branch_taken_0x1cab8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB8Cu;
            // 0x1cab90: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab8c) {
            ctx->pc = 0x1CABF4u;
            goto label_1cabf4;
        }
    }
    ctx->pc = 0x1CAB94u;
    // 0x1cab94: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CAB94u;
    {
        const bool branch_taken_0x1cab94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAB94u;
            // 0x1cab98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab94) {
            ctx->pc = 0x1CAC10u;
            goto label_1cac10;
        }
    }
    ctx->pc = 0x1CAB9Cu;
    // 0x1cab9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1caba0: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1caba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1caba4: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1caba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1caba8: 0x40f809  jalr        $v0
    ctx->pc = 0x1CABA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CABB0u);
        ctx->pc = 0x1CABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABA8u;
            // 0x1cabac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CABB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAB38u: goto label_1cab38;
            case 0x1CAB50u: goto label_1cab50;
            case 0x1CABF0u: goto label_1cabf0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CAC10u: goto label_1cac10;
            case 0x1CAC70u: goto label_1cac70;
            case 0x1CAC80u: goto label_1cac80;
            case 0x1CAC84u: goto label_1cac84;
            case 0x1CACA0u: goto label_1caca0;
            case 0x1CACD0u: goto label_1cacd0;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CAD18u: goto label_1cad18;
            case 0x1CAD1Cu: goto label_1cad1c;
            case 0x1CAD2Cu: goto label_1cad2c;
            case 0x1CAD38u: goto label_1cad38;
            case 0x1CAD3Cu: goto label_1cad3c;
            case 0x1CAD54u: goto label_1cad54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CABB0u; }
            if (ctx->pc != 0x1CABB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CABB0u;
    // 0x1cabb0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CABB0u;
    {
        const bool branch_taken_0x1cabb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABB0u;
            // 0x1cabb4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabb0) {
            ctx->pc = 0x1CABF4u;
            goto label_1cabf4;
        }
    }
    ctx->pc = 0x1CABB8u;
    // 0x1cabb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cabbc: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cabbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cabc0: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cabc4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CABC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CABCCu);
        ctx->pc = 0x1CABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABC4u;
            // 0x1cabc8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CABCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAB38u: goto label_1cab38;
            case 0x1CAB50u: goto label_1cab50;
            case 0x1CABF0u: goto label_1cabf0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CAC10u: goto label_1cac10;
            case 0x1CAC70u: goto label_1cac70;
            case 0x1CAC80u: goto label_1cac80;
            case 0x1CAC84u: goto label_1cac84;
            case 0x1CACA0u: goto label_1caca0;
            case 0x1CACD0u: goto label_1cacd0;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CAD18u: goto label_1cad18;
            case 0x1CAD1Cu: goto label_1cad1c;
            case 0x1CAD2Cu: goto label_1cad2c;
            case 0x1CAD38u: goto label_1cad38;
            case 0x1CAD3Cu: goto label_1cad3c;
            case 0x1CAD54u: goto label_1cad54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CABCCu; }
            if (ctx->pc != 0x1CABCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CABCCu;
    // 0x1cabcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cabccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cabd0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CABD0u;
    {
        const bool branch_taken_0x1cabd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABD0u;
            // 0x1cabd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabd0) {
            ctx->pc = 0x1CABF0u;
            goto label_1cabf0;
        }
    }
    ctx->pc = 0x1CABD8u;
    // 0x1cabd8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1cabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1cabdc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1cabdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cabe0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cabe4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CABE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CABECu);
        ctx->pc = 0x1CABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABE4u;
            // 0x1cabe8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CABECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAB38u: goto label_1cab38;
            case 0x1CAB50u: goto label_1cab50;
            case 0x1CABF0u: goto label_1cabf0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CAC10u: goto label_1cac10;
            case 0x1CAC70u: goto label_1cac70;
            case 0x1CAC80u: goto label_1cac80;
            case 0x1CAC84u: goto label_1cac84;
            case 0x1CACA0u: goto label_1caca0;
            case 0x1CACD0u: goto label_1cacd0;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CAD18u: goto label_1cad18;
            case 0x1CAD1Cu: goto label_1cad1c;
            case 0x1CAD2Cu: goto label_1cad2c;
            case 0x1CAD38u: goto label_1cad38;
            case 0x1CAD3Cu: goto label_1cad3c;
            case 0x1CAD54u: goto label_1cad54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CABECu; }
            if (ctx->pc != 0x1CABECu) { return; }
        }
        }
    }
    ctx->pc = 0x1CABECu;
    // 0x1cabec: 0x0  nop
    ctx->pc = 0x1cabecu;
    // NOP
label_1cabf0:
    // 0x1cabf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cabf4:
    // 0x1cabf4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CABF4u;
    {
        const bool branch_taken_0x1cabf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CABF4u;
            // 0x1cabf8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabf4) {
            ctx->pc = 0x1CAC10u;
            goto label_1cac10;
        }
    }
    ctx->pc = 0x1CABFCu;
    // 0x1cabfc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cac00: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1cac00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cac04: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cac08: 0x40f809  jalr        $v0
    ctx->pc = 0x1CAC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAC10u);
        ctx->pc = 0x1CAC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC08u;
            // 0x1cac0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CAC10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAB38u: goto label_1cab38;
            case 0x1CAB50u: goto label_1cab50;
            case 0x1CABF0u: goto label_1cabf0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CAC10u: goto label_1cac10;
            case 0x1CAC70u: goto label_1cac70;
            case 0x1CAC80u: goto label_1cac80;
            case 0x1CAC84u: goto label_1cac84;
            case 0x1CACA0u: goto label_1caca0;
            case 0x1CACD0u: goto label_1cacd0;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CAD18u: goto label_1cad18;
            case 0x1CAD1Cu: goto label_1cad1c;
            case 0x1CAD2Cu: goto label_1cad2c;
            case 0x1CAD38u: goto label_1cad38;
            case 0x1CAD3Cu: goto label_1cad3c;
            case 0x1CAD54u: goto label_1cad54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC10u; }
            if (ctx->pc != 0x1CAC10u) { return; }
        }
        }
    }
    ctx->pc = 0x1CAC10u;
label_1cac10:
    // 0x1cac10: 0xc074afa  jal         func_1D2BE8
    ctx->pc = 0x1CAC10u;
    SET_GPR_U32(ctx, 31, 0x1CAC18u);
    ctx->pc = 0x1CAC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC10u;
            // 0x1cac14: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2BE8u;
    if (runtime->hasFunction(0x1D2BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1D2BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC18u; }
        if (ctx->pc != 0x1CAC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2BE8_0x1d2be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC18u; }
        if (ctx->pc != 0x1CAC18u) { return; }
    }
    ctx->pc = 0x1CAC18u;
    // 0x1cac18: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1cac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1cac1c: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1CAC1Cu;
    {
        const bool branch_taken_0x1cac1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC1Cu;
            // 0x1cac20: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac1c) {
            ctx->pc = 0x1CAD3Cu;
            goto label_1cad3c;
        }
    }
    ctx->pc = 0x1CAC24u;
    // 0x1cac24: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1cac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1cac28: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cac2c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CAC2Cu;
    {
        const bool branch_taken_0x1cac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC2Cu;
            // 0x1cac30: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac2c) {
            ctx->pc = 0x1CAD38u;
            goto label_1cad38;
        }
    }
    ctx->pc = 0x1CAC34u;
    // 0x1cac34: 0x8063009b  lb          $v1, 0x9B($v1)
    ctx->pc = 0x1cac34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 155)));
    // 0x1cac38: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x1cac38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1cac3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac40: 0x26061584  addiu       $a2, $s0, 0x1584
    ctx->pc = 0x1cac40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5508));
    // 0x1cac44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cac44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cac48: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cac4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cac50: 0x10450013  beq         $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CAC50u;
    {
        const bool branch_taken_0x1cac50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CAC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC50u;
            // 0x1cac54: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac50) {
            ctx->pc = 0x1CACA0u;
            goto label_1caca0;
        }
    }
    ctx->pc = 0x1CAC58u;
    // 0x1cac58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cac5c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAC5Cu;
    {
        const bool branch_taken_0x1cac5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CAC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC5Cu;
            // 0x1cac60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac5c) {
            ctx->pc = 0x1CAC70u;
            goto label_1cac70;
        }
    }
    ctx->pc = 0x1CAC64u;
    // 0x1cac64: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1cac64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1cac68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAC68u;
    {
        const bool branch_taken_0x1cac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC68u;
            // 0x1cac6c: 0xae02022c  sw          $v0, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac68) {
            ctx->pc = 0x1CAC84u;
            goto label_1cac84;
        }
    }
    ctx->pc = 0x1CAC70u;
label_1cac70:
    // 0x1cac70: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAC70u;
    {
        const bool branch_taken_0x1cac70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CAC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC70u;
            // 0x1cac74: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac70) {
            ctx->pc = 0x1CAC80u;
            goto label_1cac80;
        }
    }
    ctx->pc = 0x1CAC78u;
    // 0x1cac78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAC78u;
    {
        const bool branch_taken_0x1cac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC78u;
            // 0x1cac7c: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac78) {
            ctx->pc = 0x1CAC84u;
            goto label_1cac84;
        }
    }
    ctx->pc = 0x1CAC80u;
label_1cac80:
    // 0x1cac80: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x1cac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
label_1cac84:
    // 0x1cac84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cac84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cac88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cac90: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1CAC90u;
    SET_GPR_U32(ctx, 31, 0x1CAC98u);
    ctx->pc = 0x1CAC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC90u;
            // 0x1cac94: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC98u; }
        if (ctx->pc != 0x1CAC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAC98u; }
        if (ctx->pc != 0x1CAC98u) { return; }
    }
    ctx->pc = 0x1CAC98u;
    // 0x1cac98: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1CAC98u;
    {
        const bool branch_taken_0x1cac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAC98u;
            // 0x1cac9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac98) {
            ctx->pc = 0x1CAD1Cu;
            goto label_1cad1c;
        }
    }
    ctx->pc = 0x1CACA0u;
label_1caca0:
    // 0x1caca0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CACA0u;
    {
        const bool branch_taken_0x1caca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACA0u;
            // 0x1caca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caca0) {
            ctx->pc = 0x1CAD18u;
            goto label_1cad18;
        }
    }
    ctx->pc = 0x1CACA8u;
    // 0x1caca8: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CACA8u;
    {
        const bool branch_taken_0x1caca8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACA8u;
            // 0x1cacac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caca8) {
            ctx->pc = 0x1CACD0u;
            goto label_1cacd0;
        }
    }
    ctx->pc = 0x1CACB0u;
    // 0x1cacb0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1cacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cacb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CACB4u;
    {
        const bool branch_taken_0x1cacb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACB4u;
            // 0x1cacb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacb4) {
            ctx->pc = 0x1CACD0u;
            goto label_1cacd0;
        }
    }
    ctx->pc = 0x1CACBCu;
    // 0x1cacbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cacbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cacc0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1CACC0u;
    SET_GPR_U32(ctx, 31, 0x1CACC8u);
    ctx->pc = 0x1CACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACC0u;
            // 0x1cacc4: 0xae02022c  sw          $v0, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACC8u; }
        if (ctx->pc != 0x1CACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACC8u; }
        if (ctx->pc != 0x1CACC8u) { return; }
    }
    ctx->pc = 0x1CACC8u;
    // 0x1cacc8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CACC8u;
    {
        const bool branch_taken_0x1cacc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACC8u;
            // 0x1caccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacc8) {
            ctx->pc = 0x1CAD1Cu;
            goto label_1cad1c;
        }
    }
    ctx->pc = 0x1CACD0u;
label_1cacd0:
    // 0x1cacd0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CACD0u;
    {
        const bool branch_taken_0x1cacd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CACD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACD0u;
            // 0x1cacd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacd0) {
            ctx->pc = 0x1CACF8u;
            goto label_1cacf8;
        }
    }
    ctx->pc = 0x1CACD8u;
    // 0x1cacd8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1cacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cacdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CACDCu;
    {
        const bool branch_taken_0x1cacdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACDCu;
            // 0x1cace0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacdc) {
            ctx->pc = 0x1CACF8u;
            goto label_1cacf8;
        }
    }
    ctx->pc = 0x1CACE4u;
    // 0x1cace4: 0xae110230  sw          $s1, 0x230($s0)
    ctx->pc = 0x1cace4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 17));
    // 0x1cace8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1CACE8u;
    SET_GPR_U32(ctx, 31, 0x1CACF0u);
    ctx->pc = 0x1CACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACE8u;
            // 0x1cacec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACF0u; }
        if (ctx->pc != 0x1CACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACF0u; }
        if (ctx->pc != 0x1CACF0u) { return; }
    }
    ctx->pc = 0x1CACF0u;
    // 0x1cacf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CACF0u;
    {
        const bool branch_taken_0x1cacf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACF0u;
            // 0x1cacf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacf0) {
            ctx->pc = 0x1CAD1Cu;
            goto label_1cad1c;
        }
    }
    ctx->pc = 0x1CACF8u;
label_1cacf8:
    // 0x1cacf8: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CACF8u;
    {
        const bool branch_taken_0x1cacf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CACF8u;
            // 0x1cacfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacf8) {
            ctx->pc = 0x1CAD1Cu;
            goto label_1cad1c;
        }
    }
    ctx->pc = 0x1CAD00u;
    // 0x1cad00: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1cad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cad04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAD04u;
    {
        const bool branch_taken_0x1cad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD04u;
            // 0x1cad08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad04) {
            ctx->pc = 0x1CAD18u;
            goto label_1cad18;
        }
    }
    ctx->pc = 0x1CAD0Cu;
    // 0x1cad0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad10: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1CAD10u;
    SET_GPR_U32(ctx, 31, 0x1CAD18u);
    ctx->pc = 0x1CAD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD10u;
            // 0x1cad14: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD18u; }
        if (ctx->pc != 0x1CAD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD18u; }
        if (ctx->pc != 0x1CAD18u) { return; }
    }
    ctx->pc = 0x1CAD18u;
label_1cad18:
    // 0x1cad18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cad1c:
    // 0x1cad1c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAD1Cu;
    {
        const bool branch_taken_0x1cad1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CAD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD1Cu;
            // 0x1cad20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad1c) {
            ctx->pc = 0x1CAD2Cu;
            goto label_1cad2c;
        }
    }
    ctx->pc = 0x1CAD24u;
    // 0x1cad24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAD24u;
    {
        const bool branch_taken_0x1cad24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD24u;
            // 0x1cad28: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad24) {
            ctx->pc = 0x1CAD38u;
            goto label_1cad38;
        }
    }
    ctx->pc = 0x1CAD2Cu;
label_1cad2c:
    // 0x1cad2c: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAD2Cu;
    {
        const bool branch_taken_0x1cad2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cad2c) {
            ctx->pc = 0x1CAD30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD2Cu;
            // 0x1cad30: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CAD38u;
            goto label_1cad38;
        }
    }
    ctx->pc = 0x1CAD34u;
    // 0x1cad34: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1cad34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1cad38:
    // 0x1cad38: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1cad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1cad3c:
    // 0x1cad3c: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x1cad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1cad40: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x1cad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x1cad44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAD44u;
    {
        const bool branch_taken_0x1cad44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD44u;
            // 0x1cad48: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad44) {
            ctx->pc = 0x1CAD54u;
            goto label_1cad54;
        }
    }
    ctx->pc = 0x1CAD4Cu;
    // 0x1cad4c: 0xc072a3e  jal         func_1CA8F8
    ctx->pc = 0x1CAD4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAD54u);
    ctx->pc = 0x1CAD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD4Cu;
            // 0x1cad50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA8F8u;
    if (runtime->hasFunction(0x1CA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD54u; }
        if (ctx->pc != 0x1CAD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ca8f8_0x1ca928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAD54u; }
        if (ctx->pc != 0x1CAD54u) { return; }
    }
    ctx->pc = 0x1CAD54u;
label_1cad54:
    // 0x1cad54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cad54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cad58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cad58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cad5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cad5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cad60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1cad60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cad64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cad64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cad68: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAD68u;
            // 0x1cad6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAB38u: goto label_1cab38;
            case 0x1CAB50u: goto label_1cab50;
            case 0x1CABF0u: goto label_1cabf0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CAC10u: goto label_1cac10;
            case 0x1CAC70u: goto label_1cac70;
            case 0x1CAC80u: goto label_1cac80;
            case 0x1CAC84u: goto label_1cac84;
            case 0x1CACA0u: goto label_1caca0;
            case 0x1CACD0u: goto label_1cacd0;
            case 0x1CACF8u: goto label_1cacf8;
            case 0x1CAD18u: goto label_1cad18;
            case 0x1CAD1Cu: goto label_1cad1c;
            case 0x1CAD2Cu: goto label_1cad2c;
            case 0x1CAD38u: goto label_1cad38;
            case 0x1CAD3Cu: goto label_1cad3c;
            case 0x1CAD54u: goto label_1cad54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CAD70u;
}
