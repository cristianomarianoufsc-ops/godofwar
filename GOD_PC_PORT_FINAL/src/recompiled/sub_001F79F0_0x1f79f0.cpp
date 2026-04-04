#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F79F0
// Address: 0x1f79f0 - 0x1f7ba8
void sub_001F79F0_0x1f79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F79F0_0x1f79f0");
#endif

    ctx->pc = 0x1f79f0u;

    // 0x1f79f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f79f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f79f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f79f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f79f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f79fc: 0x24428968  addiu       $v0, $v0, -0x7698
    ctx->pc = 0x1f79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936936));
    // 0x1f7a00: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f7a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f7a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a08: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f7a0c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f7a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f7a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f7a14: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x1f7a14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f7a18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f7a1c: 0xae220734  sw          $v0, 0x734($s1)
    ctx->pc = 0x1f7a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1844), GPR_U32(ctx, 2));
label_1f7a20:
    // 0x1f7a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a24: 0xc091376  jal         func_244DD8
    ctx->pc = 0x1F7A24u;
    SET_GPR_U32(ctx, 31, 0x1F7A2Cu);
    ctx->pc = 0x1F7A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7A24u;
            // 0x1f7a28: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244DD8u;
    if (runtime->hasFunction(0x244DD8u)) {
        auto targetFn = runtime->lookupFunction(0x244DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7A2Cu; }
        if (ctx->pc != 0x1F7A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244dd8_0x244de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7A2Cu; }
        if (ctx->pc != 0x1F7A2Cu) { return; }
    }
    ctx->pc = 0x1F7A2Cu;
    // 0x1f7a2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7a30: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F7A30u;
    {
        const bool branch_taken_0x1f7a30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7A30u;
            // 0x1f7a34: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a30) {
            ctx->pc = 0x1F7A20u;
            runtime->cooperativeGuestYield();
            goto label_1f7a20;
        }
    }
    ctx->pc = 0x1F7A38u;
    // 0x1f7a38: 0x26330300  addiu       $s3, $s1, 0x300
    ctx->pc = 0x1f7a38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1f7a3c: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x1f7a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f7a40: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1f7a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a44: 0x0  nop
    ctx->pc = 0x1f7a44u;
    // NOP
label_1f7a48:
    // 0x1f7a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a4c: 0xc091378  jal         func_244DE0
    ctx->pc = 0x1F7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F7A54u);
    ctx->pc = 0x1F7A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7A4Cu;
            // 0x1f7a50: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244DE0u;
    if (runtime->hasFunction(0x244DE0u)) {
        auto targetFn = runtime->lookupFunction(0x244DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7A54u; }
        if (ctx->pc != 0x1F7A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244de0_0x244e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7A54u; }
        if (ctx->pc != 0x1F7A54u) { return; }
    }
    ctx->pc = 0x1F7A54u;
    // 0x1f7a54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7a58: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F7A58u;
    {
        const bool branch_taken_0x1f7a58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7A58u;
            // 0x1f7a5c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a58) {
            ctx->pc = 0x1F7A48u;
            runtime->cooperativeGuestYield();
            goto label_1f7a48;
        }
    }
    ctx->pc = 0x1F7A60u;
    // 0x1f7a60: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f7a64: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x1f7a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1f7a68: 0x244279c0  addiu       $v0, $v0, 0x79C0
    ctx->pc = 0x1f7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31168));
    // 0x1f7a6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7a70: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x1f7a70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f7a74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a78: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f7a7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a80: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1f7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1f7a84: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f7a88: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x1f7a88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7a8c: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x1f7a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7a90: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x1f7a90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7a94: 0x0  nop
    ctx->pc = 0x1f7a94u;
    // NOP
label_1f7a98:
    // 0x1f7a98: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f7a9c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x1f7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1f7aa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7aa4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f7aa8: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1f7aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f7aac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7AACu;
    {
        const bool branch_taken_0x1f7aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7AACu;
            // 0x1f7ab0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7aac) {
            ctx->pc = 0x1F7A98u;
            runtime->cooperativeGuestYield();
            goto label_1f7a98;
        }
    }
    ctx->pc = 0x1F7AB4u;
    // 0x1f7ab4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1f7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1f7ab8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1f7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1f7abc: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1f7abcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1f7ac0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f7ac4: 0x2452e848  addiu       $s2, $v0, -0x17B8
    ctx->pc = 0x1f7ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1f7ac8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7acc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1f7accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f7ad0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f7ad4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1f7ad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f7ad8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f7adc: 0x40f809  jalr        $v0
    ctx->pc = 0x1F7ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7AE4u);
        ctx->pc = 0x1F7AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7ADCu;
            // 0x1f7ae0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F7AE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7A20u: goto label_1f7a20;
            case 0x1F7A48u: goto label_1f7a48;
            case 0x1F7A98u: goto label_1f7a98;
            case 0x1F7AF8u: goto label_1f7af8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F7AE4u; }
            if (ctx->pc != 0x1F7AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F7AE4u;
    // 0x1f7ae4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1f7ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f7ae8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7AE8u;
    {
        const bool branch_taken_0x1f7ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7AE8u;
            // 0x1f7aec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ae8) {
            ctx->pc = 0x1F7AF8u;
            goto label_1f7af8;
        }
    }
    ctx->pc = 0x1F7AF0u;
    // 0x1f7af0: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x1F7AF0u;
    SET_GPR_U32(ctx, 31, 0x1F7AF8u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7AF8u; }
        if (ctx->pc != 0x1F7AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7AF8u; }
        if (ctx->pc != 0x1F7AF8u) { return; }
    }
    ctx->pc = 0x1F7AF8u;
