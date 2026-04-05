#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022CB18
// Address: 0x22cb18 - 0x22cdb0
void sub_0022CB18_0x22cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CB18_0x22cb18");
#endif

    ctx->pc = 0x22cb18u;

    // 0x22cb18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x22cb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x22cb1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22cb20: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x22cb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x22cb24: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x22cb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x22cb28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22cb28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb2c: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x22cb30: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x22cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x22cb34: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x22cb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x22cb38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22cb3c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x22cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x22cb40: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x22cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x22cb44: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x22cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x22cb48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22cb4c: 0xaed51230  sw          $s5, 0x1230($s6)
    ctx->pc = 0x22cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4656), GPR_U32(ctx, 21));
    // 0x22cb50: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CB50u;
    SET_GPR_U32(ctx, 31, 0x22CB58u);
    ctx->pc = 0x22CB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB50u;
            // 0x22cb54: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB58u; }
        if (ctx->pc != 0x22CB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB58u; }
        if (ctx->pc != 0x22CB58u) { return; }
    }
    ctx->pc = 0x22CB58u;
    // 0x22cb58: 0x3c02cafe  lui         $v0, 0xCAFE
    ctx->pc = 0x22cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51966 << 16));
    // 0x22cb5c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x22cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cb60: 0x3442bad1  ori         $v0, $v0, 0xBAD1
    ctx->pc = 0x22cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47825);
    // 0x22cb64: 0x14620089  bne         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x22CB64u;
    {
        const bool branch_taken_0x22cb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB64u;
            // 0x22cb68: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb64) {
            ctx->pc = 0x22CD8Cu;
            goto label_22cd8c;
        }
    }
    ctx->pc = 0x22CB6Cu;
    // 0x22cb6c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x22cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x22cb70: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CB70u;
    SET_GPR_U32(ctx, 31, 0x22CB78u);
    ctx->pc = 0x22CB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB70u;
            // 0x22cb74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB78u; }
        if (ctx->pc != 0x22CB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB78u; }
        if (ctx->pc != 0x22CB78u) { return; }
    }
    ctx->pc = 0x22CB78u;
    // 0x22cb78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22cb78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb7c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22cb80: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x22cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x22cb84: 0x8c635a2c  lw          $v1, 0x5A2C($v1)
    ctx->pc = 0x22cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23084)));
    // 0x22cb88: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x22cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22cb8c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x22cb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x22cb90: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x22cb90u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22cb94: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22cb98:
    // 0x22cb98: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22cb9c: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x22cb9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22cba0: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CBA0u;
    SET_GPR_U32(ctx, 31, 0x22CBA8u);
    ctx->pc = 0x22CBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBA0u;
            // 0x22cba4: 0x5d2021  addu        $a0, $v0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBA8u; }
        if (ctx->pc != 0x22CBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBA8u; }
        if (ctx->pc != 0x22CBA8u) { return; }
    }
    ctx->pc = 0x22CBA8u;
    // 0x22cba8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x22cba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22cbac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cbb0: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22CBB0u;
    SET_GPR_U32(ctx, 31, 0x22CBB8u);
    ctx->pc = 0x22CBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBB0u;
            // 0x22cbb4: 0x2112021  addu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBB8u; }
        if (ctx->pc != 0x22CBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBB8u; }
        if (ctx->pc != 0x22CBB8u) { return; }
    }
    ctx->pc = 0x22CBB8u;
    // 0x22cbb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22cbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22cbbc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x22cbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22cbc0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x22CBC0u;
    {
        const bool branch_taken_0x22cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cbc0) {
            ctx->pc = 0x22CBC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBC0u;
            // 0x22cbc4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CB98u;
            runtime->cooperativeGuestYield();
            goto label_22cb98;
        }
    }
    ctx->pc = 0x22CBC8u;
    // 0x22cbc8: 0x16a00060  bnez        $s5, . + 4 + (0x60 << 2)
    ctx->pc = 0x22CBC8u;
    {
        const bool branch_taken_0x22cbc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cbc8) {
            ctx->pc = 0x22CD4Cu;
            goto label_22cd4c;
        }
    }
    ctx->pc = 0x22CBD0u;
    // 0x22cbd0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x22CBD0u;
    {
        const bool branch_taken_0x22cbd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBD0u;
            // 0x22cbd4: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbd0) {
            ctx->pc = 0x22CC08u;
            goto label_22cc08;
        }
    }
    ctx->pc = 0x22CBD8u;
    // 0x22cbd8: 0xc06eecc  jal         func_1BBB30
    ctx->pc = 0x22CBD8u;
    SET_GPR_U32(ctx, 31, 0x22CBE0u);
    ctx->pc = 0x22CBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBD8u;
            // 0x22cbdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB30u;
    if (runtime->hasFunction(0x1BBB30u)) {
        auto targetFn = runtime->lookupFunction(0x1BBB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBE0u; }
        if (ctx->pc != 0x22CBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBB30_0x1bbb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBE0u; }
        if (ctx->pc != 0x22CBE0u) { return; }
    }
    ctx->pc = 0x22CBE0u;
    // 0x22cbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbe4: 0x0  nop
    ctx->pc = 0x22cbe4u;
    // NOP
