#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001307C8
// Address: 0x1307c8 - 0x1308e0
void sub_001307C8_0x1307c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001307C8_0x1307c8");
#endif

    ctx->pc = 0x1307c8u;

    // 0x1307c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1307c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1307cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1307ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1307d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1307d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1307d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1307d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1307d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1307dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1307dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1307e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1307e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1307e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1307e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1307e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1307ec: 0xc04c0c4  jal         func_130310
    ctx->pc = 0x1307ECu;
    SET_GPR_U32(ctx, 31, 0x1307F4u);
    ctx->pc = 0x1307F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1307ECu;
            // 0x1307f0: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130310u;
    if (runtime->hasFunction(0x130310u)) {
        auto targetFn = runtime->lookupFunction(0x130310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307F4u; }
        if (ctx->pc != 0x1307F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130310_0x130310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307F4u; }
        if (ctx->pc != 0x1307F4u) { return; }
    }
    ctx->pc = 0x1307F4u;
    // 0x1307f4: 0x261100c0  addiu       $s1, $s0, 0xC0
    ctx->pc = 0x1307f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1307f8: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1307f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1307fc: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x1307fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x130800: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x130800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x130804: 0x0  nop
    ctx->pc = 0x130804u;
    // NOP
label_130808:
    // 0x130808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13080c: 0xc08ee36  jal         func_23B8D8
    ctx->pc = 0x13080Cu;
    SET_GPR_U32(ctx, 31, 0x130814u);
    ctx->pc = 0x130810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13080Cu;
            // 0x130810: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B8D8u;
    if (runtime->hasFunction(0x23B8D8u)) {
        auto targetFn = runtime->lookupFunction(0x23B8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130814u; }
        if (ctx->pc != 0x130814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b8d8_0x23b8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130814u; }
        if (ctx->pc != 0x130814u) { return; }
    }
    ctx->pc = 0x130814u;
    // 0x130814: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x130814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130818: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130818u;
    {
        const bool branch_taken_0x130818 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x13081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130818u;
            // 0x13081c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130818) {
            ctx->pc = 0x130808u;
            runtime->cooperativeGuestYield();
            goto label_130808;
        }
    }
    ctx->pc = 0x130820u;
    // 0x130820: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x130820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x130824: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x130824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x130828: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x130828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x13082c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x13082cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x130830: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x130830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130834: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x130834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x130838: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x130838u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x13083c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x13083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x130840: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x130840u;
    {
        const bool branch_taken_0x130840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130840u;
            // 0x130844: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130840) {
            ctx->pc = 0x130888u;
            goto label_130888;
        }
    }
    ctx->pc = 0x130848u;
    // 0x130848: 0x96620026  lhu         $v0, 0x26($s3)
    ctx->pc = 0x130848u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x13084c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x13084cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x130850: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x130850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x130854: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x130854u;
    {
        const bool branch_taken_0x130854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x130858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130854u;
            // 0x130858: 0xae700064  sw          $s0, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130854) {
            ctx->pc = 0x1308ACu;
            goto label_1308ac;
        }
    }
    ctx->pc = 0x13085Cu;
    // 0x13085c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130860: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x130860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x130864: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x130864u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x130868: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x130868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x13086c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13086Cu;
    {
        const bool branch_taken_0x13086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13086Cu;
            // 0x130870: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13086c) {
            ctx->pc = 0x1308B0u;
            goto label_1308b0;
        }
    }
    ctx->pc = 0x130874u;
    // 0x130874: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x130874u;
    SET_GPR_U32(ctx, 31, 0x13087Cu);
    ctx->pc = 0x130878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130874u;
            // 0x130878: 0x8e840090  lw          $a0, 0x90($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13087Cu; }
        if (ctx->pc != 0x13087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13087Cu; }
        if (ctx->pc != 0x13087Cu) { return; }
    }
    ctx->pc = 0x13087Cu;
    // 0x13087c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130880: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x130880u;
    {
        const bool branch_taken_0x130880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130880u;
            // 0x130884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130880) {
            ctx->pc = 0x1308A0u;
            goto label_1308a0;
        }
    }
    ctx->pc = 0x130888u;
label_130888:
    // 0x130888: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130888u;
    {
        const bool branch_taken_0x130888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130888u;
            // 0x13088c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130888) {
            ctx->pc = 0x1308B0u;
            goto label_1308b0;
        }
    }
    ctx->pc = 0x130890u;
    // 0x130890: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x130890u;
    SET_GPR_U32(ctx, 31, 0x130898u);
    ctx->pc = 0x130894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130890u;
            // 0x130894: 0x8e840090  lw          $a0, 0x90($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130898u; }
        if (ctx->pc != 0x130898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130898u; }
        if (ctx->pc != 0x130898u) { return; }
    }
    ctx->pc = 0x130898u;
    // 0x130898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13089c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13089cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1308a0:
    // 0x1308a0: 0xc04d8ba  jal         func_1362E8
    ctx->pc = 0x1308A0u;
    SET_GPR_U32(ctx, 31, 0x1308A8u);
    ctx->pc = 0x1308A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1308A0u;
            // 0x1308a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1362E8u;
    if (runtime->hasFunction(0x1362E8u)) {
        auto targetFn = runtime->lookupFunction(0x1362E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1308A8u; }
        if (ctx->pc != 0x1308A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001362E8_0x1362e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1308A8u; }
        if (ctx->pc != 0x1308A8u) { return; }
    }
    ctx->pc = 0x1308A8u;
    // 0x1308a8: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x1308a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_1308ac:
    // 0x1308ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1308acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1308b0:
    // 0x1308b0: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1308b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x1308b4: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x1308b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x1308b8: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1308b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1308bc: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x1308bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x1308c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1308c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1308c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1308c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1308c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1308c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1308cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1308ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1308d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1308d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1308d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1308d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1308d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1308D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1308DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1308D8u;
            // 0x1308dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130808u: goto label_130808;
            case 0x130888u: goto label_130888;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1308E0u;
}
