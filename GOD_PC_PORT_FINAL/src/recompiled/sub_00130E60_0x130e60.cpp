#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130E60
// Address: 0x130e60 - 0x130f48
void sub_00130E60_0x130e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130E60_0x130e60");
#endif

    ctx->pc = 0x130e60u;

    // 0x130e60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x130e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x130e64: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x130e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x130e68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x130e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e6c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x130e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x130e70: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x130e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x130e74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x130e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x130e78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130e7c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x130e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x130e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130e84: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x130e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x130e88: 0x8c55ec5c  lw          $s5, -0x13A4($v0)
    ctx->pc = 0x130e88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962268)));
    // 0x130e8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x130e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e90: 0x269100c0  addiu       $s1, $s4, 0xC0
    ctx->pc = 0x130e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x130e94: 0x0  nop
    ctx->pc = 0x130e94u;
    // NOP
label_130e98:
    // 0x130e98: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x130e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130e9c: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x130E9Cu;
    {
        const bool branch_taken_0x130e9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e9c) {
            ctx->pc = 0x130EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130E9Cu;
            // 0x130ea0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130F14u;
            goto label_130f14;
        }
    }
    ctx->pc = 0x130EA4u;
    // 0x130ea4: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x130ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_130ea8:
    // 0x130ea8: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x130ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eb0: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x130eb0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x130eb4: 0x16550005  bne         $s2, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x130EB4u;
    {
        const bool branch_taken_0x130eb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x130EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130EB4u;
            // 0x130eb8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130eb4) {
            ctx->pc = 0x130ECCu;
            goto label_130ecc;
        }
    }
    ctx->pc = 0x130EBCu;
    // 0x130ebc: 0xc04c55c  jal         func_131570
    ctx->pc = 0x130EBCu;
    SET_GPR_U32(ctx, 31, 0x130EC4u);
    ctx->pc = 0x130EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130EBCu;
            // 0x130ec0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130EC4u; }
        if (ctx->pc != 0x130EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130EC4u; }
        if (ctx->pc != 0x130EC4u) { return; }
    }
    ctx->pc = 0x130EC4u;
    // 0x130ec4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x130EC4u;
    {
        const bool branch_taken_0x130ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ec4) {
            ctx->pc = 0x130F08u;
            goto label_130f08;
        }
    }
    ctx->pc = 0x130ECCu;
label_130ecc:
    // 0x130ecc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x130eccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x130ed0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x130ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x130ed4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x130ED4u;
    {
        const bool branch_taken_0x130ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130ED4u;
            // 0x130ed8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ed4) {
            ctx->pc = 0x130F08u;
            goto label_130f08;
        }
    }
    ctx->pc = 0x130EDCu;
    // 0x130edc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x130edcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130ee0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x130ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x130ee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x130ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x130ee8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130eec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x130eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130ef0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x130ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x130ef4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x130ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x130ef8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x130ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x130efc: 0x40f809  jalr        $v0
    ctx->pc = 0x130EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130F04u);
        ctx->pc = 0x130F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130EFCu;
            // 0x130f00: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x130F04u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130E98u: goto label_130e98;
            case 0x130EA8u: goto label_130ea8;
            case 0x130ECCu: goto label_130ecc;
            case 0x130F08u: goto label_130f08;
            case 0x130F14u: goto label_130f14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130F04u; }
            if (ctx->pc != 0x130F04u) { return; }
        }
        }
    }
    ctx->pc = 0x130F04u;
    // 0x130f04: 0x0  nop
    ctx->pc = 0x130f04u;
    // NOP
label_130f08:
    // 0x130f08: 0x1660ffe7  bnez        $s3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x130F08u;
    {
        const bool branch_taken_0x130f08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x130F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130F08u;
            // 0x130f0c: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f08) {
            ctx->pc = 0x130EA8u;
            runtime->cooperativeGuestYield();
            goto label_130ea8;
        }
    }
    ctx->pc = 0x130F10u;
    // 0x130f10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x130f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_130f14:
    // 0x130f14: 0x2e42000d  sltiu       $v0, $s2, 0xD
    ctx->pc = 0x130f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x130f18: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x130F18u;
    {
        const bool branch_taken_0x130f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130F18u;
            // 0x130f1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f18) {
            ctx->pc = 0x130E98u;
            runtime->cooperativeGuestYield();
            goto label_130e98;
        }
    }
    ctx->pc = 0x130F20u;
    // 0x130f20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x130f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130f24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x130f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130f28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x130f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130f30: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x130f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130f34: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x130f34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x130F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130F3Cu;
            // 0x130f40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130E98u: goto label_130e98;
            case 0x130EA8u: goto label_130ea8;
            case 0x130ECCu: goto label_130ecc;
            case 0x130F08u: goto label_130f08;
            case 0x130F14u: goto label_130f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130F44u;
    // 0x130f44: 0x0  nop
    ctx->pc = 0x130f44u;
    // NOP
}