label_22cbe8:
    // 0x22cbe8: 0xc06eff8  jal         func_1BBFE0
    ctx->pc = 0x22CBE8u;
    SET_GPR_U32(ctx, 31, 0x22CBF0u);
    ctx->pc = 0x22CBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBE8u;
            // 0x22cbec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBFE0u;
    if (runtime->hasFunction(0x1BBFE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBF0u; }
        if (ctx->pc != 0x22CBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBFE0_0x1bbfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBF0u; }
        if (ctx->pc != 0x22CBF0u) { return; }
    }
    ctx->pc = 0x22CBF0u;
    // 0x22cbf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22cbf4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x22cbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22cbf8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22CBF8u;
    {
        const bool branch_taken_0x22cbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBF8u;
            // 0x22cbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbf8) {
            ctx->pc = 0x22CBE8u;
            runtime->cooperativeGuestYield();
            goto label_22cbe8;
        }
    }
    ctx->pc = 0x22CC00u;
    // 0x22cc00: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x22CC00u;
    {
        const bool branch_taken_0x22cc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC00u;
            // 0x22cc04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc00) {
            ctx->pc = 0x22CD7Cu;
            goto label_22cd7c;
        }
    }
    ctx->pc = 0x22CC08u;
label_22cc08:
    // 0x22cc08: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22cc0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc14: 0x24498310  addiu       $t1, $v0, -0x7CF0
    ctx->pc = 0x22cc14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935312));
    // 0x22cc18: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x22cc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22cc1c: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x22cc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22cc20: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x22cc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22cc24: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x22cc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22cc28: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x22CC28u;
    SET_GPR_U32(ctx, 31, 0x22CC30u);
    ctx->pc = 0x22CC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC28u;
            // 0x22cc2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC30u; }
        if (ctx->pc != 0x22CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC30u; }
        if (ctx->pc != 0x22CC30u) { return; }
    }
    ctx->pc = 0x22CC30u;
    // 0x22cc30: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x22cc30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22cc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cc38:
    // 0x22cc38: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x22cc38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x22cc3c: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x22cc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22cc40: 0x26825280  addiu       $v0, $s4, 0x5280
    ctx->pc = 0x22cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x22cc44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22cc48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cc4c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x22cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x22cc50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22cc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22cc54: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x22CC54u;
    {
        const bool branch_taken_0x22cc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc54) {
            ctx->pc = 0x22CC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC54u;
            // 0x22cc58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CCBCu;
            goto label_22ccbc;
        }
    }
    ctx->pc = 0x22CC5Cu;
    // 0x22cc5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22cc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc60: 0x26825280  addiu       $v0, $s4, 0x5280
    ctx->pc = 0x22cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x22cc64: 0x0  nop
    ctx->pc = 0x22cc64u;
    // NOP
label_22cc68:
    // 0x22cc68: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22cc6c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22cc70: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x22cc70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22cc74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cc78: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x22cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x22cc7c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x22cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x22cc80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22cc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22cc84: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x22CC84u;
    SET_GPR_U32(ctx, 31, 0x22CC8Cu);
    ctx->pc = 0x22CC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC84u;
            // 0x22cc88: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC8Cu; }
        if (ctx->pc != 0x22CC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC8Cu; }
        if (ctx->pc != 0x22CC8Cu) { return; }
    }
    ctx->pc = 0x22CC8Cu;
    // 0x22cc8c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22CC8Cu;
    {
        const bool branch_taken_0x22cc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cc8c) {
            ctx->pc = 0x22CC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC8Cu;
            // 0x22cc90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CCACu;
            goto label_22ccac;
        }
    }
    ctx->pc = 0x22CC94u;
    // 0x22cc94: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22cc98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cc9c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x22cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x22cca0: 0xac510030  sw          $s1, 0x30($v0)
    ctx->pc = 0x22cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 17));
    // 0x22cca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22CCA4u;
    {
        const bool branch_taken_0x22cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCA4u;
            // 0x22cca8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cca4) {
            ctx->pc = 0x22CCB8u;
            goto label_22ccb8;
        }
    }
    ctx->pc = 0x22CCACu;
