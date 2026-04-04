#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2F50
// Address: 0x1b2f50 - 0x1b3018
void sub_001B2F50_0x1b2f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2F50_0x1b2f50");
#endif

    ctx->pc = 0x1b2f50u;

    // 0x1b2f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2f54: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1b2f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2f5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f68: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b2f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b2f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2f70: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1B2F70u;
    SET_GPR_U32(ctx, 31, 0x1B2F78u);
    ctx->pc = 0x1B2F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F70u;
            // 0x1b2f74: 0x24a54830  addiu       $a1, $a1, 0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F78u; }
        if (ctx->pc != 0x1B2F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F78u; }
        if (ctx->pc != 0x1B2F78u) { return; }
    }
    ctx->pc = 0x1B2F78u;
    // 0x1b2f78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2F78u;
    {
        const bool branch_taken_0x1b2f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F78u;
            // 0x1b2f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f78) {
            ctx->pc = 0x1B2F88u;
            goto label_1b2f88;
        }
    }
    ctx->pc = 0x1B2F80u;
label_1b2f80:
    // 0x1b2f80: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B2F80u;
    {
        const bool branch_taken_0x1b2f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F80u;
            // 0x1b2f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f80) {
            ctx->pc = 0x1B3004u;
            goto label_1b3004;
        }
    }
    ctx->pc = 0x1B2F88u;
label_1b2f88:
    // 0x1b2f88: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1B2F88u;
    SET_GPR_U32(ctx, 31, 0x1B2F90u);
    ctx->pc = 0x1B2F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F88u;
            // 0x1b2f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F90u; }
        if (ctx->pc != 0x1B2F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F90u; }
        if (ctx->pc != 0x1B2F90u) { return; }
    }
    ctx->pc = 0x1B2F90u;
    // 0x1b2f90: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1b2f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1b2f94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b2f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f98: 0x24a25078  addiu       $v0, $a1, 0x5078
    ctx->pc = 0x1b2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20600));
    // 0x1b2f9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b2f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fa0: 0x94420030  lhu         $v0, 0x30($v0)
    ctx->pc = 0x1b2fa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b2fa4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2FA4u;
    {
        const bool branch_taken_0x1b2fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FA4u;
            // 0x1b2fa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fa4) {
            ctx->pc = 0x1B2FD8u;
            goto label_1b2fd8;
        }
    }
    ctx->pc = 0x1B2FACu;
    // 0x1b2fac: 0x24e45078  addiu       $a0, $a3, 0x5078
    ctx->pc = 0x1b2facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 20600));
    // 0x1b2fb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b2fb4: 0x0  nop
    ctx->pc = 0x1b2fb4u;
    // NOP
label_1b2fb8:
    // 0x1b2fb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b2fbc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1b2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b2fc0: 0x10c2ffef  beq         $a2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B2FC0u;
    {
        const bool branch_taken_0x1b2fc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FC0u;
            // 0x1b2fc4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fc0) {
            ctx->pc = 0x1B2F80u;
            runtime->cooperativeGuestYield();
            goto label_1b2f80;
        }
    }
    ctx->pc = 0x1B2FC8u;
    // 0x1b2fc8: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x1b2fc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b2fcc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b2fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2fd0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B2FD0u;
    {
        const bool branch_taken_0x1b2fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FD0u;
            // 0x1b2fd4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fd0) {
            ctx->pc = 0x1B2FB8u;
            runtime->cooperativeGuestYield();
            goto label_1b2fb8;
        }
    }
    ctx->pc = 0x1B2FD8u;
label_1b2fd8:
    // 0x1b2fd8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2FD8u;
    {
        const bool branch_taken_0x1b2fd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FD8u;
            // 0x1b2fdc: 0x24a25078  addiu       $v0, $a1, 0x5078 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fd8) {
            ctx->pc = 0x1B3000u;
            goto label_1b3000;
        }
    }
    ctx->pc = 0x1B2FE0u;
    // 0x1b2fe0: 0x94430030  lhu         $v1, 0x30($v0)
    ctx->pc = 0x1b2fe0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b2fe4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b2fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fe8: 0x24010001  addiu       $at, $zero, 0x1
    ctx->pc = 0x1b2fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2fec: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1b2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1b2ff0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b2ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b2ff4: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x1b2ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b2ff8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b2ffc: 0xac460034  sw          $a2, 0x34($v0)
    ctx->pc = 0x1b2ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 6));
label_1b3000:
    // 0x1b3000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3004:
    // 0x1b3004: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b3004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b300c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3010: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3010u;
            // 0x1b3014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2F80u: goto label_1b2f80;
            case 0x1B2F88u: goto label_1b2f88;
            case 0x1B2FB8u: goto label_1b2fb8;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B3000u: goto label_1b3000;
            case 0x1B3004u: goto label_1b3004;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3018u;
}
