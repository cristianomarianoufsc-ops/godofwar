#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012BDA0
// Address: 0x12bda0 - 0x12c178
void sub_0012BDA0_0x12bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BDA0_0x12bda0");
#endif

    ctx->pc = 0x12bda0u;

    // 0x12bda0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12bda4: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x12bda8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12bdac: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x12bdacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x12bdb0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12bdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12bdb4: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x12bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x12bdb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12bdbc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x12bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bdc0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x12bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x12bdc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12bdc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdc8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x12bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x12bdcc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12bdccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bdd4: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x12bdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x12bdd8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x12bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x12bddc: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12bde0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x12bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x12bde4: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x12bde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x12bde8: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x12bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x12bdec: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x12bdecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x12bdf0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12bdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12bdf4: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x12bdf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x12bdf8: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x12bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x12bdfc: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x12bdfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x12be00: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x12be00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x12be04: 0xc08e222  jal         func_238888
    ctx->pc = 0x12BE04u;
    SET_GPR_U32(ctx, 31, 0x12BE0Cu);
    ctx->pc = 0x12BE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE04u;
            // 0x12be08: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE0Cu; }
        if (ctx->pc != 0x12BE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE0Cu; }
        if (ctx->pc != 0x12BE0Cu) { return; }
    }
    ctx->pc = 0x12BE0Cu;
    // 0x12be0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12be10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12be10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be18: 0xc08e222  jal         func_238888
    ctx->pc = 0x12BE18u;
    SET_GPR_U32(ctx, 31, 0x12BE20u);
    ctx->pc = 0x12BE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE18u;
            // 0x12be1c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE20u; }
        if (ctx->pc != 0x12BE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE20u; }
        if (ctx->pc != 0x12BE20u) { return; }
    }
    ctx->pc = 0x12BE20u;
    // 0x12be20: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x12be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12be24: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x12be24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x12be28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12be28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12be2c: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x12be30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12be30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12be34: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x12be34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x12be38: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x12be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12be3c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x12be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x12be40: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x12BE40u;
    SET_GPR_U32(ctx, 31, 0x12BE48u);
    ctx->pc = 0x12BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE40u;
            // 0x12be44: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE48u; }
        if (ctx->pc != 0x12BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE48u; }
        if (ctx->pc != 0x12BE48u) { return; }
    }
    ctx->pc = 0x12BE48u;
    // 0x12be48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x12be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12be4c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x12be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x12be50: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x12be50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x12be54: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12be54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x12be58: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x12be58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12be5c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x12BE5Cu;
    SET_GPR_U32(ctx, 31, 0x12BE64u);
    ctx->pc = 0x12BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE5Cu;
            // 0x12be60: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE64u; }
        if (ctx->pc != 0x12BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE64u; }
        if (ctx->pc != 0x12BE64u) { return; }
    }
    ctx->pc = 0x12BE64u;
    // 0x12be64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12be68: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12be68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12be6c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x12be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x12be70: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12be70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12be74: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x12be74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x12be78: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x12BE78u;
    SET_GPR_U32(ctx, 31, 0x12BE80u);
    ctx->pc = 0x12BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE78u;
            // 0x12be7c: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE80u; }
        if (ctx->pc != 0x12BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE80u; }
        if (ctx->pc != 0x12BE80u) { return; }
    }
    ctx->pc = 0x12BE80u;
    // 0x12be80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12be80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12be84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12be88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12be8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12be90:
    // 0x12be90: 0x0  nop
    ctx->pc = 0x12be90u;
    // NOP
    // 0x12be94: 0x0  nop
    ctx->pc = 0x12be94u;
    // NOP
    // 0x12be98: 0x0  nop
    ctx->pc = 0x12be98u;
    // NOP
    // 0x12be9c: 0x0  nop
    ctx->pc = 0x12be9cu;
    // NOP
    // 0x12bea0: 0x0  nop
    ctx->pc = 0x12bea0u;
    // NOP
    // 0x12bea4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12BEA4u;
    {
        const bool branch_taken_0x12bea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12BEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEA4u;
            // 0x12bea8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bea4) {
            ctx->pc = 0x12BE90u;
            runtime->cooperativeGuestYield();
            goto label_12be90;
        }
    }
    ctx->pc = 0x12BEACu;
    // 0x12beac: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x12beacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x12beb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12beb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12beb4: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x12beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x12beb8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12BEB8u;
    {
        const bool branch_taken_0x12beb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEB8u;
            // 0x12bebc: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12beb8) {
            ctx->pc = 0x12BF6Cu;
            goto label_12bf6c;
        }
    }
    ctx->pc = 0x12BEC0u;
    // 0x12bec0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x12bec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12bec4: 0x0  nop
    ctx->pc = 0x12bec4u;
    // NOP
