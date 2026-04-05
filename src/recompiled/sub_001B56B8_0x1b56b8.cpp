#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B56B8
// Address: 0x1b56b8 - 0x1b59b0
void sub_001B56B8_0x1b56b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B56B8_0x1b56b8");
#endif

    ctx->pc = 0x1b56b8u;

    // 0x1b56b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b56b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b56bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b56c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b56c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b56c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b56c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b56c8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B56C8u;
    {
        const bool branch_taken_0x1b56c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B56CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56C8u;
            // 0x1b56cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56c8) {
            ctx->pc = 0x1B56F8u;
            goto label_1b56f8;
        }
    }
    ctx->pc = 0x1B56D0u;
    // 0x1b56d0: 0x920201a1  lbu         $v0, 0x1A1($s0)
    ctx->pc = 0x1b56d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 417)));
    // 0x1b56d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B56D4u;
    {
        const bool branch_taken_0x1b56d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B56D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56D4u;
            // 0x1b56d8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56d4) {
            ctx->pc = 0x1B5720u;
            goto label_1b5720;
        }
    }
    ctx->pc = 0x1B56DCu;
    // 0x1b56dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b56dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56e0: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1B56E0u;
    SET_GPR_U32(ctx, 31, 0x1B56E8u);
    ctx->pc = 0x1B56E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56E0u;
            // 0x1b56e4: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56E8u; }
        if (ctx->pc != 0x1B56E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56E8u; }
        if (ctx->pc != 0x1B56E8u) { return; }
    }
    ctx->pc = 0x1B56E8u;
    // 0x1b56e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b56ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b56f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B56F0u;
    {
        const bool branch_taken_0x1b56f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B56F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56F0u;
            // 0x1b56f4: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56f0) {
            ctx->pc = 0x1B5724u;
            goto label_1b5724;
        }
    }
    ctx->pc = 0x1B56F8u;
label_1b56f8:
    // 0x1b56f8: 0x920201a0  lbu         $v0, 0x1A0($s0)
    ctx->pc = 0x1b56f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1b56fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B56FCu;
    {
        const bool branch_taken_0x1b56fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56FCu;
            // 0x1b5700: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56fc) {
            ctx->pc = 0x1B5720u;
            goto label_1b5720;
        }
    }
    ctx->pc = 0x1B5704u;
    // 0x1b5704: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b5704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5708: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1B5708u;
    SET_GPR_U32(ctx, 31, 0x1B5710u);
    ctx->pc = 0x1B570Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5708u;
            // 0x1b570c: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5710u; }
        if (ctx->pc != 0x1B5710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5710u; }
        if (ctx->pc != 0x1B5710u) { return; }
    }
    ctx->pc = 0x1B5710u;
    // 0x1b5710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b5714: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b5714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b5718: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5718u;
    {
        const bool branch_taken_0x1b5718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5718u;
            // 0x1b571c: 0x8c4200d8  lw          $v0, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5718) {
            ctx->pc = 0x1B5724u;
            goto label_1b5724;
        }
    }
    ctx->pc = 0x1B5720u;
