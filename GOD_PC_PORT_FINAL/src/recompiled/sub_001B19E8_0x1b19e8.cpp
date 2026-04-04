#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B19E8
// Address: 0x1b19e8 - 0x1b1af0
void sub_001B19E8_0x1b19e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B19E8_0x1b19e8");
#endif

    ctx->pc = 0x1b19e8u;

    // 0x1b19e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b19e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b19ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b19ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b19f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b19f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b19f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b19f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b19fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b19fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a04: 0x0  nop
    ctx->pc = 0x1b1a04u;
    // NOP
label_1b1a08:
    // 0x1b1a08: 0xc040680  jal         func_101A00
    ctx->pc = 0x1B1A08u;
    SET_GPR_U32(ctx, 31, 0x1B1A10u);
    ctx->pc = 0x1B1A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A08u;
            // 0x1b1a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (runtime->hasFunction(0x101A00u)) {
        auto targetFn = runtime->lookupFunction(0x101A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A10u; }
        if (ctx->pc != 0x1B1A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101A00_0x101a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A10u; }
        if (ctx->pc != 0x1B1A10u) { return; }
    }
    ctx->pc = 0x1B1A10u;
    // 0x1b1a10: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1B1A10u;
    {
        const bool branch_taken_0x1b1a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a10) {
            ctx->pc = 0x1B1A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A10u;
            // 0x1b1a14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1ACCu;
            goto label_1b1acc;
        }
    }
    ctx->pc = 0x1B1A18u;
    // 0x1b1a18: 0xc041d10  jal         func_107440
    ctx->pc = 0x1B1A18u;
    SET_GPR_U32(ctx, 31, 0x1B1A20u);
    ctx->pc = 0x1B1A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A18u;
            // 0x1b1a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107440u;
    if (runtime->hasFunction(0x107440u)) {
        auto targetFn = runtime->lookupFunction(0x107440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A20u; }
        if (ctx->pc != 0x1B1A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107440_0x107480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A20u; }
        if (ctx->pc != 0x1B1A20u) { return; }
    }
    ctx->pc = 0x1B1A20u;
    // 0x1b1a20: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B1A20u;
    {
        const bool branch_taken_0x1b1a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a20) {
            ctx->pc = 0x1B1A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A20u;
            // 0x1b1a24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1ACCu;
            goto label_1b1acc;
        }
    }
    ctx->pc = 0x1B1A28u;
    // 0x1b1a28: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x1b1a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b1a2c: 0x8c4a0038  lw          $t2, 0x38($v0)
    ctx->pc = 0x1b1a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b1a30: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1b1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1b1a34: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B1A34u;
    {
        const bool branch_taken_0x1b1a34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B1A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A34u;
            // 0x1b1a38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a34) {
            ctx->pc = 0x1B1AC8u;
            goto label_1b1ac8;
        }
    }
    ctx->pc = 0x1B1A3Cu;
    // 0x1b1a3c: 0x94e90012  lhu         $t1, 0x12($a3)
    ctx->pc = 0x1b1a3cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
label_1b1a40:
    // 0x1b1a40: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1b1a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a44: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1A44u;
    {
        const bool branch_taken_0x1b1a44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A44u;
            // 0x1b1a48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a44) {
            ctx->pc = 0x1B1AA4u;
            goto label_1b1aa4;
        }
    }
    ctx->pc = 0x1B1A4Cu;
    // 0x1b1a4c: 0x0  nop
    ctx->pc = 0x1b1a4cu;
    // NOP
label_1b1a50:
    // 0x1b1a50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1a54: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b1a58: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1b1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b1a5c: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1b1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b1a60: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1b1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b1a64: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x1b1a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b1a68: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B1A68u;
    {
        const bool branch_taken_0x1b1a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a68) {
            ctx->pc = 0x1B1A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A68u;
            // 0x1b1a6c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1A98u;
            goto label_1b1a98;
        }
    }
    ctx->pc = 0x1B1A70u;
    // 0x1b1a70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b1a74: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x1b1a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x1b1a78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b1a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b1a7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b1a80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1A80u;
    {
        const bool branch_taken_0x1b1a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A80u;
            // 0x1b1a84: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a80) {
            ctx->pc = 0x1B1AA4u;
            goto label_1b1aa4;
        }
    }
    ctx->pc = 0x1B1A88u;
    // 0x1b1a88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b1a8c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1b1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b1a90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1A90u;
    {
        const bool branch_taken_0x1b1a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A90u;
            // 0x1b1a94: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a90) {
            ctx->pc = 0x1B1AA8u;
            goto label_1b1aa8;
        }
    }
    ctx->pc = 0x1B1A98u;
label_1b1a98:
    // 0x1b1a98: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b1a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b1a9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B1A9Cu;
    {
        const bool branch_taken_0x1b1a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A9Cu;
            // 0x1b1aa0: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a9c) {
            ctx->pc = 0x1B1A50u;
            runtime->cooperativeGuestYield();
            goto label_1b1a50;
        }
    }
    ctx->pc = 0x1B1AA4u;
label_1b1aa4:
    // 0x1b1aa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1aa8:
    // 0x1b1aa8: 0x55420003  bnel        $t2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1AA8u;
    {
        const bool branch_taken_0x1b1aa8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1aa8) {
            ctx->pc = 0x1B1AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AA8u;
            // 0x1b1aac: 0x8ce20014  lw          $v0, 0x14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AB8u;
            goto label_1b1ab8;
        }
    }
    ctx->pc = 0x1B1AB0u;
    // 0x1b1ab0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B1AB0u;
    {
        const bool branch_taken_0x1b1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AB0u;
            // 0x1b1ab4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ab0) {
            ctx->pc = 0x1B1ADCu;
            goto label_1b1adc;
        }
    }
    ctx->pc = 0x1B1AB8u;
label_1b1ab8:
    // 0x1b1ab8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b1ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b1abc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1b1abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1ac0: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1B1AC0u;
    {
        const bool branch_taken_0x1b1ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ac0) {
            ctx->pc = 0x1B1AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AC0u;
            // 0x1b1ac4: 0x94e90012  lhu         $t1, 0x12($a3) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1A40u;
            runtime->cooperativeGuestYield();
            goto label_1b1a40;
        }
    }
    ctx->pc = 0x1B1AC8u;
label_1b1ac8:
    // 0x1b1ac8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1acc:
    // 0x1b1acc: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x1b1accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b1ad0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1B1AD0u;
    {
        const bool branch_taken_0x1b1ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AD0u;
            // 0x1b1ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ad0) {
            ctx->pc = 0x1B1A08u;
            runtime->cooperativeGuestYield();
            goto label_1b1a08;
        }
    }
    ctx->pc = 0x1B1AD8u;
    // 0x1b1ad8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1adc:
    // 0x1b1adc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AE8u;
            // 0x1b1aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1A08u: goto label_1b1a08;
            case 0x1B1A40u: goto label_1b1a40;
            case 0x1B1A50u: goto label_1b1a50;
            case 0x1B1A98u: goto label_1b1a98;
            case 0x1B1AA4u: goto label_1b1aa4;
            case 0x1B1AA8u: goto label_1b1aa8;
            case 0x1B1AB8u: goto label_1b1ab8;
            case 0x1B1AC8u: goto label_1b1ac8;
            case 0x1B1ACCu: goto label_1b1acc;
            case 0x1B1ADCu: goto label_1b1adc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1AF0u;
}
