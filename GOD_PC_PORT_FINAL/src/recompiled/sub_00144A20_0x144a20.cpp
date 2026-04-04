#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144A20
// Address: 0x144a20 - 0x144be8
void sub_00144A20_0x144a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144A20_0x144a20");
#endif

    ctx->pc = 0x144a20u;

    // 0x144a20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x144a24: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x144a24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x144a28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x144a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x144a2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x144a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x144a30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x144a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a34: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x144a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x144a38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x144a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a3c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x144a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x144a40: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x144a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a44: 0x8d027204  lw          $v0, 0x7204($t0)
    ctx->pc = 0x144a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 29188)));
    // 0x144a48: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x144a48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a4c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x144a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x144a50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x144a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144a54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x144A54u;
    {
        const bool branch_taken_0x144a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A54u;
            // 0x144a58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a54) {
            ctx->pc = 0x144A70u;
            goto label_144a70;
        }
    }
    ctx->pc = 0x144A5Cu;
    // 0x144a5c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x144a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x144a60: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x144a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x144a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144a68: 0xac437200  sw          $v1, 0x7200($v0)
    ctx->pc = 0x144a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29184), GPR_U32(ctx, 3));
    // 0x144a6c: 0xad047204  sw          $a0, 0x7204($t0)
    ctx->pc = 0x144a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 29188), GPR_U32(ctx, 4));
label_144a70:
    // 0x144a70: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x144a70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144a74: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x144a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x144a78: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x144A78u;
    {
        const bool branch_taken_0x144a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x144A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A78u;
            // 0x144a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a78) {
            ctx->pc = 0x144B34u;
            goto label_144b34;
        }
    }
    ctx->pc = 0x144A80u;
    // 0x144a80: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x144a80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x144a84: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x144a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x144a88: 0x8e067200  lw          $a2, 0x7200($s0)
    ctx->pc = 0x144a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29184)));
    // 0x144a8c: 0x24a51818  addiu       $a1, $a1, 0x1818
    ctx->pc = 0x144a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6168));
    // 0x144a90: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x144A90u;
    SET_GPR_U32(ctx, 31, 0x144A98u);
    ctx->pc = 0x144A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A90u;
            // 0x144a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A98u; }
        if (ctx->pc != 0x144A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A98u; }
        if (ctx->pc != 0x144A98u) { return; }
    }
    ctx->pc = 0x144A98u;
    // 0x144a98: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x144A98u;
    {
        const bool branch_taken_0x144a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A98u;
            // 0x144a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a98) {
            ctx->pc = 0x144B34u;
            goto label_144b34;
        }
    }
    ctx->pc = 0x144AA0u;
    // 0x144aa0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x144AA0u;
    SET_GPR_U32(ctx, 31, 0x144AA8u);
    ctx->pc = 0x144AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144AA0u;
            // 0x144aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AA8u; }
        if (ctx->pc != 0x144AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AA8u; }
        if (ctx->pc != 0x144AA8u) { return; }
    }
    ctx->pc = 0x144AA8u;
    // 0x144aa8: 0x8e037200  lw          $v1, 0x7200($s0)
    ctx->pc = 0x144aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29184)));
    // 0x144aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ab0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x144AB0u;
    {
        const bool branch_taken_0x144ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x144AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AB0u;
            // 0x144ab4: 0x24620002  addiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ab0) {
            ctx->pc = 0x144AD0u;
            goto label_144ad0;
        }
    }
    ctx->pc = 0x144AB8u;
    // 0x144ab8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x144ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x144abc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x144abcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x144ac0: 0x24634948  addiu       $v1, $v1, 0x4948
    ctx->pc = 0x144ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18760));
    // 0x144ac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ac8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x144AC8u;
    {
        const bool branch_taken_0x144ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AC8u;
            // 0x144acc: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ac8) {
            ctx->pc = 0x144BC4u;
            goto label_144bc4;
        }
    }
    ctx->pc = 0x144AD0u;
