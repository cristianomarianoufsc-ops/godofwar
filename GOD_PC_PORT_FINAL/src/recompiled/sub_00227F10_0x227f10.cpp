#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227F10
// Address: 0x227f10 - 0x227ff8
void sub_00227F10_0x227f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227F10_0x227f10");
#endif

    ctx->pc = 0x227f10u;

    // 0x227f10: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x227f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x227f14: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x227f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x227f18: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x227f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x227f1c: 0x244261f8  addiu       $v0, $v0, 0x61F8
    ctx->pc = 0x227f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25080));
    // 0x227f20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x227f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227f24: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x227f24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x227f28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x227f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x227f2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x227f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x227f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x227f34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x227f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x227f3c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x227f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x227f40: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x227f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x227f44: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x227f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x227f48: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x227f48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x227f4c: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x227f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x227f50: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x227f50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x227f54: 0x0  nop
    ctx->pc = 0x227f54u;
    // NOP
label_227f58:
    // 0x227f58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x227f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x227f5c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x227f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x227f60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227f64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x227f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x227f68: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x227f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x227f6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x227F6Cu;
    {
        const bool branch_taken_0x227f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227F6Cu;
            // 0x227f70: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f6c) {
            ctx->pc = 0x227F58u;
            runtime->cooperativeGuestYield();
            goto label_227f58;
        }
    }
    ctx->pc = 0x227F74u;
    // 0x227f74: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x227f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x227f78: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x227f78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x227f7c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x227f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x227f80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227f84: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x227f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x227f88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x227f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f8c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x227f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x227f90: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x227f94: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x227f98: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x227f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x227f9c: 0x40f809  jalr        $v0
    ctx->pc = 0x227F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227FA4u);
        ctx->pc = 0x227FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227F9Cu;
            // 0x227fa0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x227FA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227F58u: goto label_227f58;
            case 0x227FB8u: goto label_227fb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x227FA4u; }
            if (ctx->pc != 0x227FA4u) { return; }
        }
        }
    }
    ctx->pc = 0x227FA4u;
    // 0x227fa4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x227fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x227fa8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227FA8u;
    {
        const bool branch_taken_0x227fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227FA8u;
            // 0x227fac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227fa8) {
            ctx->pc = 0x227FB8u;
            goto label_227fb8;
        }
    }
    ctx->pc = 0x227FB0u;
    // 0x227fb0: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x227FB0u;
    SET_GPR_U32(ctx, 31, 0x227FB8u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227FB8u; }
        if (ctx->pc != 0x227FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227FB8u; }
        if (ctx->pc != 0x227FB8u) { return; }
    }
    ctx->pc = 0x227FB8u;
label_227fb8:
    // 0x227fb8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x227fb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227fbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x227fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227fc0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x227fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x227fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x227fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x227fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227fcc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x227fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x227fd0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x227fd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x227fd4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x227fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x227fd8: 0x40f809  jalr        $v0
    ctx->pc = 0x227FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227FE0u);
        ctx->pc = 0x227FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227FD8u;
            // 0x227fdc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x227FE0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227F58u: goto label_227f58;
            case 0x227FB8u: goto label_227fb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x227FE0u; }
            if (ctx->pc != 0x227FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x227FE0u;
    // 0x227fe0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x227fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227fe4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x227fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227fe8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x227fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227fec: 0x3e00008  jr          $ra
    ctx->pc = 0x227FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227FECu;
            // 0x227ff0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227F58u: goto label_227f58;
            case 0x227FB8u: goto label_227fb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227FF4u;
    // 0x227ff4: 0x0  nop
    ctx->pc = 0x227ff4u;
    // NOP
}