label_1b5720:
    // 0x1b5720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5724:
    // 0x1b5724: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b572c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B572Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B572Cu;
            // 0x1b5730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5734u;
    // 0x1b5734: 0x0  nop
    ctx->pc = 0x1b5734u;
    // NOP
    // 0x1b5738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b573c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1b573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5740: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b5740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b5744: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b5744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b5748: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b5748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b574c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5754: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b5754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5758: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b575c: 0xc0a441e  jal         func_291078
    ctx->pc = 0x1B575Cu;
    SET_GPR_U32(ctx, 31, 0x1B5764u);
    ctx->pc = 0x1B5760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B575Cu;
            // 0x1b5760: 0x24840005  addiu       $a0, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291078u;
    if (runtime->hasFunction(0x291078u)) {
        auto targetFn = runtime->lookupFunction(0x291078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5764u; }
        if (ctx->pc != 0x1B5764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291078_0x2910b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5764u; }
        if (ctx->pc != 0x1B5764u) { return; }
    }
    ctx->pc = 0x1B5764u;
    // 0x1b5764: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b5764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b5768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b576c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b576cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b5770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5774: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1b5774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5778: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1B5778u;
    SET_GPR_U32(ctx, 31, 0x1B5780u);
    ctx->pc = 0x1B577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5778u;
            // 0x1b577c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5780u; }
        if (ctx->pc != 0x1B5780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5780u; }
        if (ctx->pc != 0x1B5780u) { return; }
    }
    ctx->pc = 0x1B5780u;
    // 0x1b5780: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b5780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b5784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b578c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B578Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B578Cu;
            // 0x1b5790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5794u;
    // 0x1b5794: 0x0  nop
    ctx->pc = 0x1b5794u;
    // NOP
    // 0x1b5798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b579c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1b579cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b57a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b57a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b57a4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1b57a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57a8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b57ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b57b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b57b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b57b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b57b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1b57b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b57bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b57bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57c0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b57c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b57c4: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1b57c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1b57c8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1b57c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b57cc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1b57ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b57d0: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B57D0u;
    {
        const bool branch_taken_0x1b57d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B57D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57D0u;
            // 0x1b57d4: 0xc2380b  movn        $a3, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57d0) {
            ctx->pc = 0x1B57F0u;
            goto label_1b57f0;
        }
    }
    ctx->pc = 0x1B57D8u;
    // 0x1b57d8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1b57d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57dc: 0xc06d67e  jal         func_1B59F8
    ctx->pc = 0x1B57DCu;
    SET_GPR_U32(ctx, 31, 0x1B57E4u);
    ctx->pc = 0x1B57E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57DCu;
            // 0x1b57e0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B59F8u;
    if (runtime->hasFunction(0x1B59F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B59F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57E4u; }
        if (ctx->pc != 0x1B57E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b59f8_0x1b5a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57E4u; }
        if (ctx->pc != 0x1B57E4u) { return; }
    }
    ctx->pc = 0x1B57E4u;
    // 0x1b57e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B57E4u;
    {
        const bool branch_taken_0x1b57e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57E4u;
            // 0x1b57e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57e4) {
            ctx->pc = 0x1B5800u;
            goto label_1b5800;
        }
    }
    ctx->pc = 0x1B57ECu;
    // 0x1b57ec: 0x0  nop
    ctx->pc = 0x1b57ecu;
    // NOP
label_1b57f0:
    // 0x1b57f0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1b57f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57f4: 0xc06d68e  jal         func_1B5A38
    ctx->pc = 0x1B57F4u;
    SET_GPR_U32(ctx, 31, 0x1B57FCu);
    ctx->pc = 0x1B57F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B57F4u;
            // 0x1b57f8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A38u;
    if (runtime->hasFunction(0x1B5A38u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57FCu; }
        if (ctx->pc != 0x1B57FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b5a38_0x1b5a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B57FCu; }
        if (ctx->pc != 0x1B57FCu) { return; }
    }
    ctx->pc = 0x1B57FCu;
    // 0x1b57fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b57fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5800:
    // 0x1b5800: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5800u;
            // 0x1b5804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5808u;
    // 0x1b5808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b580c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5810: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b5810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b5814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b581c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b5820: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b5820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5824: 0xc06d69e  jal         func_1B5A78
    ctx->pc = 0x1B5824u;
    SET_GPR_U32(ctx, 31, 0x1B582Cu);
    ctx->pc = 0x1B5828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5824u;
            // 0x1b5828: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A78u;
    if (runtime->hasFunction(0x1B5A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B582Cu; }
        if (ctx->pc != 0x1B582Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5A78_0x1b5a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B582Cu; }
        if (ctx->pc != 0x1B582Cu) { return; }
    }
    ctx->pc = 0x1B582Cu;
    // 0x1b582c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B582Cu;
    {
        const bool branch_taken_0x1b582c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B582Cu;
            // 0x1b5830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b582c) {
            ctx->pc = 0x1B5838u;
            goto label_1b5838;
        }
    }
    ctx->pc = 0x1B5834u;
    // 0x1b5834: 0xae2215a8  sw          $v0, 0x15A8($s1)
    ctx->pc = 0x1b5834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5544), GPR_U32(ctx, 2));