label_144ad0:
    // 0x144ad0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x144ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x144ad4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x144AD4u;
    {
        const bool branch_taken_0x144ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AD4u;
            // 0x144ad8: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ad4) {
            ctx->pc = 0x144B30u;
            goto label_144b30;
        }
    }
    ctx->pc = 0x144ADCu;
    // 0x144adc: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x144adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x144ae0: 0x24530002  addiu       $s3, $v0, 0x2
    ctx->pc = 0x144ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x144ae4: 0xc0511cc  jal         func_144730
    ctx->pc = 0x144AE4u;
    SET_GPR_U32(ctx, 31, 0x144AECu);
    ctx->pc = 0x144AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144AE4u;
            // 0x144ae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144730u;
    if (runtime->hasFunction(0x144730u)) {
        auto targetFn = runtime->lookupFunction(0x144730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AECu; }
        if (ctx->pc != 0x144AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144730_0x144730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AECu; }
        if (ctx->pc != 0x144AECu) { return; }
    }
    ctx->pc = 0x144AECu;
    // 0x144aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144af0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x144AF0u;
    {
        const bool branch_taken_0x144af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x144AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AF0u;
            // 0x144af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144af0) {
            ctx->pc = 0x144B34u;
            goto label_144b34;
        }
    }
    ctx->pc = 0x144AF8u;
    // 0x144af8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x144af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x144afc: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x144afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x144b00: 0xc0a2c5c  jal         func_28B170
    ctx->pc = 0x144B00u;
    SET_GPR_U32(ctx, 31, 0x144B08u);
    ctx->pc = 0x144B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B00u;
            // 0x144b04: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B170u;
    if (runtime->hasFunction(0x28B170u)) {
        auto targetFn = runtime->lookupFunction(0x28B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B08u; }
        if (ctx->pc != 0x144B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B170_0x28b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B08u; }
        if (ctx->pc != 0x144B08u) { return; }
    }
    ctx->pc = 0x144B08u;
    // 0x144b08: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x144b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x144b0c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x144b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x144b10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b14: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x144b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x144b18: 0x40f809  jalr        $v0
    ctx->pc = 0x144B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144B20u);
        ctx->pc = 0x144B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B18u;
            // 0x144b1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x144B20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144A70u: goto label_144a70;
            case 0x144AD0u: goto label_144ad0;
            case 0x144B30u: goto label_144b30;
            case 0x144B34u: goto label_144b34;
            case 0x144B68u: goto label_144b68;
            case 0x144BB4u: goto label_144bb4;
            case 0x144BC4u: goto label_144bc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x144B20u; }
            if (ctx->pc != 0x144B20u) { return; }
        }
        }
    }
    ctx->pc = 0x144B20u;
    // 0x144b20: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x144b20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x144b24: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x144b24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x144b28: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x144B28u;
    {
        const bool branch_taken_0x144b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B28u;
            // 0x144b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b28) {
            ctx->pc = 0x144BC4u;
            goto label_144bc4;
        }
    }
    ctx->pc = 0x144B30u;
label_144b30:
    // 0x144b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144b34:
    // 0x144b34: 0xc0a2589  jal         func_289624
    ctx->pc = 0x144B34u;
    SET_GPR_U32(ctx, 31, 0x144B3Cu);
    ctx->pc = 0x144B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B34u;
            // 0x144b38: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B3Cu; }
        if (ctx->pc != 0x144B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B3Cu; }
        if (ctx->pc != 0x144B3Cu) { return; }
    }
    ctx->pc = 0x144B3Cu;
    // 0x144b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b40: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x144B40u;
    {
        const bool branch_taken_0x144b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B40u;
            // 0x144b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b40) {
            ctx->pc = 0x144B68u;
            goto label_144b68;
        }
    }
    ctx->pc = 0x144B48u;
    // 0x144b48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b4c: 0xc051274  jal         func_1449D0
    ctx->pc = 0x144B4Cu;
    SET_GPR_U32(ctx, 31, 0x144B54u);
    ctx->pc = 0x144B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B4Cu;
            // 0x144b50: 0x2042823  subu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1449D0u;
    if (runtime->hasFunction(0x1449D0u)) {
        auto targetFn = runtime->lookupFunction(0x1449D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B54u; }
        if (ctx->pc != 0x144B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001449D0_0x1449d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B54u; }
        if (ctx->pc != 0x144B54u) { return; }
    }
    ctx->pc = 0x144B54u;
    // 0x144b54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b58: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x144B58u;
    {
        const bool branch_taken_0x144b58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x144B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B58u;
            // 0x144b5c: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b58) {
            ctx->pc = 0x144B68u;
            goto label_144b68;
        }
    }
    ctx->pc = 0x144B60u;
    // 0x144b60: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x144B60u;
    {
        const bool branch_taken_0x144b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B60u;
            // 0x144b64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b60) {
            ctx->pc = 0x144BC4u;
            goto label_144bc4;
        }
    }
    ctx->pc = 0x144B68u;