label_22ccac:
    // 0x22ccac: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x22ccacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22ccb0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x22CCB0u;
    {
        const bool branch_taken_0x22ccb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCB0u;
            // 0x22ccb4: 0x26825280  addiu       $v0, $s4, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccb0) {
            ctx->pc = 0x22CC68u;
            runtime->cooperativeGuestYield();
            goto label_22cc68;
        }
    }
    ctx->pc = 0x22CCB8u;
label_22ccb8:
    // 0x22ccb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ccb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22ccbc:
    // 0x22ccbc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x22ccbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22ccc0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x22CCC0u;
    {
        const bool branch_taken_0x22ccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCC0u;
            // 0x22ccc4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccc0) {
            ctx->pc = 0x22CC38u;
            runtime->cooperativeGuestYield();
            goto label_22cc38;
        }
    }
    ctx->pc = 0x22CCC8u;
    // 0x22ccc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22ccc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cccc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22ccd0:
    // 0x22ccd0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x22ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x22ccd4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x22ccd8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CCD8u;
    {
        const bool branch_taken_0x22ccd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ccd8) {
            ctx->pc = 0x22CCDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCD8u;
            // 0x22ccdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CCF0u;
            goto label_22ccf0;
        }
    }
    ctx->pc = 0x22CCE0u;
    // 0x22cce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cce4: 0xc06eff8  jal         func_1BBFE0
    ctx->pc = 0x22CCE4u;
    SET_GPR_U32(ctx, 31, 0x22CCECu);
    ctx->pc = 0x22CCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCE4u;
            // 0x22cce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBFE0u;
    if (runtime->hasFunction(0x1BBFE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CCECu; }
        if (ctx->pc != 0x22CCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBFE0_0x1bbfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CCECu; }
        if (ctx->pc != 0x22CCECu) { return; }
    }
    ctx->pc = 0x22CCECu;
    // 0x22ccec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22ccecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22ccf0:
    // 0x22ccf0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x22ccf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22ccf4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22CCF4u;
    {
        const bool branch_taken_0x22ccf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCF4u;
            // 0x22ccf8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccf4) {
            ctx->pc = 0x22CCD0u;
            runtime->cooperativeGuestYield();
            goto label_22ccd0;
        }
    }
    ctx->pc = 0x22CCFCu;
    // 0x22ccfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22ccfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd00: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22cd04: 0x0  nop
    ctx->pc = 0x22cd04u;
    // NOP
label_22cd08:
    // 0x22cd08: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x22cd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22cd0c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x22cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x22cd10: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x22cd10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cd14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22CD14u;
    {
        const bool branch_taken_0x22cd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD14u;
            // 0x22cd18: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd14) {
            ctx->pc = 0x22CD34u;
            goto label_22cd34;
        }
    }
    ctx->pc = 0x22CD1Cu;
    // 0x22cd1c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x22cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x22cd20: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x22cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22cd24: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CD24u;
    {
        const bool branch_taken_0x22cd24 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x22cd24) {
            ctx->pc = 0x22CD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD24u;
            // 0x22cd28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CD38u;
            goto label_22cd38;
        }
    }
    ctx->pc = 0x22CD2Cu;
    // 0x22cd2c: 0xc06f00a  jal         func_1BC028
    ctx->pc = 0x22CD2Cu;
    SET_GPR_U32(ctx, 31, 0x22CD34u);
    ctx->pc = 0x1BC028u;
    if (runtime->hasFunction(0x1BC028u)) {
        auto targetFn = runtime->lookupFunction(0x1BC028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD34u; }
        if (ctx->pc != 0x22CD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC028_0x1bc028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD34u; }
        if (ctx->pc != 0x22CD34u) { return; }
    }
    ctx->pc = 0x22CD34u;
label_22cd34:
    // 0x22cd34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22cd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22cd38:
    // 0x22cd38: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x22cd38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22cd3c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22CD3Cu;
    {
        const bool branch_taken_0x22cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD3Cu;
            // 0x22cd40: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd3c) {
            ctx->pc = 0x22CD08u;
            runtime->cooperativeGuestYield();
            goto label_22cd08;
        }
    }
    ctx->pc = 0x22CD44u;
    // 0x22cd44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22CD44u;
    {
        const bool branch_taken_0x22cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD44u;
            // 0x22cd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd44) {
            ctx->pc = 0x22CD7Cu;
            goto label_22cd7c;
        }
    }
    ctx->pc = 0x22CD4Cu;
