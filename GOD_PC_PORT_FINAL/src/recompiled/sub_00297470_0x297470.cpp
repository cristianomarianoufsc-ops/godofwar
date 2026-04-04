#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297470
// Address: 0x297470 - 0x297670
void sub_00297470_0x297470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297470_0x297470");
#endif

    ctx->pc = 0x297470u;

    // 0x297470: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x297470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x297474: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x297474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x297478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29747c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x29747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x297480: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x297480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x297484: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x297484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x297488: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x297488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x29748c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x29748cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297490: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x297490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x297494: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x297494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297498: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x297498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x29749c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x29749cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974a0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2974a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2974a4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2974a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974a8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2974a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2974ac: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x2974acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2974b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2974b4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2974b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974b8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2974b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2974bc: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2974bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974c0: 0xc0a5b84  jal         func_296E10
    ctx->pc = 0x2974C0u;
    SET_GPR_U32(ctx, 31, 0x2974C8u);
    ctx->pc = 0x2974C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2974C0u;
            // 0x2974c4: 0x248492c0  addiu       $a0, $a0, -0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296E10u;
    if (runtime->hasFunction(0x296E10u)) {
        auto targetFn = runtime->lookupFunction(0x296E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2974C8u; }
        if (ctx->pc != 0x2974C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E10_0x296e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2974C8u; }
        if (ctx->pc != 0x2974C8u) { return; }
    }
    ctx->pc = 0x2974C8u;
    // 0x2974c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2974c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974cc: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2974CCu;
    {
        const bool branch_taken_0x2974cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2974CCu;
            // 0x2974d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974cc) {
            ctx->pc = 0x297640u;
            goto label_297640;
        }
    }
    ctx->pc = 0x2974D4u;
    // 0x2974d4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2974d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2974d8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2974d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2974dc: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2974dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2974e0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2974e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2974e4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2974e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2974e8: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x2974e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
    // 0x2974ec: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2974ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974f0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2974f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2974f4: 0x33c30002  andi        $v1, $fp, 0x2
    ctx->pc = 0x2974f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2974f8: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x2974f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x2974fc: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x2974fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x297500: 0xae140028  sw          $s4, 0x28($s0)
    ctx->pc = 0x297500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x297504: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x297504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x297508: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x297508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x29750c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x29750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x297510: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x297510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x297514: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x297514u;
    {
        const bool branch_taken_0x297514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297514u;
            // 0x297518: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297514) {
            ctx->pc = 0x29755Cu;
            goto label_29755c;
        }
    }
    ctx->pc = 0x29751Cu;
    // 0x29751c: 0x16b40007  bne         $s5, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x29751Cu;
    {
        const bool branch_taken_0x29751c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x297520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29751Cu;
            // 0x297520: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29751c) {
            ctx->pc = 0x29753Cu;
            goto label_29753c;
        }
    }
    ctx->pc = 0x297524u;
    // 0x297524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x297524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297528: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29752c: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x29752Cu;
    SET_GPR_U32(ctx, 31, 0x297534u);
    ctx->pc = 0x297530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29752Cu;
            // 0x297530: 0x242280a  movz        $a1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297534u; }
        if (ctx->pc != 0x297534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297534u; }
        if (ctx->pc != 0x297534u) { return; }
    }
    ctx->pc = 0x297534u;
    // 0x297534: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x297534u;
    {
        const bool branch_taken_0x297534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297534u;
            // 0x297538: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297534) {
            ctx->pc = 0x297560u;
            goto label_297560;
        }
    }
    ctx->pc = 0x29753Cu;
label_29753c:
    // 0x29753c: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x29753Cu;
    {
        const bool branch_taken_0x29753c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x297540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29753Cu;
            // 0x297540: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29753c) {
            ctx->pc = 0x29754Cu;
            goto label_29754c;
        }
    }
    ctx->pc = 0x297544u;
    // 0x297544: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x297544u;
    SET_GPR_U32(ctx, 31, 0x29754Cu);
    ctx->pc = 0x297548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297544u;
            // 0x297548: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29754Cu; }
        if (ctx->pc != 0x29754Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29754Cu; }
        if (ctx->pc != 0x29754Cu) { return; }
    }
    ctx->pc = 0x29754Cu;
