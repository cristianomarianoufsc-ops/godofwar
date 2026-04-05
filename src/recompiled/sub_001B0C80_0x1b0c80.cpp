#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0C80
// Address: 0x1b0c80 - 0x1b0dd0
void sub_001B0C80_0x1b0c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0C80_0x1b0c80");
#endif

    ctx->pc = 0x1b0c80u;

    // 0x1b0c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b0c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b0c84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b0c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b0c88: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b0c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b0c8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b0c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c90: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1b0c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1b0c94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b0c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b0c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b0c9c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b0c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ca0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b0ca4: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x1B0CA4u;
    {
        const bool branch_taken_0x1b0ca4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CA4u;
            // 0x1b0ca8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ca4) {
            ctx->pc = 0x1B0DACu;
            goto label_1b0dac;
        }
    }
    ctx->pc = 0x1B0CACu;
    // 0x1b0cac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b0cb0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1b0cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1b0cb4: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x1b0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1b0cb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0cbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0cc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0cc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b0cc8: 0x8c5100c0  lw          $s1, 0xC0($v0)
    ctx->pc = 0x1b0cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b0ccc: 0x52200038  beql        $s1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x1B0CCCu;
    {
        const bool branch_taken_0x1b0ccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ccc) {
            ctx->pc = 0x1B0CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CCCu;
            // 0x1b0cd0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0DB0u;
            goto label_1b0db0;
        }
    }
    ctx->pc = 0x1B0CD4u;
    // 0x1b0cd4: 0x2622ffec  addiu       $v0, $s1, -0x14
    ctx->pc = 0x1b0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
label_1b0cd8:
    // 0x1b0cd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b0cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cdc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1b0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b0ce0: 0x16630009  bne         $s3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0CE0u;
    {
        const bool branch_taken_0x1b0ce0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CE0u;
            // 0x1b0ce4: 0x51800b  movn        $s0, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ce0) {
            ctx->pc = 0x1B0D08u;
            goto label_1b0d08;
        }
    }
    ctx->pc = 0x1B0CE8u;
    // 0x1b0ce8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1b0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b0cec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b0cf0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b0cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b0cf4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1b0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b0cf8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B0CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0D00u);
        ctx->pc = 0x1B0CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CF8u;
            // 0x1b0cfc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0D00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0CD8u: goto label_1b0cd8;
            case 0x1B0D08u: goto label_1b0d08;
            case 0x1B0D2Cu: goto label_1b0d2c;
            case 0x1B0D68u: goto label_1b0d68;
            case 0x1B0DA0u: goto label_1b0da0;
            case 0x1B0DA4u: goto label_1b0da4;
            case 0x1B0DACu: goto label_1b0dac;
            case 0x1B0DB0u: goto label_1b0db0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0D00u; }
            if (ctx->pc != 0x1B0D00u) { return; }
        }
        }
    }
    ctx->pc = 0x1B0D00u;
    // 0x1b0d00: 0x54540028  bnel        $v0, $s4, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B0D00u;
    {
        const bool branch_taken_0x1b0d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1b0d00) {
            ctx->pc = 0x1B0D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D00u;
            // 0x1b0d04: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0DA4u;
            goto label_1b0da4;
        }
    }
    ctx->pc = 0x1B0D08u;
label_1b0d08:
    // 0x1b0d08: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1b0d08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b0d0c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b0d10: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B0D10u;
    {
        const bool branch_taken_0x1b0d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D10u;
            // 0x1b0d14: 0x2642fffe  addiu       $v0, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d10) {
            ctx->pc = 0x1B0D68u;
            goto label_1b0d68;
        }
    }
    ctx->pc = 0x1B0D18u;
    // 0x1b0d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0d1c: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0D1Cu;
    {
        const bool branch_taken_0x1b0d1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D1Cu;
            // 0x1b0d20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d1c) {
            ctx->pc = 0x1B0D2Cu;
            goto label_1b0d2c;
        }
    }
    ctx->pc = 0x1B0D24u;
    // 0x1b0d24: 0x5642001f  bnel        $s2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B0D24u;
    {
        const bool branch_taken_0x1b0d24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0d24) {
            ctx->pc = 0x1B0D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D24u;
            // 0x1b0d28: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0DA4u;
            goto label_1b0da4;
        }
    }
    ctx->pc = 0x1B0D2Cu;