label_1f7af8:
    // 0x1f7af8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f7afc: 0xae200718  sw          $zero, 0x718($s1)
    ctx->pc = 0x1f7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1816), GPR_U32(ctx, 0));
    // 0x1f7b00: 0x24427978  addiu       $v0, $v0, 0x7978
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31096));
    // 0x1f7b04: 0xae20071c  sw          $zero, 0x71C($s1)
    ctx->pc = 0x1f7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1820), GPR_U32(ctx, 0));
    // 0x1f7b08: 0xae200720  sw          $zero, 0x720($s1)
    ctx->pc = 0x1f7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1824), GPR_U32(ctx, 0));
    // 0x1f7b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b10: 0xae200724  sw          $zero, 0x724($s1)
    ctx->pc = 0x1f7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1828), GPR_U32(ctx, 0));
    // 0x1f7b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b18: 0xae200728  sw          $zero, 0x728($s1)
    ctx->pc = 0x1f7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1832), GPR_U32(ctx, 0));
    // 0x1f7b1c: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x1f7b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1f7b20: 0xae20072c  sw          $zero, 0x72C($s1)
    ctx->pc = 0x1f7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1836), GPR_U32(ctx, 0));
    // 0x1f7b24: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x1f7b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
    // 0x1f7b28: 0xae200704  sw          $zero, 0x704($s1)
    ctx->pc = 0x1f7b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1796), GPR_U32(ctx, 0));
    // 0x1f7b2c: 0xae200708  sw          $zero, 0x708($s1)
    ctx->pc = 0x1f7b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1800), GPR_U32(ctx, 0));
    // 0x1f7b30: 0xae20070c  sw          $zero, 0x70C($s1)
    ctx->pc = 0x1f7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1804), GPR_U32(ctx, 0));
    // 0x1f7b34: 0xae200710  sw          $zero, 0x710($s1)
    ctx->pc = 0x1f7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1808), GPR_U32(ctx, 0));
    // 0x1f7b38: 0xae200714  sw          $zero, 0x714($s1)
    ctx->pc = 0x1f7b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 0));
    // 0x1f7b3c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1F7B3Cu;
    SET_GPR_U32(ctx, 31, 0x1F7B44u);
    ctx->pc = 0x1F7B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B3Cu;
            // 0x1f7b40: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B44u; }
        if (ctx->pc != 0x1F7B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B44u; }
        if (ctx->pc != 0x1F7B44u) { return; }
    }
    ctx->pc = 0x1F7B44u;
    // 0x1f7b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f7b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b4c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1F7B4Cu;
    SET_GPR_U32(ctx, 31, 0x1F7B54u);
    ctx->pc = 0x1F7B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B4Cu;
            // 0x1f7b50: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B54u; }
        if (ctx->pc != 0x1F7B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B54u; }
        if (ctx->pc != 0x1F7B54u) { return; }
    }
    ctx->pc = 0x1F7B54u;
    // 0x1f7b54: 0xa2200731  sb          $zero, 0x731($s1)
    ctx->pc = 0x1f7b54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1841), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7b58: 0xa2200730  sb          $zero, 0x730($s1)
    ctx->pc = 0x1f7b58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1840), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7b5c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f7b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f7b64: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f7b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f7b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7b70: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f7b74: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f7b78: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1f7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1f7b7c: 0x40f809  jalr        $v0
    ctx->pc = 0x1F7B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7B84u);
        ctx->pc = 0x1F7B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B7Cu;
            // 0x1f7b80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F7B84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7A20u: goto label_1f7a20;
            case 0x1F7A48u: goto label_1f7a48;
            case 0x1F7A98u: goto label_1f7a98;
            case 0x1F7AF8u: goto label_1f7af8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F7B84u; }
            if (ctx->pc != 0x1F7B84u) { return; }
        }
        }
    }
    ctx->pc = 0x1F7B84u;
    // 0x1f7b84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f7b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b88: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f7b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7b8c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f7b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7b90: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f7b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7b94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f7b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7b98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B9Cu;
            // 0x1f7ba0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7A20u: goto label_1f7a20;
            case 0x1F7A48u: goto label_1f7a48;
            case 0x1F7A98u: goto label_1f7a98;
            case 0x1F7AF8u: goto label_1f7af8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7BA4u;
    // 0x1f7ba4: 0x0  nop
    ctx->pc = 0x1f7ba4u;
    // NOP
}