label_1b5838:
    // 0x1b5838: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b5838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b583c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b583cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5844: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5844u;
            // 0x1b5848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B584Cu;
    // 0x1b584c: 0x0  nop
    ctx->pc = 0x1b584cu;
    // NOP
    // 0x1b5850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5858: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b5858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b585c: 0xc06d6a6  jal         func_1B5A98
    ctx->pc = 0x1B585Cu;
    SET_GPR_U32(ctx, 31, 0x1B5864u);
    ctx->pc = 0x1B5860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B585Cu;
            // 0x1b5860: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A98u;
    if (runtime->hasFunction(0x1B5A98u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5864u; }
        if (ctx->pc != 0x1B5864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5A98_0x1b5a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5864u; }
        if (ctx->pc != 0x1B5864u) { return; }
    }
    ctx->pc = 0x1B5864u;
    // 0x1b5864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5868: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5868u;
            // 0x1b586c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5870u;
    // 0x1b5870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5878: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b5878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b587c: 0xc06d6c8  jal         func_1B5B20
    ctx->pc = 0x1B587Cu;
    SET_GPR_U32(ctx, 31, 0x1B5884u);
    ctx->pc = 0x1B5880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B587Cu;
            // 0x1b5880: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B20u;
    if (runtime->hasFunction(0x1B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5884u; }
        if (ctx->pc != 0x1B5884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b5b20_0x1b5b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5884u; }
        if (ctx->pc != 0x1B5884u) { return; }
    }
    ctx->pc = 0x1B5884u;
    // 0x1b5884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5888: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5888u;
            // 0x1b588c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5890u;
    // 0x1b5890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5898: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b589c: 0xc06d6cc  jal         func_1B5B30
    ctx->pc = 0x1B589Cu;
    SET_GPR_U32(ctx, 31, 0x1B58A4u);
    ctx->pc = 0x1B58A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B589Cu;
            // 0x1b58a0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B30u;
    if (runtime->hasFunction(0x1B5B30u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58A4u; }
        if (ctx->pc != 0x1B58A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b5b30_0x1b5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58A4u; }
        if (ctx->pc != 0x1B58A4u) { return; }
    }
    ctx->pc = 0x1B58A4u;
    // 0x1b58a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b58a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b58a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B58A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B58ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58A8u;
            // 0x1b58ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B58B0u;
    // 0x1b58b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b58b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b58b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b58b8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b58bc: 0xc06d6d0  jal         func_1B5B40
    ctx->pc = 0x1B58BCu;
    SET_GPR_U32(ctx, 31, 0x1B58C4u);
    ctx->pc = 0x1B58C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58BCu;
            // 0x1b58c0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B40u;
    if (runtime->hasFunction(0x1B5B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58C4u; }
        if (ctx->pc != 0x1B58C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5B40_0x1b5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58C4u; }
        if (ctx->pc != 0x1B58C4u) { return; }
    }
    ctx->pc = 0x1B58C4u;
    // 0x1b58c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b58c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b58c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B58C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B58CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58C8u;
            // 0x1b58cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B58D0u;
    // 0x1b58d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b58d4: 0x8c831558  lw          $v1, 0x1558($a0)
    ctx->pc = 0x1b58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5464)));
    // 0x1b58d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b58d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B58DCu;
    {
        const bool branch_taken_0x1b58dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58DCu;
            // 0x1b58e0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58dc) {
            ctx->pc = 0x1B58F0u;
            goto label_1b58f0;
        }
    }
    ctx->pc = 0x1B58E4u;
    // 0x1b58e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B58E4u;
    {
        const bool branch_taken_0x1b58e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58E4u;
            // 0x1b58e8: 0x8c6200e0  lw          $v0, 0xE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58e4) {
            ctx->pc = 0x1B5914u;
            goto label_1b5914;
        }
    }
    ctx->pc = 0x1B58ECu;
    // 0x1b58ec: 0x0  nop
    ctx->pc = 0x1b58ecu;
    // NOP
label_1b58f0:
    // 0x1b58f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b58f4:
    // 0x1b58f4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1b58f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b58f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B58F8u;
    {
        const bool branch_taken_0x1b58f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58F8u;
            // 0x1b58fc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58f8) {
            ctx->pc = 0x1B5924u;
            goto label_1b5924;
        }
    }
    ctx->pc = 0x1B5900u;
    // 0x1b5900: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b5900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b5904: 0x8c421558  lw          $v0, 0x1558($v0)
    ctx->pc = 0x1b5904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5464)));
    // 0x1b5908: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5908u;
    {
        const bool branch_taken_0x1b5908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5908) {
            ctx->pc = 0x1B590Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5908u;
            // 0x1b590c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B58F4u;
            runtime->cooperativeGuestYield();
            goto label_1b58f4;
        }
    }
    ctx->pc = 0x1B5910u;
    // 0x1b5910: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x1b5910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_1b5914:
    // 0x1b5914: 0x8c420d30  lw          $v0, 0xD30($v0)
    ctx->pc = 0x1b5914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3376)));
    // 0x1b5918: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B5918u;
    {
        const bool branch_taken_0x1b5918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5918u;
            // 0x1b591c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5918) {
            ctx->pc = 0x1B58F4u;
            runtime->cooperativeGuestYield();
            goto label_1b58f4;
        }
    }
    ctx->pc = 0x1B5920u;
    // 0x1b5920: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x1b5920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