label_29754c:
    // 0x29754c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29754Cu;
    {
        const bool branch_taken_0x29754c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x297550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29754Cu;
            // 0x297550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29754c) {
            ctx->pc = 0x29755Cu;
            goto label_29755c;
        }
    }
    ctx->pc = 0x297554u;
    // 0x297554: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x297554u;
    SET_GPR_U32(ctx, 31, 0x29755Cu);
    ctx->pc = 0x297558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297554u;
            // 0x297558: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29755Cu; }
        if (ctx->pc != 0x29755Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29755Cu; }
        if (ctx->pc != 0x29755Cu) { return; }
    }
    ctx->pc = 0x29755Cu;
label_29755c:
    // 0x29755c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x29755cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_297560:
    // 0x297560: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x297560u;
    {
        const bool branch_taken_0x297560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297560u;
            // 0x297564: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297560) {
            ctx->pc = 0x2975B4u;
            goto label_2975b4;
        }
    }
    ctx->pc = 0x297568u;
    // 0x297568: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x297568u;
    {
        const bool branch_taken_0x297568 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x29756Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297568u;
            // 0x29756c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297568) {
            ctx->pc = 0x297578u;
            goto label_297578;
        }
    }
    ctx->pc = 0x297570u;
    // 0x297570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x297570u;
    {
        const bool branch_taken_0x297570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297570u;
            // 0x297574: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297570) {
            ctx->pc = 0x29757Cu;
            goto label_29757c;
        }
    }
    ctx->pc = 0x297578u;
label_297578:
    // 0x297578: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x297578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_29757c:
    // 0x29757c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297580: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x297580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x297584: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x297584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x297588: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x297588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29758c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29758cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x297590: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x297590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297594: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x297594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x297598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29759c: 0xc0a5a74  jal         func_2969D0
    ctx->pc = 0x29759Cu;
    SET_GPR_U32(ctx, 31, 0x2975A4u);
    ctx->pc = 0x2975A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29759Cu;
            // 0x2975a0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (runtime->hasFunction(0x2969D0u)) {
        auto targetFn = runtime->lookupFunction(0x2969D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975A4u; }
        if (ctx->pc != 0x2975A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2969d0_0x296a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975A4u; }
        if (ctx->pc != 0x2975A4u) { return; }
    }
    ctx->pc = 0x2975A4u;
    // 0x2975a4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2975A4u;
    {
        const bool branch_taken_0x2975a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2975A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2975A4u;
            // 0x2975a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975a4) {
            ctx->pc = 0x297640u;
            goto label_297640;
        }
    }
    ctx->pc = 0x2975ACu;
    // 0x2975ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2975ACu;
    {
        const bool branch_taken_0x2975ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2975ac) {
            ctx->pc = 0x29761Cu;
            goto label_29761c;
        }
    }
    ctx->pc = 0x2975B4u;
label_2975b4:
    // 0x2975b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2975b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2975b8: 0x24426a68  addiu       $v0, $v0, 0x6A68
    ctx->pc = 0x2975b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27240));
    // 0x2975bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2975bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2975c0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2975c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2975c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2975c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975c8: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x2975C8u;
    SET_GPR_U32(ctx, 31, 0x2975D0u);
    ctx->pc = 0x2975CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2975C8u;
            // 0x2975cc: 0xafb30004  sw          $s3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975D0u; }
        if (ctx->pc != 0x2975D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975D0u; }
        if (ctx->pc != 0x2975D0u) { return; }
    }
    ctx->pc = 0x2975D0u;
    // 0x2975d0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2975D0u;
    {
        const bool branch_taken_0x2975d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2975D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2975D0u;
            // 0x2975d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975d0) {
            ctx->pc = 0x2975E8u;
            goto label_2975e8;
        }
    }
    ctx->pc = 0x2975D8u;
    // 0x2975d8: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x2975D8u;
    SET_GPR_U32(ctx, 31, 0x2975E0u);
    ctx->pc = 0x2975DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2975D8u;
            // 0x2975dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975E0u; }
        if (ctx->pc != 0x2975E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296eb8_0x296ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2975E0u; }
        if (ctx->pc != 0x2975E0u) { return; }
    }
    ctx->pc = 0x2975E0u;
    // 0x2975e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2975E0u;
    {
        const bool branch_taken_0x2975e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2975E0u;
            // 0x2975e4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975e0) {
            ctx->pc = 0x297640u;
            goto label_297640;
        }
    }
    ctx->pc = 0x2975E8u;
