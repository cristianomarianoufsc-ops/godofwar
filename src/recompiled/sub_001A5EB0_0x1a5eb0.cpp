#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5EB0
// Address: 0x1a5eb0 - 0x1a5fc0
void sub_001A5EB0_0x1a5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5EB0_0x1a5eb0");
#endif

    ctx->pc = 0x1a5eb0u;

    // 0x1a5eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5eb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a5eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a5eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ebc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a5ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a5ec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5ec8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a5ecc: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a5ed0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a5ed4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a5ed8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a5ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a5edc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a5ee0: 0x40f809  jalr        $v0
    ctx->pc = 0x1A5EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5EE8u);
        ctx->pc = 0x1A5EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EE0u;
            // 0x1a5ee4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5EE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5F08u: goto label_1a5f08;
            case 0x1A5F28u: goto label_1a5f28;
            case 0x1A5F48u: goto label_1a5f48;
            case 0x1A5F54u: goto label_1a5f54;
            case 0x1A5FA8u: goto label_1a5fa8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EE8u; }
            if (ctx->pc != 0x1A5EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5EE8u;
    // 0x1a5ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5eec: 0xc06cd42  jal         func_1B3508
    ctx->pc = 0x1A5EECu;
    SET_GPR_U32(ctx, 31, 0x1A5EF4u);
    ctx->pc = 0x1A5EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EECu;
            // 0x1a5ef0: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3508u;
    if (runtime->hasFunction(0x1B3508u)) {
        auto targetFn = runtime->lookupFunction(0x1B3508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EF4u; }
        if (ctx->pc != 0x1A5EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3508_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EF4u; }
        if (ctx->pc != 0x1A5EF4u) { return; }
    }
    ctx->pc = 0x1A5EF4u;
    // 0x1a5ef4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ef8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1a5ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1a5efc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5f00: 0x10510014  beq         $v0, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5F00u;
    {
        const bool branch_taken_0x1a5f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A5F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F00u;
            // 0x1a5f04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f00) {
            ctx->pc = 0x1A5F54u;
            goto label_1a5f54;
        }
    }
    ctx->pc = 0x1A5F08u;
label_1a5f08:
    // 0x1a5f08: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1a5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a5f0c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1a5f10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a5f14: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5F14u;
    {
        const bool branch_taken_0x1a5f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a5f14) {
            ctx->pc = 0x1A5F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F14u;
            // 0x1a5f18: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5F48u;
            goto label_1a5f48;
        }
    }
    ctx->pc = 0x1A5F1Cu;
    // 0x1a5f1c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a5f20: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A5F20u;
    {
        const bool branch_taken_0x1a5f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f20) {
            ctx->pc = 0x1A5F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F20u;
            // 0x1a5f24: 0xac920008  sw          $s2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5F28u;
            goto label_1a5f28;
        }
    }
    ctx->pc = 0x1A5F28u;
label_1a5f28:
    // 0x1a5f28: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x1a5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1a5f2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a5f30: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1a5f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1a5f34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a5f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a5f38: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a5f3c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A5F3Cu;
    {
        const bool branch_taken_0x1a5f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F3Cu;
            // 0x1a5f40: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f3c) {
            ctx->pc = 0x1A5FA8u;
            goto label_1a5fa8;
        }
    }
    ctx->pc = 0x1A5F44u;
    // 0x1a5f44: 0x0  nop
    ctx->pc = 0x1a5f44u;
    // NOP
label_1a5f48:
    // 0x1a5f48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5f4c: 0x1443ffee  bne         $v0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A5F4Cu;
    {
        const bool branch_taken_0x1a5f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A5F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F4Cu;
            // 0x1a5f50: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f4c) {
            ctx->pc = 0x1A5F08u;
            runtime->cooperativeGuestYield();
            goto label_1a5f08;
        }
    }
    ctx->pc = 0x1A5F54u;
label_1a5f54:
    // 0x1a5f54: 0xc0699de  jal         func_1A6778
    ctx->pc = 0x1A5F54u;
    SET_GPR_U32(ctx, 31, 0x1A5F5Cu);
    ctx->pc = 0x1A5F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F54u;
            // 0x1a5f58: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6778u;
    if (runtime->hasFunction(0x1A6778u)) {
        auto targetFn = runtime->lookupFunction(0x1A6778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F5Cu; }
        if (ctx->pc != 0x1A5F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6778_0x1a6778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F5Cu; }
        if (ctx->pc != 0x1A5F5Cu) { return; }
    }
    ctx->pc = 0x1A5F5Cu;
    // 0x1a5f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f60: 0xc069794  jal         func_1A5E50
    ctx->pc = 0x1A5F60u;
    SET_GPR_U32(ctx, 31, 0x1A5F68u);
    ctx->pc = 0x1A5F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F60u;
            // 0x1a5f64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E50u;
    if (runtime->hasFunction(0x1A5E50u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F68u; }
        if (ctx->pc != 0x1A5F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5e50_0x1a5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F68u; }
        if (ctx->pc != 0x1A5F68u) { return; }
    }
    ctx->pc = 0x1A5F68u;
    // 0x1a5f68: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x1a5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a5f6c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a5f70: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x1a5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x1a5f74: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a5f78: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1a5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1a5f7c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1a5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1a5f80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5f84: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a5f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a5f88: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1a5f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1a5f8c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1a5f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1a5f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f94: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1a5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1a5f98: 0x24a5d850  addiu       $a1, $a1, -0x27B0
    ctx->pc = 0x1a5f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957136));
    // 0x1a5f9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5fa0: 0xc04d290  jal         func_134A40
    ctx->pc = 0x1A5FA0u;
    SET_GPR_U32(ctx, 31, 0x1A5FA8u);
    ctx->pc = 0x1A5FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FA0u;
            // 0x1a5fa4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A40u;
    if (runtime->hasFunction(0x134A40u)) {
        auto targetFn = runtime->lookupFunction(0x134A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FA8u; }
        if (ctx->pc != 0x1A5FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_134a40_0x134a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FA8u; }
        if (ctx->pc != 0x1A5FA8u) { return; }
    }
    ctx->pc = 0x1A5FA8u;
label_1a5fa8:
    // 0x1a5fa8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a5fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5fac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a5facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5fb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FB8u;
            // 0x1a5fbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5F08u: goto label_1a5f08;
            case 0x1A5F28u: goto label_1a5f28;
            case 0x1A5F48u: goto label_1a5f48;
            case 0x1A5F54u: goto label_1a5f54;
            case 0x1A5FA8u: goto label_1a5fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5FC0u;
}