label_1b5924:
    // 0x1b5924: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B592Cu;
    // 0x1b592c: 0x0  nop
    ctx->pc = 0x1b592cu;
    // NOP
    // 0x1b5930: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b5930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b5934: 0x8c831558  lw          $v1, 0x1558($a0)
    ctx->pc = 0x1b5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5464)));
    // 0x1b5938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b593c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B593Cu;
    {
        const bool branch_taken_0x1b593c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B593Cu;
            // 0x1b5940: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b593c) {
            ctx->pc = 0x1B5950u;
            goto label_1b5950;
        }
    }
    ctx->pc = 0x1B5944u;
    // 0x1b5944: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B5944u;
    {
        const bool branch_taken_0x1b5944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5944u;
            // 0x1b5948: 0x8c6200e0  lw          $v0, 0xE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5944) {
            ctx->pc = 0x1B5974u;
            goto label_1b5974;
        }
    }
    ctx->pc = 0x1B594Cu;
    // 0x1b594c: 0x0  nop
    ctx->pc = 0x1b594cu;
    // NOP
label_1b5950:
    // 0x1b5950: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b5950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b5954:
    // 0x1b5954: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1b5954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b5958: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5958u;
    {
        const bool branch_taken_0x1b5958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5958u;
            // 0x1b595c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5958) {
            ctx->pc = 0x1B5984u;
            goto label_1b5984;
        }
    }
    ctx->pc = 0x1B5960u;
    // 0x1b5960: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b5960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b5964: 0x8c421558  lw          $v0, 0x1558($v0)
    ctx->pc = 0x1b5964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5464)));
    // 0x1b5968: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5968u;
    {
        const bool branch_taken_0x1b5968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5968) {
            ctx->pc = 0x1B596Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5968u;
            // 0x1b596c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5954u;
            runtime->cooperativeGuestYield();
            goto label_1b5954;
        }
    }
    ctx->pc = 0x1B5970u;
    // 0x1b5970: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x1b5970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_1b5974:
    // 0x1b5974: 0x8c420d30  lw          $v0, 0xD30($v0)
    ctx->pc = 0x1b5974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3376)));
    // 0x1b5978: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B5978u;
    {
        const bool branch_taken_0x1b5978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5978u;
            // 0x1b597c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5978) {
            ctx->pc = 0x1B5954u;
            runtime->cooperativeGuestYield();
            goto label_1b5954;
        }
    }
    ctx->pc = 0x1B5980u;
    // 0x1b5980: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1b5980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_1b5984:
    // 0x1b5984: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B598Cu;
    // 0x1b598c: 0x0  nop
    ctx->pc = 0x1b598cu;
    // NOP
    // 0x1b5990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5998: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b5998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b599c: 0xc06d66c  jal         func_1B59B0
    ctx->pc = 0x1B599Cu;
    SET_GPR_U32(ctx, 31, 0x1B59A4u);
    ctx->pc = 0x1B59A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B599Cu;
            // 0x1b59a0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B59B0u;
    if (runtime->hasFunction(0x1B59B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B59B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59A4u; }
        if (ctx->pc != 0x1B59A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B59B0_0x1b59b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59A4u; }
        if (ctx->pc != 0x1B59A4u) { return; }
    }
    ctx->pc = 0x1B59A4u;
    // 0x1b59a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b59a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b59a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B59A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B59ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59A8u;
            // 0x1b59ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B56F8u: goto label_1b56f8;
            case 0x1B5720u: goto label_1b5720;
            case 0x1B5724u: goto label_1b5724;
            case 0x1B57F0u: goto label_1b57f0;
            case 0x1B5800u: goto label_1b5800;
            case 0x1B5838u: goto label_1b5838;
            case 0x1B58F0u: goto label_1b58f0;
            case 0x1B58F4u: goto label_1b58f4;
            case 0x1B5914u: goto label_1b5914;
            case 0x1B5924u: goto label_1b5924;
            case 0x1B5950u: goto label_1b5950;
            case 0x1B5954u: goto label_1b5954;
            case 0x1B5974u: goto label_1b5974;
            case 0x1B5984u: goto label_1b5984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B59B0u;
}