label_12bec8:
    // 0x12bec8: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12becc: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x12beccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x12bed0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x12bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12bed4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x12bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12bed8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x12BED8u;
    SET_GPR_U32(ctx, 31, 0x12BEE0u);
    ctx->pc = 0x12BEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BED8u;
            // 0x12bedc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BEE0u; }
        if (ctx->pc != 0x12BEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BEE0u; }
        if (ctx->pc != 0x12BEE0u) { return; }
    }
    ctx->pc = 0x12BEE0u;
    // 0x12bee0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12bee4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12bee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bee8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12beec: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x12BEECu;
    {
        const bool branch_taken_0x12beec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEECu;
            // 0x12bef0: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12beec) {
            ctx->pc = 0x12BF1Cu;
            goto label_12bf1c;
        }
    }
    ctx->pc = 0x12BEF4u;
    // 0x12bef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bef8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12befc: 0x0  nop
    ctx->pc = 0x12befcu;
    // NOP
label_12bf00:
    // 0x12bf00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12bf04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bf08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12bf0c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x12bf0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12bf10: 0x0  nop
    ctx->pc = 0x12bf10u;
    // NOP
    // 0x12bf14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12BF14u;
    {
        const bool branch_taken_0x12bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF14u;
            // 0x12bf18: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf14) {
            ctx->pc = 0x12BF00u;
            runtime->cooperativeGuestYield();
            goto label_12bf00;
        }
    }
    ctx->pc = 0x12BF1Cu;
label_12bf1c:
    // 0x12bf1c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x12bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12bf20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12BF20u;
    {
        const bool branch_taken_0x12bf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF20u;
            // 0x12bf24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf20) {
            ctx->pc = 0x12BF58u;
            goto label_12bf58;
        }
    }
    ctx->pc = 0x12BF28u;
    // 0x12bf28: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x12bf28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12bf2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12bf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12bf30:
    // 0x12bf30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x12bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12bf34: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12bf38: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x12bf38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12bf3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12bf40: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x12bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x12bf44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bf48: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x12bf48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12bf4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12bf50: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12BF50u;
    {
        const bool branch_taken_0x12bf50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF50u;
            // 0x12bf54: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf50) {
            ctx->pc = 0x12BF30u;
            runtime->cooperativeGuestYield();
            goto label_12bf30;
        }
    }
    ctx->pc = 0x12BF58u;
label_12bf58:
    // 0x12bf58: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x12bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x12bf5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12bf5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12bf60: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x12bf60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12bf64: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x12BF64u;
    {
        const bool branch_taken_0x12bf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF64u;
            // 0x12bf68: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf64) {
            ctx->pc = 0x12BEC8u;
            runtime->cooperativeGuestYield();
            goto label_12bec8;
        }
    }
    ctx->pc = 0x12BF6Cu;