label_144b68:
    // 0x144b68: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x144b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x144b6c: 0xc0511cc  jal         func_144730
    ctx->pc = 0x144B6Cu;
    SET_GPR_U32(ctx, 31, 0x144B74u);
    ctx->pc = 0x144B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B6Cu;
            // 0x144b70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144730u;
    if (runtime->hasFunction(0x144730u)) {
        auto targetFn = runtime->lookupFunction(0x144730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B74u; }
        if (ctx->pc != 0x144B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144730_0x144730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B74u; }
        if (ctx->pc != 0x144B74u) { return; }
    }
    ctx->pc = 0x144B74u;
    // 0x144b74: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x144b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b78: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x144B78u;
    {
        const bool branch_taken_0x144b78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B78u;
            // 0x144b7c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b78) {
            ctx->pc = 0x144BB4u;
            goto label_144bb4;
        }
    }
    ctx->pc = 0x144B80u;
    // 0x144b80: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x144b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x144b84: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x144b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x144b88: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x144b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b8c: 0xac720d30  sw          $s2, 0xD30($v1)
    ctx->pc = 0x144b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3376), GPR_U32(ctx, 18));
    // 0x144b90: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x144b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x144b94: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x144b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x144b98: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x144b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x144b9c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x144b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x144ba0: 0x40f809  jalr        $v0
    ctx->pc = 0x144BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144BA8u);
        ctx->pc = 0x144BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144BA0u;
            // 0x144ba4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x144BA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144A70u: goto label_144a70;
            case 0x144AD0u: goto label_144ad0;
            case 0x144B30u: goto label_144b30;
            case 0x144B34u: goto label_144b34;
            case 0x144B68u: goto label_144b68;
            case 0x144BB4u: goto label_144bb4;
            case 0x144BC4u: goto label_144bc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x144BA8u; }
            if (ctx->pc != 0x144BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x144BA8u;
    // 0x144ba8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x144ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x144bac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x144BACu;
    {
        const bool branch_taken_0x144bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144BACu;
            // 0x144bb0: 0xac600d30  sw          $zero, 0xD30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bac) {
            ctx->pc = 0x144BC4u;
            goto label_144bc4;
        }
    }
    ctx->pc = 0x144BB4u;
label_144bb4:
    // 0x144bb4: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x144bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x144bb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x144bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144bbc: 0xc051022  jal         func_144088
    ctx->pc = 0x144BBCu;
    SET_GPR_U32(ctx, 31, 0x144BC4u);
    ctx->pc = 0x144BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144BBCu;
            // 0x144bc0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144088u;
    if (runtime->hasFunction(0x144088u)) {
        auto targetFn = runtime->lookupFunction(0x144088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BC4u; }
        if (ctx->pc != 0x144BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144088_0x144088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BC4u; }
        if (ctx->pc != 0x144BC4u) { return; }
    }
    ctx->pc = 0x144BC4u;
label_144bc4:
    // 0x144bc4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x144bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144bc8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x144bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144bcc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x144bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144bd4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x144bd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144bd8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x144bd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144be0: 0x3e00008  jr          $ra
    ctx->pc = 0x144BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144BE0u;
            // 0x144be4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144A70u: goto label_144a70;
            case 0x144AD0u: goto label_144ad0;
            case 0x144B30u: goto label_144b30;
            case 0x144B34u: goto label_144b34;
            case 0x144B68u: goto label_144b68;
            case 0x144BB4u: goto label_144bb4;
            case 0x144BC4u: goto label_144bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144BE8u;
}
