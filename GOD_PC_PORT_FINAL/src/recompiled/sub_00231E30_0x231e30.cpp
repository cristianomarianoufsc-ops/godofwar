#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231E30
// Address: 0x231e30 - 0x231f10
void sub_00231E30_0x231e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231E30_0x231e30");
#endif

    ctx->pc = 0x231e30u;

    // 0x231e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x231e34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x231e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x231e38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x231e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x231e3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x231e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x231e40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x231e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231e48: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x231e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x231e4c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x231E4Cu;
    {
        const bool branch_taken_0x231e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E4Cu;
            // 0x231e50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e4c) {
            ctx->pc = 0x231EF8u;
            goto label_231ef8;
        }
    }
    ctx->pc = 0x231E54u;
    // 0x231e54: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x231e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x231e58: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x231e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x231e5c: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x231e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x231e60: 0x26107920  addiu       $s0, $s0, 0x7920
    ctx->pc = 0x231e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31008));
    // 0x231e64: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x231e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x231e68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x231e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x231e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231e70: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x231E70u;
    SET_GPR_U32(ctx, 31, 0x231E78u);
    ctx->pc = 0x231E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231E70u;
            // 0x231e74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231E78u; }
        if (ctx->pc != 0x231E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231E78u; }
        if (ctx->pc != 0x231E78u) { return; }
    }
    ctx->pc = 0x231E78u;
    // 0x231e78: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x231e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x231e7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x231e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x231e80: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x231e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x231e84: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x231e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x231e88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x231e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x231e8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x231e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x231e90: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x231e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x231e94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231e98: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x231E98u;
    SET_GPR_U32(ctx, 31, 0x231EA0u);
    ctx->pc = 0x231E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231E98u;
            // 0x231e9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231EA0u; }
        if (ctx->pc != 0x231EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231EA0u; }
        if (ctx->pc != 0x231EA0u) { return; }
    }
    ctx->pc = 0x231EA0u;
    // 0x231ea0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x231ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x231ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ea8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x231ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x231eac: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x231eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x231eb0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x231eb4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x231EB4u;
    {
        const bool branch_taken_0x231eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231EB4u;
            // 0x231eb8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231eb4) {
            ctx->pc = 0x231EF0u;
            goto label_231ef0;
        }
    }
    ctx->pc = 0x231EBCu;
    // 0x231ebc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x231ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ec0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x231ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x231ec4: 0x0  nop
    ctx->pc = 0x231ec4u;
    // NOP
label_231ec8:
    // 0x231ec8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x231ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x231ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231ed0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x231ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x231ed4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x231ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x231ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231edc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x231ee0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x231ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x231ee4: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x231ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x231ee8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x231EE8u;
    {
        const bool branch_taken_0x231ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231ee8) {
            ctx->pc = 0x231EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231EE8u;
            // 0x231eec: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231EC8u;
            runtime->cooperativeGuestYield();
            goto label_231ec8;
        }
    }
    ctx->pc = 0x231EF0u;
label_231ef0:
    // 0x231ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231ef4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x231ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_231ef8:
    // 0x231ef8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x231ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231efc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x231efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231f00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x231f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231f08: 0x3e00008  jr          $ra
    ctx->pc = 0x231F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231F08u;
            // 0x231f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231EC8u: goto label_231ec8;
            case 0x231EF0u: goto label_231ef0;
            case 0x231EF8u: goto label_231ef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231F10u;
}