label_12bf6c:
    // 0x12bf6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12bf70: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12bf74: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x12bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x12bf78: 0x2442c578  addiu       $v0, $v0, -0x3A88
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952312));
    // 0x12bf7c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x12bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x12bf80: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x12bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12bf84: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x12bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x12bf88: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x12bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x12bf8c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x12bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12bf90: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x12bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x12bf94: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x12bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x12bf98: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x12bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x12bf9c: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x12BF9Cu;
    SET_GPR_U32(ctx, 31, 0x12BFA4u);
    ctx->pc = 0x12BFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF9Cu;
            // 0x12bfa0: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFA4u; }
        if (ctx->pc != 0x12BFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFA4u; }
        if (ctx->pc != 0x12BFA4u) { return; }
    }
    ctx->pc = 0x12BFA4u;
    // 0x12bfa4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12bfa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bfa8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12bfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12bfac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12bfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12bfb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12bfb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bfb4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x12bfb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bfb8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x12bfb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bfbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFC0u;
            // 0x12bfc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BE90u: goto label_12be90;
            case 0x12BEC8u: goto label_12bec8;
            case 0x12BF00u: goto label_12bf00;
            case 0x12BF1Cu: goto label_12bf1c;
            case 0x12BF30u: goto label_12bf30;
            case 0x12BF58u: goto label_12bf58;
            case 0x12BF6Cu: goto label_12bf6c;
            case 0x12C168u: goto label_12c168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BFC8u;
    // 0x12bfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bfcc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12bfd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bfd4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x12bfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bfd8: 0x2442c578  addiu       $v0, $v0, -0x3A88
    ctx->pc = 0x12bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952312));
    // 0x12bfdc: 0xc08fafa  jal         func_23EBE8
    ctx->pc = 0x12BFDCu;
    SET_GPR_U32(ctx, 31, 0x12BFE4u);
    ctx->pc = 0x12BFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFDCu;
            // 0x12bfe0: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EBE8u;
    if (runtime->hasFunction(0x23EBE8u)) {
        auto targetFn = runtime->lookupFunction(0x23EBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFE4u; }
        if (ctx->pc != 0x12BFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ebe8_0x23ec18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BFE4u; }
        if (ctx->pc != 0x12BFE4u) { return; }
    }
    ctx->pc = 0x12BFE4u;
    // 0x12bfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BFE8u;
            // 0x12bfec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BE90u: goto label_12be90;
            case 0x12BEC8u: goto label_12bec8;
            case 0x12BF00u: goto label_12bf00;
            case 0x12BF1Cu: goto label_12bf1c;
            case 0x12BF30u: goto label_12bf30;
            case 0x12BF58u: goto label_12bf58;
            case 0x12BF6Cu: goto label_12bf6c;
            case 0x12C168u: goto label_12c168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BFF0u;
    // 0x12bff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12bff4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x12bff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bff8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12bffc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x12bffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x12c000: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12c004: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12c004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x12c008: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x12c008u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12c00c: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x12c00cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x12c010: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x12c010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x12c014: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x12c014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x12c018: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x12c018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x12c01c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12c01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12c020: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x12c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x12c024: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x12c024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x12c028: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x12c028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x12c02c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x12c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x12c030: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x12c030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x12c034: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12c034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12c038: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x12C038u;
    SET_GPR_U32(ctx, 31, 0x12C040u);
    ctx->pc = 0x12C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C038u;
            // 0x12c03c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C040u; }
        if (ctx->pc != 0x12C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C040u; }
        if (ctx->pc != 0x12C040u) { return; }
    }
    ctx->pc = 0x12C040u;
    // 0x12c040: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12c040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12c044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c048: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x12c048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x12c04c: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x12c04cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x12c050: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x12c050u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x12c054: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x12c054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x12c058: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x12c058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x12c05c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x12c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12c060: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x12c060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x12c064: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12c064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12c068: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x12c068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c06c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12c06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c070: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x12c070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x12c074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c078: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x12c078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x12c07c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x12c07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c080: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12c080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12c084: 0xc08e222  jal         func_238888
    ctx->pc = 0x12C084u;
    SET_GPR_U32(ctx, 31, 0x12C08Cu);
    ctx->pc = 0x12C088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C084u;
            // 0x12c088: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C08Cu; }
        if (ctx->pc != 0x12C08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C08Cu; }
        if (ctx->pc != 0x12C08Cu) { return; }
    }
    ctx->pc = 0x12C08Cu;
    // 0x12c08c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12c090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c094: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12c094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c098: 0xc08e222  jal         func_238888
    ctx->pc = 0x12C098u;
    SET_GPR_U32(ctx, 31, 0x12C0A0u);
    ctx->pc = 0x12C09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C098u;
            // 0x12c09c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0A0u; }
        if (ctx->pc != 0x12C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0A0u; }
        if (ctx->pc != 0x12C0A0u) { return; }
    }
    ctx->pc = 0x12C0A0u;
    // 0x12c0a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x12c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12c0a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12c0a8: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x12c0a8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c0ac: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x12c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x12c0b0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x12c0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c0b4: 0x2484c638  addiu       $a0, $a0, -0x39C8
    ctx->pc = 0x12c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952504));
    // 0x12c0b8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x12c0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c0bc: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x12c0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x12c0c0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x12c0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12c0c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12c0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12c0c8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x12c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x12c0cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12c0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0d0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x12c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x12c0d4: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x12c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x12c0d8: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x12c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x12c0dc: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x12c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x12c0e0: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x12c0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x12c0e4: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x12c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x12c0e8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x12c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x12c0ec: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x12c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x12c0f0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x12c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x12c0f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12c0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12C0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0FCu;
            // 0x12c100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BE90u: goto label_12be90;
            case 0x12BEC8u: goto label_12bec8;
            case 0x12BF00u: goto label_12bf00;
            case 0x12BF1Cu: goto label_12bf1c;
            case 0x12BF30u: goto label_12bf30;
            case 0x12BF58u: goto label_12bf58;
            case 0x12BF6Cu: goto label_12bf6c;
            case 0x12C168u: goto label_12c168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C104u;
    // 0x12c104: 0x0  nop
    ctx->pc = 0x12c104u;
    // NOP
    // 0x12c108: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12c108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12c10c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c10cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c110: 0x8c42f1f0  lw          $v0, -0xE10($v0)
    ctx->pc = 0x12c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963696)));
    // 0x12c114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12c114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c118: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12C118u;
    {
        const bool branch_taken_0x12c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C118u;
            // 0x12c11c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c118) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12C120u;
    // 0x12c120: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x12c120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x12c124: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x12c124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12c128: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12c128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12c12c: 0xac43c300  sw          $v1, -0x3D00($v0)
    ctx->pc = 0x12c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 3));
    // 0x12c130: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x12c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x12c134: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x12c134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12c138: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x12c138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12c13c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x12c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12c140: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x12c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x12c144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12c148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c14c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x12c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12c150: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12c154: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x12c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12c158: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x12c158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x12c15c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x12c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x12c160: 0x40f809  jalr        $v0
    ctx->pc = 0x12C160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12C168u);
        ctx->pc = 0x12C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C160u;
            // 0x12c164: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12C168u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BE90u: goto label_12be90;
            case 0x12BEC8u: goto label_12bec8;
            case 0x12BF00u: goto label_12bf00;
            case 0x12BF1Cu: goto label_12bf1c;
            case 0x12BF30u: goto label_12bf30;
            case 0x12BF58u: goto label_12bf58;
            case 0x12BF6Cu: goto label_12bf6c;
            case 0x12C168u: goto label_12c168;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12C168u; }
            if (ctx->pc != 0x12C168u) { return; }
        }
        }
    }
    ctx->pc = 0x12C168u;
label_12c168:
    // 0x12c168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c16c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C16Cu;
            // 0x12c170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BE90u: goto label_12be90;
            case 0x12BEC8u: goto label_12bec8;
            case 0x12BF00u: goto label_12bf00;
            case 0x12BF1Cu: goto label_12bf1c;
            case 0x12BF30u: goto label_12bf30;
            case 0x12BF58u: goto label_12bf58;
            case 0x12BF6Cu: goto label_12bf6c;
            case 0x12C168u: goto label_12c168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C174u;
    // 0x12c174: 0x0  nop
    ctx->pc = 0x12c174u;
    // NOP
}