label_2975e8:
    // 0x2975e8: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x2975e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x2975ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2975ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2975f0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2975f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975f4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2975f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975f8: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x2975f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2975fc: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x2975fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x297600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297604: 0xc0a5a74  jal         func_2969D0
    ctx->pc = 0x297604u;
    SET_GPR_U32(ctx, 31, 0x29760Cu);
    ctx->pc = 0x297608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297604u;
            // 0x297608: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (runtime->hasFunction(0x2969D0u)) {
        auto targetFn = runtime->lookupFunction(0x2969D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29760Cu; }
        if (ctx->pc != 0x29760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2969d0_0x296a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29760Cu; }
        if (ctx->pc != 0x29760Cu) { return; }
    }
    ctx->pc = 0x29760Cu;
    // 0x29760c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29760Cu;
    {
        const bool branch_taken_0x29760c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29760c) {
            ctx->pc = 0x29762Cu;
            goto label_29762c;
        }
    }
    ctx->pc = 0x297614u;
    // 0x297614: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x297614u;
    SET_GPR_U32(ctx, 31, 0x29761Cu);
    ctx->pc = 0x297618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297614u;
            // 0x297618: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29761Cu; }
        if (ctx->pc != 0x29761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29761Cu; }
        if (ctx->pc != 0x29761Cu) { return; }
    }
    ctx->pc = 0x29761Cu;
label_29761c:
    // 0x29761c: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x29761Cu;
    SET_GPR_U32(ctx, 31, 0x297624u);
    ctx->pc = 0x297620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29761Cu;
            // 0x297620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297624u; }
        if (ctx->pc != 0x297624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296eb8_0x296ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297624u; }
        if (ctx->pc != 0x297624u) { return; }
    }
    ctx->pc = 0x297624u;
    // 0x297624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x297624u;
    {
        const bool branch_taken_0x297624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297624u;
            // 0x297628: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297624) {
            ctx->pc = 0x297640u;
            goto label_297640;
        }
    }
    ctx->pc = 0x29762Cu;
label_29762c:
    // 0x29762c: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x29762Cu;
    SET_GPR_U32(ctx, 31, 0x297634u);
    ctx->pc = 0x297630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29762Cu;
            // 0x297630: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297634u; }
        if (ctx->pc != 0x297634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297634u; }
        if (ctx->pc != 0x297634u) { return; }
    }
    ctx->pc = 0x297634u;
    // 0x297634: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x297634u;
    SET_GPR_U32(ctx, 31, 0x29763Cu);
    ctx->pc = 0x297638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297634u;
            // 0x297638: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29763Cu; }
        if (ctx->pc != 0x29763Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29763Cu; }
        if (ctx->pc != 0x29763Cu) { return; }
    }
    ctx->pc = 0x29763Cu;
    // 0x29763c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29763cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297640:
    // 0x297640: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x297640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297644: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x297644u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x297648: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x297648u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29764c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x29764cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297650: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x297650u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297654: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x297654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297658: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x297658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29765c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x29765cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297660: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x297660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297664: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x297664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297668: 0x3e00008  jr          $ra
    ctx->pc = 0x297668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297668u;
            // 0x29766c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29753Cu: goto label_29753c;
            case 0x29754Cu: goto label_29754c;
            case 0x29755Cu: goto label_29755c;
            case 0x297560u: goto label_297560;
            case 0x297578u: goto label_297578;
            case 0x29757Cu: goto label_29757c;
            case 0x2975B4u: goto label_2975b4;
            case 0x2975E8u: goto label_2975e8;
            case 0x29761Cu: goto label_29761c;
            case 0x29762Cu: goto label_29762c;
            case 0x297640u: goto label_297640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297670u;
}
