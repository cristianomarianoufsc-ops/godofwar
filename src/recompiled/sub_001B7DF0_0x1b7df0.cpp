#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7DF0
// Address: 0x1b7df0 - 0x1b7ed0
void sub_001B7DF0_0x1b7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7DF0_0x1b7df0");
#endif

    ctx->pc = 0x1b7df0u;

    // 0x1b7df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7df4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b7df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b7df8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b7dfc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b7e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b7e04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b7e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b7e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b7e0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b7e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e10: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1b7e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1b7e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7e18: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b7e1c: 0x0  nop
    ctx->pc = 0x1b7e1cu;
    // NOP
label_1b7e20:
    // 0x1b7e20: 0x26741558  addiu       $s4, $s3, 0x1558
    ctx->pc = 0x1b7e20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 5464));
    // 0x1b7e24: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1b7e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b7e28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b7e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7e2c: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7E2Cu;
    {
        const bool branch_taken_0x1b7e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7e2c) {
            ctx->pc = 0x1B7E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E2Cu;
            // 0x1b7e30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7E74u;
            goto label_1b7e74;
        }
    }
    ctx->pc = 0x1B7E34u;
    // 0x1b7e34: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7E34u;
    {
        const bool branch_taken_0x1b7e34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7e34) {
            ctx->pc = 0x1B7E58u;
            goto label_1b7e58;
        }
    }
    ctx->pc = 0x1B7E3Cu;
    // 0x1b7e3c: 0xc052ac8  jal         func_14AB20
    ctx->pc = 0x1B7E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E44u);
    ctx->pc = 0x14AB20u;
    if (runtime->hasFunction(0x14AB20u)) {
        auto targetFn = runtime->lookupFunction(0x14AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E44u; }
        if (ctx->pc != 0x1B7E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14ab20_0x14ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E44u; }
        if (ctx->pc != 0x1B7E44u) { return; }
    }
    ctx->pc = 0x1B7E44u;
    // 0x1b7e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b7e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e48: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1B7E48u;
    SET_GPR_U32(ctx, 31, 0x1B7E50u);
    ctx->pc = 0x1B7E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E48u;
            // 0x1b7e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E50u; }
        if (ctx->pc != 0x1B7E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E50u; }
        if (ctx->pc != 0x1B7E50u) { return; }
    }
    ctx->pc = 0x1B7E50u;
    // 0x1b7e50: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7E50u;
    {
        const bool branch_taken_0x1b7e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E50u;
            // 0x1b7e54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e50) {
            ctx->pc = 0x1B7E74u;
            goto label_1b7e74;
        }
    }
    ctx->pc = 0x1B7E58u;
label_1b7e58:
    // 0x1b7e58: 0xc053068  jal         func_14C1A0
    ctx->pc = 0x1B7E58u;
    SET_GPR_U32(ctx, 31, 0x1B7E60u);
    ctx->pc = 0x1B7E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E58u;
            // 0x1b7e5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C1A0u;
    if (runtime->hasFunction(0x14C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x14C1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E60u; }
        if (ctx->pc != 0x1B7E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C1A0_0x14c1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E60u; }
        if (ctx->pc != 0x1B7E60u) { return; }
    }
    ctx->pc = 0x1B7E60u;
    // 0x1b7e60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b7e64: 0xc06e0c0  jal         func_1B8300
    ctx->pc = 0x1B7E64u;
    SET_GPR_U32(ctx, 31, 0x1B7E6Cu);
    ctx->pc = 0x1B7E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E64u;
            // 0x1b7e68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8300u;
    if (runtime->hasFunction(0x1B8300u)) {
        auto targetFn = runtime->lookupFunction(0x1B8300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E6Cu; }
        if (ctx->pc != 0x1B7E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b8300_0x1b8318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E6Cu; }
        if (ctx->pc != 0x1B7E6Cu) { return; }
    }
    ctx->pc = 0x1B7E6Cu;
    // 0x1b7e6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7E6Cu;
    {
        const bool branch_taken_0x1b7e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E6Cu;
            // 0x1b7e70: 0xae60154c  sw          $zero, 0x154C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e6c) {
            ctx->pc = 0x1B7E84u;
            goto label_1b7e84;
        }
    }
    ctx->pc = 0x1B7E74u;
label_1b7e74:
    // 0x1b7e74: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1b7e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b7e78: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B7E78u;
    {
        const bool branch_taken_0x1b7e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E78u;
            // 0x1b7e7c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e78) {
            ctx->pc = 0x1B7E20u;
            runtime->cooperativeGuestYield();
            goto label_1b7e20;
        }
    }
    ctx->pc = 0x1B7E80u;
    // 0x1b7e80: 0xae60154c  sw          $zero, 0x154C($s3)
    ctx->pc = 0x1b7e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5452), GPR_U32(ctx, 0));
label_1b7e84:
    // 0x1b7e84: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7E84u;
    {
        const bool branch_taken_0x1b7e84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E84u;
            // 0x1b7e88: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e84) {
            ctx->pc = 0x1B7EB0u;
            goto label_1b7eb0;
        }
    }
    ctx->pc = 0x1B7E8Cu;
    // 0x1b7e8c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1b7e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7e90:
    // 0x1b7e90: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7e94: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7E94u;
    {
        const bool branch_taken_0x1b7e94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7e94) {
            ctx->pc = 0x1B7E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E94u;
            // 0x1b7e98: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7EA8u;
            goto label_1b7ea8;
        }
    }
    ctx->pc = 0x1B7E9Cu;
    // 0x1b7e9c: 0xc06de78  jal         func_1B79E0
    ctx->pc = 0x1B7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7EA4u);
    ctx->pc = 0x1B7EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E9Cu;
            // 0x1b7ea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B79E0u;
    if (runtime->hasFunction(0x1B79E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B79E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EA4u; }
        if (ctx->pc != 0x1B7EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B79E0_0x1b79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EA4u; }
        if (ctx->pc != 0x1B7EA4u) { return; }
    }
    ctx->pc = 0x1B7EA4u;
    // 0x1b7ea4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b7ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b7ea8:
    // 0x1b7ea8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B7EA8u;
    {
        const bool branch_taken_0x1b7ea8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B7EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EA8u;
            // 0x1b7eac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ea8) {
            ctx->pc = 0x1B7E90u;
            runtime->cooperativeGuestYield();
            goto label_1b7e90;
        }
    }
    ctx->pc = 0x1B7EB0u;
label_1b7eb0:
    // 0x1b7eb0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b7eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7eb4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b7eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7eb8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b7eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7ebc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b7ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7ec0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1b7ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EC8u;
            // 0x1b7ecc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7E20u: goto label_1b7e20;
            case 0x1B7E58u: goto label_1b7e58;
            case 0x1B7E74u: goto label_1b7e74;
            case 0x1B7E84u: goto label_1b7e84;
            case 0x1B7E90u: goto label_1b7e90;
            case 0x1B7EA8u: goto label_1b7ea8;
            case 0x1B7EB0u: goto label_1b7eb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7ED0u;
}
