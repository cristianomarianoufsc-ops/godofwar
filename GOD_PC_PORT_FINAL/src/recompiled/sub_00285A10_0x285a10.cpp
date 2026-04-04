#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285A10
// Address: 0x285a10 - 0x285b58
void sub_00285A10_0x285a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285A10_0x285a10");
#endif

    ctx->pc = 0x285a10u;

    // 0x285a10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x285a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x285a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285a18: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x285a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x285a1c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x285a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x285a20: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x285a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x285a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x285a28: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x285a28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x285a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x285a30: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x285a30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x285a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x285a38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x285a38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a3c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x285a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x285a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x285a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x285a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x285a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285a4c: 0x12a00036  beqz        $s5, . + 4 + (0x36 << 2)
    ctx->pc = 0x285A4Cu;
    {
        const bool branch_taken_0x285a4c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A4Cu;
            // 0x285a50: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a4c) {
            ctx->pc = 0x285B28u;
            goto label_285b28;
        }
    }
    ctx->pc = 0x285A54u;
    // 0x285a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a58: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x285A58u;
    {
        const bool branch_taken_0x285a58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A58u;
            // 0x285a5c: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a58) {
            ctx->pc = 0x285A8Cu;
            goto label_285a8c;
        }
    }
    ctx->pc = 0x285A60u;
    // 0x285a60: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x285a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x285a64: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x285a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x285a68: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x285a68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
    // 0x285a6c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x285a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x285a70: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x285a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x285a74: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x285a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x285a78: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x285a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x285a7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x285a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285a80: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x285a80u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x285a84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285A84u;
    {
        const bool branch_taken_0x285a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A84u;
            // 0x285a88: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a84) {
            ctx->pc = 0x285A90u;
            goto label_285a90;
        }
    }
    ctx->pc = 0x285A8Cu;
label_285a8c:
    // 0x285a8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x285a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_285a90:
    // 0x285a90: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x285a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x285a94: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x285a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x285a98: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x285a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x285a9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x285a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x285aa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x285aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285aa4: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x285AA4u;
    {
        const bool branch_taken_0x285aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x285AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285AA4u;
            // 0x285aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285aa4) {
            ctx->pc = 0x285B28u;
            goto label_285b28;
        }
    }
    ctx->pc = 0x285AACu;
    // 0x285aac: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x285aacu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x285ab0: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x285ab0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x285ab4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x285ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285ab8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x285ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x285abc: 0x0  nop
    ctx->pc = 0x285abcu;
    // NOP
label_285ac0:
    // 0x285ac0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x285AC0u;
    {
        const bool branch_taken_0x285ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285ac0) {
            ctx->pc = 0x285AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285AC0u;
            // 0x285ac4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285B1Cu;
            goto label_285b1c;
        }
    }
    ctx->pc = 0x285AC8u;
    // 0x285ac8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x285ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x285acc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x285accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x285ad0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x285AD0u;
    {
        const bool branch_taken_0x285ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ad0) {
            ctx->pc = 0x285AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285AD0u;
            // 0x285ad4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285B1Cu;
            goto label_285b1c;
        }
    }
    ctx->pc = 0x285AD8u;
    // 0x285ad8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x285ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x285adc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x285ADCu;
    {
        const bool branch_taken_0x285adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x285adc) {
            ctx->pc = 0x285B10u;
            goto label_285b10;
        }
    }
    ctx->pc = 0x285AE4u;
    // 0x285ae4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x285ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x285ae8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x285AE8u;
    {
        const bool branch_taken_0x285ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285AE8u;
            // 0x285aec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ae8) {
            ctx->pc = 0x285B18u;
            goto label_285b18;
        }
    }
    ctx->pc = 0x285AF0u;
    // 0x285af0: 0x40f809  jalr        $v0
    ctx->pc = 0x285AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285AF8u);
        ctx->pc = 0x285AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285AF0u;
            // 0x285af4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285AF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285A8Cu: goto label_285a8c;
            case 0x285A90u: goto label_285a90;
            case 0x285AC0u: goto label_285ac0;
            case 0x285B08u: goto label_285b08;
            case 0x285B10u: goto label_285b10;
            case 0x285B18u: goto label_285b18;
            case 0x285B1Cu: goto label_285b1c;
            case 0x285B28u: goto label_285b28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285AF8u; }
            if (ctx->pc != 0x285AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x285AF8u;
    // 0x285af8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x285AF8u;
    {
        const bool branch_taken_0x285af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285af8) {
            ctx->pc = 0x285AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285AF8u;
            // 0x285afc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285B1Cu;
            goto label_285b1c;
        }
    }
    ctx->pc = 0x285B00u;
    // 0x285b00: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x285B00u;
    {
        const bool branch_taken_0x285b00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x285b00) {
            ctx->pc = 0x285B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285B00u;
            // 0x285b04: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285B08u;
            goto label_285b08;
        }
    }
    ctx->pc = 0x285B08u;
label_285b08:
    // 0x285b08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x285B08u;
    {
        const bool branch_taken_0x285b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285B08u;
            // 0x285b0c: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b08) {
            ctx->pc = 0x285B28u;
            goto label_285b28;
        }
    }
    ctx->pc = 0x285B10u;
label_285b10:
    // 0x285b10: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x285B10u;
    {
        const bool branch_taken_0x285b10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x285b10) {
            ctx->pc = 0x285B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285B10u;
            // 0x285b14: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285B18u;
            goto label_285b18;
        }
    }
    ctx->pc = 0x285B18u;
label_285b18:
    // 0x285b18: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x285b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_285b1c:
    // 0x285b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x285b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285b20: 0x1452ffe7  bne         $v0, $s2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x285B20u;
    {
        const bool branch_taken_0x285b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x285B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285B20u;
            // 0x285b24: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b20) {
            ctx->pc = 0x285AC0u;
            runtime->cooperativeGuestYield();
            goto label_285ac0;
        }
    }
    ctx->pc = 0x285B28u;
label_285b28:
    // 0x285b28: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x285b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x285b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285b30: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x285b30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285b34: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x285b34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285b38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x285b38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285b3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x285b3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285b40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x285b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285b44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x285B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285B4Cu;
            // 0x285b50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285A8Cu: goto label_285a8c;
            case 0x285A90u: goto label_285a90;
            case 0x285AC0u: goto label_285ac0;
            case 0x285B08u: goto label_285b08;
            case 0x285B10u: goto label_285b10;
            case 0x285B18u: goto label_285b18;
            case 0x285B1Cu: goto label_285b1c;
            case 0x285B28u: goto label_285b28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285B54u;
    // 0x285b54: 0x0  nop
    ctx->pc = 0x285b54u;
    // NOP
}