label_1b0d2c:
    // 0x1b0d2c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1b0d2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0d30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b0d34: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1b0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1b0d38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b0d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0d48: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b0d4c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b0d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b0d50: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b0d54: 0x40f809  jalr        $v0
    ctx->pc = 0x1B0D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0D5Cu);
        ctx->pc = 0x1B0D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D54u;
            // 0x1b0d58: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0D5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0CD8u: goto label_1b0cd8;
            case 0x1B0D08u: goto label_1b0d08;
            case 0x1B0D2Cu: goto label_1b0d2c;
            case 0x1B0D68u: goto label_1b0d68;
            case 0x1B0DA0u: goto label_1b0da0;
            case 0x1B0DA4u: goto label_1b0da4;
            case 0x1B0DACu: goto label_1b0dac;
            case 0x1B0DB0u: goto label_1b0db0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0D5Cu; }
            if (ctx->pc != 0x1B0D5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B0D5Cu;
    // 0x1b0d5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B0D5Cu;
    {
        const bool branch_taken_0x1b0d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D5Cu;
            // 0x1b0d60: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d5c) {
            ctx->pc = 0x1B0DA4u;
            goto label_1b0da4;
        }
    }
    ctx->pc = 0x1B0D64u;
    // 0x1b0d64: 0x0  nop
    ctx->pc = 0x1b0d64u;
    // NOP
label_1b0d68:
    // 0x1b0d68: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b0d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b0d6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0D6Cu;
    {
        const bool branch_taken_0x1b0d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D6Cu;
            // 0x1b0d70: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d6c) {
            ctx->pc = 0x1B0DA0u;
            goto label_1b0da0;
        }
    }
    ctx->pc = 0x1B0D74u;
    // 0x1b0d74: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1b0d74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0d78: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1b0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1b0d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0d80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0d84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b0d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0d8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b0d90: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b0d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1b0d94: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b0d98: 0x40f809  jalr        $v0
    ctx->pc = 0x1B0D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0DA0u);
        ctx->pc = 0x1B0D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D98u;
            // 0x1b0d9c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0DA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0CD8u: goto label_1b0cd8;
            case 0x1B0D08u: goto label_1b0d08;
            case 0x1B0D2Cu: goto label_1b0d2c;
            case 0x1B0D68u: goto label_1b0d68;
            case 0x1B0DA0u: goto label_1b0da0;
            case 0x1B0DA4u: goto label_1b0da4;
            case 0x1B0DACu: goto label_1b0dac;
            case 0x1B0DB0u: goto label_1b0db0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0DA0u; }
            if (ctx->pc != 0x1B0DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B0DA0u;
label_1b0da0:
    // 0x1b0da0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1b0da0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b0da4:
    // 0x1b0da4: 0x1620ffcc  bnez        $s1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1B0DA4u;
    {
        const bool branch_taken_0x1b0da4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0DA4u;
            // 0x1b0da8: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0da4) {
            ctx->pc = 0x1B0CD8u;
            runtime->cooperativeGuestYield();
            goto label_1b0cd8;
        }
    }
    ctx->pc = 0x1B0DACu;
label_1b0dac:
    // 0x1b0dac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b0dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0db0:
    // 0x1b0db0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b0db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0db4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b0db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0db8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b0db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0dbc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1b0dbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0DC4u;
            // 0x1b0dc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0CD8u: goto label_1b0cd8;
            case 0x1B0D08u: goto label_1b0d08;
            case 0x1B0D2Cu: goto label_1b0d2c;
            case 0x1B0D68u: goto label_1b0d68;
            case 0x1B0DA0u: goto label_1b0da0;
            case 0x1B0DA4u: goto label_1b0da4;
            case 0x1B0DACu: goto label_1b0dac;
            case 0x1B0DB0u: goto label_1b0db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0DCCu;
    // 0x1b0dcc: 0x0  nop
    ctx->pc = 0x1b0dccu;
    // NOP
}
