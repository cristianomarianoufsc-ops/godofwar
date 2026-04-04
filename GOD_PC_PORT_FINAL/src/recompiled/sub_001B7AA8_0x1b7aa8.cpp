#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7AA8
// Address: 0x1b7aa8 - 0x1b7b98
void sub_001B7AA8_0x1b7aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7AA8_0x1b7aa8");
#endif

    ctx->pc = 0x1b7aa8u;

    // 0x1b7aa8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b7aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b7aac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b7aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b7ab0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b7ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b7ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b7ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ab8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b7ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b7abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ac0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b7ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b7ac4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b7ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b7ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7acc: 0x8e2514a4  lw          $a1, 0x14A4($s1)
    ctx->pc = 0x1b7accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5284)));
    // 0x1b7ad0: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B7AD0u;
    {
        const bool branch_taken_0x1b7ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AD0u;
            // 0x1b7ad4: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ad0) {
            ctx->pc = 0x1B7B78u;
            goto label_1b7b78;
        }
    }
    ctx->pc = 0x1B7AD8u;
    // 0x1b7ad8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1b7ad8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7adc: 0x2683e848  addiu       $v1, $s4, -0x17B8
    ctx->pc = 0x1b7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x1b7ae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7ae8: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1b7ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b7aec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7af0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b7af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7af4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b7af8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1b7af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1b7afc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1b7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1b7b00: 0x40f809  jalr        $v0
    ctx->pc = 0x1B7B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7B08u);
        ctx->pc = 0x1B7B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B00u;
            // 0x1b7b04: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B7B08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7B10u: goto label_1b7b10;
            case 0x1B7B20u: goto label_1b7b20;
            case 0x1B7B38u: goto label_1b7b38;
            case 0x1B7B78u: goto label_1b7b78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B08u; }
            if (ctx->pc != 0x1B7B08u) { return; }
        }
        }
    }
    ctx->pc = 0x1B7B08u;
    // 0x1b7b08: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b7b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7b0c: 0x0  nop
    ctx->pc = 0x1b7b0cu;
    // NOP
label_1b7b10:
    // 0x1b7b10: 0x1cc00003  bgtz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7B10u;
    {
        const bool branch_taken_0x1b7b10 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1B7B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B10u;
            // 0x1b7b14: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b10) {
            ctx->pc = 0x1B7B20u;
            goto label_1b7b20;
        }
    }
    ctx->pc = 0x1B7B18u;
    // 0x1b7b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7B18u;
    {
        const bool branch_taken_0x1b7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B18u;
            // 0x1b7b1c: 0x8e2614a8  lw          $a2, 0x14A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b18) {
            ctx->pc = 0x1B7B38u;
            goto label_1b7b38;
        }
    }
    ctx->pc = 0x1B7B20u;
label_1b7b20:
    // 0x1b7b20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b24: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1B7B24u;
    SET_GPR_U32(ctx, 31, 0x1B7B2Cu);
    ctx->pc = 0x1B7B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B24u;
            // 0x1b7b28: 0x24a555d0  addiu       $a1, $a1, 0x55D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B2Cu; }
        if (ctx->pc != 0x1B7B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B2Cu; }
        if (ctx->pc != 0x1B7B2Cu) { return; }
    }
    ctx->pc = 0x1B7B2Cu;
    // 0x1b7b2c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1B7B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B34u);
    ctx->pc = 0x1B7B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B2Cu;
            // 0x1b7b30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B34u; }
        if (ctx->pc != 0x1B7B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B34u; }
        if (ctx->pc != 0x1B7B34u) { return; }
    }
    ctx->pc = 0x1B7B34u;
    // 0x1b7b34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b7b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7b38:
    // 0x1b7b38: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1b7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1b7b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b40: 0x8c4514ac  lw          $a1, 0x14AC($v0)
    ctx->pc = 0x1b7b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5292)));
    // 0x1b7b44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b7b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b7b48: 0xc06de98  jal         func_1B7A60
    ctx->pc = 0x1B7B48u;
    SET_GPR_U32(ctx, 31, 0x1B7B50u);
    ctx->pc = 0x1B7B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B48u;
            // 0x1b7b4c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A60u;
    if (runtime->hasFunction(0x1B7A60u)) {
        auto targetFn = runtime->lookupFunction(0x1B7A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B50u; }
        if (ctx->pc != 0x1B7B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b7a60_0x1b7aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B50u; }
        if (ctx->pc != 0x1B7B50u) { return; }
    }
    ctx->pc = 0x1B7B50u;
    // 0x1b7b50: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1b7b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b7b54: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1B7B54u;
    {
        const bool branch_taken_0x1b7b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b54) {
            ctx->pc = 0x1B7B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B54u;
            // 0x1b7b58: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7B10u;
            runtime->cooperativeGuestYield();
            goto label_1b7b10;
        }
    }
    ctx->pc = 0x1B7B5Cu;
    // 0x1b7b5c: 0x2682e848  addiu       $v0, $s4, -0x17B8
    ctx->pc = 0x1b7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x1b7b60: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1b7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1b7b64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b7b68: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1b7b6c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1b7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1b7b70: 0x40f809  jalr        $v0
    ctx->pc = 0x1B7B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7B78u);
        ctx->pc = 0x1B7B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B70u;
            // 0x1b7b74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B7B78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7B10u: goto label_1b7b10;
            case 0x1B7B20u: goto label_1b7b20;
            case 0x1B7B38u: goto label_1b7b38;
            case 0x1B7B78u: goto label_1b7b78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B78u; }
            if (ctx->pc != 0x1B7B78u) { return; }
        }
        }
    }
    ctx->pc = 0x1B7B78u;
label_1b7b78:
    // 0x1b7b78: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b7b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7b7c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b7b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7b80: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b7b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7b84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7b88: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b7b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B90u;
            // 0x1b7b94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7B10u: goto label_1b7b10;
            case 0x1B7B20u: goto label_1b7b20;
            case 0x1B7B38u: goto label_1b7b38;
            case 0x1B7B78u: goto label_1b7b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7B98u;
}