label_22cd4c:
    // 0x22cd4c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CD4Cu;
    {
        const bool branch_taken_0x22cd4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd4c) {
            ctx->pc = 0x22CD5Cu;
            goto label_22cd5c;
        }
    }
    ctx->pc = 0x22CD54u;
    // 0x22cd54: 0xc06f77a  jal         func_1BDDE8
    ctx->pc = 0x22CD54u;
    SET_GPR_U32(ctx, 31, 0x22CD5Cu);
    ctx->pc = 0x22CD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD54u;
            // 0x22cd58: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDDE8u;
    if (runtime->hasFunction(0x1BDDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD5Cu; }
        if (ctx->pc != 0x22CD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDDE8_0x1bdde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD5Cu; }
        if (ctx->pc != 0x22CD5Cu) { return; }
    }
    ctx->pc = 0x22CD5Cu;
label_22cd5c:
    // 0x22cd5c: 0xc08b3b6  jal         func_22CED8
    ctx->pc = 0x22CD5Cu;
    SET_GPR_U32(ctx, 31, 0x22CD64u);
    ctx->pc = 0x22CED8u;
    if (runtime->hasFunction(0x22CED8u)) {
        auto targetFn = runtime->lookupFunction(0x22CED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD64u; }
        if (ctx->pc != 0x22CD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022CED8_0x22ced8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD64u; }
        if (ctx->pc != 0x22CD64u) { return; }
    }
    ctx->pc = 0x22CD64u;
    // 0x22cd64: 0xc06cf4c  jal         func_1B3D30
    ctx->pc = 0x22CD64u;
    SET_GPR_U32(ctx, 31, 0x22CD6Cu);
    ctx->pc = 0x1B3D30u;
    if (runtime->hasFunction(0x1B3D30u)) {
        auto targetFn = runtime->lookupFunction(0x1B3D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD6Cu; }
        if (ctx->pc != 0x22CD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3D30_0x1b3d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD6Cu; }
        if (ctx->pc != 0x22CD6Cu) { return; }
    }
    ctx->pc = 0x22CD6Cu;
    // 0x22cd6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22cd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd70: 0xc06cf82  jal         func_1B3E08
    ctx->pc = 0x22CD70u;
    SET_GPR_U32(ctx, 31, 0x22CD78u);
    ctx->pc = 0x22CD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD70u;
            // 0x22cd74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E08u;
    if (runtime->hasFunction(0x1B3E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B3E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD78u; }
        if (ctx->pc != 0x22CD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3E08_0x1b3e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD78u; }
        if (ctx->pc != 0x22CD78u) { return; }
    }
    ctx->pc = 0x22CD78u;
    // 0x22cd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cd7c:
    // 0x22cd7c: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CD7Cu;
    {
        const bool branch_taken_0x22cd7c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD7Cu;
            // 0x22cd80: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd7c) {
            ctx->pc = 0x22CD8Cu;
            goto label_22cd8c;
        }
    }
    ctx->pc = 0x22CD84u;
    // 0x22cd84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cd88: 0xaec21230  sw          $v0, 0x1230($s6)
    ctx->pc = 0x22cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4656), GPR_U32(ctx, 2));
label_22cd8c:
    // 0x22cd8c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x22cd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22cd90: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x22cd90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22cd94: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x22cd94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22cd98: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x22cd98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22cd9c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x22cd9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cda0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x22cda0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cda4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22cda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22cda8: 0x3e00008  jr          $ra
    ctx->pc = 0x22CDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CDA8u;
            // 0x22cdac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22CB98u: goto label_22cb98;
            case 0x22CBE8u: goto label_22cbe8;
            case 0x22CC08u: goto label_22cc08;
            case 0x22CC38u: goto label_22cc38;
            case 0x22CC68u: goto label_22cc68;
            case 0x22CCACu: goto label_22ccac;
            case 0x22CCB8u: goto label_22ccb8;
            case 0x22CCBCu: goto label_22ccbc;
            case 0x22CCD0u: goto label_22ccd0;
            case 0x22CCF0u: goto label_22ccf0;
            case 0x22CD08u: goto label_22cd08;
            case 0x22CD34u: goto label_22cd34;
            case 0x22CD38u: goto label_22cd38;
            case 0x22CD4Cu: goto label_22cd4c;
            case 0x22CD5Cu: goto label_22cd5c;
            case 0x22CD7Cu: goto label_22cd7c;
            case 0x22CD8Cu: goto label_22cd8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22CDB0u;
}
